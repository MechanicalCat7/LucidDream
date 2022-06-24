using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CustomSnapTurnProvider : ActionBasedSnapTurnProvider
{
    /// 컨트롤러의 회전 입력값을 읽는다.
    protected override Vector2 ReadInput()
    {
        var player = GameManager.Instance.Player;
        // TODO: 이동 불가 지역에서 회전 시, 회전 금지와 위치 이동 둘 중 하나 선택 (현재는 회전 금지)
        if (player.Movable && GameManager.Instance.IsTurning)
        {
            player.UpdateCharacterController();
            player.Character.SimpleMove(Vector3.zero);
            return base.ReadInput();
        }
        
        // 위치 이동
        // if (GameManager.Instance.IsTurning)
        // {
        //     var player = GameManager.Instance.Player;
        //     if (!player.Movable)
        //         player.UpdateOriginPosition();
        //     player.UpdateCharacterController();
        //     player.Character.SimpleMove(Vector3.zero);
        //     return base.ReadInput();
        // }

        return Vector2.zero;
    }
}
