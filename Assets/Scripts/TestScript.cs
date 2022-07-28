using UnityEngine;

public class TestScript : MonoBehaviour
{
    private int _count;
    
    public void PushTestMessage()
    {
        if (Application.isPlaying)
        {
            GameManager.instance.playerManager.playerUI.PushTextMessage($"Test Message {_count}", 2f);
            _count += 1;
        }
        else
        {
            Debug.LogWarning("Only called in playing mode.");
        }
    }

}
