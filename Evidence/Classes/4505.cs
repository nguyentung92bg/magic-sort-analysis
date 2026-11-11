public class TryShowDailyRewardBulkGiveAnimationCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4505
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x38D8218 Offset: 0x38D8218 VA: 0x38D8218 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x38D8220 Offset: 0x38D8220 VA: 0x38D8220 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x38D8228 Offset: 0x38D8228 VA: 0x38D8228 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38D8230 Offset: 0x38D8230 VA: 0x38D8230
	private void set_IsShowed(bool value) { }

	// RVA: 0x38D823C Offset: 0x38D823C VA: 0x38D823C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowDailyRewardBulkGiveAnimationCommand.<ExecuteAsync>d__9))]
	// RVA: 0x38D8244 Offset: 0x38D8244 VA: 0x38D8244 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x38D8330 Offset: 0x38D8330 VA: 0x38D8330 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x38D83BC Offset: 0x38D83BC VA: 0x38D83BC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x38D83C4 Offset: 0x38D83C4 VA: 0x38D83C4 Slot: 11
	public void Dispose() { }

	// RVA: 0x38D83C8 Offset: 0x38D83C8 VA: 0x38D83C8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]