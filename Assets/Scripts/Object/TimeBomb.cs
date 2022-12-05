
using System.Collections;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class TimeBomb : GrabbableProp
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
    /// 폭발을 위한 충격 임계점
    /// </summary>
    [SerializeField] private float _impactThreshold = 10f;
    
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

    [SerializeField] private ObjectSoundData _bombSound;
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

    protected override void Awake()
    {
        base.Awake();

        if (TryGetComponent(out XRGrabInteractable interactable))
        {
            interactable.selectEntered.AddListener(OnSelectEntered);
        }
    }

    protected new void OnCollisionEnter(Collision collision)
    {
        // 작동 조건
        if (!_isActive || !Support.CompareLayer(collision.gameObject.layer, _collisionLayer))
            return;
        Debug.Log("Bomb Collided");
        
        var impact = collision.impulse.magnitude;
        Debug.Log(impact);
        if (impact < _impactThreshold)
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
    private void OnSelectEntered(SelectEnterEventArgs args)
    {
        TryGetComponent(out Rigidbody rigid);
        rigid.constraints = RigidbodyConstraints.None;
        _isActive = true;
        _coroutine = StartCoroutine(TimerActiveCoroutine());
    }

    private IEnumerator TimerActiveCoroutine()
    {
        _audioSource.PlayOneShot(_bombSound.activate);
        
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
        AudioSource.PlayClipAtPoint(_bombSound.impact ,position);
        Instantiate(_effect, position, Quaternion.identity, DataManager.instance.otherObjects);
        
        var bombHits =
            Physics.SphereCastAll(position, _radius, Vector3.up, 0, _collisionLayer, QueryTriggerInteraction.Ignore);
        foreach (var hitInfo in bombHits)
        {
            if (hitInfo.transform.TryGetComponent(out TerrainData terrain))
            {
                terrain.GetDamage(_damage, position);
            }
            else if(hitInfo.transform.TryGetComponent(out Prop prop))
            {
                prop.GetDamage(_damage, position);
            }
        }
    
        _breakEvent.Invoke();
        Destroy(gameObject);
    }
    
}
