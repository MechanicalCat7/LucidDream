using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    /// GameManager 오브젝트 인스턴스
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
    
    /// 데이터 매니저
    public Transform DataManager { get; private set; }

    public void RegisterDataManager(Transform target)
    {
        DataManager = target;
    }
    
    /// 씬 이벤트
    public BaseSceneEvent SceneEvent { get; private set; }
    
    /// GameManager에 씬 이벤트를 등록한다.
    public void RegisterSceneEvent(BaseSceneEvent target)
    {
        SceneEvent = target;
        Debug.Log($"SceneEvent registered: {target}");
    }
    
    /// 플레이어 오브젝트
    public PlayerBase Player { get; private set; }

    /// GameManager에 플레이어 오브젝트를 등록한다.
    public void RegisterPlayer(PlayerBase target)
    {
        Player = target;
        Debug.Log($"Player object in {SceneManager.GetActiveScene().name} registered.");
    }
    
    // 컨트롤러 입력
    [SerializeField] private InputActionProperty moveAction;
    public bool IsMoving { get; private set; }
    [SerializeField] private InputActionProperty turnAction;
    public bool IsTurning { get; private set; }
    [SerializeField] private InputActionProperty menuButtonAction;
    public bool MenuButtonPressed { get; private set; }
    
    // 매 프레임마다 호출
    private void Update()
    {
        // 컨트롤러 입력 감지
        IsMoving = moveAction.action.ReadValue<Vector2>() != Vector2.zero;
        IsTurning = turnAction.action.ReadValue<Vector2>() != Vector2.zero;
        MenuButtonPressed = menuButtonAction.action.ReadValue<float>() > 0;
    }
}
