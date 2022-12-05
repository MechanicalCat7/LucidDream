using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class EventTrigger : MonoBehaviour
{
    [Tooltip("이벤트가 발동하는 레이어")]
    [SerializeField] private LayerMask _triggerLayer;
    
    [Tooltip("일회성 이벤트 여부")]
    [SerializeField] private bool _oneTimeEvent;
    
    [Tooltip("발동되는 이벤트")]
    [SerializeField] private UnityEvent _event;
    
    [Tooltip("반복성 이벤트 시 실행 간격")]
    [SerializeField] private float _interval = 1f;
    
    private bool _checkOneTime;     // 일회성 이벤트 시 활성화 확인
    private bool _checkInterval;    // 반복성 이벤트 시 시간 확인

    private void OnTriggerEnter(Collider other)
    {
        if (!Support.CompareLayer(other.gameObject.layer, _triggerLayer)) 
            return;
        
        // 일회성
        if (_oneTimeEvent && !_checkOneTime)
        {
            _checkOneTime = true;
            _event.Invoke();
            Destroy(gameObject);
        }
    }

    private void OnTriggerStay(Collider other)
    {
        if (!Support.CompareLayer(other.gameObject.layer, _triggerLayer))
            return;
        
        // 반복성
        if (!_oneTimeEvent && !_checkInterval)
        {
            _checkInterval = true;
            _event.Invoke();
            StartCoroutine(IntervalCheckCoroutine());
        }
    }

    private IEnumerator IntervalCheckCoroutine()
    {
        yield return new WaitForSeconds(_interval);
        _checkInterval = false;
    }
}
