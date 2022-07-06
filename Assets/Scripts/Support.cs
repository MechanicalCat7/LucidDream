using UnityEngine;

public static class Support
{
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
}
