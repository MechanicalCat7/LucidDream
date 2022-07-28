using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class OffsetGrabInteractable : XRGrabInteractable
{
    // ==================================================
    //  Unity Functions
    // ==================================================
    
    protected override void Awake()
    {
        base.Awake();

        var attachPoint = new GameObject("Offset Attach");
        attachPoint.transform.SetParent(transform);
        attachTransform = attachPoint.transform;
    }
    
    // ==================================================
    //  Override Functions
    // ==================================================
    
    protected override void OnSelectEntering(SelectEnterEventArgs args)
    {
        base.OnSelectEntering(args);
        
        // 오브젝트를 잡은 interactor가 손일 경우 velocity move 활성화
        if (args.interactorObject is CustomDirectInteractor interactor)
        {
            attachTransform.position = interactor.attachTransform.position;
            attachTransform.rotation = interactor.attachTransform.rotation;
            interactor.hand.velocityMove = true;
        }
        else
        {
            attachTransform.position = transform.position;
            attachTransform.rotation = transform.rotation;
        }
    }
    
    protected override void OnSelectExiting(SelectExitEventArgs args)
    {
        base.OnSelectExiting(args);
        
        // 오브젝트를 놓은 interactor가 손일 경우 velocity move 비활성화
        if (args.interactorObject is CustomDirectInteractor interactor)
            interactor.hand.velocityMove = false;
    }
}
