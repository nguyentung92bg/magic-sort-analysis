public class GiveRegularCoinRewardsCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1311
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private CancellationToken _cancellationToken; // 0x18
	private Tween _giveNextRewardTween; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F09904 Offset: 0x1F09904 VA: 0x1F09904 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F0990C Offset: 0x1F0990C VA: 0x1F0990C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F09914 Offset: 0x1F09914 VA: 0x1F09914 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F0991C Offset: 0x1F0991C VA: 0x1F0991C
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F09928 Offset: 0x1F09928 VA: 0x1F09928 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F0994C Offset: 0x1F0994C VA: 0x1F0994C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F09954 Offset: 0x1F09954 VA: 0x1F09954 Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(GiveRegularCoinRewardsCommand.<ExecuteAsync>d__13))]
	// RVA: 0x1F0995C Offset: 0x1F0995C VA: 0x1F0995C Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(GiveRegularCoinRewardsCommand.<GiveRegularLevelCoinReward>d__14))]
	// RVA: 0x1F09A48 Offset: 0x1F09A48 VA: 0x1F09A48
	private Task GiveRegularLevelCoinReward() { }

	// RVA: 0x1F09B34 Offset: 0x1F09B34 VA: 0x1F09B34 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F09B48 Offset: 0x1F09B48 VA: 0x1F09B48
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]