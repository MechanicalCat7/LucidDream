using TMPro;
using UnityEngine;

/// <summary>
/// 일시정지 메뉴 
/// </summary>
public class PauseMenuEvent : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("메인 메뉴")]
    [SerializeField] private Canvas _mainMenu;
    
    [Tooltip("저장 메뉴")]
    [SerializeField] private Canvas _saveMenu;
    
    [Tooltip("불러오기 메뉴")]
    [SerializeField] private Canvas _loadMenu;
    
    [Tooltip("종료 메뉴")]
    [SerializeField] private Canvas _exitMenu;
    
    [Header("Saving Screen")]
    [SerializeField] private Canvas _savingScreen;
    [SerializeField] private TextMeshProUGUI _savingText;
    [SerializeField] private UnityEngine.UI.Button _savingButton;
    private TextMeshProUGUI _savingButtonText;
    
    // ==================================================
    //  Variables
    // ==================================================

    private Canvas[] _menuArray;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        _menuArray = GetComponentsInChildren<Canvas>();

        _savingButtonText = GetComponentInChildren<TextMeshProUGUI>();
    }

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 메인 메뉴의 표시 여부
    /// </summary>
    public bool mainMenu { set => _mainMenu.enabled = value; }

    // ==================================================
    //  Pause Menu Event Functions
    // ==================================================
    
    /// <summary>
    /// 해당 메뉴를 표시한다.
    /// </summary>
    /// <param name="target">표시할 메뉴 캔버스</param>
    private void ShowMenu(Canvas target)
    {
        foreach (var menu in _menuArray)
        {
            menu.enabled = false;
        }
        
        target.enabled = true;
    }
    
    /// <summary>
    /// 메인 메뉴를 표시한다.
    /// </summary>
    public void BackToMain()
    {
        ShowMenu(_mainMenu);
    }
    
    // --------------------------------------------------
    
    public void MainResumeGame()
    {
        GameManager.instance.ResumeGame();
    }

    public void MainSaveState()
    {
        ShowMenu(_saveMenu);
    }

    public void MainLoadState()
    {
        ShowMenu(_loadMenu);
    }

    public void MainExit()
    {
        ShowMenu(_exitMenu);
    }
    
    // --------------------------------------------------

    public void SaveGame()
    {
        ShowMenu(_savingScreen);
        DataManager.instance.SaveState();
    }

    private void OnEndSaving()
    {
        _savingText.text = "저장 완료";
        _savingButton.interactable = true;
        _savingButtonText.text = "확인";
    }

    public void SavingConfirm()
    {
        ShowMenu(_mainMenu);
        _savingText.text = "저장중...";
        _savingButton.interactable = false;
        _savingButtonText.text = "대기";
        
    }
    
    // --------------------------------------------------
    
    
    // --------------------------------------------------

    public void ExitToTitle()
    {
        
    }

    public void ExitGame()
    {
        #if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
        #else
            Application.Quit();
        #endif
    }
}
