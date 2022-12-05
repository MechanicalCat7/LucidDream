using System;
using System.Collections;
using PathCreation;
using PathCreation.Examples;
using Unity.VisualScripting;
using UnityEngine;

public class Slender : MonoBehaviour
{
    private static readonly int WalkAnimProperty = Animator.StringToHash("Pose");

    [SerializeField] private SoundData _sound;
    [SerializeField] private Animator _animator;
    [SerializeField] private int _animState;
    [SerializeField] private Renderer _renderer;
    public bool visible
    {
        get => _renderer.enabled;
        set => _renderer.enabled = value;
    }
    private AudioSource _audioSource;
    
    [Header("Path")]
    [SerializeField] private PathCreator _pathCreator;
    [SerializeField] private EndOfPathInstruction _end;
    [SerializeField] private float speed;
    [SerializeField] private float time;
    private float _dstTravelled;

    [SerializeField] private bool _moveState;
    public bool moveState
    {
        get => _moveState; 
        set => _moveState = value;
    }


    public int state
    {
        get => _animState;
        set
        {
            _animator.SetInteger(WalkAnimProperty, value);
            _animState = value;
        }
    }

    private void Awake()
    {
        if (!TryGetComponent(out _audioSource))
        {
            _audioSource = transform.AddComponent<AudioSource>();
            _audioSource.spatialBlend = 1f;
        }
        if (!_animator)
        {
            TryGetComponent(out _animator);
        }

        _animator.SetInteger(WalkAnimProperty, _animState);
    }

    private void Update()
    {
        if (!_moveState)
            return;
        
        _dstTravelled += speed * Time.deltaTime;
        transform.position = _pathCreator.path.GetPointAtDistance(_dstTravelled, _end);
        transform.rotation = _pathCreator.path.GetRotationAtDistance(_dstTravelled, _end);
        
        if (_dstTravelled > time)
            Destroy(gameObject);
    }

    public void DestroyObject()
    {
        Destroy(gameObject);
    }

    public void PlayAudio()
    {
        _audioSource.Play();
    }
}
