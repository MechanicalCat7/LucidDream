using System;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Events;

public class Button : SerializableObject
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("버튼 오브젝트")]
    [SerializeField] private ConfigurableJoint _button;
    
    [Tooltip("버튼의 기준 위치. 버튼이 눌리지 않은 상태일 때의 위치")]
    [SerializeField] private Transform _anchorPoint;
    
    [Header("Toggle")]
    [Tooltip("토글 버튼인지 여부")]
    [SerializeField] private bool _toggle;
    
    [Tooltip("토글 버튼이 눌린 상태일 때 복귀 지점. 0은 초기 위치")]
    [SerializeField] [Range(0, 1)] private float _toggleReturnPoint;
    
    [Tooltip("토글 버튼이 눌린 후 재인식 상태로 돌아오는 지점. 0은 초기 위치")]
    [SerializeField] [Range(0, 1)] private float _threshold;
    
    [Tooltip("버튼의 잠김 상태. 잠긴 상태에서는 버튼이 움직이지 않는다.")]
    [SerializeField] private bool _locked;
    
    [Tooltip("버튼의 눌림 상태. 토글 버튼일 경우 눌린 상태로 고정된다.")]
    [SerializeField] private bool _pressed;
    
    [Space]
    [Tooltip("버튼이 눌리는 것으로 인식하는 지점. 0은 초기 위치")]
    [SerializeField] [Range(0, 1)] private float _pressPoint;
    
    [Tooltip("버튼이 풀리는 것으로 인식하는 지점. 0은 초기 위치")]
    [SerializeField] [Range(0, 1)] private float _releasePoint;
    
    [Space]
    [Tooltip("버튼이 눌릴 때 이벤트")]
    [SerializeField] private UnityEvent _buttonPressedEvent;
    
    [Tooltip("버튼이 풀릴 때 이벤트")]
    [SerializeField] private UnityEvent _buttonReleasedEvent;
    
    // ==================================================
    //  Variables
    // ==================================================
    
    private Rigidbody _buttonRigid;

    private Vector3 _anchorPosition;    // 버튼의 기준 위치
    private float _limitDistance;       // 버튼의 최대 깊이
    private bool _toggleCheck;          // 토글 버튼이 이중으로 눌리는 것을 방지하기 위한 변수
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 버튼의 잠김 상태. 잠긴 상태에서는 버튼이 움직이지 않는다.
    /// </summary>
    public bool locked
    {
        get => _locked;
        set
        {
            _locked = value;
            _buttonRigid.constraints = value ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
    }
    
    /// <summary>
    /// 버튼의 눌림 상태. 토글 버튼일 경우 눌린 상태로 고정된다.
    /// </summary>
    public bool pressed
    {
        get => _pressed;
        set
        {
            _pressed = value;
            // 토글 버튼일 경우 복귀 지점 변경
            if (_toggle)
            {
                var tp = new Vector3(0, _limitDistance * (1 -_toggleReturnPoint), 0);
                _button.targetPosition = value ? tp : Vector3.zero;
            }
        }
    }
    
    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        _buttonRigid = _button.transform.GetComponent<Rigidbody>();

        _anchorPosition = _anchorPoint.position;
        _limitDistance = _button.linearLimit.limit;
        
        _buttonRigid.constraints = _locked ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        
        // 버튼 초기 위치
        var togglePosition = _anchorPoint.localPosition;
        togglePosition.y -= _limitDistance * (1 -_toggleReturnPoint);
        _button.transform.localPosition = _pressed ? togglePosition : _anchorPoint.localPosition;
        pressed = _pressed;
    }
    
    private void Update()
    {
        var distance = 1 - Vector3.Distance(_anchorPosition, _button.transform.position) / _limitDistance;
        
        UpdateButtonPressState(distance);
    }
    
    // ==================================================
    //  Button Functions
    // ==================================================
    
    /// <summary>
    /// 버튼의 상태를 갱신한다.
    /// </summary>
    /// <param name="distance">현재 버튼의 위치</param>
    private void UpdateButtonPressState(float distance)
    {
        // 토글 버튼
        if (_toggle)
        {
            if (!_toggleCheck && distance < _pressPoint)
            {
                pressed = !_pressed;
                _toggleCheck = true;
                
                if(_pressed)
                    _buttonPressedEvent.Invoke();
                else
                    _buttonReleasedEvent.Invoke();
            }
            if (distance > _threshold)
            {
                _toggleCheck = false;
            }
        }
        // 일반 버튼
        else
        {
            if (!_pressed && distance < _pressPoint)
            {
                pressed = true;
                _buttonPressedEvent.Invoke();
            }
            if (_pressed && distance > _releasePoint)
            {
                pressed = false;
                _buttonReleasedEvent.Invoke();
            }
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
        public float[] buttonPos;
        public float[] buttonRot;
        public bool locked;
        public bool pressed;
    }

    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData
        {
            index = transform.GetSiblingIndex(),
            name = transform.name,
            buttonPos = Vector3ToFloat(_button.transform.position),
            buttonRot = QuaternionToFloat(_button.transform.rotation),
            locked = _locked,
            pressed = _pressed
        };
        
        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        _button.transform.position = FloatToVector3(od.buttonPos);
        _button.transform.rotation = FloatToQuaternion(od.buttonRot);
        locked = od.locked;
        pressed = od.pressed;
    }
}
