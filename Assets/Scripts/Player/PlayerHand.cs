using System.Collections;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayerHand : MonoBehaviour
{
    [SerializeField] private Transform controller;              // 컨트롤러 오브젝트(XR Ray Interactor)
    [SerializeField] private XRDirectInteractor interactor;     // XR Direct Interactor

    [SerializeField] private float movementSpeed = 35f;         // 손 이동 속도
    [SerializeField] private float rotationSpeed = 100f;        // 손 회전 속도

    [HideInInspector] public bool velocityMove;                 // 컨트롤러 속도로 이동 여부
    [SerializeField] private LayerMask raycastLayer;            // 충돌 감지 레이어
    [SerializeField] private InputActionProperty controllerVelocity;    // 컨트롤러 속도

    // 컴포넌트
    private Rigidbody _rigidbody;
    private Animator _animator;
    private Renderer _renderer;
    private ActionBasedController _controllerAction;
    
    private Transform _origin;

    // 스크립트 로드 시 수행
    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _animator = GetComponentInChildren<Animator>();
        _renderer = GetComponentInChildren<Renderer>();
        _controllerAction = controller.GetComponent<ActionBasedController>();
    }
    
    // 첫 Update 호출 전 수행
    private void Start()
    {
        _origin = GameManager.Instance.Player.xROrigin.transform;
    }

    // 매 프레임마다 수행
    private void Update()
    {
        UpdateAnimation();
    }
    
    // 매 고정 시간마다 수행
    private void FixedUpdate()
    {
        UpdateHandTransform();
    }

    /// 손의 위치를 갱신한다
    private void UpdateHandTransform()
    {
        // 컨트롤러 속도로 이동 (오브젝트를 잡고 있을 경우)
        if (velocityMove)
        {
            var v = controllerVelocity.action.ReadValue<Vector3>();
            if(CheckVectorValid(v.x))
                _rigidbody.velocity = v;
            
            RotateHand();
        }
        // 이동 중일 경우
        else if (GameManager.IsPlayerMoving())
        {
            MoveHandWhileMoving();
        }
        // 그 외 경우
        else
        {
            var v = controller.localPosition - transform.localPosition;
            var pos = _origin.TransformDirection(v);
            if(CheckVectorValid(pos.x))
                _rigidbody.velocity = pos * movementSpeed;
            
            RotateHand();
        }
    }
    
    /// 물리 법칙을 이용하여 손을 회전시킨다.
    private void RotateHand()
    {
        var q = controller.rotation * Quaternion.Inverse(transform.rotation);
        q.ToAngleAxis(out float angle, out Vector3 axis);
        if (CheckVectorValid(axis.x))
        {
            if (angle > 180f)
                angle -= 360f;
            _rigidbody.angularVelocity = axis * (angle * Mathf.Deg2Rad * rotationSpeed);
        }
    }
    
    /// 이동 중일 때 손의 이동
    private void MoveHandWhileMoving()
    {
        // Raycast 시작 위치
        var characterPos = _origin.position + GameManager.Instance.Player.character.center;
        characterPos.y = controller.position.y;
    
        // 컨트롤러가 지형 속에 있는지 확인
        Vector3 point;
        var v1 = controller.position - characterPos;
        if (Physics.Raycast(characterPos, v1.normalized, out var hit, v1.magnitude, raycastLayer))
            point = hit.point;
        else
            point = controller.position;
        
        // 컨트롤러와 손 사이에 지형이 있는 지 확인
        var v2 = transform.position - point;
        if (Physics.Raycast(point, v2.normalized, v2.magnitude, raycastLayer))
        {
            _rigidbody.velocity = Vector3.zero;
            _rigidbody.angularVelocity = Vector3.zero;
            transform.position = point;
            transform.rotation = controller.rotation;
        }
        else
        {
            var pos = point - transform.position;
            if (CheckVectorValid(pos.x))
                _rigidbody.velocity = pos / Time.deltaTime;
            _rigidbody.MoveRotation(controller.rotation);
        }
    }

    /// 벡터의 값이 유효한지 확인한다.
    private bool CheckVectorValid(float value)
    {
        return !float.IsNaN(value) && !float.IsInfinity(value);
    }

    /// 컨트롤러 입력에 따른 손 애니메이션을 갱신한다.
    private void UpdateAnimation()
    {
        _animator.SetFloat("Grip", _controllerAction.selectActionValue.action.ReadValue<float>());
        _animator.SetFloat("Trigger", _controllerAction.activateActionValue.action.ReadValue<float>());
    }
    
    /// Direct Interactor의 잡기 상태를 해제한다.
    public void ForceDeselect()
    {
        StartCoroutine(ForceDeselectCoroutine());
    }

    private IEnumerator ForceDeselectCoroutine()
    {
        interactor.allowSelect = false;
        yield return new WaitForSeconds(0.25f);
        interactor.allowSelect = true;
    }

}
