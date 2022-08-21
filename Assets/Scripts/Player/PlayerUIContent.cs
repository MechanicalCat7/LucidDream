using System;
using System.Collections;
using TMPro;
using UnityEngine;

/// <summary>
/// Player UI에 표시되는 내용에 관한 스크립트
/// </summary>
public class PlayerUIContent : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private TextMeshProUGUI _text;
    [SerializeField] private float _fadeSpeed;

    // ==================================================
    //  Unity Functions
    // ==================================================

    // ==================================================
    //  Functions
    // ==================================================

    /// <summary>
    /// UI 내용을 설정하고 표시한다.
    /// </summary>
    /// <param name="text">표시할 내용</param>
    /// <param name="duration">표시하는 시간</param>
    public void SetContent(string text, float duration)
    {
        _text.text = text;
        StartCoroutine(ShowContentCoroutine(duration));
    }

    /// <summary>
    ///  UI 내용을 표시하는 코루틴
    /// </summary>
    private IEnumerator ShowContentCoroutine(float duration)
    {
        yield return FadeInCoroutine();
        yield return new WaitForSeconds(duration);
        yield return FadeOutCoroutine();
    }
    
    /// <summary>
    /// 페이드 인 코루틴
    /// </summary>
    private IEnumerator FadeInCoroutine()
    {
        var color = _text.color;
        _text.color = new Color(color.r, color.g, color.b, 0);
        
        while (_text.color.a < 1f)
        {
            _text.color = new Color(color.r, color.g, color.b, _text.color.a + (Time.deltaTime * _fadeSpeed));
            yield return null;
        }
    }
    
    /// <summary>
    /// 페이드 아웃 코루틴
    /// </summary>
    private IEnumerator FadeOutCoroutine()
    {
        var color = _text.color;
        while (_text.color.a > 0)
        {
            _text.color = new Color(color.r, color.g, color.b, _text.color.a - (Time.deltaTime * _fadeSpeed));
            yield return null;
        }
        
        Destroy(gameObject);
    }
}
