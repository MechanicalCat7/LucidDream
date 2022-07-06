using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseMenu : MonoBehaviour
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private static readonly int AlphaShaderProperty = Shader.PropertyToID("_Alpha");
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("일시정지 시 배경화면")]
    [SerializeField] private Renderer _background;
    
    [Tooltip("화면 전환 속도")]
    [SerializeField] private float _speed;
    
    [Header("Menu")]
    [Tooltip("메인 메뉴")]
    [SerializeField] private Canvas _mainMenu;
    
    // ==================================================
    //  Variables
    // ==================================================

    private Transform _head;
    
    private Coroutine _coroutine;       // 코루틴
    private bool _isCoroutineRun;       // 코루틴이 실행 중인가?
    private float _currentAlpha;        // 현재 배경화면 알파값
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Start()
    {
        _head = GameManager.instance.playerManager.head.transform;
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
                _currentAlpha += _speed;
                _background.material.SetFloat(AlphaShaderProperty, _currentAlpha);
                yield return null;
            }
        }
        // 배경화면 감춤
        else
        {
            while (_currentAlpha > 0)
            {
                _currentAlpha -= _speed;
                _background.material.SetFloat(AlphaShaderProperty, _currentAlpha);
                yield return null;
            }
        }
        
        // 화면이 완전히 감춰진 Renderer 비활성화 (show = false 일 때)
        if (_currentAlpha <= 0)
            _background.enabled = false;
        _isCoroutineRun = false;
    }
    
    /// 게임 일시 정지 시
    public void OnPauseGame()
    {
        // 플레이어 머리 위치로 메뉴 이동
        transform.position = _head.position;
        var rot = _head.rotation.eulerAngles;
        rot.x = 0;
        transform.rotation = Quaternion.Euler(rot);
        
        // 표시
        _mainMenu.enabled = true;
        UpdateBackground(true);
    }
    
    /// 게임 재개 시
    public void OnResumeGame()
    {
        _mainMenu.enabled = false;
        UpdateBackground(false);
    }
    
    public void ShowMenu(Canvas menu)
    {
        _mainMenu.enabled = false;

        menu.enabled = true;
    }
}
