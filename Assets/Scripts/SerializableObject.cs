using System;
using Newtonsoft.Json.Linq;
using UnityEngine;

public class SerializableObject : MonoBehaviour
{
    /// JSON 파일에 오브젝트 데이터를 기록한다.
    public virtual void SaveData(JArray jArray) {}

    /// JSON 파일로부터 오브젝트 데이터를 가져온다.
    public virtual void LoadData(JObject jObject) {}
    
    /// Vector3을 float 배열로 변환한다.
    protected static float[] Vector3ToFloat(Vector3 v)
    {
        return new[] { v.x, v.y, v.z };
    }
    
    /// Quaternion을 float 배열로 변환한다.
    protected static float[] QuaternionToFloat(Quaternion q)
    {
        return new[] { q.x, q.y, q.z, q.w };
    }
    
    /// Float 배열을 Vector3으로 변환한다.
    protected static Vector3 FloatToVector3(float[] f)
    {
        return new Vector3(f[0], f[1], f[2]);
    }
    
    /// Float 배열을 Quaternion으로 변환한다.
    protected static Quaternion FloatToQuaternion(float[] f)
    {
        return new Quaternion(f[0], f[1], f[2], f[3]);
    }
}
