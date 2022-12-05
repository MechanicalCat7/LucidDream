using UnityEngine;

public class TimeBombEffect : MonoBehaviour
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private static readonly int AlphaShaderProperty = Shader.PropertyToID("_Alpha");
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private float _duration = 0.3f;
    
    // ==================================================
    //  Variables
    // ==================================================

    private float _currentTime;
    private Renderer _renderer;
    
    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        _renderer = GetComponent<Renderer>();
        _currentTime = _duration;
    }
    
    private void Update()
    {
        if (_currentTime < 0)
            Destroy(gameObject);

        _currentTime -= Time.deltaTime;
        float currentValue = _currentTime / _duration;
        _renderer.material.SetFloat(AlphaShaderProperty, currentValue);
    }
}
