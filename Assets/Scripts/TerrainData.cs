using UnityEngine;

public class TerrainData : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("지형의 사운드 데이터")]
    [SerializeField] private SoundData _sound;
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 지형의 사운드 데이터
    /// </summary>
    public SoundData Sound => _sound;
}
