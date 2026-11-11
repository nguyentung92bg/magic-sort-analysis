public class WheelOfFortuneTaskView : MonoBehaviour // TypeDefIndex: 1926
{
	// Fields
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private TextMeshPro _completedText; // 0x20
	[SerializeField]
	private Transform _tickTransform; // 0x28
	[SerializeField]
	private Transform _chipTransform; // 0x30
	[SerializeField]
	private TextMeshPro _taskInformationText; // 0x38
	[SerializeField]
	private TextMeshPro _taskInformationTextCompleted; // 0x40
	[SerializeField]
	private TextMeshPro _claimHeaderText; // 0x48
	[SerializeField]
	private TextMeshPro _chipAmountText; // 0x50
	[SerializeField]
	private SpriteRenderer _taskSpriteRenderer; // 0x58
	[SerializeField]
	private ToolbarButton _toolbarButton; // 0x60
	[SerializeField]
	private WheelOfFortuneTaskProgressBar _wheelOfFortuneTaskProgressBar; // 0x68
	[SerializeField]
	private SpriteRenderer _background; // 0x70
	[SerializeField]
	private SpriteRenderer _rightBackground; // 0x78
	[SerializeField]
	private Button _claimButton; // 0x80
	[SerializeField]
	private WheelOfFortunePopUpConfig _wheelOfFortunePopUpConfig; // 0x88
	[SerializeField]
	private CurrencyViewFactory _defaultCurrencyViewFactory; // 0x90
	[SerializeField]
	private CurrencyAnimationConfig _currencyAnimationConfig; // 0x98
	[SerializeField]
	private ParticleSystem _claimParticle; // 0xA0
	private WheelOfFortuneRewardTargetController _rewardTargetController; // 0xA8
	private WheelOfFortuneTaskViewModel _taskViewModel; // 0xB0
	private Sequence _claimSequence; // 0xB8
	private Sequence _taskProgressSequence; // 0xC0
	private List<CurrencyView> _currencyViews; // 0xC8

	// Methods

	// RVA: 0x319AF4C Offset: 0x319AF4C VA: 0x319AF4C
	public void Initialize(WheelOfFortuneTaskViewModel taskViewModel, WheelOfFortuneRewardTargetController rewardTargetController) { }

	// RVA: 0x31A595C Offset: 0x31A595C VA: 0x31A595C
	private void SetToolbar(WheelOfFortuneConfigByType wheelOfFortuneConfigByType) { }

	// RVA: 0x319C804 Offset: 0x319C804 VA: 0x319C804
	public int GetTaskId() { }

	// RVA: 0x31A5ECC Offset: 0x31A5ECC VA: 0x31A5ECC
	private void PlayProgressAnimationIfNeeded(WheelOfFortuneTaskViewModel taskViewModel) { }

	// RVA: 0x31A5B1C Offset: 0x31A5B1C VA: 0x31A5B1C
	private void SetClaimed() { }

	// RVA: 0x31A5C70 Offset: 0x31A5C70 VA: 0x31A5C70
	private void SetClaimable() { }

	// RVA: 0x31A5DA4 Offset: 0x31A5DA4 VA: 0x31A5DA4
	private void SetOngoing() { }

	// RVA: 0x319DE58 Offset: 0x319DE58 VA: 0x319DE58
	public void Dispose() { }

	// RVA: 0x31A63A0 Offset: 0x31A63A0 VA: 0x31A63A0
	private void OnTaskClaimed() { }

	// RVA: 0x31A64C4 Offset: 0x31A64C4 VA: 0x31A64C4
	private void PlayClaimAnimation(WheelOfFortuneTaskViewModel nextTask) { }

	// RVA: 0x31A6C50 Offset: 0x31A6C50 VA: 0x31A6C50
	private Tween PlayCompletedAnimation() { }

	// RVA: 0x31A69C0 Offset: 0x31A69C0 VA: 0x31A69C0
	private Tween DisappearAndGetNewTaskAnimation(WheelOfFortuneTaskViewModel nextTask) { }

	// RVA: 0x31A6E58 Offset: 0x31A6E58 VA: 0x31A6E58
	private List<CurrencyView> GetChipCurrencyViews(int amount) { }

	[Button]
	// RVA: 0x31A666C Offset: 0x31A666C VA: 0x31A666C
	private Sequence PlayEarnedChipGoTargetAnimation() { }

	// RVA: 0x31A6FC4 Offset: 0x31A6FC4 VA: 0x31A6FC4
	private void SetTargetPositions(List<CurrencyView> coinCurrencyViews) { }

	// RVA: 0x31A6020 Offset: 0x31A6020 VA: 0x31A6020
	private Sequence PlayClaimableAnimation() { }

	// RVA: 0x31A712C Offset: 0x31A712C VA: 0x31A712C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A71B4 Offset: 0x31A71B4 VA: 0x31A71B4
	private void <PlayCompletedAnimation>b__33_0() { }

	[CompilerGenerated]
	// RVA: 0x31A72F0 Offset: 0x31A72F0 VA: 0x31A72F0
	private void <PlayClaimableAnimation>b__38_0() { }

	[CompilerGenerated]
	// RVA: 0x31A75B0 Offset: 0x31A75B0 VA: 0x31A75B0
	private void <PlayClaimableAnimation>b__38_1() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI