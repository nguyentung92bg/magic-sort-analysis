public class GiveDailyCoinRewardsCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1354
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private CancellationToken _cancellationToken; // 0x18
	private Tween _giveNextRewardTween; // 0x20
	private LevelAndLevelConfigModel _lastWinLevelAndLevelConfigModel; // 0x28

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F13B84 Offset: 0x1F13B84 VA: 0x1F13B84 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F13B8C Offset: 0x1F13B8C VA: 0x1F13B8C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F13B94 Offset: 0x1F13B94 VA: 0x1F13B94 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F13B9C Offset: 0x1F13B9C VA: 0x1F13B9C
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F13BA8 Offset: 0x1F13BA8 VA: 0x1F13BA8 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F13BE4 Offset: 0x1F13BE4 VA: 0x1F13BE4 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F13BEC Offset: 0x1F13BEC VA: 0x1F13BEC Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(GiveDailyCoinRewardsCommand.<ExecuteAsync>d__14))]
	// RVA: 0x1F13BF4 Offset: 0x1F13BF4 VA: 0x1F13BF4 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(GiveDailyCoinRewardsCommand.<GiveDailyLevelCoinReward>d__15))]
	// RVA: 0x1F13CE0 Offset: 0x1F13CE0 VA: 0x1F13CE0
	private Task GiveDailyLevelCoinReward() { }

	// RVA: 0x1F13DCC Offset: 0x1F13DCC VA: 0x1F13DCC Slot: 11
	public void Dispose() { }

	// RVA: 0x1F13DE0 Offset: 0x1F13DE0 VA: 0x1F13DE0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]