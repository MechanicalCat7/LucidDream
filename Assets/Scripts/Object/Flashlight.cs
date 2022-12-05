using System;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class Flashlight : GrabbableProp
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private Light _light;
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    private bool _state;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Awake()
    {
        base.Awake();

        _state = _light.enabled;
        _interactable.selectEntered.AddListener(SelectEnteredEvent);
        _interactable.selectExited.AddListener(SelectExitedEvent);
    }
    
    // ==================================================
    //  Functions
    // ==================================================

    private void SelectEnteredEvent(SelectEnterEventArgs args)
    {
        GameManager.instance.playerManager.subActionEvent.AddListener(FlashlightToggle);
    }

    private void SelectExitedEvent(SelectExitEventArgs args)
    {
        GameManager.instance.playerManager.subActionEvent.RemoveListener(FlashlightToggle);
    }
    
    /// <summary>
    /// 손전등 상태를 변경한다.
    /// </summary>
    private void FlashlightToggle()
    {
        _light.enabled = !_state;
        _state = !_state;
    }
    
    // ==================================================
    //  Data Management
    // ==================================================
    

}
