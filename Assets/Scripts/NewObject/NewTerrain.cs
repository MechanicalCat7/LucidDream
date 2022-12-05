using UnityEngine;
using UnityEngine.Events;

public class NewTerrain : MonoBehaviour, IDestroyable
{
    [SerializeField] private SoundData _sound;
    public SoundData sound => _sound;
    
    [Tooltip("파고 가능 여부")]
    [SerializeField] private bool _isDestroyable;
    public bool isDestroyable => _isDestroyable;
    
    [Tooltip("최대 체력")]
    [SerializeField] private float _maxHealth;
    public float maxHealth => _maxHealth;

    private float _currentHealth;
    public float currentHealth => _currentHealth;
    
    [Tooltip("파괴될 때 이벤트")]
    [SerializeField] private UnityEvent _destroyedEvent;
    public UnityEvent destroyedEvent => _destroyedEvent;
    
    [Tooltip("파편 생성 여부")]
    [SerializeField] private bool _fragment;
    
    [Tooltip("파편 오브젝트")]
    [SerializeField] private GameObject[] _fragmentObjects;
    
    
    public void GetDamage(Vector3 origin, float damage, float radius)
    {
        
    }
}
