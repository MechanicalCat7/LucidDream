using System;
using Unity.VisualScripting;
using UnityEngine;

public class NewObject : MonoBehaviour
{
    [Header("Base")] 
    [SerializeField] protected SoundData _sound;
    public SoundData sound => _sound;
    
    [Tooltip("약한 충격이 인식되는 임계점")]
    [SerializeField] protected float _impactLowThreshold;
    
    [Tooltip("강한 충격이 인식되는 임계점. 이 지점부터 피해가 입혀지기 시작함. 0보다 작을 경우 반응하지 않음.")]
    [SerializeField] protected float _impactHighThreshold;
    
    protected AudioSource _audioSource;
    protected Renderer _renderer;
    protected Rigidbody _rigidbody;

    
    protected virtual void Awake()
    {
        _audioSource = transform.AddComponent<AudioSource>();
        _audioSource.spatialBlend = 1f;
        
        TryGetComponent(out _renderer);
        TryGetComponent(out _rigidbody);
    }

    protected virtual void OnCollisionEnter(Collision collision)
    {
        if (_impactHighThreshold < 0)
            return;
        
        // 충격 시 소리
        var impulse = collision.impulse.magnitude;
        if (_impactHighThreshold == 0 || impulse > _impactHighThreshold)
        {
            _audioSource.PlayOneShot(_sound.impactHigh);
        }
        else if (impulse > _impactLowThreshold)
        {
            _audioSource.PlayOneShot(_sound.impactLow);
        }

    }
}
