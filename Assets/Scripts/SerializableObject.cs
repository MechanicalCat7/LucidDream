using System;
using Newtonsoft.Json.Linq;
using UnityEngine;

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
    /// <param name="jObject">JSON으로 저장되어있는 JObject 데이터</param>
    public virtual void LoadData(JObject jObject) {}
    
    // ==================================================
    //  Support Method
    // ==================================================
    
    /// <summary>
    /// Vector3을 Float 배열로 변환한다.
    /// </summary>
    /// <param name="v">변환할 Vector3 값</param>
    /// <returns>변환된 Float 배열</returns>
    protected static float[] Vector3ToFloat(Vector3 v)
    {
        return new[] { v.x, v.y, v.z };
    }
    
    /// <summary>
    /// Quaternion을 Float 배열로 변환한다.
    /// </summary>
    /// <param name="q">변환할 Quaternion 값</param>
    /// <returns>변환된 Float 배열</returns>
    protected static float[] QuaternionToFloat(Quaternion q)
    {
        return new[] { q.x, q.y, q.z, q.w };
    }
    
    /// <summary>
    /// Float 배열을 Vector3으로 변환한다.
    /// </summary>
    /// <param name="f">변환할 Float 배열</param>
    /// <returns>변환된 Vector3 값</returns>
    protected static Vector3 FloatToVector3(float[] f)
    {
        return new Vector3(f[0], f[1], f[2]);
    }
    
    /// <summary>
    /// Float 배열을 Quaternion으로 변환한다.
    /// </summary>
    /// <param name="f">변환할 Float 배열</param>
    /// <returns>변환된 Quaternion 값</returns>
    protected static Quaternion FloatToQuaternion(float[] f)
    {
        return new Quaternion(f[0], f[1], f[2], f[3]);
    }
}
