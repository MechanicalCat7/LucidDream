using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

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
    [SerializeField] private TextMeshProUGUI _savingButtonText;

    [Header("Load Screen")] 
    [SerializeField] private Transform _scrollView;
    [SerializeField] private GameObject _fileButton;

    [Header("Continue Screen")] 
    [SerializeField] private Canvas _continueScreen;
    [SerializeField] private TextMeshProUGUI _continueText;
    private bool _loadGameState;
    
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
        ClearFileList();
        LoadFileList();
        DataManager.instance.selectedFile = null;
        ShowMenu(_loadMenu);
    }

    public void MainExit()
    {
        ShowMenu(_exitMenu);
    }

    public void MainNewGame()
    {
        SceneManager.LoadScene("Practice");
        GameManager.instance.SetGamePaused(false);
    }
    
    // --------------------------------------------------

    public void SaveGame()
    {
        ShowMenu(_savingScreen);
        DataManager.instance.SaveState();
    }
    
    /// <summary>
    /// 저장이 끝났을 때 수행
    /// </summary>
    public void OnEndSaving()
    {
        _savingText.text = "저장 완료";
        _savingButton.interactable = true;
        _savingButtonText.text = "확인";
    }
    
    /// <summary>
    /// 저장 완료 후 확인 버튼을 눌렀을 때
    /// </summary>
    public void SavingConfirm()
    {
        ShowMenu(_mainMenu);
        _savingText.text = "저장중...";
        _savingButton.interactable = false;
        _savingButtonText.text = "대기";
        
    }
    
    // --------------------------------------------------

    public void LoadGameButton()
    {
        if (DataManager.instance.selectedFile == null)
            return;
        
        _continueText.text = "불러오기:\nFileName";
        _loadGameState = true;
        ShowMenu(_continueScreen);
    }

    public void LoadDeleteButton()
    {
        if (DataManager.instance.selectedFile == null)
            return;
        
        _continueText.text = "삭제:\nFileName";
        _loadGameState = false;
        ShowMenu(_continueScreen);
    }
    
    /// <summary>
    /// 게임 불러오기
    /// </summary>
    private void LoadGame()
    {
        DataManager.instance.LoadState(DataManager.instance.selectedFile);
    }
    
    /// <summary>
    /// 저장된 파일 삭제
    /// </summary>
    private void LoadDelete()
    {
        File.Delete($"{DataManager.SavePath}/{DataManager.instance.selectedFile.name}");
        DataManager.instance.selectedFile = null;
        MainLoadState();
    }

    public void ContinueButton()
    {
        if (_loadGameState)
            LoadGame();
        else
            LoadDelete();
    }
    
    public void ContinueCancel()
    {
        ShowMenu(_loadMenu);
    }
    
    /// <summary>
    /// 저장된 파일 목록을 스크롤 뷰로 가져온다.
    /// </summary>
    private void LoadFileList()
    {
        if (!Directory.Exists(DataManager.SavePath))
            Directory.CreateDirectory(DataManager.SavePath);

        var saveFiles = Directory.GetFiles(DataManager.SavePath, "*.json");
        if (saveFiles.Length <= 0) return;
        
        foreach (var saveFile in saveFiles)
        {
            var fileInfo = DataManager.instance.GetFileInfo(saveFile);
            
            GameObject button = Instantiate(_fileButton, _scrollView);
            var buttonComp = button.GetComponent<LoadFileButton>();
            buttonComp.SetButton(fileInfo);
        }
    }
    
    /// <summary>
    /// 스크롤 뷰의 내용을 모두 지운다.
    /// </summary>
    private void ClearFileList()
    {
        foreach (Transform child in _scrollView)
        {
            if (child != _scrollView)
                Destroy(child.gameObject);
        }
    }
    
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
