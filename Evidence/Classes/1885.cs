public class WheelOfFortuneButtonController : MonoBehaviour // TypeDefIndex: 1885
{
	// Fields
	[SerializeField]
	private Button _spinButton; // 0x18
	[SerializeField]
	private Button _lockedSpinButton; // 0x20
	[SerializeField]
	private Button _claimedButton; // 0x28
	[SerializeField]
	private TextMeshPro _spinButtonText; // 0x30
	[SerializeField]
	private Transform _spinButtonContainer; // 0x38
	[SerializeField]
	private Transform _lockedSpinButtonContainer; // 0x40
	[SerializeField]
	private Transform _claimedButtonContainer; // 0x48
	[SerializeField]
	private SpriteRenderer _spinButtonSprite; // 0x50
	[SerializeField]
	private TextMeshPro _spinCostAmountText; // 0x58
	[SerializeField]
	private WheelOfFortunePopUpConfig _wheelOfFortunePopUpConfig; // 0x60
	private WheelOfFortuneStageViewModel _stageViewModel; // 0x68
	private WheelOfFortuneViewModel _viewModel; // 0x70

	// Methods

	// RVA: 0x3199AA8 Offset: 0x3199AA8 VA: 0x3199AA8
	public void Initialize(WheelOfFortuneViewModel viewModel, WheelOfFortuneStageViewModel stageViewModel) { }

	// RVA: 0x3199CD0 Offset: 0x3199CD0 VA: 0x3199CD0
	private void ResetViews() { }

	// RVA: 0x3199E6C Offset: 0x3199E6C VA: 0x3199E6C
	public Sequence PlayUnlockedAnimation() { }

	// RVA: 0x319A068 Offset: 0x319A068 VA: 0x319A068
	private void OnSpinButtonClicked() { }

	// RVA: 0x319A1AC Offset: 0x319A1AC VA: 0x319A1AC
	public void SetSpinButtonAsInactive() { }

	// RVA: 0x319A1FC Offset: 0x319A1FC VA: 0x319A1FC
	public void SetSpinButtonAsActive() { }

	// RVA: 0x319A24C Offset: 0x319A24C VA: 0x319A24C
	public Sequence PlayClaimedAnimation() { }

	// RVA: 0x319A400 Offset: 0x319A400 VA: 0x319A400
	private void OnLockedSpinButtonClicked() { }

	// RVA: 0x319A548 Offset: 0x319A548 VA: 0x319A548
	private void OnClaimedButtonClicked() { }

	// RVA: 0x3199D40 Offset: 0x3199D40 VA: 0x3199D40
	public void Dispose() { }

	// RVA: 0x319A660 Offset: 0x319A660 VA: 0x319A660
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x319A668 Offset: 0x319A668 VA: 0x319A668
	private void <PlayUnlockedAnimation>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x319A694 Offset: 0x319A694 VA: 0x319A694
	private void <PlayUnlockedAnimation>b__14_1() { }

	[CompilerGenerated]
	// RVA: 0x319A728 Offset: 0x319A728 VA: 0x319A728
	private void <PlayClaimedAnimation>b__18_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]