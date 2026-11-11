public class TryPlayMagicStreakGaeProgressBarAnimationOnLobbyReturnCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3887
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private bool _isDisposed; // 0x11
	private MagicStreakGaeService _magicStreakGaeService; // 0x18
	private MagicStreakGaeController _magicStreakGaeController; // 0x20
	private Sequence _magicStreakGaeAnimationTween; // 0x28
	private Sequence _magicStreakGaeMultiplierTween; // 0x30
	private bool _isSkippable; // 0x38
	private bool _hasRewardAnimation; // 0x39
	private CancellationToken _cancellationToken; // 0x40

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3CFF8A4 Offset: 0x3CFF8A4 VA: 0x3CFF8A4 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3CFF8AC Offset: 0x3CFF8AC VA: 0x3CFF8AC Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3CFF8B4 Offset: 0x3CFF8B4 VA: 0x3CFF8B4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3CFF8BC Offset: 0x3CFF8BC VA: 0x3CFF8BC
	private void set_IsShowed(bool value) { }

	// RVA: 0x3CFF8C8 Offset: 0x3CFF8C8 VA: 0x3CFF8C8 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x3CFF9FC Offset: 0x3CFF9FC VA: 0x3CFF9FC Slot: 11
	public void Dispose() { }

	[AsyncStateMachine(typeof(TryPlayMagicStreakGaeProgressBarAnimationOnLobbyReturnCommand.<ExecuteAsync>d__18))]
	// RVA: 0x3CFFA74 Offset: 0x3CFFA74 VA: 0x3CFFA74 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3CFFB60 Offset: 0x3CFFB60 VA: 0x3CFFB60
	private static Tween PlayStepIncreaseAnimation(MagicStreakGaeController magicStreakGaeController, List<MagicStreakGaeStepViewModel> animationSteps, bool isAllStepsClaimed) { }

	// RVA: 0x3CFFB74 Offset: 0x3CFFB74 VA: 0x3CFFB74
	private static Tween PlayHatMultiplyAnimation(MagicStreakGaeController magicStreakGaeController, int lastSeenStreakMultiplier, List<int> multipliers) { }

	// RVA: 0x3CFFC14 Offset: 0x3CFFC14 VA: 0x3CFFC14
	private static bool CheckIsDataCorrectForPlayingAnimation(MagicStreakGaeViewCache magicStreakGaeViewCache, out List<MagicStreakGaeStepViewModel> animationSteps) { }

	// RVA: 0x3CFFC94 Offset: 0x3CFFC94 VA: 0x3CFFC94 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3CFFC9C Offset: 0x3CFFC9C VA: 0x3CFFC9C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3CFFCA4 Offset: 0x3CFFCA4 VA: 0x3CFFCA4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]