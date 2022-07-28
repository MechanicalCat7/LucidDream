using UnityEngine;

public class TestCrane : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private SteeringWheel _wheel;

    [SerializeField] private float minValue;
    [SerializeField] private float maxValue;
    [SerializeField] private float valueMultiplier;
    
    // ==================================================
    //  Variables
    // ==================================================

    private Rigidbody _rigidbody;

    private Vector3 _initialPos;
    private float _currentValue;

    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _initialPos = _rigidbody.position;
        _currentValue = 0;
        
        _wheel.rotationEvent.AddListener(OnWheelRotate);
    }

    // ==================================================
    //  Crane Functions
    // ==================================================

    private void OnWheelRotate(float angle)
    {
        _currentValue = Mathf.Clamp(_currentValue + angle * valueMultiplier, minValue, maxValue);
        
        _rigidbody.MovePosition(_initialPos + Vector3.up * _currentValue);
    }
}
