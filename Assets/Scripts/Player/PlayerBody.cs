using Unity.VisualScripting;
using UnityEngine;

public class PlayerBody : MonoBehaviour
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [Tooltip("걷기 기준 속도")]
    [SerializeField] private float _walkingThreshold = 0.2f;
    
    [Tooltip("발걸음 소리의 재생 주기")]
    [SerializeField] private float _footstepPeriod = 1f;
    
    [Tooltip("충돌로 인식하는 레이어")]
    [SerializeField] private LayerMask _collisionLayer;
    
    // ==================================================
    //  Variables
    // ==================================================

    private AudioSource _audioSource;
    
    private PlayerManager _player;
    private Transform _xrOrigin;
    private CharacterController _character;
    private Transform _head;

    private float _footstepTime;
    
    // ==================================================
    //  Properties
    // ==================================================

    /// <summary>
    /// 플레이어가 이동 가능한 위치에 있는가?
    /// </summary>
    public bool isMovable { get; private set; }

    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        _audioSource = transform.AddComponent<AudioSource>();
        _audioSource.spatialBlend = 1f;
    }

    private void Start()
    {
        _player = GameManager.instance.playerManager;
        _xrOrigin = _player.xrOrigin.transform;
        _character = _player.character;
        _head = _player.head.transform;
    }

    private void Update()
    {
        // 이동 가능 상태 갱신
        isMovable = CheckMovable();
        
        CheckFootstep();
    }
    
    // ==================================================
    //  Player Body Functions
    // ==================================================

    /// <summary>
    /// 현재 플레이어의 이동 가능 상태를 검사한다.
    /// </summary>
    /// <returns>플레이어의 이동 가능 상태를 반환한다.</returns>
    private bool CheckMovable()
    {
        return  !IsBlocked() && !IsCollided();
    }
    
    // 중간 장애물 검사
    private bool IsBlocked()
    {
        var start = _player.characterPosInWorldSpace;
        start.y = _xrOrigin.position.y + _character.stepOffset;
        var end = _head.position;

        var v = end - start;
        v.y = 0;
        return Physics.Raycast(start, v.normalized, v.magnitude, _collisionLayer, QueryTriggerInteraction.Ignore);
    }
    
    // 충돌 검사
    private bool IsCollided()
    {
        var start = _head.position;
        var end = start;
        end.y = _xrOrigin.position.y + _character.stepOffset;

        var v = end - start;
        return Physics.Raycast(start, v.normalized, v.magnitude, _collisionLayer, QueryTriggerInteraction.Ignore);
    }
    
    // --------------------------------------------------
    
    /// <summary>
    /// 발걸음 소리 재생 조건을 만족하는지 확인한다.
    /// </summary>
    private void CheckFootstep()
    {
        var speed = _character.velocity.magnitude;
        if (speed > _walkingThreshold)
        {
            _footstepTime += Time.deltaTime;

            if (_footstepTime >= _footstepPeriod)
            {
                PlayFootstepSound(speed);
            }
        }
        else
        {
            _footstepTime = 0;
        }
    }

    /// <summary>
    /// 바닥 지형의 정보를 확인하여 발걸음 소리를 재생한다.
    /// </summary>
    /// <param name="speed">현재 이동 속도</param>
    private void PlayFootstepSound(float speed)
    {
        if (Physics.Raycast(_player.characterPosInWorldSpace, Vector3.down, out var hit, 2f, _collisionLayer))
        {
            if (hit.transform.TryGetComponent(out TerrainData terrain))
            {
                _audioSource.PlayOneShot(terrain.Sound.walking, speed);
                Debug.Log("Walk");
            }
        }
        _footstepTime = 0;
    }

}
