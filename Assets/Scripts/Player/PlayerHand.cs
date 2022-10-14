using System;
using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public enum HandType
{
    None,
    Left,
    Right
}

public class PlayerHand : MonoBehaviour
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private static readonly int GripAnimProperty = Animator.StringToHash("Grip");
    private static readonly int TriggerAnimProperty = Animator.StringToHash("Trigger");
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("움직임을 추적할 컨트롤러 오브젝트")]
    [SerializeField] private Transform _controller;
    
    [Tooltip("컨트롤러 모델")]
    [SerializeField] private Renderer _controllerModel;
    
    [Tooltip("XR Direct Interactor")]
    [SerializeField] private CustomDirectInteractor _interactor;
    
    [Tooltip("인벤토리 오브젝트")]
    [SerializeField] private InventoryInteractor _inventory;
    public InventoryInteractor inventory => _inventory;
    
    [Tooltip("어느 쪽 손인지 결정")]
    [SerializeField] private HandType _handType;
    public HandType handType => _handType;

    [Header("Movement")]
    [Tooltip("움직일 수 있는 최고 무게")]
    [SerializeField] private float _maxInteractableWeight = 10f;
    
    [Tooltip("오브젝트와의 최대 거리")]
    [SerializeField] private float _maxDistance = 0.1f;
    
    [Tooltip("손의 이동 속도")]
    [SerializeField] private float _movementSpeed = 35f;
    
    [Tooltip("손의 회전 속도")]
    [SerializeField] private float _rotationSpeed = 100f;

    [Tooltip("충돌로 인식하는 레이어")]
    [SerializeField] private LayerMask _collisionLayer;
    
    [Tooltip("컨트롤러 속도 입력")]
    [SerializeField] private InputActionProperty _velocityInputAction;
    
    [Header("Touch Haptic")]
    [Tooltip("지형에 닿을 경우 진동의 세기")]
    [Range(0, 1)] [SerializeField] private float _hapticAmplitude;
    
    [Tooltip("지형에 닿을 경우 진동의 길이")]
    [SerializeField] private float _hapticDuration;

    // ==================================================
    //  Variables
    // ==================================================
    
    private Rigidbody _rigidbody;
    private Animator _animator;
    private Renderer _renderer;
    private ActionBasedController _actionController;
    private Collider[] _handColliders;
    private float _handMoveSpeed;
    private float _handRotateSpeed;

    private bool _visible = true;

    private PlayerManager _player;
    private Transform _xrOrigin;

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 컨트롤러 속도를 이용한 이동 상태를 설정
    /// </summary>
    public bool velocityMove { get; set; }
    
    /// <summary>
    /// 인벤토리에 저장된 오브젝트
    /// </summary>
    public Transform storedItem { get; set; }
    
    /// <summary>
    /// 손 모델의 표시 여부
    /// </summary>
    public bool visible
    {
        get => _visible;
        set
        {
            _visible = value;
            _renderer.enabled = value;
            _inventory.visible = value;
        }
    }

    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _animator = GetComponentInChildren<Animator>();
        _renderer = GetComponentInChildren<Renderer>();
        _actionController = _controller.GetComponent<ActionBasedController>();
        _handColliders = GetComponentsInChildren<Collider>();

        _handMoveSpeed = _movementSpeed;
        _interactor.selectEntered.AddListener(SelectEnteredEvent);
        _interactor.selectExited.AddListener(SelectExitedEvent);
    }
    
    private void Start()
    {
        _player = GameManager.instance.playerManager;
        _xrOrigin = _player.xrOrigin.transform;
        
        _player.gamePausedEvent.AddListener(OnPauseGame);
        _player.gameResumedEvent.AddListener(OnResumeGame);
    }

    private void Update()
    {
        UpdateAnimation();
    }
    
    private void FixedUpdate()
    {
        UpdateHandTransform();
    }

    private void OnCollisionEnter(Collision collision)
    {
        // 지형에 닿을 경우 진동
        if (Support.CompareLayer(collision.gameObject.layer, _collisionLayer))
        {
            _actionController.SendHapticImpulse(_hapticAmplitude, _hapticDuration);
        }
    }
    
    // ==================================================
    //  Player Hand Functions
    // ==================================================

    /// <summary>
    /// 손의 위치를 갱신한다.
    /// </summary>
    private void UpdateHandTransform()
    {
        // 손과 컨트롤러의 위치가 어긋나면 물체를 놓게함
        if (Vector3.Distance(transform.position, _controller.position) > _maxDistance)
        {
            ForceDeselect();
        }

        // 컨트롤러 속도로 이동 (오브젝트를 잡고 있을 경우)
        if (velocityMove)
        {
            var v = _velocityInputAction.action.ReadValue<Vector3>();
            if(CheckVectorValid(v.x))
                _rigidbody.velocity = _xrOrigin.TransformDirection(v);
            
            RotateHand();
        }
        // 이동 중일 경우
        else if (_player.isMoving)
        {
            MoveHandWhileMoving();
        }
        // 그 외 경우
        else
        {
            var v = _controller.localPosition - transform.localPosition;
            var pos = _xrOrigin.TransformDirection(v);
            if(CheckVectorValid(pos.x))
                _rigidbody.velocity = pos * _handMoveSpeed;
            
            RotateHand();
        }
    }
    
    /// <summary>
    /// 이동할 때의 손의 움직임 계산
    /// </summary>
    private void MoveHandWhileMoving()
    {
        var controllerPos = _controller.position;
        
        // 이동 중일 경우에는 손이 항상 지형 위에 위치하게 한다.
        
        // Raycast 시작 위치
        var characterPos = _player.characterPosInWorldSpace;
        characterPos.y = controllerPos.y;
    
        // 컨트롤러가 지형 속에 있는지 확인
        Vector3 point;
        var v1 = controllerPos - characterPos;
        if (Physics.Raycast(characterPos, v1.normalized, out var hit, v1.magnitude, _collisionLayer))
            point = hit.point;
        else
            point = controllerPos;
        
        
        var v2 = transform.position - point;
        // 지형 속에 있으면 지형 위에 손을 위치시킴
        if (Physics.Raycast(point, v2.normalized, v2.magnitude, _collisionLayer))
        {
            _rigidbody.velocity = Vector3.zero;
            _rigidbody.angularVelocity = Vector3.zero;
            transform.SetPositionAndRotation(point, _controller.rotation);
        }
        // 아니면 기본 이동
        else
        {
            var pos = point - transform.position;
            if (CheckVectorValid(pos.x))
                _rigidbody.velocity = pos / Time.deltaTime;
            _rigidbody.MoveRotation(_controller.rotation);
        }
    }

    /// <summary>
    /// 물리 법칙을 이용해 손을 회전시킨다.
    /// </summary>
    private void RotateHand()
    {
        var q = _controller.rotation * Quaternion.Inverse(transform.rotation);
        q.ToAngleAxis(out float angle, out Vector3 axis);
        if (CheckVectorValid(axis.x))
        {
            if (angle > 180f)
                angle -= 360f;
            _rigidbody.angularVelocity = axis * (angle * Mathf.Deg2Rad * _rotationSpeed);
        }
    }
    
    /// <summary>
    /// 컨트롤러의 위치로 손을 이동시킨다.
    /// </summary>
    public void ResetHandPosition()
    {
        _rigidbody.velocity = Vector3.zero;
        _rigidbody.angularVelocity = Vector3.zero;
        transform.SetPositionAndRotation(_controller.position, _controller.rotation);
    }
    
    // --------------------------------------------------

    private void SelectEnteredEvent(SelectEnterEventArgs args)
    {
        // 무게에 따른 속도 조절
        if (args.interactableObject.transform.TryGetComponent(out Rigidbody rigid))
        {
            var t = Mathf.Clamp01(1 - rigid.mass / _maxInteractableWeight);
            _handMoveSpeed = _movementSpeed * t;
            _handRotateSpeed = _rotationSpeed * t;
        }
        
        args.interactableObject.transform.SetParent(_player.xrOrigin.transform);
        
        visible = false;
        foreach (var col in _handColliders)
        {
            col.enabled = false;
        }
    }

    private void SelectExitedEvent(SelectExitEventArgs args)
    {
        _handMoveSpeed = _movementSpeed;
        _handRotateSpeed = _rotationSpeed;
        
        visible = true;
        foreach (var col in _handColliders)
        {
            col.enabled = true;
        }
    }

    // --------------------------------------------------

    /// <summary>
    /// 벡터의 값이 유효한지 확인한다.
    /// </summary>
    /// <param name="value"> 벡터의 축 중 하나의 값</param>
    /// <returns>유효한 벡터값인지 여부를 반환한다.</returns>
    private static bool CheckVectorValid(float value)
    {
        return !float.IsNaN(value) && !float.IsInfinity(value);
    }

    /// <summary>
    /// 컨트롤러 입력에 따라 손 애니메이션을 갱신한다.
    /// </summary>
    private void UpdateAnimation()
    {
        _animator.SetFloat(GripAnimProperty, _actionController.selectActionValue.action.ReadValue<float>());
        _animator.SetFloat(TriggerAnimProperty, _actionController.activateActionValue.action.ReadValue<float>());
    }
    
    /// <summary>
    /// Direct Interacter의 잡기 상태를 해제한다.
    /// </summary>
    public void ForceDeselect()
    {
        StartCoroutine(ForceDeselectCoroutine());
    }

    private IEnumerator ForceDeselectCoroutine()
    {
        _interactor.allowSelect = false;
        yield return new WaitForSeconds(0.25f);
        _interactor.allowSelect = true;
    }
    
    /// <summary>
    /// 컨트롤러 모델 표시 여부를 변경한다. 표시할 경우 손 모델은 감춰진다.
    /// </summary>
    /// <param name="state">컨트롤러 모델 표시 여부</param>
    public void ShowControllerModel(bool state)
    {
        if (_visible)
        {
            _inventory.visible = !state;
            _renderer.enabled = !state;
        }
        _controllerModel.enabled = state;
        var lineRenderer = _controller.GetComponent<XRInteractorLineVisual>();
        lineRenderer.enabled = state;
    }
    
    // --------------------------------------------------
    
    /// <summary>
    /// 게임 일시정지 시 수행
    /// </summary>
    private void OnPauseGame()
    {
        ShowControllerModel(true);
    }
    
    /// <summary>
    /// 게임 재개 시 수행
    /// </summary>
    private void OnResumeGame()
    {
        ResetHandPosition();
        ShowControllerModel(false);
    }
}
