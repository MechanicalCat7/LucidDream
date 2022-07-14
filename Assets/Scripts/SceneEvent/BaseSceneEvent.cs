using System;
using Newtonsoft.Json.Linq;
using UnityEngine;

public class BaseSceneEvent : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    public SerializableDictionary<string, GameObject> prefabList;

    // ==================================================
    //  Unity Functions
    // ==================================================

    protected virtual void Awake()
    {
        GameManager.instance.RegisterSceneEvent(this);
        DataManager.instance.GetObjects();
    }

    protected void Start()
    {
        // 게임 불러오기 상태일 경우 계속 수행
        if (DataManager.instance.isLoadingGame)
            DataManager.instance.LoadStateProcess();
    }

    // ==================================================
    //  Data Management
    // ==================================================

    /// <summary>
    /// JSON 파일에 씬 데이터를 저장한다.
    /// </summary>
    /// <returns>JObject로 변환된 씬 데이터</returns>
    public virtual JObject SaveData() { return new JObject(); }
    
    /// <summary>
    /// JSON 파일로부터 씬 데이터를 가져온다.
    /// </summary>
    /// <param name="jObject">씬 데이터가 담긴 JObject</param>
    public virtual void LoadData(JObject jObject) {}
}
