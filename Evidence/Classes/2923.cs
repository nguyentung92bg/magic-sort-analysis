public class RevealAnimationView : MonoBehaviour // TypeDefIndex: 2923
{
	// Fields
	[SerializeField]
	private CurrencyViewFactory _currencyViewFactory; // 0x18
	[SerializeField]
	private RevealAnimationConfig _animationsConfig; // 0x20
	[SerializeField]
	private CurrencyRevealAnimationConfig _currencyRevealAnimationConfig; // 0x28
	private readonly List<CurrencyView> _usingCurrencyViews; // 0x30
	private Sequence _revealSequence; // 0x38

	// Properties
	public List<CurrencyView> CurrencyViews { get; }

	// Methods

	// RVA: 0x2985B58 Offset: 0x2985B58 VA: 0x2985B58
	public List<CurrencyView> get_CurrencyViews() { }

	[Button]
	// RVA: 0x2985048 Offset: 0x2985048 VA: 0x2985048
	public Sequence PlayRevealAnimations(RewardModel rewardModel, bool shouldParent = False) { }

	// RVA: 0x2985D78 Offset: 0x2985D78 VA: 0x2985D78
	private void SetWorldScaleToOne(Transform obj) { }

	[Button]
	// RVA: 0x2985E58 Offset: 0x2985E58 VA: 0x2985E58
	public Sequence PlayRevealAnimation(int currencyType, string amountText, bool shouldParent = False, RewardModel rewardModel, bool setText = False) { }

	// RVA: 0x2985B60 Offset: 0x2985B60 VA: 0x2985B60
	private Vector3 GetPositionForCurrencyView(int index, int totalRewards) { }

	// RVA: 0x2986148 Offset: 0x2986148 VA: 0x2986148
	private Vector3 GetDynamicLayoutPosition(int index, int totalRewards, Vector3 mainPivot) { }

	// RVA: 0x29857E0 Offset: 0x29857E0 VA: 0x29857E0
	public void Dispose() { }

	// RVA: 0x2986354 Offset: 0x2986354 VA: 0x2986354
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]