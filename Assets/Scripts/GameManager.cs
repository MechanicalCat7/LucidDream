using UnityEngine;
using UnityEngine.Events;

public class GameManager
{
    // ==================================================
    //  Game Manager
    // ==================================================

    private static GameManager _instance;
    public static GameManager instance => _instance ??= new GameManager();
    private GameManager()
    {
        Debug.Log("GameManager has been initialized.");
    }

    // ==================================================
    //  Properties
    // ==================================================
    
    public BaseSceneEvent sceneEvent { get; private set; }
    
    public PlayerManager playerManager { get; private set; }
    
    /// <summary>
    /// 게임이 일시정지 상태인가?
    /// </summary>
    public bool isGamePaused { get; private set; }

    // ==================================================
    //  Game Manager Functions
    // ==================================================

    /// <summary>
    /// GameManager에 씬 이벤트를 등록한다.
    /// </summary>
    /// <param name="target"></param>
    public void RegisterSceneEvent(BaseSceneEvent target)
    {
        sceneEvent = target;
        Debug.Log($"SceneEvent registered: {sceneEvent}");
    }
    
    /// <summary>
    /// GameManager에 PlayerManager를 등록한다.
    /// </summary>
    /// <param name="target"></param>
    public void RegisterPlayerManager(PlayerManager target)
    {
        playerManager = target;
        Debug.Log($"PlayerManager registered: {playerManager}");
    }
    
    // --------------------------------------------------

    public void SetGamePaused(bool state)
    {
        isGamePaused = state;
    }
    
    /// <summary>
    /// 게임을 일시정지한다.
    /// </summary>
    public void PauseGame()
    {
        isGamePaused = true;
        playerManager.gamePausedEvent.Invoke();
        Time.timeScale = 0;
    }
    
    /// <summary>
    /// 게임을 재개한다.
    /// </summary>
    public void ResumeGame()
    {
        Time.timeScale = 1f;
        playerManager.gameResumedEvent.Invoke();
        isGamePaused = false;
    }
    
    // --------------------------------------------------

    public void OnEndSaveGame()
    {
        playerManager.pauseMenu.OnEndSaving();
    }

    public void OnBeginLoadGame()
    {
        isGamePaused = true;
        Time.timeScale = 0;
    }

    public void OnEndLoadGame()
    {
        isGamePaused = false;
        Time.timeScale = 1f;
    }
}
