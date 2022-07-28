using System;
using Newtonsoft.Json.Linq;
using Unity.VisualScripting;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Prop : SerializableObject
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("Prop Data 파일")]
    [SerializeField] protected PropData _data;

    // ==================================================
    //  Variables
    // ==================================================
    
    protected AudioSource _audioSource;
    protected Renderer _renderer;
    protected Rigidbody _rigidbody;
    
    protected float _damaged;             // 누적 데미지

    // ==================================================
    //  Properties
    // ==================================================
    
    public bool NoData => _data == null;

    /// <summary>
    /// 프롭의 파괴 가능 여부
    /// </summary>
    public bool breakable => _data.breakable;
    
    /// <summary>
    /// 프롭에 누적된 데미지
    /// </summary>
    public float damaged => _damaged;

    // ==================================================
    //  Unity Functions
    // ==================================================
    
    protected virtual void Awake()
    {
        _renderer = GetComponent<Renderer>();
        _rigidbody = GetComponent<Rigidbody>();
        _audioSource = transform.AddComponent<AudioSource>();
        _audioSource.spatialBlend = 1f;
    }

    protected void OnCollisionEnter(Collision collision)
    {
        // 충돌 소리 재생
        var impulse = collision.impulse.magnitude;
        _audioSource.PlayOneShot(_data.soundData.impact, Mathf.Clamp(impulse * _data.impactScale, 0, _data.volume));
        
        // 데미지 입력
        if (_data.breakable && impulse > _data.damageThreshold)
        {
            _damaged += impulse;
            if(_damaged > _data.durability)
                BreakProp();
        }
    }
    
    // ==================================================
    //  Prop Functions
    // ==================================================
    
    /// <summary>
    /// 프롭을 파괴한다.
    /// </summary>
    protected virtual void BreakProp()
    {
        // 파괴 소리 재생
        AudioSource.PlayClipAtPoint(_data.soundData.breaking, transform.position, _data.volume);
        Destroy(gameObject);
        
        // 파편 생성
        if (_data.createFragmentOnBreak && _data.fragmentObjectList.Count > 0)
        {
            foreach (var fragment in _data.fragmentObjectList)
            {
                var temp = Instantiate(fragment, transform.position, transform.rotation, DataManager.instance.otherObjects);
                Destroy(temp, 5f);
            }
        }
    }

    // ==================================================
    //  Data Management
    // ==================================================
    
    [Serializable]
    private class ObjectData
    {
        public int index;
        public string prefab;
        public string name;
        public float[] pos;
        public float[] rot;
        public float[] vel;
        public float[] ang;
        public float damaged;
    }

    public override void SaveData(JArray jArray)
    {
        var od = new ObjectData()
        {
            index = transform.GetSiblingIndex(),
            prefab = _data.prefab,
            name = transform.name,
            pos = Support.Vector3ToFloat(transform.position),
            rot = Support.QuaternionToFloat(transform.rotation),
            vel = Support.Vector3ToFloat(_rigidbody.velocity),
            ang = Support.Vector3ToFloat(_rigidbody.angularVelocity),
            damaged = _damaged
        };

        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        transform.name = od.name;
        transform.position = Support.FloatToVector3(od.pos);
        transform.rotation = Support.FloatToQuaternion(od.rot);
        _rigidbody.velocity = Support.FloatToVector3(od.vel);
        _rigidbody.angularVelocity = Support.FloatToVector3(od.ang);
        _damaged = od.damaged;
    }
}
