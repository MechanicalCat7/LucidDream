using UnityEngine;
using UnityEngine.Events;

public interface IDestroyable
{
    /// <summary>
    /// 파괴 가능 여부
    /// </summary>
    bool isDestroyable { get; }
    
    /// <summary>
    /// 최대 체력
    /// </summary>
    float maxHealth { get; }
    
    /// <summary>
    /// 현재 체력
    /// </summary>
    float currentHealth { get; }
    
    /// <summary>
    /// 파괴될 때 이벤트
    /// </summary>
    UnityEvent destroyedEvent { get; }

    /// <summary>
    /// 피해를 입음
    /// </summary>
    /// <param name="origin">피해가 시작된 위치</param>
    /// <param name="damage">최대 피해량</param>
    /// <param name="radius">피해 범위 반지름. 0보다 작을 경우 항상 최대피해</param>
    void GetDamage(Vector3 origin, float damage, float radius);
}
