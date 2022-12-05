using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NewSoundData", menuName = "Data/Material Sound", order = 1)]
public class MaterialSoundData : ScriptableObject
{
    // ==================================================
    //  Audio List
    // ==================================================
    
    /// <summary>
    /// 걸어다닐 때 소리 리스트
    /// </summary>
    [SerializeField] private List<AudioClip> _walking;
    
    /// <summary>
    /// 달릴 때 소리 리스트
    /// </summary>
    [SerializeField] private List<AudioClip> _running;
    
    /// <summary>
    /// 충격을 받았을 때 소리 리스트
    /// </summary>
    [SerializeField] private List<AudioClip> _impact;
    
    /// <summary>
    /// 강한 충격을 받았을 때 소리 리스트
    /// </summary>
    [SerializeField] private List<AudioClip> _impactHigh;
    
    /// <summary>
    /// 파괴될 때 소리 리스트
    /// </summary>
    [SerializeField] private List<AudioClip> _breaking;
    
    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 걸어다닐 때 소리를 무작위로 출력
    /// </summary>
    public AudioClip walking => _walking[Random.Range(0, _walking.Count - 1)];
    
    /// <summary>
    /// 달릴 때 소리를 무작위로 출력
    /// </summary>
    public AudioClip running => _running[Random.Range(0, _running.Count - 1)];
    
    /// <summary>
    /// 충격을 받았을 때 소리를 무작위로 출력
    /// </summary>
    public AudioClip impact => _impact[Random.Range(0, _impact.Count - 1)];
    
    /// <summary>
    /// 강한 충격을 받았을 때 소리를 무작위로 출력
    /// </summary>
    public AudioClip impactHigh => _impactHigh[Random.Range(0, _impactHigh.Count - 1)];
    
    /// <summary>
    /// 파괴될 때 소리를 무작위로 출력
    /// </summary>
    public AudioClip breaking => _breaking[Random.Range(0, _breaking.Count - 1)];
}
