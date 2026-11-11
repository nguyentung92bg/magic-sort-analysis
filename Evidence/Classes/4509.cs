public class TryShowDailyRewardCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4509
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private DailyRewardService _dailyRewardService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x38D8B38 Offset: 0x38D8B38 VA: 0x38D8B38 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x38D8B40 Offset: 0x38D8B40 VA: 0x38D8B40 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x38D8B48 Offset: 0x38D8B48 VA: 0x38D8B48 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38D8B50 Offset: 0x38D8B50 VA: 0x38D8B50
	private void set_IsShowed(bool value) { }

	// RVA: 0x38D8B5C Offset: 0x38D8B5C VA: 0x38D8B5C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x38D8BE8 Offset: 0x38D8BE8 VA: 0x38D8BE8 Slot: 11
	public void Dispose() { }

	// RVA: 0x38D8BEC Offset: 0x38D8BEC VA: 0x38D8BEC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x38D8C10 Offset: 0x38D8C10 VA: 0x38D8C10 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowDailyRewardCommand.<ExecuteAsync>d__13))]
	// RVA: 0x38D8C18 Offset: 0x38D8C18 VA: 0x38D8C18 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x38D8D04 Offset: 0x38D8D04 VA: 0x38D8D04
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]