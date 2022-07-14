using System;
using System.Collections;
using System.Linq;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

/// <summary>
/// 잡을 수 있는 오브젝트들의 스크립트
/// </summary>
public class GrabbableProp : Prop
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private const int GrabbedLayerIndex = 8;
    private const int PropLayerIndex = 10;

    // ==================================================
    //  Variables
    // ==================================================

    private XRGrabInteractable _interactable;

    private HandType _stored;               // 인벤토리에 저장된 손의 위치
    private Coroutine _coroutine;           // 코루틴
    private bool _isCoroutineRunning;       // 코루틴이 실행 중인가?

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 프롭의 인벤토리 저장 가능 여부
    /// </summary>
    public bool storable => _data.storable;

    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Awake()
    {
        base.Awake();
        
        if (!TryGetComponent(out _interactable))
        {
            Debug.LogError("XR Grab Interactable 컴포넌트가 없어 오브젝트가 제거됨.");
            Destroy(gameObject);
        }
    }

    protected void OnEnable()
    {
        _interactable.selectEntered.AddListener(SelectEnteredEvent);
        _interactable.selectExited.AddListener(SelectExitedEvent);
    }

    protected void OnDisable()
    {
        _interactable.selectEntered.RemoveListener(SelectEnteredEvent);
        _interactable.selectExited.RemoveListener(SelectExitedEvent);
    }
    
    // ==================================================
    //  Grabbable Prop Functions
    // ==================================================
    
    /// <summary>
    /// 오브젝트를 잡을 때 이벤트
    /// </summary>
    /// <param name="args"></param>
    private void SelectEnteredEvent(SelectEnterEventArgs args)
    {
        // 인벤토리에 저장된 경우 저장된 손 위치
        if (args.interactorObject.transform.TryGetComponent(out XRSocketInteractor socket))
        {
            if (socket is InventoryInteractor inventory)
                _stored = inventory.handType;
        }
        else
        {
            return;
        }
    
        // 프롭을 잡은 경우 Grabbed 레이어로 변경
        if(_isCoroutineRunning)
            StopCoroutine(_coroutine);
        Support.ChangeLayer(transform, GrabbedLayerIndex);
    }
    
    /// <summary>
    /// 오브젝트를 놓을 때 이벤트
    /// </summary>
    /// <param name="args"></param>
    private void SelectExitedEvent(SelectExitEventArgs args)
    {
        // 인벤토리에서 나온 경우 저장된 손을 None으로 변경
        if (args.interactorObject.transform.TryGetComponent(out XRSocketInteractor socket))
        {
            if (socket is InventoryInteractor)
                _stored = HandType.None;
        }
        else
        {
            return;
        }
        
        // 인벤토리에 닿아있는 상태일 경우 거리 측정을 수행하지 않음
        if (_interactable.interactorsHovering.OfType<InventoryInteractor>().Any())
        {
            return;
        }
        
        // 프롭을 놓을 경우 거리 측정 시작
        if(_isCoroutineRunning)
            StopCoroutine(_coroutine);
        _coroutine = StartCoroutine(CheckDistanceCoroutine());
    }
    
    /// <summary>
    /// 프롭과 플레이어 닿아있는지 확인하는 코루틴. 떨어졌을 경우 레이어를 바꿔 충돌을 활성화한다.
    /// </summary>
    /// <returns></returns>
    private IEnumerator CheckDistanceCoroutine()
    {
        _isCoroutineRunning = true;
        var mask = LayerMask.GetMask("Player");

        // 거리가 멀어질 경우 레이어를 Prop으로 돌려놓는다
        while (Physics.CheckSphere(_renderer.bounds.center, _data.collisionDistance, mask))
        {
            yield return null;
        }
        
        Support.ChangeLayer(transform, PropLayerIndex);
        _isCoroutineRunning = false;
    }
    
    // ==================================================
    //  Data Management
    // ==================================================
    
    [Serializable]
    private class ObjectData
    {
        public int index;
        public string prefab;
        public string name;
        public float[] pos;
        public float[] rot;
        public float[] vel;
        public float[] ang;
        public int stored;
        public float damaged;
    }

    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData()
        {
            index = transform.GetSiblingIndex(),
            prefab = _data.prefab,
            name = transform.name,
            pos = Support.Vector3ToFloat(transform.position),
            rot = Support.QuaternionToFloat(transform.rotation),
            vel = Support.Vector3ToFloat(_rigidbody.velocity),
            ang = Support.Vector3ToFloat(_rigidbody.angularVelocity),
            damaged = _damaged
        };
        
        od.stored = _stored switch
        {
            HandType.None => 0,
            HandType.Left => 1,
            HandType.Right => 2,
            _ => -1
        };

        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        transform.name = od.name;
        var player = GameManager.instance.playerManager;
        switch (od.stored)
        {
            case 1:
                transform.position = player.leftHand.transform.position;
                transform.rotation = player.leftHand.transform.rotation;
                break;
            case 2:
                transform.position = player.rightHand.transform.position;
                transform.rotation = player.rightHand.transform.rotation;
                break;
            default:
                transform.position = Support.FloatToVector3(od.pos);
                transform.rotation = Support.FloatToQuaternion(od.rot);
                _rigidbody.velocity = Support.FloatToVector3(od.vel);
                _rigidbody.angularVelocity = Support.FloatToVector3(od.ang);
                break;
        }
        _damaged = od.damaged;
    }
    
}
