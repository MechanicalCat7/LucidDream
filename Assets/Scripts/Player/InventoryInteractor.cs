using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class InventoryInteractor : XRSocketInteractor
{
    // ==================================================
    //  Static Variables
    // ==================================================

    private static readonly int ColorShaderProperty = Shader.PropertyToID("_Color");
    private const int GrabbedLayerIndex = 8;
    private const int InventoryLayerIndex = 9;
    
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    /// <summary>
    /// 기본 상태의 색상
    /// </summary>
    [Header("Inventory")]
    [SerializeField] private Color _defaultColor = Color.white;
    
    /// <summary>
    /// 인벤토리에 추가 가능한 상태일 때 색상
    /// </summary>
    [SerializeField] private Color _validColor = Color.green;
    
    /// <summary>
    /// 인벤토리에 추가 불가능한 상태일 때 색상
    /// </summary>
    [SerializeField] private Color _invalidColor = Color.red;
    
    /// <summary>
    /// 인벤토리에 추가 가능한 레이어 목록
    /// </summary>
    [SerializeField] private LayerMask _storableLayer;
    
    // ==================================================
    //  Variables
    // ==================================================

    private PlayerHand _hand;
    private Renderer _renderer;
    
    public HandType _handType;      // 손 위치

    // ==================================================
    //  Properties
    // ==================================================
    
    /// <summary>
    /// 인벤토리의 손 위치
    /// </summary>
    public HandType handType => _handType;
    
    /// <summary>
    /// 인벤토리 표시 여부
    /// </summary>
    public bool visible
    {
        get => _renderer.enabled;
        set => _renderer.enabled = value;
    }

    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Awake()
    {
        base.Awake();

        _hand = GetComponentInParent<PlayerHand>();
        _handType = _hand.handType;
        _renderer = GetComponent<Renderer>();
    }

    protected override void OnEnable()
    {
        base.OnEnable();
        
        ChangeColor(_defaultColor);
    }

    // ==================================================
    //  Override Functions
    // ==================================================

    public override bool CanHover(IXRHoverInteractable interactable)
    {
        return base.CanHover(interactable) && interactable.transform.gameObject.layer == GrabbedLayerIndex;
    }

    public override bool CanSelect(IXRSelectInteractable interactable)
    {
        // 프롭만 인벤토리에 넣을 수 있음
        if (interactable.transform.TryGetComponent(out GrabbableProp prop))
            return base.CanSelect(interactable) &&
                   Support.CompareLayer(interactable.transform.gameObject.layer, _storableLayer) && prop.storable;
        
        return false;
    }

    protected override void OnHoverEntering(HoverEnterEventArgs args)
    {
        base.OnHoverEntering(args);
        
        args.interactableObject.transform.TryGetComponent(out GrabbableProp prop);
        if (hasSelection || !prop.storable)
        {
            ChangeColor(_invalidColor);
        }
        else
        {
            ChangeColor(_validColor);
        }
    }

    protected override void OnHoverExiting(HoverExitEventArgs args)
    {
        base.OnHoverExiting(args);
        
        ChangeColor(_defaultColor);
    }

    protected override void OnSelectEntering(SelectEnterEventArgs args)
    {
        base.OnSelectEntering(args);
    
        // 인벤토리 등록
        args.interactableObject.transform.TryGetComponent(out GrabbableProp prop);
        _hand.storedItem = prop.transform;

        Support.ChangeLayer(_hand.storedItem, InventoryLayerIndex);
        ChangeColor(_defaultColor);
    }

    protected override void OnSelectExiting(SelectExitEventArgs args)
    {
        base.OnSelectExiting(args);
        
        // 인벤토리 제거
        _hand.storedItem = null;
    }
    
    // ==================================================
    //  Inventory Interactor Functions
    // ==================================================
    
    /// <summary>
    /// 인벤토리의 색상을 변경한다.
    /// </summary>
    /// <param name="color">변경할 색상</param>
    private void ChangeColor(Color color)
    {
        _renderer.material.SetColor(ColorShaderProperty, color);
    }
}
