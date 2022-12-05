using System;
using System.Collections;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR.Interaction.Toolkit;

public class NewGrabbableObject : NewDestroyableObject, IGrabbable
{
    [Header("Grabbable")]
    [Tooltip("잡았을 때 포즈가 존재하는가?")]
    [SerializeField] private bool _isGrabPoseAvailable;
    public bool isGrabPoseAvailable => _isGrabPoseAvailable;
    
    [SerializeField] private Renderer _leftGrabPose;
    [SerializeField] private Renderer _rightGrabPose;
    
    private XRGrabInteractable _interactable;
    public XRGrabInteractable interactable => _interactable;
    
    [Space]
    [Tooltip("보조 버튼 클릭 시 이벤트")]
    [SerializeField] protected UnityEvent _subAction;
    
    [Tooltip("인벤토리 추가 가능 여부")]
    [SerializeField] private bool _storable;
    public bool storable => _storable;
    
    [Tooltip("놓았을 때 충돌이 활성화되는 거리")]
    [SerializeField] private float _dropDistance;
    private bool _isCoroutineRunning;
    private Coroutine _coroutine;

    
    public virtual void OnSelectEntered(SelectEnterEventArgs args)
    {
       // 프롭을 잡은 경우 Grabbed 레이어로 변경
        if(_isCoroutineRunning)
            StopCoroutine(_coroutine);
        Support.ChangeLayer(transform, Support.GrabbedLayerIndex);
        
        // 잡았을 때 손 모습
        if (!_isGrabPoseAvailable)
            return;
        if (args.interactorObject is CustomDirectInteractor interactor)
        {
            GameManager.instance.playerManager.subActionEvent.AddListener(OnSubActionPressed);
            
            switch (interactor.handType)
            {
                case HandType.Left:
                    _leftGrabPose.enabled = true;
                    break;
                case HandType.Right:
                    _rightGrabPose.enabled = true;
                    break;
                default:
                    Debug.LogWarning("HandType이 잘못 설정되어있습니다.");
                    break;
            }
        }
    }

    public virtual void OnSelectExited(SelectExitEventArgs args)
    {
        if (gameObject.IsDestroyed())
            return;
        
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

        // 잡혔을 때 손 모습
        if (!_isGrabPoseAvailable)
            return;
        if (args.interactorObject is CustomDirectInteractor)
        {
            GameManager.instance.playerManager.subActionEvent.RemoveListener(OnSubActionPressed);
            
            _leftGrabPose.enabled = false;
            _rightGrabPose.enabled = false;
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
        while (Physics.CheckSphere(_renderer.bounds.center, _dropDistance, mask))
        {
            yield return null;
        }
        
        Support.ChangeLayer(transform, Support.PropLayerIndex);
        _isCoroutineRunning = false;
    }

    protected void OnSubActionPressed()
    {
        _subAction.Invoke();
    }

    protected override void Awake()
    {
        base.Awake();
        
        TryGetComponent(out _interactable);
    }

    protected virtual void Start()
    {
        GameManager.instance.playerManager.subActionEvent.AddListener(OnSubActionPressed);
    }

    private void OnEnable()
    {
        _interactable.selectEntered.AddListener(OnSelectEntered);
        _interactable.selectExited.AddListener(OnSelectExited);
    }

    private void OnDisable()
    {
        _interactable.selectEntered.RemoveListener(OnSelectEntered);
        _interactable.selectExited.RemoveListener(OnSelectExited);
    }
}
