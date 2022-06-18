using UnityEngine;

public class TestScript : MonoBehaviour
{
    private void Update()
    {
        Debug.Log(GameManager.Instance.Player.xROrigin.transform.position);
    }
}
