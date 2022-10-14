using UnityEditor;

[CustomEditor(typeof(Prop))]
public class PropEditor : Editor
{
    private SerializedProperty _propDataProperty;
    private PropData _propData;
    
    
    private void OnEnable()
    {
        _propDataProperty = serializedObject.FindProperty("_data");
    }

    public override void OnInspectorGUI()
    {
        var data = (Prop)target;
        _propData = _propDataProperty.objectReferenceValue as PropData;
        base.OnInspectorGUI();
        
        EditorGUILayout.Space();
        EditorGUILayout.LabelField("Prop Information", EditorStyles.boldLabel);
        if (data.NoData)
        {
            EditorGUILayout.LabelField("No Data");
        }
        else
        {
            EditorGUILayout.LabelField("Breakable:", data.breakable.ToString());
            EditorGUILayout.LabelField("Damaged:", $"{data.damaged} / {_propData.durability}");
        }
        
    }
    
    
}
