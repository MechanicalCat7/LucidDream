using System;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayerBase : MonoBehaviour
{
    // 플레이어 오브젝트 구성 요소
    [SerializeField] private PlayerObject player;

    [Serializable]
    public class PlayerObject
    {
        public XROrigin xROrigin;
        public CharacterController character;
        public Transform head;
        public PlayerHand leftHand;
        public PlayerHand rightHand;
        [Space]
        public InputActionProperty moveInput;
        public InputActionProperty turnInput;
    }

    [SerializeField] private LayerMask raycastLayer;

    public bool Movable { get; private set; }       // 이동 가능 상태
    
    private CharacterControllerDriver _driver;
    private RaycastHit _raycastHit;

    // 첫 Update 호출 전에 수행
    private void Awake()
    {
        GameManager.Instance.RegisterPlayer(player);

        _driver = GetComponent<CharacterControllerDriver>();
    }
    
    // 매 프레임마다 수행
    private void Update()
    {
        // 이동 가능 상태 갱신
        Movable = CheckMovable();
    }
    
    /// Character Controller의 위치를 갱신한다.
    public void UpdateCharacterController()
    {
        // 이동해야할 방향 계산
        var origin = player.xROrigin.transform;
        var character = origin.position + player.character.center;
        var direction = character - player.head.position;
        direction.y = 0;
        direction.Normalize();

        var height = Mathf.Clamp(player.xROrigin.CameraInOriginSpaceHeight, _driver.minHeight, _driver.maxHeight);
        var center =  origin.InverseTransformPoint(_raycastHit.point) + direction * player.character.radius;
        center.y = height / 2f + player.character.skinWidth;

        player.character.center = center;
        player.character.height = height;
    }

    /// 플레이어의 이동 가능 상태를 확인한다.
    private bool CheckMovable()
    {
        return  !IsBlocked() && !IsCollided();
    }
    
    // 중간 장애물 검사
    private bool IsBlocked()
    {
        var originPos = player.xROrigin.transform.position;
        var start = originPos + player.character.center;
        start.y = originPos.y + player.character.stepOffset;
        var end = player.head.position;
        end.y = start.y;

        var v = end - start;
        return Physics.Raycast(start, v.normalized, out _raycastHit, v.magnitude, raycastLayer, QueryTriggerInteraction.Ignore);
    }
    
    // 충돌 검사
    private bool IsCollided()
    {
        var start = player.head.position;
        var end = start;
        end.y -= player.character.height - player.character.skinWidth;

        var v = end - start;
        return Physics.Raycast(start, v.normalized, out _raycastHit, v.magnitude, raycastLayer, QueryTriggerInteraction.Ignore);
    }
}
