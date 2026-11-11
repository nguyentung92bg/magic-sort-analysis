public class WheelOfFortuneProgressBarStageController : MonoBehaviour // TypeDefIndex: 1901
{
	// Fields
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private WheelOfFortuneProgressBarStageView _lockedStageView; // 0x20
	[SerializeField]
	private WheelOfFortuneProgressBarStageView _claimableStageView; // 0x28
	[SerializeField]
	private WheelOfFortuneProgressBarStageView _claimedStageView; // 0x30
	private WheelOfFortuneProgressBarStageView _activeStageView; // 0x38
	private WheelOfFortuneStageViewModel _stageViewModel; // 0x40
	private WheelOfFortuneViewModel _viewModel; // 0x48

	// Methods

	// RVA: 0x319FDD0 Offset: 0x319FDD0 VA: 0x319FDD0
	public void Initialize(WheelOfFortuneViewModel viewModel, WheelOfFortuneStageViewModel stageViewModel) { }

	// RVA: 0x319FFB8 Offset: 0x319FFB8 VA: 0x319FFB8
	private void ResetViews() { }

	// RVA: 0x31A0058 Offset: 0x31A0058 VA: 0x31A0058
	public Sequence PlayReachedAnim(float duration) { }

	// RVA: 0x31A01F0 Offset: 0x31A01F0 VA: 0x31A01F0
	public void UpdateStages(WheelOfFortuneViewModel viewModel, WheelOfFortuneStageViewModel stageViewModel) { }

	// RVA: 0x31A025C Offset: 0x31A025C VA: 0x31A025C
	public Sequence PlayUnlockedAnimation() { }

	// RVA: 0x31A0558 Offset: 0x31A0558 VA: 0x31A0558
	public Tween PlayClaimedAnimation() { }

	// RVA: 0x31A0870 Offset: 0x31A0870 VA: 0x31A0870
	public void Dispose() { }

	// RVA: 0x31A08BC Offset: 0x31A08BC VA: 0x31A08BC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A08C4 Offset: 0x31A08C4 VA: 0x31A08C4
	private void <PlayUnlockedAnimation>b__11_0() { }

	[CompilerGenerated]
	// RVA: 0x31A0930 Offset: 0x31A0930 VA: 0x31A0930
	private void <PlayClaimedAnimation>b__12_0() { }
}

// Namespace: 
[CompilerGenerated]