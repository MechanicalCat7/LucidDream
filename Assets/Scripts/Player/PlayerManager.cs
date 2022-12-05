using System;
using Newtonsoft.Json.Linq;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.Events;
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

    [SerializeField] private PlayerUI _playerUI;
    public PlayerUI playerUI => _playerUI;
    
    [SerializeField] private PauseMenu _pauseMenu;
    public PauseMenu pauseMenu => _pauseMenu;
    
    [SerializeField] private InputActionProperty _moveAction;
    public InputActionProperty moveAction => _moveAction;
    
    [SerializeField] private InputActionProperty _turnAction;
    public InputActionProperty turnAction => _turnAction;
    
    [SerializeField] private InputActionProperty _menuAction;
    public InputActionProperty menuAction => _menuAction;

    [SerializeField] private InputActionProperty _leftSubAction;
    public InputActionProperty leftSubAction => _leftSubAction;

    [SerializeField] private InputActionProperty _rightSubAction;
    public InputActionProperty rightSubAction => _rightSubAction;
    
    [SerializeField] private UnityEvent _subActionEvent;
    private bool _subActionPressed;
    
    [Space]
    [Tooltip("메뉴 호출에 필요한 시간")]
    [SerializeField] private float _menuCallTime;
    
    /// <summary>
    /// 게임 일시정지 시 수행하는 이벤트
    /// </summary>
    public UnityEvent gamePausedEvent;
    
    /// <summary>
    /// 게임 재개 시 수행하는 이벤트
    /// </summary>
    public UnityEvent gameResumedEvent;
    
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

    public UnityEvent subActionEvent => _subActionEvent;

    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        GameManager.instance.RegisterPlayerManager(this);

        _driver = GetComponent<CharacterControllerDriver>();
        
    }

    private void Update()
    {
        if (GameManager.instance.isGamePaused)
            return;
        
        // 컨트롤러 입력 확인
        isMoving = _moveAction.action.ReadValue<Vector2>() != Vector2.zero;
        isTurning = _turnAction.action.ReadValue<Vector2>() != Vector2.zero;
        
        // 보조 버튼 입력 확인
        bool isSubPressing = _leftSubAction.action.ReadValue<float>() != 0 || _rightSubAction.action.ReadValue<float>() != 0;
        if (isSubPressing != _subActionPressed)
        {
            _subActionPressed = isSubPressing;
            if (isSubPressing)
                _subActionEvent.Invoke();
        }

        // 메뉴 버튼 입력 확인
        if (_menuAction.action.ReadValue<float>() > 0 && !GameManager.instance.isGamePaused)
            _menuPressedTime += Time.deltaTime;
        else
            _menuPressedTime = 0;
        
        // 게임 일시 정지
        if (_menuPressedTime > _menuCallTime)
        {
            _menuPressedTime = 0;
            GameManager.instance.PauseGame();
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
    
    [Serializable]
    private class PlayerData
    {
        public float[] charPos;
        public float[] originPos;
        public float[] originRot;
    }
    
    /// <summary>
    /// 플레이어 데이터를 저장한다.
    /// </summary>
    /// <returns>JObject로 변환된 플레이어 데이터</returns>
    public JObject SaveData()
    {
        var pd = new PlayerData
        {
            charPos = Support.Vector3ToFloat(characterPosInWorldSpace),
            originPos = Support.Vector3ToFloat(_xROrigin.transform.position),
            originRot = Support.QuaternionToFloat(_xROrigin.transform.rotation)
        };

        return JObject.FromObject(pd);
    }
    
    /// <summary>
    /// 플레이어 데이터를 불러온다.
    /// </summary>
    /// <param name="jObject">플레이어 데이터가 담긴 JObject</param>
    public void LoadData(JObject jObject)
    {
        var pd = jObject.ToObject<PlayerData>();
        
        _character.center = Vector3.zero;
        
        var originPos = Support.FloatToVector3(pd.charPos);
        originPos.y = Support.FloatToVector3(pd.originPos)[1];
        _xROrigin.transform.position = originPos;
        
        _xROrigin.transform.rotation = Support.FloatToQuaternion(pd.originRot);
        
        ResetCameraPosition();
        UpdateCharacterController();
    }
}
