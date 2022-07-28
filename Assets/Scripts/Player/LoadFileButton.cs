using System;
using TMPro;
using UnityEngine;

public class LoadFileButton : MonoBehaviour
{
    // ==================================================
    //  Variables
    // ==================================================

    private TextMeshProUGUI _text;
    
    private DataManager.SaveFileInfo _fileInfo;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        _text = GetComponentInChildren<TextMeshProUGUI>();
    }

    // ==================================================
    //  Button Functions
    // ==================================================
    
    /// <summary>
    /// 버튼에 가져온 파일 정보를 추가한다.
    /// </summary>
    /// <param name="info">저장된 파일 정보</param>
    public void SetButton(DataManager.SaveFileInfo info)
    {
        _fileInfo = info;
        _text.text = $"{info.scene}\n{info.time.ToString("yyyy/MM/dd    HH:mm:ss")}";
    }
    
    /// <summary>
    /// 버튼이 클릭되었을 때
    /// </summary>
    public void ButtonClicked()
    {
        DataManager.instance.selectedFile = _fileInfo;
    }
}
