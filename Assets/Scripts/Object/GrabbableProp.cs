using System;
using System.Collections;
using System.Linq;
using Newtonsoft.Json.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

/// <summary>
/// 잡을 수 있는 오브젝트들의 스크립트
/// </summary>
public class GrabbableProp : Prop
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("손 포즈의 존재 여부")]
    [SerializeField] private bool _isPoseAvailable;

    [SerializeField] private Renderer _leftHandPose;
    
    [SerializeField] private Renderer _rightHandPose;
    
    // ==================================================
    //  Variables
    // ==================================================

    protected XRGrabInteractable _interactable;

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
    
    /// <summary>
    /// 손 포즈의 존재 여부
    /// </summary>
    public bool isPoseAvailable => _isPoseAvailable;

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
    
    protected override void BreakProp()
    {
        // 파괴 소리 재생
        AudioSource.PlayClipAtPoint(_data.soundData.breaking, transform.position, _data.volume);
        Destroy(gameObject);
        
        // 파편 생성
        if (_data.createFragmentOnBreak && _data.fragmentObjectList.Count > 0)
        {
            // 프롭을 잡고있는 경우 놓게 한다
            if (_interactable.isSelected && _interactable.GetOldestInteractorSelecting().transform.TryGetComponent(out PlayerHand hand))
            {
                hand.ForceDeselect();
            }
            
            foreach (var fragment in _data.fragmentObjectList)
            {
                var temp = Instantiate(fragment, transform.position, transform.rotation, DataManager.instance.otherObjects);
                Destroy(temp, 5f);
            }
        }
    }
    
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
            return;
        }

        // 프롭을 잡은 경우 Grabbed 레이어로 변경
        if(_isCoroutineRunning)
            StopCoroutine(_coroutine);
        Support.ChangeLayer(transform, Support.GrabbedLayerIndex);
        
        // 포즈가 존재할 경우 적용
        if (_isPoseAvailable && args.interactorObject.transform.TryGetComponent(out CustomDirectInteractor interactor))
        {
            interactor.hand.visible = false;
            switch (interactor.handType)
            {
                case HandType.Left:
                    _leftHandPose.enabled = true;
                    break;
                case HandType.Right:
                    _rightHandPose.enabled = true;
                    break;
            }
        }
    }

    /// <summary>
    /// 오브젝트를 놓을 때 이벤트
    /// </summary>
    /// <param name="args"></param>
    private void SelectExitedEvent(SelectExitEventArgs args)
    {
        if (gameObject.IsDestroyed())
            return;
        
        // 인벤토리에서 나온 경우 저장된 손을 None으로 변경
        if (args.interactorObject.transform.TryGetComponent(out XRSocketInteractor socket))
        {
            if (socket is InventoryInteractor)
                _stored = HandType.None;
        }

        // 인벤토리에 닿아있는 상태일 경우 거리 측정을 수행하지 않음
        if (_interactable.interactorsHovering.OfType<InventoryInteractor>().Any())
        {
            return;
        }
        
        // 프롭을 놓을 경우 거리 측정 시작
        Support.ChangeLayer(transform, Support.GrabbedLayerIndex);
        if(_isCoroutineRunning)
            StopCoroutine(_coroutine);
        _coroutine = StartCoroutine(CheckDistanceCoroutine());
        
        // 포즈 제거
        if (isPoseAvailable && args.interactorObject.transform.TryGetComponent(out CustomDirectInteractor interactor))
        {
            _leftHandPose.enabled = false;
            _rightHandPose.enabled = false;
            interactor.hand.visible = true;
        }
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
        
        Support.ChangeLayer(transform, Support.PropLayerIndex);
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
                var leftInv = player.leftHand.inventory.transform;
                transform.position = leftInv.position;
                transform.rotation = leftInv.rotation;
                break;
            case 2:
                var rightInv = player.rightHand.inventory.transform;
                transform.position = rightInv.position;
                transform.rotation = rightInv.rotation;
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
