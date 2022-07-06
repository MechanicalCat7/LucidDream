using UnityEngine;

public class TestSceneEvent : BaseSceneEvent
{
    protected override void Start()
    {
        GameManager.instance.RegisterSceneEvent(this);
    }

    public void PrintYes()
    {
        Debug.Log("Yes");
    }

    public void PrintNo()
    {
        Debug.Log("No");
    }
}
