using System;
using UnityEngine;
using UnityEngine.Events;

public class SteeringWheel : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [SerializeField] private Rigidbody meshObject;
    [SerializeField] private HingeJoint hingeObject;

    // ==================================================
    //  Variables
    // ==================================================

    [HideInInspector] public UnityEvent<float> rotationEvent;
    
    private float _currentAngle;
    private float _targetAngle;

    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        _currentAngle = hingeObject.angle;
    }

    private void Update()
    {
        var value = hingeObject.angle - _currentAngle;
        if (value == 0) return;

        switch (value)
        {
            case > 180f:
                value -= 360f;
                break;
            case < -180f:
                value += 360f;
                break;
        }
        
        rotationEvent.Invoke(value);
        _currentAngle = hingeObject.angle;
    }
}
