using System;
using System.Collections;
using Newtonsoft.Json.Linq;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;

public class Keypad : SerializableObject
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("입력을 표시하는 텍스트")]
    [SerializeField] private TextMeshPro _textScreen;
    
    [Tooltip("풀기위한 암호")]
    [SerializeField] private string _password;

    [Tooltip("최대 길이")] 
    [Range(0, 10)] [SerializeField] private int _maxLength;

    [Tooltip("키패드 소리")] 
    [SerializeField] private ObjectSoundData _soundData;

    [Tooltip("해제 시 이벤트")]
    [SerializeField] private UnityEvent _unlockEvent;
    
    // ==================================================
    //  Variables
    // ==================================================

    private AudioSource _audioSource;
    
    private string _currentInput;           // 현재 입력된 값
    private bool _isInputActive = true;     // 입력 가능한 상황인가?
    private bool _isUnlocked;               // 잠금이 해제되었는가?

    // ==================================================
    //  Properties
    // ==================================================

    // ==================================================
    //  Unity Functions
    // ==================================================

    private void Awake()
    {
        _audioSource = GetComponent<AudioSource>();

        if (_maxLength == 0)
            _maxLength = Mathf.Clamp(_password.Length, 1, 10);
    }
    
    // ==================================================
    //  Keypad Functions
    // ==================================================
    
    /// <summary>
    /// 키패드 입력
    /// </summary>
    /// <param name="key">입력된 값</param>
    public void InputButton(string key)
    {
        if (!_isInputActive)
            return;
        
        _currentInput += key;
        _textScreen.text = _currentInput;
    
        // 최대 길이에 도달할 경우 자동으로 입력값 확인
        if (_currentInput.Length >= _maxLength)
        {
            CheckInput();
        }
        else
        {
            _audioSource.PlayOneShot(_soundData.activate);
        }
    }

    /// <summary>
    /// 입력한 내용을 초기화한다.
    /// </summary>
    public void ClearButton()
    {
        if (!_isInputActive)
            return;

        _currentInput = "";
        _textScreen.text = "";
        _audioSource.PlayOneShot(_soundData.activate);
    }
    
    /// <summary>
    /// 입력한 값이 맞는지 확인한다.
    /// </summary>
    public void CheckInput()
    {
        // 일치하는 경우
        if (_currentInput == _password)
        {
            _isInputActive = false;
            _isUnlocked = true;
            _textScreen.color = Color.green;
            _audioSource.PlayOneShot(_soundData.enabled);
            _unlockEvent.Invoke();
        }
        // 불일치하는 경우
        else
        {
            StartCoroutine(IncorrectAnimCoroutine());
        }
    }
    
    /// <summary>
    /// 입력값이 틀릴 경우 효과
    /// </summary>
    private IEnumerator IncorrectAnimCoroutine()
    {
        _isInputActive = false;
        var color = Color.red;
        _audioSource.PlayOneShot(_soundData.disabled);
        
        // 깜빡거리는 효과
        _textScreen.color = new Color(color.r, color.g, color.b, 0);
        yield return new WaitForSeconds(0.25f);
        _textScreen.color = new Color(color.r, color.g, color.b, 1f);
        yield return new WaitForSeconds(0.25f);
        _textScreen.color = new Color(color.r, color.g, color.b, 0);
        yield return new WaitForSeconds(0.25f);
        _textScreen.color = new Color(color.r, color.g, color.b, 1f);
        yield return new WaitForSeconds(0.25f);
        
        // 초기화
        _currentInput = "";
        _textScreen.text = "";
        _textScreen.color = Color.white;
        _isInputActive = true;
    }
    
    // ==================================================
    //  Data Management
    // ==================================================
    
    [Serializable]
    private class ObjectData
    {
        public int index;
        public string name;
        public float[] pos;
        public float[] rot;
        public bool unlocked;
    }

    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData
        {
            index = transform.GetSiblingIndex(),
            name = transform.name,
            pos = Support.Vector3ToFloat(transform.position),
            rot = Support.QuaternionToFloat(transform.rotation),
            unlocked = _isUnlocked
        };
        
        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();
        transform.position = Support.FloatToVector3(od.pos);
        transform.rotation = Support.FloatToQuaternion(od.rot);

        if (od.unlocked)
        {
            _isUnlocked = true;
            _textScreen.text = _password;
            _textScreen.color = Color.green;
        }
    }
}
