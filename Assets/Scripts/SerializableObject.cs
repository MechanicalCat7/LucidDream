using Newtonsoft.Json.Linq;
using UnityEngine;

/// <summary>
/// 저장 가능한 오브젝트들의 기본 클래스
/// </summary>
public class SerializableObject : MonoBehaviour
{
    // ==================================================
    //  Data Management
    // ==================================================
    
    /// <summary>
    /// JSON 파일에 오브젝트 데이터를 기록한다.
    /// </summary>
    /// <param name="jArray">데이터가 저장될 JArray</param>
    public virtual void SaveData(JArray jArray) {}

    /// <summary>
    /// JSON 파일로부터 오브젝트 데이터를 가져온다.
    /// </summary>
    /// <param name="jObject">오브젝트 데이터가 담긴 JObject</param>
    public virtual void LoadData(JObject jObject) {}
}
