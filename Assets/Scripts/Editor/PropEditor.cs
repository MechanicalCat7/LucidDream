using UnityEditor;

[CustomEditor(typeof(Prop))]
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
        EditorGUILayout.LabelField("Breakable:", data.NoData ? "No Data" : data.Breakable.ToString());
        EditorGUILayout.LabelField("Damaged:", data.NoData ? "No Data" : $"{data.Damaged} / {_propData.durability}");
    }
    
    
}
