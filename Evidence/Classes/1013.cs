public class TryShowReferralRewards : IHomeWelcomingSequenceCommand, ICommand, IReturnToHomeSequenceCommand // TypeDefIndex: 1013
{
	// Fields
	[CompilerGenerated]
	private bool <ShouldShowForce>k__BackingField; // 0x10
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x11
	private ReferralService _referralService; // 0x18
	private RewardService _rewardService; // 0x20

	// Properties
	public bool ShouldShowForce { get; set; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x40EBF38 Offset: 0x40EBF38 VA: 0x40EBF38 Slot: 14
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x40EBF40 Offset: 0x40EBF40 VA: 0x40EBF40
	private void set_ShouldShowForce(bool value) { }

	[CompilerGenerated]
	// RVA: 0x40EBF4C Offset: 0x40EBF4C VA: 0x40EBF4C Slot: 15
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x40EBF54 Offset: 0x40EBF54 VA: 0x40EBF54
	private void set_IsShowed(bool value) { }

	// RVA: 0x40EBF60 Offset: 0x40EBF60 VA: 0x40EBF60 Slot: 16
	public bool get_IsShowPopup() { }

	// RVA: 0x40EBF68 Offset: 0x40EBF68 VA: 0x40EBF68 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x40EC054 Offset: 0x40EC054 VA: 0x40EC054 Slot: 11
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowReferralRewards.<ExecuteAsync>d__14))]
	// RVA: 0x40EC124 Offset: 0x40EC124 VA: 0x40EC124 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x40EC210 Offset: 0x40EC210 VA: 0x40EC210 Slot: 10
	public void Dispose() { }

	// RVA: 0x40EC214 Offset: 0x40EC214 VA: 0x40EC214 Slot: 12
	public bool IsSkippable() { }

	// RVA: 0x40EC23C Offset: 0x40EC23C VA: 0x40EC23C Slot: 13
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowReferralRewards.<ClaimReferralRewards>d__18))]
	// RVA: 0x40EC244 Offset: 0x40EC244 VA: 0x40EC244
	private Task ClaimReferralRewards() { }

	// RVA: 0x40EC330 Offset: 0x40EC330 VA: 0x40EC330
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]