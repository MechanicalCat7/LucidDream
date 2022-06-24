using System;
using Newtonsoft.Json.Linq;
using UnityEngine;

public class Prop : SerializableObject
{
    [SerializeField] private PropData data;             // 데이터 파일
    
    public bool Storable => data.storable;
    private enum StoredHand { None, Left, Right }
    [SerializeField] private StoredHand stored;         // 인벤토리 저장 상태

    public bool Breakable => data.breakable;
    [SerializeField] private float damaged;             // 받은 피해

    private AudioSource _audioSource;
    private Rigidbody _rigidbody;
    
    // 스크립트 로드 시 수행
    protected virtual void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
    }
    
    // 매 프레임마다 수행
    protected virtual void Update()
    {
        
    }

    //// 데이터 저장 ////
    [Serializable]
    private class ObjectData
    {
        public int index;
        public string name;
        public float[] pos;
        public float[] rot;
        public float[] vel;
        public float[] ang;
    }

    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData()
        {
            index = transform.GetSiblingIndex(),
            name = transform.name,
            pos = Vector3ToFloat(transform.position),
            rot = QuaternionToFloat(transform.rotation),
            vel = Vector3ToFloat(_rigidbody.velocity),
            ang = Vector3ToFloat(_rigidbody.angularVelocity)
        };
        
        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        transform.position = FloatToVector3(od.pos);
        transform.rotation = FloatToQuaternion(od.rot);
        _rigidbody.velocity = FloatToVector3(od.vel);
        _rigidbody.angularVelocity = FloatToVector3(od.ang);
    }
}
