using UnityEngine;
using UnityEngine.Events;

public class NewDestroyableObject : NewObject, IDestroyable
{
    [Header("Destroyable")] 
    [Tooltip("파괴 가능 여부")]
    [SerializeField] private bool _isDestroyable;
    public bool isDestroyable => _isDestroyable;
    
    [Tooltip("최대 체력")]
    [SerializeField] protected float _maxHealth;
    public float maxHealth => _maxHealth;
    
    private float _currentHealth;     // 현재 체력
    public float currentHealth => _currentHealth;
    
    [Space]
    [Tooltip("파괴될 때 이벤트")]
    [SerializeField] protected UnityEvent _destroyedEvent;
    public UnityEvent destroyedEvent => _destroyedEvent;
    
    [Tooltip("파편 생성 여부")]
    [SerializeField] private bool _fragment;
    
    [Tooltip("파편 오브젝트")]
    [SerializeField] private GameObject[] _fragmentObjects;

    protected override void Awake()
    {
        base.Awake();

        _currentHealth = _maxHealth;
    }
    
    protected override void OnCollisionEnter(Collision collision)
    {
        base.OnCollisionEnter(collision);
        
        GetDamage(Vector3.zero, collision.impulse.magnitude, -1f);
    }

    public virtual void GetDamage(Vector3 origin, float damage, float radius)
    {
        if (!_isDestroyable)
            return;

        // 데미지 계산
        Vector3 position = transform.position;
        float damageScale = radius < 0 ? 1f : 1 - (Vector3.Distance(position, origin) / radius);
        float inputDamage = damage * damageScale;
        
        if (_impactHighThreshold == 0 || inputDamage > _impactHighThreshold)
        {
            _audioSource.PlayOneShot(_sound.impactHigh);
        }
        _currentHealth -= inputDamage;

        // 파괴될 경우
        if (_currentHealth <= 0)
        {
            AudioSource.PlayClipAtPoint(_sound.destroy, position);
            _destroyedEvent.Invoke();
            Destroy(gameObject);

            // 파편 생성
            if (!_fragment) return;
            foreach (var child in _fragmentObjects)
            {
                Instantiate(child, position, Quaternion.identity);
            }
        }
    }
}
