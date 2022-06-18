using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    // 싱글톤 오브젝트
    public static GameManager Instance { get; private set; }
    
    // 첫 Update 호출 전 수행
    private void Awake()
    {
        // GameManager 등록
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        // GameManager가 이미 존재할 경우 이 오브젝트를 제거
        else
        {
            if(Instance != this)
                Destroy(gameObject);
        }
    }
    
    // 데이터 매니저
    public Transform DataManager { get; private set; }

    public void RegisterDataManager(Transform target)
    {
        DataManager = target;
    }
    
    // 씬 이벤트
    public BaseSceneEvent SceneEvent { get; private set; }
    
    /// GameManager에 씬 이벤트를 등록한다.
    public void RegisterSceneEvent(BaseSceneEvent target)
    {
        SceneEvent = target;
        Debug.Log($"SceneEvent registered: {target}");
    }
    
    // 플레이어 오브젝트
    public PlayerBase.PlayerObject Player { get; private set; }

    /// GameManager에 플레이어 오브젝트를 등록한다.
    public void RegisterPlayer(PlayerBase.PlayerObject target)
    {
        Player = target;
        Debug.Log($"Player object in {SceneManager.GetActiveScene().name} registered.");
    }
    
    // TODO: 별도 플레이어 클래스로 분리
    /// 플레이어의 이동 상태를 반환한다.
    public static bool IsPlayerMoving()
    {
        var input = Instance.Player.moveInput.action.ReadValue<Vector2>();
        return input != Vector2.zero;
    }
}
