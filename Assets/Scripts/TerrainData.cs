using System;
using UnityEngine;
using UnityEngine.Events;

public class TerrainData : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("지형의 사운드 데이터")]
    [SerializeField] private MaterialSoundData _sound;
    
    [Header("Breaking")]
    [Tooltip("파괴 가능 여부")]
    [SerializeField] private bool _breakable;
    
    [Tooltip("지형의 내구도")]
    [SerializeField] private float _durability;

    [Tooltip("충격을 인식하는 임계점")] 
    [SerializeField] private float _impactThreshold = 10f;
    
    [Tooltip("파괴될 경우 이벤트")]
    [SerializeField] private UnityEvent _breakEvent;

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 지형의 사운드 데이터
    /// </summary>
    public MaterialSoundData Sound => _sound;
    
    /// <summary>
    /// 파괴 가능 여부
    /// </summary>
    public bool breakable => _breakable;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        if (_breakable && _durability <= 0)
        {
            _breakable = false;
            Debug.LogWarning("Durability 값이 0이하의 값으로 되어있어 breakable을 false로 변경합니다.");
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        var impact = collision.impulse.magnitude;
        
        // 소리 출력
        if (impact > _impactThreshold)
            AudioSource.PlayClipAtPoint(_sound.impactHigh, transform.position);
        else if (impact > _impactThreshold * 0.5f)
            AudioSource.PlayClipAtPoint(_sound.impact, transform.position);
        else
            return;
        
        // 데미지 및 파괴
        GetDamage(impact, transform.position);
    }
    
    // ==================================================
    //  Functions
    // ==================================================
    
    /// <summary>
    /// 데미지를 가한다.
    /// </summary>
    /// <param name="damage">입력된 데미지</param>
    /// <param name="origin">피해가 시작된 위치</param>
    public void GetDamage(float damage, Vector3 origin)
    {
        if (!_breakable) 
            return;
        _durability -= damage;

        // 파괴되었는지 확인
        if (_durability > 0) 
            return;
        AudioSource.PlayClipAtPoint(_sound.breaking, transform.position);
        _breakEvent.Invoke();
        gameObject.SetActive(false);
    }
}
