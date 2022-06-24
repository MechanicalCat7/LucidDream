using System;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

public class Door : SerializableObject
{
    [SerializeField] private HingeJoint door;
    [SerializeField] private XRGrabInteractable handle;
    
    [Space]
    [SerializeField] private bool locked;               // 잠김 상태
    public bool Locked
    {
        get => locked;
        set
        {
            locked = value;
            _doorRigid.constraints = value ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
    }
    [SerializeField] private bool minIsClosed;          // Hinge Joint의 min limit이 닫힘 각도임
    [SerializeField] private bool freezeOnClosed;       // 닫혔을 때 문이 고정됨
    
    [Space]
    [SerializeField] private float closeAngle;          // 문 닫힘 기준 각도
    [SerializeField] private float openAngle;           // 문 열림 기준 각도
    [Space]
    [SerializeField] private UnityEvent doorClosedEvent;        // 문이 닫힐 때 이벤트
    [SerializeField] private UnityEvent doorOpenedEvent;        // 문이 열릴 때 이벤트
    
    // 컴포넌트
    private Rigidbody _doorRigid;
    private Rigidbody _handleRigid;
    
    /// 문 열림 상태
    public bool Opened { get; private set; }
    
    // 스크립트 로드 시 수행
    private void Awake()
    {
        _doorRigid = door.GetComponent<Rigidbody>();
        _handleRigid = handle.GetComponent<Rigidbody>();

        _doorRigid.constraints = locked ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        
        float angle = Mathf.Abs(door.angle - (minIsClosed ? door.limits.min : door.limits.max));
        Opened = angle > openAngle;
    }
    
    // 매 프레임마다 수행
    private void Update()
    {
        // 문 각도
        float angle = Mathf.Abs(door.angle - (minIsClosed ? door.limits.min : door.limits.max));
        
        UpdateDoorFreezeState(angle);
        
        // 문 닫힘 이벤트
        if (angle < closeAngle && Opened)
        {
            Opened = false;
            doorClosedEvent.Invoke();
        }
        // 문 열림 이벤트
        if (angle > openAngle && !Opened)
        {
            Opened = true;
            doorOpenedEvent.Invoke();
        }
    }
    
    /// 문의 고정 상태를 갱신한다.
    private void UpdateDoorFreezeState(float angle)
    {
        bool isClosed = angle < closeAngle;
        
        if (locked)
        {
            _doorRigid.constraints = isClosed ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
        else
        {
            if (handle.isSelected)
            {
                _doorRigid.constraints = RigidbodyConstraints.None;
            }
            else
            {
                if (freezeOnClosed && isClosed)
                    _doorRigid.constraints = RigidbodyConstraints.FreezeAll;
                else
                    _doorRigid.constraints = RigidbodyConstraints.None;
            }
        }
    }

    //// 데이터 저장 ////
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
    }
    
    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData
        {
            index = transform.GetSiblingIndex(),
            name = transform.name,
            doorPos = Vector3ToFloat(door.transform.position),
            doorRot = QuaternionToFloat(door.transform.rotation),
            handlePos = Vector3ToFloat(handle.transform.position),
            handleRot = QuaternionToFloat(handle.transform.rotation),
            locked = locked
        };

        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        door.transform.position = FloatToVector3(od.doorPos);
        door.transform.rotation = FloatToQuaternion(od.doorRot);
        handle.transform.position = FloatToVector3(od.handlePos);
        handle.transform.rotation = FloatToQuaternion(od.handleRot);
        Locked = od.locked;
    }
}
