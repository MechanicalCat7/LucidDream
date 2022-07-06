using System;
using System.Collections;
using UnityEngine;

public class TestScript : MonoBehaviour
{
    public ConfigurableJoint joint;

    private void Start()
    {
        StartCoroutine(UpdateJoint());
    }

    private IEnumerator UpdateJoint()
    {
        while (true)
        {
            joint.autoConfigureConnectedAnchor = false;
            yield return new WaitForFixedUpdate();
            joint.autoConfigureConnectedAnchor = true;
            yield return null;
        }
    }
}
