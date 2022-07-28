using System;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CustomSnapTurnProvider : ActionBasedSnapTurnProvider
{
    // ==================================================
    //  Variables
    // ==================================================
    
    private PlayerManager _player;
    private PlayerBody _body;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Start()
    {
        _player = GameManager.instance.playerManager;
        _body = _player.body;
    }
    
    // ==================================================
    //  Override Functions
    // ==================================================

    /// 컨트롤러의 회전 입력값을 읽는다.
    protected override Vector2 ReadInput()
    {
        if (_body.isMovable && _player.isTurning && !GameManager.instance.isGamePaused)
        {
            _player.UpdateCharacterController();
            _player.character.SimpleMove(Vector3.zero);
            
            return base.ReadInput();
        }

        return Vector2.zero;
    }
}
