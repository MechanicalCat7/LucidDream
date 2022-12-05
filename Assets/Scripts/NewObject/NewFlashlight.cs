using UnityEngine;

public class NewFlashlight : NewGrabbableObject
{
    private static readonly int PowerShaderProperty = Shader.PropertyToID("_Power");
    
    [Header("Flashlight")]
    [SerializeField] private Light _light;
    public bool state => _light.enabled;

    public void ToggleFlashlight()
    {
        _light.enabled = !state;
        var power = state ? 1f : 0;
        _renderer.material.SetFloat(PowerShaderProperty, power);
    }
}
