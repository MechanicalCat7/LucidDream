using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class NewTimebomb : NewGrabbableObject
{
    // ==================================================
    //  Static Variables
    // ==================================================

    private static readonly int PowerShaderProperty = Shader.PropertyToID("_Power");
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    /// <summary>
    /// 충돌을 인식할 레이어
    /// </summary>
    [Header("Time Bomb")]
    [SerializeField] private LayerMask _collisionLayer;

    /// <summary>
    /// 지연 시간
    /// </summary>
    [SerializeField] private float _timeDelay;
    
    /// <summary>
    /// 폭발 피해량
    /// </summary>
    [SerializeField] private float _damage;
    
    /// <summary>
    /// 폭발 반경
    /// </summary>
    [SerializeField] private float _radius;
    
    [SerializeField] private GameObject _effect;
    
    // ==================================================
    //  Variables
    // ==================================================

    private bool _isActive;         // 폭탄이 작동상태인가?
    private float _passedTime;      // 작동 후 경과한 시간
    private Coroutine _coroutine;   // 코루틴

    // ==================================================
    //  Unity Functions
    // ==================================================

    protected new void OnCollisionEnter(Collision collision)
    {
        // 작동 조건
        if (!_isActive || !Support.CompareLayer(collision.gameObject.layer, _collisionLayer))
            return;

        var impact = collision.impulse.magnitude;
        if (impact < _impactHighThreshold)
            return;
        
        StopCoroutine(_coroutine);
        Explode();
    }
    
    // ==================================================
    //  Functions
    // ==================================================
    
    /// <summary>
    /// 오브젝트를 잡았을 경우 이벤트
    /// </summary>
    public override void OnSelectEntered(SelectEnterEventArgs args)
    {
        base.OnSelectEntered(args);
        
        TryGetComponent(out Rigidbody rigid);
        rigid.constraints = RigidbodyConstraints.None;
        _isActive = true;
        _coroutine = StartCoroutine(TimerActiveCoroutine());
    }

    private IEnumerator TimerActiveCoroutine()
    {
        _audioSource.PlayOneShot(_sound.soundList[0]);
        
        float time = 0;
        while (time < _timeDelay)
        {
            time += Time.deltaTime;
            _renderer.material.SetFloat(PowerShaderProperty, time/_timeDelay);
            yield return null;
        }
        
        Explode();
    }

    /// <summary>
    /// 폭발 이벤트
    /// </summary>
    private void Explode()
    {
        var position = transform.position;
        AudioSource.PlayClipAtPoint(_sound.destroy ,position);
        Instantiate(_effect, position, Quaternion.identity, DataManager.instance.otherObjects);
        
        var bombHits =
            Physics.SphereCastAll(position, _radius, Vector3.up, 0, _collisionLayer, QueryTriggerInteraction.Ignore);
        foreach (var hitInfo in bombHits)
        {
            if (hitInfo.transform.TryGetComponent(out IDestroyable destroyable))
            {
                destroyable.GetDamage(position, _damage, _radius);
            }
        }
        
        
        Destroy(gameObject);
        destroyedEvent.Invoke();
    }
}
