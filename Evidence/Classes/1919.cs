public class WheelOfFortuneStageView : MonoBehaviour // TypeDefIndex: 1919
{
	// Fields
	[SerializeField]
	private List<WheelOfFortuneRewardContainer> _allRewards; // 0x18
	[SerializeField]
	private WheelOfFortuneWheelController _wheelController; // 0x20
	[SerializeField]
	private WheelOfFortuneButtonController _buttonController; // 0x28
	[SerializeField]
	private WheelOfFortuneTokenContainer _tokenContainer; // 0x30
	[SerializeField]
	private Button _lockButton; // 0x38
	[SerializeField]
	private Transform _lockKnob; // 0x40
	[SerializeField]
	private Transform _lockParent; // 0x48
	[SerializeField]
	private Transform _lockObject; // 0x50
	[SerializeField]
	private SpriteRenderer _lockShadow; // 0x58
	[SerializeField]
	private ParticleSystem _lockParticle; // 0x60
	[SerializeField]
	private Transform _tick; // 0x68
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x70
	[SerializeField]
	private SpriteRenderer _backgroundRenderer; // 0x78
	private WheelOfFortuneViewModel _viewModel; // 0x80
	private WheelOfFortuneStageViewModel _stageViewModel; // 0x88
	private bool _lockShakeAnimationIsPlaying; // 0x90
	private Sequence _lockShakeSequence; // 0x98

	// Methods

	// RVA: 0x31A3DA0 Offset: 0x31A3DA0 VA: 0x31A3DA0
	public void Initialize(WheelOfFortuneViewModel viewModel, int id) { }

	// RVA: 0x31A42AC Offset: 0x31A42AC VA: 0x31A42AC
	public void UpdateView(WheelOfFortuneViewModel viewModel, int id) { }

	// RVA: 0x319B784 Offset: 0x319B784 VA: 0x319B784
	public Sequence PlayStageClaimedAnimation() { }

	// RVA: 0x31A4350 Offset: 0x31A4350 VA: 0x31A4350
	private Sequence PlayStageTickAnimation() { }

	// RVA: 0x31A24F0 Offset: 0x31A24F0 VA: 0x31A24F0
	public Vector3 GetLocalPosition() { }

	// RVA: 0x319B570 Offset: 0x319B570 VA: 0x319B570
	public Tween PlayUnlockedAnimation() { }

	// RVA: 0x319B6C4 Offset: 0x319B6C4 VA: 0x319B6C4
	public Tween PlayTintRevealAnimation() { }

	// RVA: 0x319D02C Offset: 0x319D02C VA: 0x319D02C
	public Sequence PlayChosenAnimation(int index) { }

	[Button]
	// RVA: 0x31A452C Offset: 0x31A452C VA: 0x31A452C
	public void Reset() { }

	[Button]
	// RVA: 0x319CF6C Offset: 0x319CF6C VA: 0x319CF6C
	public Sequence StartSpin(int spinIndex, WheelOfFortuneSpinStrategy spinStrategy) { }

	// RVA: 0x31A4764 Offset: 0x31A4764 VA: 0x31A4764
	public void ResetSpin() { }

	// RVA: 0x31A477C Offset: 0x31A477C VA: 0x31A477C
	public void PlayButtonUnlockedAnimation() { }

	// RVA: 0x319E720 Offset: 0x319E720 VA: 0x319E720
	public void SetSpinButtonAsInactive() { }

	// RVA: 0x319C538 Offset: 0x319C538 VA: 0x319C538
	public void SetSpinButtonAsActive() { }

	// RVA: 0x31A40A0 Offset: 0x31A40A0 VA: 0x31A40A0
	private void SetLockStatus(WheelOfFortuneStageViewModel stageViewModel) { }

	// RVA: 0x31A48B8 Offset: 0x31A48B8 VA: 0x31A48B8
	private void CloseLockandOpenFade() { }

	// RVA: 0x31A4928 Offset: 0x31A4928 VA: 0x31A4928
	private void OnLockClicked() { }

	// RVA: 0x31A4950 Offset: 0x31A4950 VA: 0x31A4950
	private void ShakeLockKnob() { }

	// RVA: 0x31A4B14 Offset: 0x31A4B14 VA: 0x31A4B14
	private void ShowInfoText() { }

	// RVA: 0x31A4C5C Offset: 0x31A4C5C VA: 0x31A4C5C
	public void Dispose() { }

	// RVA: 0x31A41B0 Offset: 0x31A41B0 VA: 0x31A41B0
	private void PlaceRewards(List<RewardModel> rewardModels) { }

	// RVA: 0x31A4EEC Offset: 0x31A4EEC VA: 0x31A4EEC
	public void UpdateToken() { }

	// RVA: 0x31A4F44 Offset: 0x31A4F44 VA: 0x31A4F44
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x31A4F4C Offset: 0x31A4F4C VA: 0x31A4F4C
	private void <PlayStageTickAnimation>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x31A4F60 Offset: 0x31A4F60 VA: 0x31A4F60
	private void <PlayStageTickAnimation>b__20_1() { }

	[CompilerGenerated]
	// RVA: 0x31A4F84 Offset: 0x31A4F84 VA: 0x31A4F84
	private void <PlayStageTickAnimation>b__20_2() { }

	[CompilerGenerated]
	// RVA: 0x31A4FB0 Offset: 0x31A4FB0 VA: 0x31A4FB0
	private void <PlayUnlockedAnimation>b__22_0() { }

	[CompilerGenerated]
	// RVA: 0x31A50B0 Offset: 0x31A50B0 VA: 0x31A50B0
	private void <ShakeLockKnob>b__34_0() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI