using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class KeySocketInteractor : XRSocketInteractor
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Header("Key")]
    [SerializeField] private string keyName;
    
    // ==================================================
    //  Override Functions
    // ==================================================

    // Hover 가능 여부 판단
    public override bool CanHover(IXRHoverInteractable interactable)
    {
        return base.CanHover(interactable);
    }
    
    // Select 가능 여부 판단
    public override bool CanSelect(IXRSelectInteractable interactable)
    {
        return base.CanSelect(interactable) && interactable.transform.name == keyName;
    }
}
