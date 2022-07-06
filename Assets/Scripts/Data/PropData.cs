using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NewPropData", menuName = "Data/Prop", order = 0)]
public class PropData : ScriptableObject
{
    /// <summary>
    /// 프롭의 사운드 데이터
    /// </summary>
    public SoundData soundData;
    
    /// <summary>
    /// 프롭의 인벤토리 저장 가능 여부
    /// </summary>
    [Header("Storing")]
    public bool storable;
    
    /// <summary>
    /// 프롭의 파괴 가능 여부
    /// </summary>
    [Header("Breaking")]
    public bool breakable;
    
    /// <summary>
    /// 프롭의 내구도. 내구도 이상으로 데미지가 누적되면 파괴된다.
    /// </summary>
    public float durability;
    
    /// <summary>
    /// 데미지가 가해지는 기준점. 기준점 이상의 데미지가 가해졌을 때만 데미지가 누적된다.
    /// </summary>
    public float damageThreshold;
    
    /// <summary>
    /// 파괴될 때 파편의 생성 여부
    /// </summary>
    public bool createFragmentOnBreak;
    
    /// <summary>
    /// 파괴 시 생성되는 파편 오브젝트 리스트
    /// </summary>
    public List<GameObject> fragmentObjectList;
}
