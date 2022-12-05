using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NewSoundData", menuName = "Data/Sound Data", order = 1)]
public class SoundData : ScriptableObject
{
    [Tooltip("걸어다닐 때 사운드")]
    [SerializeField] private List<AudioClip> _walking;
    /// <summary>
    /// 걸어다닐 때 사운드를 무작위로 출력
    /// </summary>
    public AudioClip walking => SelectRandomAudioClip(_walking);
    
    [Tooltip("달릴 때 사운드")]
    [SerializeField] private List<AudioClip> _running;
    /// <summary>
    /// 달릴 때 사운드
    /// </summary>
    public AudioClip running => SelectRandomAudioClip(_running);
    
    [Tooltip("약한 충격을 받았을 때 사운드")]
    [SerializeField] private List<AudioClip> _impactLow;
    /// <summary>
    /// 약한 충격을 받았을 때 사운드
    /// </summary>
    public AudioClip impactLow => SelectRandomAudioClip(_impactLow);
    
    [Tooltip("강한 충격을 받았을 때 사운드")]
    [SerializeField] private List<AudioClip> _impactHigh;
    /// <summary>
    /// 강한 충격을 받았을 때 사운드
    /// </summary>
    public AudioClip impactHigh => SelectRandomAudioClip(_impactHigh);
    
    [Tooltip("파괴될 때 사운드")]
    [SerializeField] private List<AudioClip> _destroy;
    /// <summary>
    /// 파괴될 때 사운드
    /// </summary>
    public AudioClip destroy => SelectRandomAudioClip(_destroy);
    
    [Tooltip("기타 사운드")]
    [SerializeField] private List<AudioClip> _soundList;
    public List<AudioClip> soundList => _soundList;
    
    
    /// <summary>
    /// 리스트에서 사운드를 무작위로 선택
    /// </summary>
    /// <param name="list">사운드 리스트</param>
    /// <returns>무작위로 선택된 사운드</returns>
    private static AudioClip SelectRandomAudioClip(List<AudioClip> list)
    {
        return list[Random.Range(0, list.Count - 1)];
    }
}
