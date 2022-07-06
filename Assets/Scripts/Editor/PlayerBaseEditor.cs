using UnityEditor;

public class PlayerBaseEditor : Editor
{
    private bool _foldOutPlayer;
    
    private SerializedProperty _xROrigin;
    private SerializedProperty _character;
    private SerializedProperty _head;
    private SerializedProperty _leftHand;
    private SerializedProperty _rightHand;

    private SerializedProperty _walkingThreshold;
    private SerializedProperty _footstepPeriod;
    private SerializedProperty _raycastLayer;

    private void OnEnable()
    {
        _xROrigin = serializedObject.FindProperty("xROrigin");
        _character = serializedObject.FindProperty("character");
        _head = serializedObject.FindProperty("head");
        _leftHand = serializedObject.FindProperty("leftHand");
        _rightHand = serializedObject.FindProperty("rightHand");

        _walkingThreshold = serializedObject.FindProperty("walkingThreshold");
        _footstepPeriod = serializedObject.FindProperty("footstepPeriod");
        _raycastLayer = serializedObject.FindProperty("raycastLayer");
    }

    public override void OnInspectorGUI()
    {
        var data = target as PlayerBody;
        
        EditorGUILayout.Foldout(_foldOutPlayer, "Player");
        if (_foldOutPlayer)
        {
            EditorGUILayout.PropertyField(_xROrigin);
            EditorGUILayout.PropertyField(_character);
            EditorGUILayout.PropertyField(_head);
            EditorGUILayout.PropertyField(_leftHand);
            EditorGUILayout.PropertyField(_rightHand);
        }
        EditorGUILayout.Space();
        EditorGUILayout.PropertyField(_walkingThreshold);
        EditorGUILayout.PropertyField(_footstepPeriod);
        EditorGUILayout.PropertyField(_raycastLayer);

        serializedObject.ApplyModifiedProperties();
    }
}
