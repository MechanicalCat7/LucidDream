using UnityEditor;

public class PropEditor : Editor
{
    private SerializedProperty _propDataProperty;
    private PropData _propData;
    
    
    private void OnEnable()
    {
        _propDataProperty = serializedObject.FindProperty("data");
    }

    public override void OnInspectorGUI()
    {
        var data = (Prop)target;
        _propData = _propDataProperty.objectReferenceValue as PropData;
        base.OnInspectorGUI();
        
        EditorGUILayout.Space();
        EditorGUILayout.LabelField("Prop Information", EditorStyles.boldLabel);
        EditorGUILayout.LabelField("Breakable:", data.NoData ? "No Data" : data.breakable.ToString());
        EditorGUILayout.LabelField("Damaged:", data.NoData ? "No Data" : $"{data.damaged} / {_propData.durability}");
    }
    
    
}
