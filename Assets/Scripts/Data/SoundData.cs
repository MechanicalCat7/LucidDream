using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundData : ScriptableObject
{
    // 오디오 리스트
    public List<AudioClip> walking;
    public List<AudioClip> running;
    public List<AudioClip> impact;
    public List<AudioClip> breaking;
    
    // 리스트에서 오디오를 랜덤으로 선택
    public AudioClip Walking => walking[Random.Range(0, walking.Count - 1)];
    public AudioClip Running => running[Random.Range(0, running.Count - 1)];
    public AudioClip Impact => impact[Random.Range(0, impact.Count - 1)];
    public AudioClip Breaking => breaking[Random.Range(0, breaking.Count - 1)];
}
