using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerHead : MonoBehaviour
{
    [SerializeField] private Renderer blockingScreen;
    
    [SerializeField] private float colliderRadius = 0.015f;
    [SerializeField] private float changingAlphaDuration = 1f;
    [SerializeField] private LayerMask raycastLayer;
    
    private float _alphaTime;
    
    // 매 프레임마다 수행
    private void Update()
    {
        UpdateBlockingScreen();
    }
    
    private void UpdateBlockingScreen()
    {
        var pos = transform.position;
        
        if (Physics.CheckCapsule(pos + transform.right * 0.035f, pos - transform.right * 0.035f, colliderRadius,
                raycastLayer, QueryTriggerInteraction.Ignore))
        {
            BlockingScreenAlpha(true);
        }
        else
        {
            BlockingScreenAlpha(false);
        }
    }

    private void BlockingScreenAlpha(bool state)
    {
        if (state)
        {
            if (Mathf.Approximately(_alphaTime, changingAlphaDuration))
                return;
            _alphaTime = Mathf.Clamp(_alphaTime + Time.deltaTime, 0, changingAlphaDuration);
        }
        else
        {
            if (Mathf.Approximately(_alphaTime, 0))
                return;
            _alphaTime = Mathf.Clamp(_alphaTime - Time.deltaTime, 0, changingAlphaDuration);
        }
        
        blockingScreen.material.SetFloat("_Alpha", Mathf.SmoothStep(0, 1, _alphaTime / changingAlphaDuration));
    }
}
