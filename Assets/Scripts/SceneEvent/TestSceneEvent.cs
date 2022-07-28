using UnityEngine;

public class TestSceneEvent : BaseSceneEvent
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [SerializeField] private GameObject testObject;
    [SerializeField] private GameObject wall;
    
    // ==================================================
    //  Variables
    // ==================================================

    private bool _isActive;
    
    // ==================================================
    //  Scene Event Functions
    // ==================================================

    public void PushClicked()
    {
        var hand = GameManager.instance.playerManager.rightHand.transform;
        Instantiate(testObject, hand.position, hand.rotation, DataManager.instance.otherObjects);
    }

    public void ChangeActive()
    {
        wall.transform.Rotate(0, 90f, 0, Space.World);
    }
    
    // ==================================================
    //  Data Management
    // ==================================================

}
