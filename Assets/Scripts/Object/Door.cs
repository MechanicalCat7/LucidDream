using System;
using Newtonsoft.Json.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

public class Door : SerializableObject
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("문 오브젝트")]
    [SerializeField] private HingeJoint _door;
    
    [Tooltip("손잡이 오브젝트")]
    [SerializeField] private XRGrabInteractable _handle;
    
    [Tooltip("사운드 데이터")]
    [SerializeField] private ObjectSoundData _soundData;
    
    [Space]
    [Tooltip("문의 잠김 상태. 잠김 상태에서는 문이 닫혀있을 때 움직이지 않는다.")]
    [SerializeField] private bool _locked;
    
    [Tooltip("Hinge Joint의 최소 각도가 문이 닫혔을 때 각도일 경우 체크한다.")]
    [SerializeField] private bool _minIsClosed;
    
    [Tooltip("닫혔을 때 문이 고정되는 지 여부. 체크할 경우 손잡이를 잡아야 움직인다.")]
    [SerializeField] private bool _freezeOnClosed;
    
    [Space]
    [Tooltip("문이 닫히는 것으로 인식하는 각도 (절대값)")]
    [SerializeField] private float _closeAngle;
    
    [Tooltip("문이 열리는 것으로 인식하는 각도 (절대값)")]
    [SerializeField] private float _openAngle;
    
    [Space]
    [Tooltip("문이 닫힐 때 이벤트")]
    [SerializeField] private UnityEvent _doorClosedEvent;
    
    [Tooltip("문이 열릴 때 이벤트")]
    [SerializeField] private UnityEvent _doorOpenedEvent;
    
    // ==================================================
    //  Variables
    // ==================================================

    private AudioSource _audioSource;
    private Rigidbody _doorRigid;

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 문의 잠김 상태. 잠김 상태에서는 문이 닫혀있을 때 움직이지 않는다.
    /// </summary>
    public bool locked
    {
        get => _locked;
        set
        {
            _locked = value;
            _doorRigid.constraints = value ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
    }
    
    /// <summary>
    /// 현재 문의 각도가 열림 인식 각도보다 큰가?
    /// </summary>
    public bool isOpened { get; private set; }
    
    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        _doorRigid = _door.GetComponent<Rigidbody>();
        _audioSource = transform.AddComponent<AudioSource>();
        _audioSource.spatialBlend = 1f;
        
        _handle.selectEntered.AddListener(PlayLockedSound);

        _doorRigid.constraints = _locked ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        
        // 문의 열림 상태
        float angle = Mathf.Abs(_door.angle - (_minIsClosed ? _door.limits.min : _door.limits.max));
        isOpened = angle > _openAngle;
    }
    
    private void Update()
    {
        // 문 각도
        float angle = Mathf.Abs(_door.angle - (_minIsClosed ? _door.limits.min : _door.limits.max));
        
        UpdateDoorFreezeState(angle);
        
        // 문 닫힘 이벤트
        if (angle < _closeAngle && isOpened)
        {
            isOpened = false;
            _doorClosedEvent.Invoke();
        }
        // 문 열림 이벤트
        if (angle > _openAngle && !isOpened)
        {
            isOpened = true;
            _doorOpenedEvent.Invoke();
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.impulse.magnitude > 5f)
        {
            _audioSource.PlayOneShot(_soundData.impact, Mathf.Clamp01(collision.impulse.magnitude / 10f));
        }
    }

    // ==================================================
    //  Door Functions
    // ==================================================
    
    /// <summary>
    /// 문의 고정 상태를 갱신한다.
    /// </summary>
    /// <param name="angle">문의 현재 각도</param>
    private void UpdateDoorFreezeState(float angle)
    {
        bool isClosed = angle < _closeAngle;
        
        if (_locked)
        {
            _doorRigid.constraints = isClosed ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
        else
        {
            if (_handle.isSelected)
            {
                _doorRigid.constraints = RigidbodyConstraints.None;
            }
            else
            {
                if (_freezeOnClosed && isClosed)
                    _doorRigid.constraints = RigidbodyConstraints.FreezeAll;
                else
                    _doorRigid.constraints = RigidbodyConstraints.None;
            }
        }
    }

    private void PlayLockedSound(SelectEnterEventArgs _)
    {
        if (_locked)
        {
            _audioSource.PlayOneShot(_soundData.disabled);
        }
    }
    
    // ==================================================
    //  Data Management
    // ==================================================
    
    [Serializable]
    private class ObjectData
    {
        public int index;
        public string name;
        public float[] doorPos;
        public float[] doorRot;
        public float[] handlePos;
        public float[] handleRot;
        public bool locked;
        public bool isOpened;
    }
    
    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData
        {
            index = transform.GetSiblingIndex(),
            name = transform.name,
            doorPos = Support.Vector3ToFloat(_door.transform.position),
            doorRot = Support.QuaternionToFloat(_door.transform.rotation),
            handlePos = Support.Vector3ToFloat(_handle.transform.position),
            handleRot = Support.QuaternionToFloat(_handle.transform.rotation),
            locked = _locked,
            isOpened = isOpened
        };

        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        _door.transform.position = Support.FloatToVector3(od.doorPos);
        _door.transform.rotation = Support.FloatToQuaternion(od.doorRot);
        _handle.transform.position = Support.FloatToVector3(od.handlePos);
        _handle.transform.rotation = Support.FloatToQuaternion(od.handleRot);
        locked = od.locked;
        isOpened = od.isOpened;
    }
}
