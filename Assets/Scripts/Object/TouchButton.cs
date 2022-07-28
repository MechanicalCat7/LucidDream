using UnityEngine;
using UnityEngine.Events;

public class TouchButton : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [SerializeField] private UnityEvent clickEvent;
    
    // ==================================================
    //  Variables
    // ==================================================

    private int _collideCount;

    // ==================================================
    //  Unity Functions
    // ==================================================

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer != Support.PlayerLayerIndex)
            return;
        
        _collideCount += 1;
        if (_collideCount == 1)
        {
            clickEvent.Invoke();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.layer != Support.PlayerLayerIndex)
            return;
        
        _collideCount -= 1;
    }

}
