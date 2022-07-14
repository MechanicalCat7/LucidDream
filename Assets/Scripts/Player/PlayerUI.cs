using System;
using UnityEngine;

public class PlayerUI : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private Canvas _canvas;
    [SerializeField] private float _rotateSpeed;
    [SerializeField] private Transform _test;
    
    // ==================================================
    //  Variables
    // ==================================================

    private Transform _head;

    private bool _isDisplaying;

    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Start()
    {
        _head = GameManager.instance.playerManager.head.transform;
    }

    private void Update()
    {
        if(_isDisplaying)
            transform.rotation = Quaternion.Slerp(transform.rotation, _test.rotation, Time.deltaTime * _rotateSpeed);
    }

    // ==================================================
    //  Player UI Functions
    // ==================================================

    public void PushTextMessage(string msg, float time = 5f)
    {
        
    }
}
