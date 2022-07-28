using System.Collections;
using UnityEngine;

/// <summary>
/// 일시정지 메뉴 오브젝트 스크립트
/// </summary>
public class PauseMenu : MonoBehaviour
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private static readonly int AlphaShaderProperty = Shader.PropertyToID("_Alpha");
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("일시정지 메뉴 이벤트 스크립트")]
    [SerializeField] private PauseMenuEvent _event;
    
    [Tooltip("일시정지 시 배경화면")]
    [SerializeField] private Renderer _background;
    
    [Tooltip("따라오는 속도")]
    [SerializeField] private float _moveSpeed;
    
    [Tooltip("화면 전환 속도")]
    [SerializeField] private float _fadeSpeed = 0.2f;

    // ==================================================
    //  Variables
    // ==================================================

    private PlayerManager _player;
    private Transform _head;
    
    private Coroutine _coroutine;       // 코루틴
    private bool _isCoroutineRun;       // 코루틴이 실행 중인가?
    private float _currentAlpha;        // 현재 배경화면 알파값
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Start()
    {
        _player = GameManager.instance.playerManager;
        _head = _player.head.transform;
        
        _player.gamePausedEvent.AddListener(OnPauseGame);
        _player.gameResumedEvent.AddListener(OnResumeGame);
    }

    // ==================================================
    //  Pause Menu Functions
    // ==================================================
    
    /// <summary>
    /// 배경화면의 표시 상태를 변경한다.
    /// </summary>
    /// <param name="show">배경화면 표시 여부</param>
    private void UpdateBackground(bool show)
    {
        if (_isCoroutineRun)
        {
            StopCoroutine(_coroutine);
            _isCoroutineRun = false;
        }
        _coroutine = StartCoroutine(UpdateBackgroundCoroutine(show));
    }
    
    // UpdateBackground 코루틴
    private IEnumerator UpdateBackgroundCoroutine(bool show)
    {
        // 화면이 완전히 감춰진 경우 Renderer 활성화 (show = true 일 때)
        _isCoroutineRun = true;
        if (_currentAlpha <= 0)
            _background.enabled = true;
        
        // 배경화면 표시
        if (show)
        {
            while (_currentAlpha < 1f)
            {
                _currentAlpha += _fadeSpeed;
                _background.material.SetFloat(AlphaShaderProperty, _currentAlpha);
                yield return null;
            }
        }
        // 배경화면 감춤
        else
        {
            while (_currentAlpha > 0)
            {
                _currentAlpha -= _fadeSpeed;
                _background.material.SetFloat(AlphaShaderProperty, _currentAlpha);
                yield return null;
            }
        }
        
        // 화면이 완전히 감춰진 Renderer 비활성화 (show = false 일 때)
        if (_currentAlpha <= 0)
            _background.enabled = false;
        _isCoroutineRun = false;
    }

    // --------------------------------------------------
    
    /// <summary>
    /// 게임 일시정지 시 수행
    /// </summary>
    private void OnPauseGame()
    {
        // 플레이어 머리 위치로 메뉴 이동
        transform.position = _head.position;
        var rot = _head.rotation.eulerAngles;
        rot.x = rot.z = 0;
        transform.rotation = Quaternion.Euler(rot);

        // 표시
        _event.mainMenu = true;
        UpdateBackground(true);
    }
    
    /// <summary>
    /// 게임 재개 시 수행
    /// </summary>
    private void OnResumeGame()
    {
        _event.mainMenu = false;
        UpdateBackground(false);
    }
    
    // --------------------------------------------------

    public void OnEndSaving()
    {
        _event.OnEndSaving();
    }
}
