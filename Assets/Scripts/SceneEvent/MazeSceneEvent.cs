using System.Collections;
using Newtonsoft.Json.Linq;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

public class MazeSceneEvent : BaseSceneEvent
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private Volume _volume;
    
    [Header("Wall Event")]
    [SerializeField] private GameObject _entranceWall;
    [SerializeField] private Transform _entranceWallPos;
    [SerializeField] private GameObject _firstWalls;
    [SerializeField] private Transform _firstWallPos;
    [SerializeField] private GameObject _secondWalls;
    [SerializeField] private Transform _secondWallPos;

    // ==================================================
    //  Variables
    // ==================================================
    
    private ChromaticAberration _volumeEffect;
    
    private bool _checkEntranceWall;
    private bool _checkSecondWall;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Awake()
    {
        base.Awake();
        
        // Volume
        var volumeProfile = _volume.profile;
        volumeProfile.TryGet(out _volumeEffect);

        _entranceWall.transform.position = _entranceWallPos.position;
        _firstWalls.transform.position = _firstWallPos.position;
        _secondWalls.transform.position = _secondWallPos.position;
    }
    
    // ==================================================
    //  Scene Functions
    // ==================================================
    
    /// <summary>
    /// 화면 전환 이펙트 코루틴
    /// </summary>
    /// <param name="eventNum">전환 종료 시 이벤트 번호 (1, 2)</param>
    private IEnumerator VolumeEffectCoroutine(int eventNum)
    {
        float duration = 0.5f;
        float runTime = 0;
        float volumeValueIncrease = 0.05f;
        _volumeEffect.intensity.value = 0;
        
        switch (eventNum)
        {
            case 1:
                _entranceWall.SetActive(true);
                break;
            case 2:
                _firstWalls.SetActive(true);
                _secondWalls.SetActive(false);
                break;
        }
        
        // 이벤트
        while (runTime < duration)
        {
            runTime += Time.deltaTime;
            _volumeEffect.intensity.value += volumeValueIncrease;
            yield return null;
        }

        runTime = 0;
        while (runTime < duration)
        {
            runTime += Time.deltaTime;
            _volumeEffect.intensity.value -= volumeValueIncrease;
            yield return null;
        }
        
        _volumeEffect.intensity.value = 0;
        yield return null;
    }

    /// <summary>
    /// 입구가 막히는 이벤트
    /// </summary>
    public void EntranceBlockEvent()
    {
        _checkEntranceWall = true;
        StartCoroutine(VolumeEffectCoroutine(1));
    }
    
    /// <summary>
    /// 물건 파괴 시 지형이 바뀌는 이벤트
    /// </summary>
    public void SecondWallEvent()
    {
        _checkSecondWall = true;
        StartCoroutine(VolumeEffectCoroutine(2));
    }

    // ==================================================
    //  Data Management
    // ==================================================

    private class SceneData
    {
        public bool checkEntranceWall;
        public bool checkSecondWall;
    }
    
    public override JObject SaveData()
    {
        SceneData sd = new SceneData()
        {
            checkEntranceWall = _checkEntranceWall,
            checkSecondWall = _checkSecondWall
        };
        
        return JObject.FromObject(sd);
    }

    public override void LoadData(JObject jObject)
    {
        SceneData sd = jObject.ToObject<SceneData>();

        if (sd.checkEntranceWall)
        {
            _checkEntranceWall = true;
            _entranceWall.SetActive(true);
        }

        if (sd.checkSecondWall)
        {
            _checkSecondWall = true;
            _firstWalls.SetActive(true);
            _secondWalls.SetActive(false);
        }
    }
}
