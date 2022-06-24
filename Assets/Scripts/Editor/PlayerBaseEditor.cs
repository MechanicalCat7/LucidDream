using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(PlayerBase))]
public class PlayerBaseEditor : Editor
{
    private SerializedProperty _xROrigin;
    private SerializedProperty _character;
    private SerializedProperty _head;
    private SerializedProperty _leftHand;
    private SerializedProperty _rightHand;

    private SerializedProperty _raycastLayer;

    private SerializedProperty _testObject;
    
    private void OnEnable()
    {
        _xROrigin = serializedObject.FindProperty("xROrigin");
        _character = serializedObject.FindProperty("character");
        _head = serializedObject.FindProperty("head");
        _leftHand = serializedObject.FindProperty("leftHand");
        _rightHand = serializedObject.FindProperty("rightHand");

        _raycastLayer = serializedObject.FindProperty("raycastLayer");

        _testObject = serializedObject.FindProperty("testObject");
    }

    public override void OnInspectorGUI()
    {
        var data = target as PlayerBase;
        
        data.foldOutPlayer = EditorGUILayout.Foldout(data.foldOutPlayer, "Player");
        if (data.foldOutPlayer)
        {
            EditorGUILayout.PropertyField(_xROrigin);
            EditorGUILayout.PropertyField(_character);
            EditorGUILayout.PropertyField(_head);
            EditorGUILayout.PropertyField(_leftHand);
            EditorGUILayout.PropertyField(_rightHand);
        }
        EditorGUILayout.Space();
        
        EditorGUILayout.PropertyField(_raycastLayer);

        EditorGUILayout.PropertyField(_testObject);
        
        serializedObject.ApplyModifiedProperties();
    }
}
