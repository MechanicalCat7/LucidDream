using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NewPropData", menuName = "Data/Prop", order = 0)]
public class PropData : ScriptableObject
{
    public SoundData soundData;
    
    [Header("Storing")]
    public bool storable;
    
    [Header("Breaking")]
    public bool breakable;
    public float durability;
    public float damageThreshold;
    public bool createFragmentOnBreak;
}
