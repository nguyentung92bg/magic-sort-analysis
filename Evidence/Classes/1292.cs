public class TryShowDailyCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1292
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F0580C Offset: 0x1F0580C VA: 0x1F0580C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F05814 Offset: 0x1F05814 VA: 0x1F05814 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F0581C Offset: 0x1F0581C VA: 0x1F0581C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F05824 Offset: 0x1F05824 VA: 0x1F05824
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F05830 Offset: 0x1F05830 VA: 0x1F05830 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F05838 Offset: 0x1F05838 VA: 0x1F05838 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F0583C Offset: 0x1F0583C VA: 0x1F0583C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F058D0 Offset: 0x1F058D0 VA: 0x1F058D0 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F05854 Offset: 0x1F05854 VA: 0x1F05854
	private bool ShouldOpenAutomaticallyOnLobbyReturn() { }

	[AsyncStateMachine(typeof(TryShowDailyCommand.<ExecuteAsync>d__13))]
	// RVA: 0x1F058D8 Offset: 0x1F058D8 VA: 0x1F058D8 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryShowDailyCommand.<OpenDailyFirstShow>d__14))]
	// RVA: 0x1F059C4 Offset: 0x1F059C4 VA: 0x1F059C4
	private Task OpenDailyFirstShow() { }

	// RVA: 0x1F05AB0 Offset: 0x1F05AB0 VA: 0x1F05AB0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]