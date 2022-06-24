using System;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;

public class Button : SerializableObject
{
    // Range일 경우 0은 눌림, 1은 풀림
    [SerializeField] private ConfigurableJoint button;  // 버튼
    [SerializeField] private Transform anchorPoint;     // 풀렸을 때 기준 위치
    
    [Space]
    [SerializeField] private bool toggle;               // 토글 버튼 여부
    [SerializeField] [Range(0, 1)] private float toggleReturnPoint;     // 토글 버튼의 복귀 위치
    [SerializeField] [Range(0, 1)] private float threshold;
    [SerializeField] private bool locked;               // 잠김 상태
    public bool Locked
    {
        get => locked;
        set
        {
            locked = value;
            _buttonRigid.constraints = value ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        }
    }
    [SerializeField] private bool pressed;              // 버튼 눌림 상태
    public bool Pressed
    {
        get => pressed;
        set
        {
            pressed = value;
            // 토글 버튼일 경우 복귀 지점 변경
            if (toggle)
            {
                var tp = new Vector3(0, _limitDistance * (1 -toggleReturnPoint), 0);
                button.targetPosition = value ? tp : Vector3.zero;
            }
        }
    }

    [Space]
    [SerializeField] [Range(0, 1)] private float pressPoint;        // 버튼 눌림 기준
    [SerializeField] [Range(0, 1)] private float releasePoint;      // 버튼 풀림 기준
    [Space]
    [SerializeField] private UnityEvent buttonPressedEvent;             // 버튼이 눌릴 때 이벤트
    [SerializeField] private UnityEvent buttonReleasedEvent;            // 버튼이 풀릴 때 이벤트
    
    // 컴포넌트
    private Rigidbody _buttonRigid;

    private Vector3 _anchorPoint;
    private float _limitDistance;
    private bool _toggleCheck;                          // 토글 버튼 재입력 방지

    // 스크립트 로드 시 수행
    private void Awake()
    {
        _buttonRigid = button.transform.GetComponent<Rigidbody>();

        _anchorPoint = anchorPoint.position;
        _limitDistance = button.linearLimit.limit;
        
        _buttonRigid.constraints = locked ? RigidbodyConstraints.FreezeAll : RigidbodyConstraints.None;
        
        // 버튼 초기 위치
        var tp = anchorPoint.localPosition;
        tp.y -= _limitDistance * (1 -toggleReturnPoint);
        button.transform.localPosition = pressed ? tp : anchorPoint.localPosition;
        Pressed = pressed;
    }
    
    // 매 프레임마다 수행
    private void Update()
    {
        var distance = 1 - Vector3.Distance(_anchorPoint, button.transform.position) / _limitDistance;
        
        UpdateButtonPressState(distance);
    }

    private void UpdateButtonPressState(float distance)
    {
        // 토글 버튼
        if (toggle)
        {
            if (!_toggleCheck && distance < pressPoint)
            {
                Pressed = !pressed;
                _toggleCheck = true;
                
                if(pressed)
                    buttonPressedEvent.Invoke();
                else
                    buttonReleasedEvent.Invoke();
            }
            if (distance > pressPoint + threshold)
            {
                _toggleCheck = false;
            }
        }
        // 일반 버튼
        else
        {
            if (!pressed && distance < pressPoint)
            {
                Pressed = true;
                buttonPressedEvent.Invoke();
            }
            if (pressed && distance > releasePoint)
            {
                Pressed = false;
                buttonReleasedEvent.Invoke();
            }
        }
    }

    //// 데이터 저장 ////
    [Serializable]
    private class ObjectData
    {
        public int index;
        public string name;
        public float[] buttonPos;
        public float[] buttonRot;
        public bool locked;
        public bool pressed;
    }

    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData
        {
            index = transform.GetSiblingIndex(),
            name = transform.name,
            buttonPos = Vector3ToFloat(button.transform.position),
            buttonRot = QuaternionToFloat(button.transform.rotation),
            locked = locked,
            pressed = pressed
        };
        
        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        button.transform.position = FloatToVector3(od.buttonPos);
        button.transform.rotation = FloatToQuaternion(od.buttonRot);
        Locked = od.locked;
        Pressed = od.pressed;
    }
}
