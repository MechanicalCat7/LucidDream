using System;
using UnityEngine;

/// <summary>
/// 컨트롤러 조작 설명용 오브젝트
/// </summary>
public class ControllerHint : MonoBehaviour
{
    public enum Button
    {
        Up, Down, Stick, Grip, Trigger
    }
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private Renderer _controller;
    
    [SerializeField] private Renderer _up;
    [SerializeField] private Renderer _down;
    [SerializeField] private Renderer _stick;
    [SerializeField] private Renderer _grip;
    [SerializeField] private Renderer _trigger;

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 오브젝트 표시 여부
    /// </summary>
    public bool visible
    {
        get => _controller.enabled;
        set
        {
            HideButtonHighlight();
            _controller.enabled = value;
        }
    }
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        _controller.enabled = false;
    }

    // ==================================================
    //  Functions
    // ==================================================
    
    /// <summary>
    /// 해당 버튼을 강조 표시한다.
    /// </summary>
    /// <param name="button">표시할 버튼</param>
    public void ShowButtonHighlight(Button button)
    {
        switch (button)
        {
            case Button.Up:
                _up.enabled = true;
                break;
            case Button.Down:
                _down.enabled = true;
                break;
            case Button.Stick:
                _stick.enabled = true;
                break;
            case Button.Grip:
                _grip.enabled = true;
                break;
            case Button.Trigger:
                _trigger.enabled = true;
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(button), button, null);
        }
    }
    
    /// <summary>
    /// 강조 표시된 버튼을 모두 숨긴다.
    /// </summary>
    public void HideButtonHighlight()
    {
        _up.enabled = false;
        _down.enabled = false;
        _stick.enabled = false;
        _grip.enabled = false;
        _trigger.enabled = false;
    }
}
