using UnityEngine;

public class GameManager
{
    // ==================================================
    //  GameManager
    // ==================================================

    private static GameManager _instance;
    public static GameManager instance => _instance ??= new GameManager();
    
    public Transform dataManager { get; private set; }
    public BaseSceneEvent sceneEvent { get; private set; }
    public PlayerManager playerManager { get; private set; }
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 게임이 일시정지 상태인가?
    /// </summary>
    public bool isGamePaused { get; private set; }

    // ==================================================
    //  GameManager Functions
    // ==================================================
    
    public void RegisterDataManager(Transform target)
    {
        dataManager = target;
    }
    
    public void RegisterSceneEvent(BaseSceneEvent target)
    {
        sceneEvent = target;
    }
    
    public void RegisterPlayerManager(PlayerManager target)
    {
        playerManager = target;
    }
    
    // --------------------------------------------------
    
    
}
