using System.Collections;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using UnityEngine.SceneManagement;

public class MazeSceneEvent : BaseSceneEvent
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private static readonly int ColorShaderProperty = Shader.PropertyToID("_Color");
    private static readonly int AlphaShaderProperty = Shader.PropertyToID("_Alpha");
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [Header("Audio")]
    [SerializeField] private SoundData _sound;
    [SerializeField] private Renderer _effectScreen;
    [SerializeField] private AudioClip _effectAudio;
    
    [Header("Elevator")]
    [SerializeField] private Transform _elevatorDoorLeft;
    [SerializeField] private Transform _elevatorDoorRight;
    [SerializeField] private Transform _elevatorLeft2;
    [SerializeField] private Transform _elevatorRight2;

    [Header("Wall Event")]
    [SerializeField] private GameObject _entranceWall;
    [SerializeField] private Transform _entranceWallPos;
    [SerializeField] private GameObject _firstWalls;
    [SerializeField] private Transform _firstWallPos;
    [SerializeField] private GameObject _secondWalls;
    [SerializeField] private Transform _secondWallPos;
    
    [Header("Others")]
    [SerializeField] private GameObject _timeBombPrefab;
    [SerializeField] private Transform _timeBombPosition;
    [SerializeField] private GameObject _centerTrigger;

    // ==================================================
    //  Variables
    // ==================================================

    private Collider _entranceWallCol;
    private Renderer _entranceWallRend;
    private Collider[] _firstWallCols;
    private Renderer[] _firstWallRends;
    private Collider[] _secondWallCols;
    private Renderer[] _secondWallRends;

    private bool _checkElevatorOpened;
    private bool _checkEntranceWall;

    private bool _checkBlueObjective;
    private bool _checkGreenObjective;
    private bool _checkYellowObjective;
    private bool _checkCenterTrigger;
    private bool _checkEndTrigger;

    private AudioSource _audioSource;

    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Awake()
    {
        base.Awake();
        _effectScreen.material.SetFloat(AlphaShaderProperty, 0);
        _audioSource = GetComponent<AudioSource>();
        
        _entranceWallCol = _entranceWall.transform.GetComponent<Collider>();
        _entranceWallRend = _entranceWall.transform.GetComponent<Renderer>();
        _firstWallCols = _firstWalls.transform.GetComponentsInChildren<Collider>();
        _firstWallRends = _firstWalls.transform.GetComponentsInChildren<Renderer>();
        _secondWallCols = _secondWalls.transform.GetComponentsInChildren<Collider>();
        _secondWallRends = _secondWalls.transform.GetComponentsInChildren<Renderer>();

        // _entranceWall.transform.position = _entranceWallPos.position;
        _entranceWallCol.enabled = false;
        _entranceWallRend.enabled = false;
        
        // _firstWalls.transform.position = _firstWallPos.position;
        
        // _secondWalls.transform.position = _secondWallPos.position;
        ChangeWallState(_secondWallCols, _secondWallRends, false);
    }

    protected override void Start()
    {
        base.Start();
        
        if(!_checkElevatorOpened)
            ElevatorOpenEvent();
    }

    // ==================================================
    //  Scene Functions
    // ==================================================
    
    /// <summary>
    /// 엘리베이터 문 열림 이벤트
    /// </summary>
    private void ElevatorOpenEvent()
    {
        _checkElevatorOpened = true;
        StartCoroutine(ElevatorOpenEventCoroutine(_elevatorDoorLeft, _elevatorDoorRight));
    }

    private IEnumerator ElevatorOpenEventCoroutine(Transform left, Transform right)
    {
        yield return new WaitForSeconds(2f);
        _audioSource.PlayOneShot(_sound.soundList[5]);
        
        // 문 열림
        var leftInitPos = left.position;
        var rightInitPos = right.position;
        var leftTargetX = (leftInitPos + left.transform.right * 0.45f).x;
        var rightTargetX = (rightInitPos - right.transform.right * 0.45f).x;
        
        var runTime = 0.0f;
        var duration = 2f;
        
        while (runTime < duration)
        {
            runTime += Time.deltaTime;
            var t = runTime / duration;

            left.position = new Vector3(Mathf.SmoothStep(leftInitPos.x, leftTargetX, t), leftInitPos.y,
                leftInitPos.z);
            right.position = new Vector3(Mathf.SmoothStep(rightInitPos.x, rightTargetX, t), rightInitPos.y,
                rightInitPos.z);
            yield return null;
        }
        
        
    }
    
    private IEnumerator ElevatorCloseEventCoroutine(Transform left, Transform right)
    {
        _audioSource.PlayOneShot(_sound.soundList[6]);
        
        // 문 닫힘
        var leftInitPos = left.position;
        var rightInitPos = right.position;
        var leftTargetX = (leftInitPos - left.transform.right * 0.45f).x;
        var rightTargetX = (rightInitPos + right.transform.right * 0.45f).x;
        
        var runTime = 0.0f;
        var duration = 2f;
        
        while (runTime < duration)
        {
            runTime += Time.deltaTime;
            var t = runTime / duration;

            left.position = new Vector3(Mathf.SmoothStep(leftInitPos.x, leftTargetX, t), leftInitPos.y,
                leftInitPos.z);
            right.position = new Vector3(Mathf.SmoothStep(rightInitPos.x, rightTargetX, t), rightInitPos.y,
                rightInitPos.z);
            yield return null;
        }
        
        // 어두워졌다
        _effectScreen.material.SetColor(ColorShaderProperty, Color.black);
        duration = 2f;
        float currentValue = 0;
        while (currentValue < duration)
        {
            currentValue += Time.deltaTime;
            _effectScreen.material.SetFloat(AlphaShaderProperty, currentValue / duration);
            yield return null;
        }

        yield return new WaitForSeconds(2f);

        GameManager.instance.LoadTitleScene();
    }
    
    /// <summary>
    /// 화면 반짝임 이펙트 코루틴
    /// </summary>
    private IEnumerator ScreenFlashCoroutine(float duration, Color color)
    {
        // 초기 설정
        _effectScreen.material.SetColor(ColorShaderProperty, color);
        _effectScreen.material.SetFloat(AlphaShaderProperty, 1f);
        float currentValue = duration;
        
        // 이펙트 실행
        AudioSource.PlayClipAtPoint(_effectAudio, GameManager.instance.playerManager.head.position);
        while (currentValue > 0)
        {
            currentValue -= Time.deltaTime;
            _effectScreen.material.SetFloat(AlphaShaderProperty, currentValue / duration);
            yield return null;
        }
    }

    public void ScreenBlackOut()
    {
        StartCoroutine(ScreenBlackOutCoroutine());
    }
    
    /// <summary>
    /// 화면 암전 효과
    /// </summary>
    private IEnumerator ScreenBlackOutCoroutine()
    {
        // 어두워졌다
        _audioSource.PlayOneShot(_sound.soundList[3]);
        _effectScreen.material.SetColor(ColorShaderProperty, Color.black);
        float duration = 0.5f;
        float currentValue = 0;
        while (currentValue < duration)
        {
            currentValue += Time.deltaTime;
            _effectScreen.material.SetFloat(AlphaShaderProperty, currentValue / duration);
            yield return null;
        }
        
        // 밝아짐
        duration = 1f;
        currentValue = 1f;
        while (currentValue > 0)
        {
            currentValue -= Time.deltaTime;
            _effectScreen.material.SetFloat(AlphaShaderProperty, currentValue / duration);
            yield return null;
        }
    }

    /// <summary>
    /// 입구가 막히는 이벤트
    /// </summary>
    public void EntranceBlockEvent()
    {
        if (_checkEntranceWall)
            return;
        _checkEntranceWall = true;
        
        _entranceWallCol.enabled = true;
        _entranceWallRend.enabled = true;
        
        StartCoroutine(ScreenBlackOutCoroutine());
    }

    /// <summary>
    /// 폭탄 재소환
    /// </summary>
    public void RespawnTimeBomb()
    {
        var bomb = Instantiate(_timeBombPrefab, _timeBombPosition.position, Quaternion.identity);
        bomb.TryGetComponent(out NewTimebomb bombComp);
        bombComp.destroyedEvent.AddListener(RespawnTimeBomb);
    }
    
    /// <summary>
    /// 파랑 목표물 파괴 시 이벤트
    /// </summary>
    public void BlueObjectBrokeEvent()
    {
        _checkBlueObjective = true;
        
        _audioSource.PlayOneShot(_sound.soundList[2]);
        StartCoroutine(ScreenFlashCoroutine(0.5f, Color.blue));
        
        if (_checkGreenObjective)
        {
            _centerTrigger.SetActive(true);
        }
    }
    
    /// <summary>
    /// 초록 목표물 파괴시 이벤트
    /// </summary>
    public void GreenObjectBrokeEvent()
    {
        _checkGreenObjective = true;
        
        ChangeWallState(_firstWallCols, _firstWallRends, false);
        ChangeWallState(_secondWallCols, _secondWallRends, true);
        
        _audioSource.PlayOneShot(_sound.soundList[2]);
        StartCoroutine(ScreenFlashCoroutine(0.5f, Color.green));
        
        if (_checkBlueObjective)
        {
            _centerTrigger.SetActive(true);
        }
    }

    private void ChangeWallState(Collider[] cols, Renderer[] rends, bool state)
    {
        foreach (var col in cols)
        {
            col.enabled = state;
        }
        foreach (var col in rends)
        {
            col.enabled = state;
        }
    }
    
    /// <summary>
    /// 노랑 목표물 파괴 시 이벤트
    /// </summary>
    public void YellowObjectBrokeEvent()
    {
        _checkYellowObjective = true;
        
        _audioSource.PlayOneShot(_sound.soundList[2]);
        StartCoroutine(ScreenFlashCoroutine(0.5f, Color.yellow));
    }

    public void MovePhaseTwoEvent()
    {
        if(_checkCenterTrigger)
            return;
        
        _checkCenterTrigger = true;
        var xrOrigin = GameManager.instance.playerManager.xrOrigin.transform;
        var currentPos = xrOrigin.position;
        Debug.Log(currentPos);
        xrOrigin.position = currentPos + new Vector3(-30f, 0, 0);
        
        _audioSource.Stop();
        _audioSource.clip = _sound.soundList[10];
        _audioSource.Play();
        
        _audioSource.PlayOneShot(_sound.soundList[1]);
    }
    
    /// <summary>
    /// 효과음 재생
    /// </summary>
    public void PlaySceneSound(int index)
    {
        _audioSource.PlayOneShot(_sound.soundList[index]);
    }

    public void CheckClearCondition()
    {
        if (_checkYellowObjective && !_checkEndTrigger)
        {
            _checkEndTrigger = true;
            StartCoroutine(ElevatorOpenEventCoroutine(_elevatorLeft2, _elevatorRight2));
        }
    }

    public void ClearEvent()
    {
        StartCoroutine(ElevatorCloseEventCoroutine(_elevatorLeft2, _elevatorRight2));
    }

    // ==================================================
    //  Data Management
    // ==================================================

    private class SceneData
    {
        public bool checkElevatorOpened;
        public bool checkEntranceWall;
        public bool checkBlueObjective;
        public bool checkGreenObjective;
        public bool checkYellowObjective;
    }
    
    public override JObject SaveData()
    {
        SceneData sd = new SceneData()
        {
            checkElevatorOpened = _checkElevatorOpened,
            checkEntranceWall = _checkEntranceWall,
            checkBlueObjective = _checkBlueObjective,
            checkGreenObjective = _checkGreenObjective,
            checkYellowObjective = _checkYellowObjective
        };
        
        return JObject.FromObject(sd);
    }

    public override void LoadData(JObject jObject)
    {
        SceneData sd = jObject.ToObject<SceneData>();

        if (sd.checkElevatorOpened)
        {
            _checkElevatorOpened = true;
            var leftInitPos = _elevatorDoorLeft.position;
            var rightInitPos = _elevatorDoorRight.position;
            _elevatorDoorLeft.position = leftInitPos + _elevatorDoorLeft.transform.right * 0.45f;
            _elevatorDoorRight.position = rightInitPos - _elevatorDoorRight.transform.right * 0.45f;
        }
        
        if (sd.checkEntranceWall)
        {
            _checkEntranceWall = true;
            _entranceWall.SetActive(true);
        }

        if (sd.checkBlueObjective)
        {
            _checkBlueObjective = true;
        }

        if (sd.checkGreenObjective)
        {
            _checkGreenObjective = true;
            _firstWalls.SetActive(false);
            _secondWalls.SetActive(true);
        }

        if (sd.checkYellowObjective)
        {
            _checkYellowObjective = true;
        }
    }
}
