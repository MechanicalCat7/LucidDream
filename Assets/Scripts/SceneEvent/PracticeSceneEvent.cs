using System.Collections;
using Newtonsoft.Json.Linq;
using UnityEngine;

public class PracticeSceneEvent : BaseSceneEvent
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private static readonly int ColorShaderProperty = Shader.PropertyToID("_Color");
    private static readonly int AlphaShaderProperty = Shader.PropertyToID("_Alpha");
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private Renderer _fadeScreen;

    [SerializeField] private ControllerHint _leftHint;
    [SerializeField] private ControllerHint _rightHint;

    [SerializeField] private Transform _elevatorButtonKey;
    [SerializeField] private Transform _elevatorButton;
    [SerializeField] private Rigidbody _elevatorDoorLeft;
    [SerializeField] private Rigidbody _elevatorDoorRight;

    // ==================================================
    //  Variables
    // ==================================================
    
    // 이벤트 발동 여부
    private bool _isNewGame = true;
    private bool _checkInventoryInfo;
    private bool _checkElevatorButton;

    private PlayerManager _player;

    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Start()
    {
        base.Start();
        _player = GameManager.instance.playerManager;
        
        // 첫 시작일 경우 이벤트
        if (_isNewGame)
        {
            GameManager.instance.SetGamePaused(true);
            StartCoroutine(OpeningCoroutine());
        }
    }

    // ==================================================
    //  Scene Functions
    // ==================================================
    
    /// <summary>
    /// 게임 첫 시작 시 애니메이션
    /// </summary>
    private IEnumerator OpeningCoroutine()
    {
        // 검은 화면으로 시작
        _fadeScreen.material.SetColor(ColorShaderProperty, Color.black);
        _fadeScreen.material.SetFloat(AlphaShaderProperty, 1f);
        _player.leftHand.visible = false;
        _player.rightHand.visible = false;
        yield return new WaitForSeconds(1f);
        
        // 페이드 인
        float runTime = 0.0f;
        float duration = 2f;
        while (runTime < duration)
        {
            runTime += Time.deltaTime;
            var t = runTime / duration;
            _fadeScreen.material.SetFloat(AlphaShaderProperty, Mathf.Lerp(1, 0, t));
            yield return null;
        }
        
        // 이벤트 종료
        yield return new WaitForSeconds(2f);
        _player.leftHand.visible = true;
        _player.rightHand.visible = true;
        _fadeScreen.material.SetColor(ColorShaderProperty, Color.gray);
        GameManager.instance.SetGamePaused(false);
        _isNewGame = false;

        yield return new WaitForSeconds(1f);
        StartCoroutine(ControlInfoCoroutine());
    }
    
    /// <summary>
    /// 컨트롤러 조작 설명 이벤트
    /// </summary>
    private IEnumerator ControlInfoCoroutine()
    {
        // 이동
        _leftHint.visible = true;
        _rightHint.visible = true;
        _leftHint.ShowButtonHighlight(ControllerHint.Button.Stick);
        _rightHint.ShowButtonHighlight(ControllerHint.Button.Stick);
        _player.playerUI.PushTextMessage($"<color=yellow>왼쪽 스틱</color>으로 이동, <color=yellow>오른쪽 스틱</color>으로 회전");
        yield return new WaitForSeconds(5f);
        
        // 잡기
        _leftHint.HideButtonHighlight();
        _rightHint.HideButtonHighlight();
        _leftHint.ShowButtonHighlight(ControllerHint.Button.Grip);
        _rightHint.ShowButtonHighlight(ControllerHint.Button.Grip);
        _player.playerUI.PushTextMessage($"<color=yellow>그립 버튼</color>을 누르고 있으면 오브젝트 잡기");
        yield return new WaitForSeconds(5f);
        
        // 종료
        _leftHint.visible = false;
        _rightHint.visible = false;
    }
    
    /// <summary>
    /// 인벤토리 설명 이벤트
    /// </summary>
    public void InventoryInfoEvent()
    {
        if (_checkInventoryInfo)
            return;

        _checkInventoryInfo = true;
        StartCoroutine(InventoryInfoCoroutine());
    }
    
    private IEnumerator InventoryInfoCoroutine()
    {
        yield return new WaitForSeconds(1f);
        _player.playerUI.PushTextMessage($"일부 물건은 인벤토리에 넣을 수 있습니다");
        yield return new WaitForSeconds(5f);
        _player.playerUI.PushTextMessage($"보관이 가능할 경우 인벤토리가 <color=green>초록색</color>으로,\n 불가능 할 경우 <color=red>빨간색</color>으로 변합니다");
    }

    public void ElevatorOpenEvent()
    {
        _checkElevatorButton = true;
        Destroy(_elevatorButtonKey.gameObject);
        StartCoroutine(ElevatorOpenEventCoroutine());
    }

    private IEnumerator ElevatorOpenEventCoroutine()
    {
        yield return new WaitForSeconds(2f);
        
        // 문 열림
        var leftInitPos = _elevatorDoorLeft.position;
        var rightInitPos = _elevatorDoorRight.position;
        var leftTargetX = (leftInitPos + _elevatorDoorLeft.transform.right * 0.45f).x;
        var rightTargetX = (rightInitPos - _elevatorDoorRight.transform.right * 0.45f).x;

        var runTime = 0.0f;
        var duration = 2f;
        
        while (runTime < duration)
        {
            runTime += Time.deltaTime;
            var t = runTime / duration;

            _elevatorDoorLeft.position = new Vector3(Mathf.SmoothStep(leftInitPos.x, leftTargetX, t), leftInitPos.y,
                leftInitPos.z);
            _elevatorDoorRight.position = new Vector3(Mathf.SmoothStep(rightInitPos.x, rightTargetX, t), rightInitPos.y,
                rightInitPos.z);
            yield return null;
        }

    }

    // ==================================================
    //  Data Management
    // ==================================================

    private class SceneData
    {
        public bool isNewGame;
        public bool checkElevatorButton;
    }

    public override JObject SaveData()
    {
        SceneData sd = new SceneData
        {
            isNewGame = _isNewGame,
            checkElevatorButton = _checkElevatorButton
        };
        return JObject.FromObject(sd);
    }

    public override void LoadData(JObject jObject)
    {
        SceneData sd = jObject.ToObject<SceneData>();

        _isNewGame = sd.isNewGame;

        if (sd.checkElevatorButton)
        {
            _checkElevatorButton = true;
            var leftInitPos = _elevatorDoorLeft.position;
            var rightInitPos = _elevatorDoorRight.position;
            _elevatorDoorLeft.position = new Vector3((leftInitPos + _elevatorDoorLeft.transform.right * 0.45f).x,
                leftInitPos.y, leftInitPos.z);
            _elevatorDoorRight.position = new Vector3((rightInitPos - _elevatorDoorRight.transform.right * 0.45f).x,
                rightInitPos.y, rightInitPos.z);
        }
    }
}
