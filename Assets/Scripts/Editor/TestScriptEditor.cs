using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(TestScript))]
public class TestScriptEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        
        var data = (TestScript)target;

        if (GUILayout.Button("Save State"))
        {
            data.CallSaveState();
        }
        
        if (GUILayout.Button("Test Function"))
        {
            data.TestFunc();
        }
    }
}
