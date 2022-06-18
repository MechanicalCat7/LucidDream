using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CustomCharacterControllerDriver : CharacterControllerDriver
{
    [SerializeField] private PlayerBase player;
    
    protected override void UpdateCharacterController()
    {
        if (player.Movable)
        {
            base.UpdateCharacterController();
        }
        else
        {
            player.UpdateCharacterController();
        }
    }
}
