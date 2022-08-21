using UnityEngine;
using UnityEngine.Events;

public class EventTrigger : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [Tooltip("이벤트가 발동하는 레이어")]
    [SerializeField] private LayerMask _triggerLayer;
    
    [Tooltip("일회성 이벤트 여부")]
    [SerializeField] private bool _oneTimeEvent;
    
    [Tooltip("발동되는 이벤트")]
    [SerializeField] private UnityEvent _event;

    // ==================================================
    //  Unity Functions
    // ==================================================

    private void OnTriggerEnter(Collider other)
    {
        if (!Support.CompareLayer(other.gameObject.layer, _triggerLayer)) 
            return;
        
        _event.Invoke();
        if(_oneTimeEvent) 
            Destroy(gameObject);
    }
}
