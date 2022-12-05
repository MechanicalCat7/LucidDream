using System.Collections;
using UnityEngine;

public class TitleSceneEvent : BaseSceneEvent
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private SoundData _sound;
    [SerializeField] private Transform _leftDoor;
    [SerializeField] private Transform _rightDoor;
    [SerializeField] private float _duration;
    [SerializeField] private Renderer _fadeScreen;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Start()
    {
        base.Start(); 
        
        GameManager.instance.SetGamePaused(true);
        GameManager.instance.playerManager.leftHand.visible = false;
        GameManager.instance.playerManager.rightHand.visible = false;

        StartCoroutine(TitleAnimCoroutine());
    }

    // ==================================================
    //  Scene Functions
    // ==================================================
    
    /// <summary>
    /// 게임 시작 시 애니메이션
    /// </summary>
    private IEnumerator TitleAnimCoroutine()
    {
        var runTime = 0.0f;
        
        // 페이드 인
        _fadeScreen.material.SetColor("_Color", Color.black);
        while (runTime < _duration)
        {
            runTime += Time.deltaTime;
            var t = runTime / _duration;
            _fadeScreen.material.SetFloat("_Alpha", Mathf.Lerp(1, 0, t));
            yield return null;
        }

        yield return new WaitForSeconds(1f);
        
        // 문 열림
        var leftInitPos = _leftDoor.position;
        var rightInitPos = _rightDoor.position;
        var leftTargetX = (leftInitPos + _leftDoor.right * 0.45f).x;
        var rightTargetX = (rightInitPos - _rightDoor.right * 0.45f).x;
        AudioSource.PlayClipAtPoint(_sound.soundList[0], GameManager.instance.playerManager.head.position);
        
        runTime = 0.0f;
        while (runTime < _duration)
        {
            runTime += Time.deltaTime;
            var t = runTime / _duration;

            _leftDoor.position = new Vector3(Mathf.SmoothStep(leftInitPos.x, leftTargetX, t), leftInitPos.y,
                leftInitPos.z);
            _rightDoor.position = new Vector3(Mathf.SmoothStep(rightInitPos.x, rightTargetX, t), rightInitPos.y,
                rightInitPos.z);
            yield return null;
        }

        yield return new WaitForSeconds(1f);
        GameManager.instance.playerManager.leftHand.ShowControllerModel(true);
        GameManager.instance.playerManager.rightHand.ShowControllerModel(true);
    }
    
    // ==================================================
    //  Data Management
    // ==================================================
}
