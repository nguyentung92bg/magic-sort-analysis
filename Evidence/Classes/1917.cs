public class WheelOfFortuneStageProgressView : MonoBehaviour // TypeDefIndex: 1917
{
	// Fields
	[SerializeField]
	private List<WheelOfFortuneProgressBarStageController> _stages; // 0x18
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x20
	[SerializeField]
	private SpriteRenderer _emptyProgressBarFrame; // 0x28
	[SerializeField]
	private Transform _currentProgressBar; // 0x30
	[SerializeField]
	private SpriteRenderer _progressBarSpriteRenderer; // 0x38
	[SerializeField]
	private SpriteRenderer _progressBarFrameSpriteRenderer; // 0x40
	[SerializeField]
	private TextMeshPro _currentProgressBarText; // 0x48
	private WheelOfFortuneViewModel _viewModel; // 0x50
	private Vector2 _progressBarInitialSize; // 0x58
	private float _fullWidth; // 0x60

	// Methods

	// RVA: 0x319AC10 Offset: 0x319AC10 VA: 0x319AC10
	public void Initialize(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x31A2DDC Offset: 0x31A2DDC VA: 0x31A2DDC
	private void InitializeStages(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x319E254 Offset: 0x319E254 VA: 0x319E254
	public void InitializeEmptyProgressBar(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x31A315C Offset: 0x31A315C VA: 0x31A315C
	private void HideCurrentProgressBar() { }

	// RVA: 0x31A3188 Offset: 0x31A3188 VA: 0x31A3188
	private void SnapCurrentProgressBarToEmptyBarSize(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x319D7F0 Offset: 0x319D7F0 VA: 0x319D7F0
	public Sequence RevealCurrentProgressBar(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x319E208 Offset: 0x319E208 VA: 0x319E208
	public void RevealCurrentProgressBarText() { }

	// RVA: 0x31A2EE0 Offset: 0x31A2EE0 VA: 0x31A2EE0
	private void InitializeCurrentProgressBar(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x319D63C Offset: 0x319D63C VA: 0x319D63C
	public Sequence PlayStageScrollAnimation(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x31A34B4 Offset: 0x31A34B4 VA: 0x31A34B4
	private Tween MoveEmptyProgressBar(WheelOfFortuneViewModel viewModel, float duration) { }

	// RVA: 0x319D738 Offset: 0x319D738 VA: 0x319D738
	public Tween PlayStageUnlockedAnimation(int index) { }

	// RVA: 0x319D4B4 Offset: 0x319D4B4 VA: 0x319D4B4
	public Tween PlayProgressBarChangeAnimation() { }

	// RVA: 0x319CAFC Offset: 0x319CAFC VA: 0x319CAFC
	public Tween AnimateProgressUntilGivenStage(int stage, int previousProgress) { }

	// RVA: 0x319B970 Offset: 0x319B970 VA: 0x319B970
	public Tween AnimateProgressWithoutStageCompletion(int target, int maximum, int previousProgress) { }

	// RVA: 0x31A3738 Offset: 0x31A3738 VA: 0x31A3738
	private Tween PlayProgressBarTextIncrease(int previous, int target, int max, float duration) { }

	// RVA: 0x31A358C Offset: 0x31A358C VA: 0x31A358C
	private Tween PlayProgressBarFillAmount(int target, int max, float duration, Ease ease) { }

	// RVA: 0x31A3848 Offset: 0x31A3848 VA: 0x31A3848
	public void UpdateProgressBarStages(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x319E050 Offset: 0x319E050 VA: 0x319E050
	public void Dispose() { }

	// RVA: 0x31A3940 Offset: 0x31A3940 VA: 0x31A3940
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A3948 Offset: 0x31A3948 VA: 0x31A3948
	private void <PlayProgressBarChangeAnimation>b__21_0() { }

	[CompilerGenerated]
	// RVA: 0x31A3974 Offset: 0x31A3974 VA: 0x31A3974
	private void <AnimateProgressUntilGivenStage>b__22_0() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]