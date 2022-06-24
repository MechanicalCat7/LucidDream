using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayerBase : MonoBehaviour
{
    //// 플레이어 오브젝트 구성 요소 ////
    public bool foldOutPlayer;
    public XROrigin XROrigin => xROrigin;
    [SerializeField] private XROrigin xROrigin;
    public CharacterController Character => character;
    [SerializeField] private CharacterController character;
    public Transform Head => head;
    [SerializeField] private Transform head;
    public PlayerHand LeftHand => leftHand;
    [SerializeField] private PlayerHand leftHand;
    public PlayerHand RightHand => rightHand;
    [SerializeField] private PlayerHand rightHand;
    

    [SerializeField] private LayerMask raycastLayer;    // 충돌 감지 레이어
    
    // 컴포넌트
    private CharacterControllerDriver _driver;
    
    private RaycastHit _raycastHit;

    public Transform testObject;
    
    /// 플레이어의 이동 가능 상태
    public bool Movable { get; private set; }
    
    /// 월드 좌표계에서 Character Controller의 위치
    public Vector3 CharacterPosInWorldSpace
    {
        get
        {
            var origin = xROrigin.transform;
            return origin.position + origin.TransformDirection(character.center);
        }
    }

    // 스크립트 로드 시 수행
    private void Awake()
    {
        GameManager.Instance.RegisterPlayer(this);

        _driver = GetComponent<CharacterControllerDriver>();
    }
    
    // 매 프레임마다 수행
    private void Update()
    {
        // 이동 가능 상태 갱신
        Movable = CheckMovable();
    }
    
    /// XR Origin의 위치를 갱신한다.
    public void UpdateOriginPosition()
    {
        var v = CharacterPosInWorldSpace - head.position;
        v.y = 0;
        
        xROrigin.transform.Translate(v);
    }
    
    /// Character Controller의 위치를 갱신한다.
    public void UpdateCharacterController()
    {
        var height = Mathf.Clamp(xROrigin.CameraInOriginSpaceHeight, _driver.minHeight, _driver.maxHeight);

        Vector3 center = xROrigin.CameraInOriginSpacePos;
        center.y = height / 2f + character.skinWidth;

        character.height = height;
        character.center = center;
    }

    /// 플레이어의 이동 가능 상태를 확인한다.
    private bool CheckMovable()
    {
        return  !IsBlocked() && !IsCollided();
    }
    
    // 중간 장애물 검사
    private bool IsBlocked()
    {
        var origin = xROrigin.transform;
        var start = CharacterPosInWorldSpace;
        start.y = origin.position.y + character.stepOffset;
        var end = head.position;
        end.y = start.y;

        var v = end - start;
        return Physics.Raycast(start, v.normalized, out _raycastHit, v.magnitude, raycastLayer, QueryTriggerInteraction.Ignore);
    }
    
    // 충돌 검사
    private bool IsCollided()
    {
        var start = head.position;
        var end = start;
        end.y = xROrigin.transform.position.y + character.stepOffset;

        var v = end - start;
        return Physics.Raycast(start, v.normalized, out _raycastHit, v.magnitude, raycastLayer, QueryTriggerInteraction.Ignore);
    }
    
    
}
