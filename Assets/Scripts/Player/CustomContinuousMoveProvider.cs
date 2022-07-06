using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CustomContinuousMoveProvider : ActionBasedContinuousMoveProvider
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

    protected override Vector2 ReadInput()
    {
        if (_player.isMoving)
        {
            if (!_body.isMovable)
                _player.ResetCameraPosition();
            
            _player.UpdateCharacterController();
            
            return base.ReadInput();
        }

        return Vector2.zero;
    }
}
