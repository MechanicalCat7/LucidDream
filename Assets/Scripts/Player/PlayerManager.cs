using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class PlayerManager : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [SerializeField] private XROrigin _xROrigin;
    public XROrigin xrOrigin => _xROrigin;
    
    [SerializeField] private CharacterController _character;
    public CharacterController character => _character;
    
    [SerializeField] private PlayerBody _body;
    public PlayerBody body => _body;
    
    [SerializeField] private Transform _head;
    public Transform head => _head;
    
    [SerializeField] private PlayerHand _leftHand;
    public PlayerHand leftHand => _leftHand;
    
    [SerializeField] private PlayerHand _rightHand;
    public PlayerHand rightHand => _rightHand;
    
    [SerializeField] private PauseMenu _pauseMenu;
    public PauseMenu pauseMenu => _pauseMenu;
    
    [SerializeField] private InputActionProperty _moveAction;
    public InputActionProperty moveAction => _moveAction;
    
    [SerializeField] private InputActionProperty _turnAction;
    public InputActionProperty turnAction => _turnAction;
    
    [SerializeField] private InputActionProperty _menuAction;
    public InputActionProperty menuAction => _menuAction;
    
    // ==================================================
    //  Variables
    // ==================================================

    private CharacterControllerDriver _driver;
    
    private float _menuPressedTime;

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 월드 좌표계에서 Character Controller의 위치
    /// </summary>
    public Vector3 characterPosInWorldSpace => _xROrigin.transform.TransformPoint(_character.center);
    
    /// <summary>
    /// 컨트롤러의 이동 조작이 입력되었는가?
    /// </summary>
    public bool isMoving { get; private set; }
    
    /// <summary>
    /// 컨트롤러의 회전 조작이 입력되었는가?
    /// </summary>
    public bool isTurning { get; private set; }

    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        GameManager.instance.RegisterPlayerManager(this);
    }

    private void Update()
    {
        // 컨트롤러 입력 확인
        isMoving = _moveAction.action.ReadValue<Vector2>() != Vector2.zero;
        isTurning = _turnAction.action.ReadValue<Vector2>() != Vector2.zero;
        
        // 메뉴 버튼 입력 확인
        if (_menuAction.action.ReadValue<float>() > 0 && !GameManager.instance.isGamePaused)
            _menuPressedTime += Time.deltaTime;
        else
            _menuPressedTime = 0;
        
        // 게임 일시 정지
        if (_menuPressedTime > 2f)
        {
            _menuPressedTime = 0;
            // Pause Game
        }
    }
    
    // ==================================================
    //  Player Manager Functions
    // ==================================================
    
    /// <summary>
    /// 현재 Character Controller의 위치로 카메라의 위치를 재조정한다.
    /// </summary>
    public void ResetCameraPosition()
    {
        Vector3 v = characterPosInWorldSpace - _head.position;
        v.y = 0;
        
        _xROrigin.transform.Translate(v, Space.World);
    }
    
    /// <summary>
    /// Character Controller의 상태를 갱신한다.
    /// </summary>
    public void UpdateCharacterController()
    {
        var height = Mathf.Clamp(_xROrigin.CameraInOriginSpaceHeight, _driver.minHeight, _driver.maxHeight);

        Vector3 center = _xROrigin.CameraInOriginSpacePos;
        center.y = height / 2f + _character.skinWidth;

        _character.height = height;
        _character.center = center;
    }
    
    // ==================================================
    //  Data Management
    // ==================================================
}
