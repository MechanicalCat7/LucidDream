using System;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

public class Drawer : SerializableObject
{
    [SerializeField] private ConfigurableJoint drawer;  // 서랍
    [SerializeField] private XRGrabInteractable handle; // 손잡이
    [SerializeField] private Transform anchorPoint;     // 닫혔을 때 기준 위치
    
    [Space]
    [SerializeField] private bool locked;               // 잠김 상태
    public bool Locked
    {
        get => locked; 
        set
        {
            locked = value;
            _drawerRigid.constraints = value ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
    }
    
    [Space]
    [SerializeField] [Range(0, 1)] private float closePoint;        // 서랍 닫힘 기준 (0-1)
    [SerializeField] [Range(0, 1)] private float openPoint;         // 서랍 열림 기준 (0-1)
    [Space]
    [SerializeField] private UnityEvent drawerClosedEvent;          // 서랍이 닫힐 때 이벤트
    [SerializeField] private UnityEvent drawerOpenedEvent;          // 서랍이 열릴 때 이벤트
    
    // 컴포넌트
    private Rigidbody _drawerRigid;

    private Vector3 _anchorPoint;
    private float _limitDistance;
    
    /// 서랍 열림 상태
    public bool Opened { get; private set; }
    
    /// 서랍의 열린 정도 (0-1 사이의 값)
    public float DrawDistance { get; private set; }

    // 스크립트 로드 시 수행
    private void Awake()
    {
        _drawerRigid = drawer.GetComponent<Rigidbody>();
        
        _drawerRigid.constraints = locked ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        
        _anchorPoint = anchorPoint.position;
        _limitDistance = drawer.linearLimit.limit * 2;
        var distance = Vector3.Distance(_anchorPoint, drawer.transform.position) / _limitDistance;
        Opened = distance > openPoint;
    }
    
    // 매 프레임마다 수행
    private void Update()
    {
        float distance = Vector3.Distance(_anchorPoint, drawer.transform.position) / _limitDistance;
        DrawDistance = distance;

        UpdateDrawerFreezeState(distance);
        
        // 서랍 닫힘 이벤트
        if (distance < closePoint && Opened)
        {
            Opened = false;
            drawerClosedEvent.Invoke();
        }
        // 서랍 열림 이벤트
        if (distance > openPoint && !Opened)
        {
            Opened = true;
            drawerOpenedEvent.Invoke();
        }
    }
    
    /// 서랍의 고정 상태를 갱신한다.
    private void UpdateDrawerFreezeState(float distance)
    {
        bool isClosed = distance < closePoint;
        
        if (locked)
        {
            _drawerRigid.constraints = isClosed ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
        else
        {
            _drawerRigid.constraints = RigidbodyConstraints.None;
        }
    }

    //// 데이터 저장 ////
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
    }
    
    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData
        {
            index = transform.GetSiblingIndex(),
            name = transform.name,
            drawerPos = Vector3ToFloat(drawer.transform.position),
            drawerRot = QuaternionToFloat(drawer.transform.rotation),
            handlePos = Vector3ToFloat(handle.transform.position),
            handleRot = QuaternionToFloat(handle.transform.rotation),
            locked = locked
        };
        
        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        drawer.transform.position = FloatToVector3(od.drawerPos);
        drawer.transform.rotation = FloatToQuaternion(od.drawerRot);
        handle.transform.position = FloatToVector3(od.handlePos);
        handle.transform.rotation = FloatToQuaternion(od.handleRot);
        Locked = od.locked;
    }
}
