public class TryShowBroomStreakCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1289
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private BroomStreakService _service; // 0x18
	private readonly ReturnToHomeSequenceService _returnHomeService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F05078 Offset: 0x1F05078 VA: 0x1F05078 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F05080 Offset: 0x1F05080 VA: 0x1F05080 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F05088 Offset: 0x1F05088 VA: 0x1F05088 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F05090 Offset: 0x1F05090 VA: 0x1F05090
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F0509C Offset: 0x1F0509C VA: 0x1F0509C
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	// RVA: 0x1F050CC Offset: 0x1F050CC VA: 0x1F050CC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F05158 Offset: 0x1F05158 VA: 0x1F05158 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F0515C Offset: 0x1F0515C VA: 0x1F0515C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F051A0 Offset: 0x1F051A0 VA: 0x1F051A0 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F0517C Offset: 0x1F0517C VA: 0x1F0517C
	private bool ShouldOpenAutomaticallyOnLobbyReturn(out BroomStreakSource broomStreakSource) { }

	[AsyncStateMachine(typeof(TryShowBroomStreakCommand.<ExecuteAsync>d__16))]
	// RVA: 0x1F051DC Offset: 0x1F051DC VA: 0x1F051DC Slot: 10
	public Task ExecuteAsync() { }
}

// Namespace: 
[CompilerGenerated]