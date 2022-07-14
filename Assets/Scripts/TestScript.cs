using UnityEngine;

public class TestScript : MonoBehaviour
{
    [SerializeField] private string fileName;
    
    public void CallSaveState()
    {
        if(Application.isPlaying)
            DataManager.instance.SaveState();
        else
            Debug.LogWarning("Only called in playing mode.");
    }

    public void TestFunc()
    {
        if (Application.isPlaying)
            DataManager.instance.LoadState(DataManager.instance.GetFileInfo(fileName));
        else
            Debug.LogWarning("Only called in playing mode.");
    }
}
