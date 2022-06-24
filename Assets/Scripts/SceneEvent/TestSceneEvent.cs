using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestSceneEvent : BaseSceneEvent
{
    protected override void Start()
    {
        GameManager.Instance.RegisterSceneEvent(this);
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
