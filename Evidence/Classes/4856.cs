public class BoatRushClaimView : MonoBehaviour // TypeDefIndex: 4856
{
	// Fields
	[SerializeField]
	private Transform _pivot; // 0x18
	[SerializeField]
	private List<BoatRushMedalView> _medalViews; // 0x20
	[SerializeField]
	private Transform _claimDisappearPositionX; // 0x28
	[SerializeField]
	private Transform _claimAppearPositionX; // 0x30
	[SerializeField]
	private BoatRushAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private Button _claimButton; // 0x40
	private BoatRushMedalView _medalView; // 0x48

	// Methods

	// RVA: 0x40F7FAC Offset: 0x40F7FAC VA: 0x40F7FAC
	public void Awake() { }

	// RVA: 0x40F8038 Offset: 0x40F8038 VA: 0x40F8038
	private void OnDestroy() { }

	// RVA: 0x40F80C4 Offset: 0x40F80C4 VA: 0x40F80C4
	private void OnClaimButtonClicked() { }

	// RVA: 0x40F8138 Offset: 0x40F8138 VA: 0x40F8138
	public void SetMedal(int rank) { }

	// RVA: 0x40F822C Offset: 0x40F822C VA: 0x40F822C
	public Tween ClaimAppearSequence() { }

	// RVA: 0x40F830C Offset: 0x40F830C VA: 0x40F830C
	public Tween ClaimDisappearSequence() { }

	// RVA: 0x40F83A0 Offset: 0x40F83A0 VA: 0x40F83A0
	public Sequence FlyToTargetAnimation() { }

	// RVA: 0x40F87D4 Offset: 0x40F87D4 VA: 0x40F87D4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI