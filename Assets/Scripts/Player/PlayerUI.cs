using System;
using UnityEngine;

public class PlayerUI : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    /// <summary>
    /// 내용을 표시할 Canvas
    /// </summary>
    [SerializeField] private Canvas _canvas;
    
    /// <summary>
    /// 플레이어의 시점을 따라가는 속도
    /// </summary>
    [SerializeField] private float _rotateSpeed;
    
    /// <summary>
    /// 표시 가능한 최대 개수
    /// </summary>
    [SerializeField] private int _maxContentCount = 5;

    [SerializeField] private GameObject _textContent;

    // ==================================================
    //  Variables
    // ==================================================

    private PlayerManager _player;
    private Transform _head;

    private bool _isDisplaying;
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 현재 캔버스에 있는 컨텐츠의 개수
    /// </summary>
    private int contentCount => _canvas.transform.childCount;
    
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

    private void Update()
    {
        if(contentCount > 0)
            transform.rotation = Quaternion.Slerp(transform.rotation, _head.rotation, Time.deltaTime * _rotateSpeed);
    }

    // ==================================================
    //  Player UI Functions
    // ==================================================
    
    /// <summary>
    /// 게임 일시정지 시 수행
    /// </summary>
    private void OnPauseGame()
    {
        _canvas.enabled = false;
    }
    
    /// <summary>
    /// 게임 재개 시 수행
    /// </summary>
    private void OnResumeGame()
    {
        _canvas.enabled = true;
    }
    
    // --------------------------------------------------

    /// <summary>
    /// 현재 컨텐츠의 개수를 확인하고 제거한다.
    /// </summary>
    private void CheckContentCount()
    {
        var canvas = _canvas.transform;

        if (canvas.childCount >= _maxContentCount)
            Destroy(canvas.GetChild(0).gameObject);
    }
    
    /// <summary>
    /// UI에 메시지를 표시한다.
    /// </summary>
    /// <param name="msg">표시할 메시지</param>
    /// <param name="duration">표시하는 시간</param>
    public void PushTextMessage(string msg, float duration = 5f)
    {
        CheckContentCount();
        
        var content = Instantiate(_textContent, _canvas.transform);
        var contentComp = content.GetComponent<PlayerUIContent>();
        contentComp.SetContent(msg, duration);
    }
}
