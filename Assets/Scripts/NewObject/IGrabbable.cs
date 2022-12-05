using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public interface IGrabbable
{
    /// <summary>
    /// XRGrabInteractable 컴포넌트
    /// </summary>
    XRGrabInteractable interactable { get; }
    
    /// <summary>
    /// 잡았을 때 포즈가 존재하는가?
    /// </summary>
    bool isGrabPoseAvailable { get; }
    
    /// <summary>
    /// 인벤토리 추가 가능 여부
    /// </summary>
    bool storable { get; }

    /// <summary>
    /// 오브젝트를 잡았을 때
    /// </summary>
    /// <param name="args"></param>
    void OnSelectEntered(SelectEnterEventArgs args);

    /// <summary>
    /// 오브젝트를 놓았을 때
    /// </summary>
    /// <param name="args"></param>
    void OnSelectExited(SelectExitEventArgs args);
}
