using UnityEngine;

public class PlayerHead : MonoBehaviour
{
    // ==================================================
    //  Static Variables
    // ==================================================
    
    private static readonly int AlphaShaderProperty = Shader.PropertyToID("_Alpha");

    // ==================================================
    //  Editor-assigned Variables
    // ==================================================

    [Header("Fade Out")]
    [Tooltip("화면을 가리는 오브젝트")]
    [SerializeField] private Renderer _fadeScreen;
    
    [Tooltip("화면이 전환되는 속도")]
    [SerializeField] private float _fadeSpeed = 0.2f;
    
    [Tooltip("이동 불가 지역에서 화면이 최대로 가려지는 거리")]
    [SerializeField] private float _maxDistance = 0.5f;
    
    [Tooltip("화면이 가려졌을 때 Character Controller의 위치를 나타내는 오브젝트")]
    [SerializeField] private Transform _originIndicator;
    
    [Header("Collider")]
    [Tooltip("Capsule의 중심 위치")]
    [SerializeField] private Vector3 _colliderCenter;
    
    [Tooltip("Capsule의 반지름")]
    [SerializeField] private float _colliderRadius = 0.012f;
    
    [Tooltip("Capsule의 높이")]
    [SerializeField] private float _colliderHeight = 0.1f;
    
    [Tooltip("충돌로 인식하는 레이어")]
    [SerializeField] private LayerMask _collisionLayer;
    
    // ==================================================
    //  Variables
    // ==================================================
    
    private Renderer _indicatorRend;

    private PlayerManager _player;
    private Transform _xrOrigin;
    private PlayerBody _body;
    
    private Vector3 _capsuleStart;
    private Vector3 _capsuleEnd;
    private float _currentAlpha;
    
    // ==================================================
    //  Unity Functions
    // ==================================================
    
    private void Awake()
    {
        // _indicatorRend = _originIndicator.GetComponentInChildren<Renderer>();
        
        var halfHeight = _colliderHeight / 2 - _colliderRadius;
        _capsuleStart = _colliderCenter + Vector3.left * halfHeight;
        _capsuleEnd = _colliderCenter + Vector3.right * halfHeight;
    }
    
    private void Start()
    {
        _player = GameManager.instance.playerManager;
        _xrOrigin = _player.xrOrigin.transform;
        _body = _player.body;
    }
    
    private void Update()
    {
        var originPos = _player.characterPosInWorldSpace;
        
        // 머리 충돌 시 화면 가림
        if (CheckCollide())
        {
            originPos.y = _xrOrigin.position.y;
            // _originIndicator.position = originPos;
            if (_currentAlpha < 1)
                _currentAlpha += _fadeSpeed;
        }
        else if (_currentAlpha > 0)
            _currentAlpha -= _fadeSpeed;
        
        // 이동 불가 지역일 경우 거리에 따라 화면 가림
        float distance = 0;
        if (!_body.isMovable)
        {
            var v = transform.position - originPos;
            v.y = 0;
            distance = v.magnitude / _maxDistance - 0.5f;
        }
        
        // 알파 값 적용
        var fadeValue = Mathf.Max(distance, _currentAlpha);
        _fadeScreen.material.SetFloat(AlphaShaderProperty, fadeValue);
        // _indicatorRend.material.SetFloat(AlphaShaderProperty, fadeValue);
    }
    
    private void OnDrawGizmosSelected()
    {
        var halfHeight = _colliderHeight / 2 - _colliderRadius;
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.TransformPoint(_colliderCenter + Vector3.left * halfHeight), _colliderRadius);
        Gizmos.DrawWireSphere(transform.TransformPoint(_colliderCenter + Vector3.right * halfHeight), _colliderRadius);
    }
    
    // ==================================================
    //  Player Head Functions
    // ==================================================
    
    /// <summary>
    /// Collider 설정에 따른 Capsule 영역 내의 충돌을 확인한다.
    /// </summary>
    /// <returns>충돌 여부를 반환한다.</returns>
    private bool CheckCollide()
    {
        var start = transform.TransformPoint(_capsuleStart);
        var end = transform.TransformPoint(_capsuleEnd);
        return Physics.CheckCapsule(start, end, _colliderRadius, _collisionLayer, QueryTriggerInteraction.Ignore);
    }
}
