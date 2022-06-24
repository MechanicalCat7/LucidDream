using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CustomContinuousMoveProvider : ActionBasedContinuousMoveProvider
{
    protected override Vector2 ReadInput()
    {
        if (GameManager.Instance.IsMoving)
        {
            var player = GameManager.Instance.Player;
            if (!player.Movable)
            {
                player.UpdateOriginPosition();
            }
            player.UpdateCharacterController();
            return base.ReadInput();
        }

        return Vector2.zero;
    }
}
