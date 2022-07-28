using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class Fragment : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("Prop Data 파일")]
    [SerializeField] private PropData _data;

    // ==================================================
    //  Variables
    // ==================================================

    private AudioSource _audioSource;

    private float _damaged;
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 파괴 가능 여부
    /// </summary>
    private bool breakable => _data.breakable;

    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        _audioSource = transform.AddComponent<AudioSource>();
        _audioSource.spatialBlend = 1f;
    }

    private void OnCollisionEnter(Collision collision)
    {
        // 충돌 소리 재생
        var impulse = collision.impulse.magnitude;
        _audioSource.PlayOneShot(_data.soundData.impact, Mathf.Clamp01(impulse/5f));
        
        // 데미지 입력
        if (_data.breakable && impulse > _data.damageThreshold)
        {
            _damaged += impulse;
            if(_damaged > _data.durability)
                BreakFragment();
        }
    }

    // ==================================================
    //  Fragment Functions
    // ==================================================
    
    /// <summary>
    /// 파편을 제거한다.
    /// </summary>
    private void BreakFragment()
    {
        AudioSource.PlayClipAtPoint(_data.soundData.breaking, transform.position);
        Destroy(gameObject);
    }
}
