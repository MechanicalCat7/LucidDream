using UnityEngine;

public static class Support
{
    // ==================================================
    //  Variables
    // ==================================================

    public const int PlayerLayerIndex = 7;
    public const int GrabbedLayerIndex = 8;
    public const int InventoryLayerIndex = 9;
    public const int PropLayerIndex = 10;

    // ==================================================
    //  Functions
    // ==================================================
    
    /// <summary>
    /// 두 레이어가 같은지, 또는 레이어가 레이어 마스크에 포함되어 있는지 확인한다.
    /// </summary>
    /// <param name="target">대상 레이어</param>
    /// <param name="layerMask">비교할 레이어 마스크</param>
    /// <returns></returns>
    public static bool CompareLayer(int target, LayerMask layerMask)
    {
        return (layerMask & 1 << target) > 0;
    }
    
    /// <summary>
    /// 오브젝트와 자식 오브젝트들의 레이어를 변경한다.
    /// </summary>
    /// <param name="target">레이어를 변경할 오브젝트</param>
    /// <param name="layerIndex">레이어 인덱스 번호</param>
    public static void ChangeLayer(Transform target, int layerIndex)
    {
        target.gameObject.layer = layerIndex;
        foreach (Transform child in target)
        {
            ChangeLayer(child,layerIndex);
        }
    }
    
    // --------------------------------------------------
    
    /// <summary>
    /// Vector3을 Float 배열로 변환한다.
    /// </summary>
    /// <param name="v">변환할 Vector3 값</param>
    /// <returns>변환된 Float 배열</returns>
    public static float[] Vector3ToFloat(Vector3 v)
    {
        return new[] { v.x, v.y, v.z };
    }
    
    /// <summary>
    /// Quaternion을 Float 배열로 변환한다.
    /// </summary>
    /// <param name="q">변환할 Quaternion 값</param>
    /// <returns>변환된 Float 배열</returns>
    public static float[] QuaternionToFloat(Quaternion q)
    {
        return new[] { q.x, q.y, q.z, q.w };
    }
    
    /// <summary>
    /// Float 배열을 Vector3으로 변환한다.
    /// </summary>
    /// <param name="f">변환할 Float 배열</param>
    /// <returns>변환된 Vector3 값</returns>
    public static Vector3 FloatToVector3(float[] f)
    {
        return new Vector3(f[0], f[1], f[2]);
    }
    
    /// <summary>
    /// Float 배열을 Quaternion으로 변환한다.
    /// </summary>
    /// <param name="f">변환할 Float 배열</param>
    /// <returns>변환된 Quaternion 값</returns>
    public static Quaternion FloatToQuaternion(float[] f)
    {
        return new Quaternion(f[0], f[1], f[2], f[3]);
    }
}
