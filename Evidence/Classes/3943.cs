public class MagicPassRewardsSwipeController : MonoBehaviour, IDisposable // TypeDefIndex: 3943
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private MagicPassRewardsViewAdapter _viewAdapter; // 0x28
	[SerializeField]
	private MagicPassVerticalProgressBarView _verticalProgressBarView; // 0x30
	[SerializeField]
	private MagicPassStepSeparatorView _stepSeparatorView; // 0x38
	[SerializeField]
	private MagicPassAnimationConfig _animationConfig; // 0x40
	private MagicPassViewModel _viewModel; // 0x48

	// Methods

	// RVA: 0x38E5294 Offset: 0x38E5294 VA: 0x38E5294
	public void Initialize(MagicPassViewModel viewModel) { }

	// RVA: 0x38E9A70 Offset: 0x38E9A70 VA: 0x38E9A70
	private void InitializeScrollBar() { }

	// RVA: 0x38E9AD4 Offset: 0x38E9AD4 VA: 0x38E9AD4
	private void InitializeSeparatorView() { }

	// RVA: 0x38E9B74 Offset: 0x38E9B74 VA: 0x38E9B74
	private void InitializeVerticalProgressBarView() { }

	// RVA: 0x38E6B64 Offset: 0x38E6B64 VA: 0x38E6B64
	public Tween PlayProgressAnimation() { }

	// RVA: 0x38E5E18 Offset: 0x38E5E18 VA: 0x38E5E18
	public Tween PlayInitialProgressAnimation() { }

	// RVA: 0x38EA384 Offset: 0x38EA384 VA: 0x38EA384
	private void ShowClaimButtons(int startIndex, int endIndex) { }

	// RVA: 0x38EA1C8 Offset: 0x38EA1C8 VA: 0x38EA1C8
	private Tween UpdateStepIcons(int startIndex, int endIndex, float duration) { }

	// RVA: 0x38E72F0 Offset: 0x38E72F0 VA: 0x38E72F0
	public void UpdateViewModel(MagicPassViewModel viewModel) { }

	// RVA: 0x38E7920 Offset: 0x38E7920 VA: 0x38E7920 Slot: 4
	public void Dispose() { }

	// RVA: 0x38EA4AC Offset: 0x38EA4AC VA: 0x38EA4AC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x38EA4B4 Offset: 0x38EA4B4 VA: 0x38EA4B4
	private void <PlayProgressAnimation>b__11_0() { }

	[CompilerGenerated]
	// RVA: 0x38EA4D8 Offset: 0x38EA4D8 VA: 0x38EA4D8
	private void <PlayProgressAnimation>b__11_1() { }

	[CompilerGenerated]
	// RVA: 0x38EA534 Offset: 0x38EA534 VA: 0x38EA534
	private void <PlayProgressAnimation>b__11_3() { }

	[CompilerGenerated]
	// RVA: 0x38EA558 Offset: 0x38EA558 VA: 0x38EA558
	private void <PlayProgressAnimation>b__11_4() { }

	[CompilerGenerated]
	// RVA: 0x38EA594 Offset: 0x38EA594 VA: 0x38EA594
	private void <PlayProgressAnimation>b__11_5() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI