using System;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

public class Drawer : SerializableObject
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("서랍 오브젝트")]
    [SerializeField] private ConfigurableJoint _drawer;
    
    [Tooltip("손잡이 오브젝트")]
    [SerializeField] private XRGrabInteractable _handle;
    
    [Tooltip("서랍의 기준 위치. 서랍이 완전히 닫혀있을 때의 위치")]
    [SerializeField] private Transform _anchorPoint;
    
    [Space]
    [Tooltip("서랍의 잠김 상태. 잠겨있을 경우 서랍이 움직이지 않는다.")]
    [SerializeField] private bool _locked;
    
    [Tooltip("서랍이 닫히는 것으로 인식하는 지점. 0은 초기 위치")]
    [SerializeField] [Range(0, 1)] private float _closePoint;
    
    [Tooltip("서랍이 열리는 것으로 인식하는 지점. 0은 초기 위치")]
    [SerializeField] [Range(0, 1)] private float _openPoint;
    
    [Space]
    [Tooltip("서랍이 닫힐 때 이벤트")]
    [SerializeField] private UnityEvent _drawerClosedEvent;
    
    [Tooltip("서랍이 열릴 때 이벤트")]
    [SerializeField] private UnityEvent _drawerOpenedEvent;
    
    // ==================================================
    //  Variables
    // ==================================================

    private Rigidbody _drawerRigid;

    private Vector3 _anchorPosition;
    private float _limitDistance;
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 서랍의 잠김 상태. 잠겨있을 경우 서랍이 움직이지 않는다.
    /// </summary>
    public bool locked
    {
        get => _locked; 
        set
        {
            _locked = value;
            _drawerRigid.constraints = value ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
    }
    
    /// <summary>
    /// 현재 서랍이 열려있는가?
    /// </summary>
    public bool isOpened { get; private set; }
    
    /// <summary>
    /// 서랍의 열림 정도. 0은 닫힌 상태
    /// </summary>
    public float DrawDistance { get; private set; }
    
    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        _drawerRigid = _drawer.GetComponent<Rigidbody>();
        
        _drawerRigid.constraints = _locked ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        
        // 서랍의 열림 상태
        _anchorPosition = _anchorPoint.position;
        _limitDistance = _drawer.linearLimit.limit * 2;
        DrawDistance = Vector3.Distance(_anchorPosition, _drawer.transform.position) / _limitDistance;
        isOpened = DrawDistance > _openPoint;
    }
    
    private void Update()
    {
        DrawDistance = Vector3.Distance(_anchorPosition, _drawer.transform.position) / _limitDistance;

        UpdateDrawerFreezeState(DrawDistance);
        
        // 서랍 닫힘 이벤트
        if (DrawDistance < _closePoint && isOpened)
        {
            isOpened = false;
            _drawerClosedEvent.Invoke();
        }
        // 서랍 열림 이벤트
        if (DrawDistance > _openPoint && !isOpened)
        {
            isOpened = true;
            _drawerOpenedEvent.Invoke();
        }
    }
    
    // ==================================================
    //  Drawer Functions
    // ==================================================
    
    /// <summary>
    /// 서랍의 고정 상태를 갱신한다.
    /// </summary>
    /// <param name="distance">서랍의 현재 위치</param>
    private void UpdateDrawerFreezeState(float distance)
    {
        bool isClosed = distance < _closePoint;
        
        if (_locked)
        {
            _drawerRigid.constraints = isClosed ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
        else
        {
            _drawerRigid.constraints = RigidbodyConstraints.None;
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
        public float[] drawerPos;
        public float[] drawerRot;
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
            drawerPos = Vector3ToFloat(_drawer.transform.position),
            drawerRot = QuaternionToFloat(_drawer.transform.rotation),
            handlePos = Vector3ToFloat(_handle.transform.position),
            handleRot = QuaternionToFloat(_handle.transform.rotation),
            locked = _locked,
            isOpened = isOpened
        };
        
        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        _drawer.transform.position = FloatToVector3(od.drawerPos);
        _drawer.transform.rotation = FloatToQuaternion(od.drawerRot);
        _handle.transform.position = FloatToVector3(od.handlePos);
        _handle.transform.rotation = FloatToQuaternion(od.handleRot);
        locked = od.locked;
        isOpened = od.isOpened;
    }
}
