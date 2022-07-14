using UnityEngine;

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
    
    /// <summary>
    /// 게임을 일시정지한다.
    /// </summary>
    public void PauseGame()
    {
        playerManager.gamePausedEvent.Invoke();
    }
    
    /// <summary>
    /// 게임을 재개한다.
    /// </summary>
    public void ResumeGame()
    {
        playerManager.gameResumedEvent.Invoke();
    }
    
    // --------------------------------------------------

    public void OnEndSaveGame()
    {
        
    }

    public void OnBeginLoadGame()
    {
        Time.timeScale = 0;
    }

    public void OnEndLoadGame()
    {
        Time.timeScale = 1f;
    }
}
