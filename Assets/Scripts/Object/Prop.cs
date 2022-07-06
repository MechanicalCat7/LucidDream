using System;
using Newtonsoft.Json.Linq;
using Unity.VisualScripting;
using UnityEngine;

public enum StoredHand
{
    None, Left, Right
}

[RequireComponent(typeof(Rigidbody))]
public class Prop : SerializableObject
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("Prop Data 파일")]
    [SerializeField] private PropData _data;

    // ==================================================
    //  Properties
    // ==================================================
    
    public bool NoData => _data == null;
    
    /// <summary>
    /// 프롭의 인벤토리 저장 가능 여부
    /// </summary>
    public bool Storable => _data.storable;
    
    /// <summary>
    /// 프롭의 파괴 가능 여부
    /// </summary>
    public bool Breakable => _data.breakable;
    
    /// <summary>
    /// 프롭에 누적된 데미지
    /// </summary>
    public float Damaged => _damaged;
    
    // ==================================================
    //  Variables
    // ==================================================
    
    private AudioSource _audioSource;
    private Rigidbody _rigidbody;
    
    private StoredHand _stored;         // 인벤토리에 저장된 손의 위치
    private float _damaged;             // 누적 데미지
    
    // ==================================================
    //  Unity Functions
    // ==================================================
    
    protected void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _audioSource = transform.AddComponent<AudioSource>();
        _audioSource.spatialBlend = 1f;
    }
    
    protected void Update()
    {
        
    }

    protected void OnCollisionEnter(Collision collision)
    {
        var impulse = collision.impulse.magnitude;
        Debug.Log(impulse);
        _audioSource.PlayOneShot(_data.soundData.impact, Mathf.Clamp01(impulse/5f));
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
    protected void BreakProp()
    {
        // 파괴 소리 재생
        AudioSource.PlayClipAtPoint(_data.soundData.breaking, transform.position);
        Destroy(gameObject);
        
        // 파편 생성
        if (_data.createFragmentOnBreak && _data.fragmentObjectList.Count > 0)
        {
            foreach (var fragment in _data.fragmentObjectList)
            {
                Instantiate(fragment, transform.position, transform.rotation);
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
        public string name;
        public float[] pos;
        public float[] rot;
        public float[] vel;
        public float[] ang;
        public int stored;
        public float damaged;
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
            ang = Vector3ToFloat(_rigidbody.angularVelocity),
            damaged = _damaged
        };
        
        od.stored = _stored switch
        {
            StoredHand.None => 0,
            StoredHand.Left => 1,
            StoredHand.Right => 2,
            _ => -1
        };

        jArray.Add(JToken.FromObject(od));
    }

    public override void LoadData(JObject jObject)
    {
        var od = jObject.ToObject<ObjectData>();

        transform.name = od.name;
        var player = GameManager.instance.playerManager;
        switch (od.stored)
        {
            case 1:
                transform.position = player.leftHand.transform.position;
                transform.rotation = player.leftHand.transform.rotation;
                break;
            case 2:
                transform.position = player.rightHand.transform.position;
                transform.rotation = player.rightHand.transform.rotation;
                break;
            default:
                transform.position = FloatToVector3(od.pos);
                transform.rotation = FloatToQuaternion(od.rot);
                _rigidbody.velocity = FloatToVector3(od.vel);
                _rigidbody.angularVelocity = FloatToVector3(od.ang);
                break;
        }
        _damaged = od.damaged;
    }
}
