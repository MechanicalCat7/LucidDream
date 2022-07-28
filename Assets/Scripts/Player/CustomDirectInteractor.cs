using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CustomDirectInteractor : XRDirectInteractor
{
    // ==================================================
    //  Editor-assigned Variables
    // ==================================================
    
    [SerializeField] private HandType _handType;

    // ==================================================
    //  Properties
    // ==================================================

    public PlayerHand hand { get; private set; }
    
    public HandType handType => _handType;
    
    // ==================================================
    //  Unity Functions
    // ==================================================

    protected override void Awake()
    {
        base.Awake();

        hand = GetComponentInParent<PlayerHand>();
    }
    
}
