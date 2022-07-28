using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "NewSoundData", menuName = "Data/Object Sound", order = 1)]
public class ObjectSoundData : ScriptableObject
{
    // ==================================================
    //  Audio List
    // ==================================================
    
    [Tooltip("활성화, 클릭 용도의 소리")]
    public AudioClip activate;
    
    [Tooltip("비활성화, 해제 용도의 소리")]
    public AudioClip deactivate;
    
    [Tooltip("작동 시작, 성공 용도의 소리")]
    public AudioClip enabled;
    
    [Tooltip("작동 중지, 실패 용도의 소리")]
    public AudioClip disabled;
    
    [Tooltip("이동 시의 소리")]
    public AudioClip move;
    
    [Tooltip("충돌 시의 소리")]
    public AudioClip impact;
}
