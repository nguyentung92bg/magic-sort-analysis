public class WheelOfFortuneController : MonoBehaviour // TypeDefIndex: 1889
{
	// Fields
	[SerializeField]
	private List<WheelOfFortuneTaskView> _taskViews; // 0x18
	[SerializeField]
	private WheelOfFortuneStageProgressView _stageProgressView; // 0x20
	[SerializeField]
	private WheelOfFortuneScrollController _scrollController; // 0x28
	[SerializeField]
	private WheelOfFortuneRewardTargetController _rewardTargetController; // 0x30
	[SerializeField]
	private WheelOfFortuneViewAdapter _viewAdapter; // 0x38
	[SerializeField]
	private WheelOfFortuneAnimationConfig _animationConfig; // 0x40
	private WheelOfFortuneViewModel _viewModel; // 0x48
	private WheelOfFortuneService _service; // 0x50
	private Sequence _progressSequence; // 0x58
	private Sequence _continueNextStageSequence; // 0x60
	private Sequence _continueNextStageSequenceFromCollection; // 0x68
	private Sequence _stageClaimSequence; // 0x70

	// Methods

	// RVA: 0x319A7DC Offset: 0x319A7DC VA: 0x319A7DC
	public void Initialize(WheelOfFortuneViewModel viewModel) { }

	// RVA: 0x319AAD8 Offset: 0x319AAD8 VA: 0x319AAD8
	private void InitializeTaskViews() { }

	// RVA: 0x319B3BC Offset: 0x319B3BC VA: 0x319B3BC
	private Sequence PlayStageUnlockedAnimation(int stageId) { }

	// RVA: 0x319B6DC Offset: 0x319B6DC VA: 0x319B6DC
	private void PlayStageClaimedAnimation(int claimedStageId) { }

	// RVA: 0x319B8E0 Offset: 0x319B8E0 VA: 0x319B8E0
	private Sequence PlayProgressedWithoutStageChangedAnimation() { }

	// RVA: 0x319BA58 Offset: 0x319BA58 VA: 0x319BA58
	public void MoveNextStageFromCollectionReturn() { }

	// RVA: 0x319BB38 Offset: 0x319BB38 VA: 0x319BB38
	private void OnSpinClicked(int stageIndex, int spinIndex, WheelOfFortuneSpinStrategy spinStrategy) { }

	[Button]
	// RVA: 0x319C28C Offset: 0x319C28C VA: 0x319C28C
	public void TestSpendChip() { }

	// RVA: 0x319BD04 Offset: 0x319BD04 VA: 0x319BD04
	private bool HasEnoughChip(int stageIndex) { }

	// RVA: 0x319C2E4 Offset: 0x319C2E4 VA: 0x319C2E4
	private int GetChipCount() { }

	// RVA: 0x319BD58 Offset: 0x319BD58 VA: 0x319BD58
	private int GetStageSpinCost(int stageIndex) { }

	// RVA: 0x319BD74 Offset: 0x319BD74 VA: 0x319BD74
	private void SpendChip(int amount) { }

	// RVA: 0x319BD90 Offset: 0x319BD90 VA: 0x319BD90
	private void ProcessSpinResult(int stageIndex, int spinResultIndex, WheelOfFortuneSpinStrategy spinStrategy) { }

	[Button]
	// RVA: 0x319C300 Offset: 0x319C300 VA: 0x319C300
	public void TestProgressAnimWithoutSpin() { }

	// RVA: 0x319C4EC Offset: 0x319C4EC VA: 0x319C4EC
	private void OnSpinFinished() { }

	// RVA: 0x319C550 Offset: 0x319C550 VA: 0x319C550
	private void UpdateTaskViews() { }

	// RVA: 0x319C400 Offset: 0x319C400 VA: 0x319C400
	private void PlayProgressAnimationSequence() { }

	// RVA: 0x319C820 Offset: 0x319C820 VA: 0x319C820
	private Sequence PlayStageChangedAnimation() { }

	// RVA: 0x319CE3C Offset: 0x319CE3C VA: 0x319CE3C
	private void OnTaskClaimed() { }

	// RVA: 0x319BE58 Offset: 0x319BE58 VA: 0x319BE58
	private void PlayChipChangedAnimation() { }

	// RVA: 0x319BEFC Offset: 0x319BEFC VA: 0x319BEFC
	private void PlaySpinAnimation(int spinIndex, WheelOfFortuneSpinStrategy spinStrategy) { }

	// RVA: 0x319D08C Offset: 0x319D08C VA: 0x319D08C
	private void UpdateProgressBarAndMoveToNextStage() { }

	// RVA: 0x319D974 Offset: 0x319D974 VA: 0x319D974
	private void ScrollToStage(int stageIndex) { }

	// RVA: 0x319C394 Offset: 0x319C394 VA: 0x319C394
	private void UpdateViewModel() { }

	// RVA: 0x319DA0C Offset: 0x319DA0C VA: 0x319DA0C
	private void ScrollToNextStage() { }

	// RVA: 0x319DA58 Offset: 0x319DA58 VA: 0x319DA58
	public void Dispose() { }

	// RVA: 0x319E1CC Offset: 0x319E1CC VA: 0x319E1CC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x319E1D4 Offset: 0x319E1D4 VA: 0x319E1D4
	private void <UpdateProgressBarAndMoveToNextStage>b__33_1() { }

	[CompilerGenerated]
	// RVA: 0x319E1F0 Offset: 0x319E1F0 VA: 0x319E1F0
	private void <UpdateProgressBarAndMoveToNextStage>b__33_2() { }

	[CompilerGenerated]
	// RVA: 0x319E234 Offset: 0x319E234 VA: 0x319E234
	private void <UpdateProgressBarAndMoveToNextStage>b__33_3() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI