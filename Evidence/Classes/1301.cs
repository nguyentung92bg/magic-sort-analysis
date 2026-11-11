public class TryShowWeeklyTournamentCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1301
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F0790C Offset: 0x1F0790C VA: 0x1F0790C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F07914 Offset: 0x1F07914 VA: 0x1F07914 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F0791C Offset: 0x1F0791C VA: 0x1F0791C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F07924 Offset: 0x1F07924 VA: 0x1F07924
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F07930 Offset: 0x1F07930 VA: 0x1F07930 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowWeeklyTournamentCommand.<ExecuteAsync>d__9))]
	// RVA: 0x1F07938 Offset: 0x1F07938 VA: 0x1F07938 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x1F07A24 Offset: 0x1F07A24 VA: 0x1F07A24
	private bool ShouldOpenAutomaticallyOnLobbyReturn() { }

	// RVA: 0x1F07AA8 Offset: 0x1F07AA8 VA: 0x1F07AA8 Slot: 11
	public void Dispose() { }

	// RVA: 0x1F07AAC Offset: 0x1F07AAC VA: 0x1F07AAC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F07AC4 Offset: 0x1F07AC4 VA: 0x1F07AC4 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F07ACC Offset: 0x1F07ACC VA: 0x1F07ACC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]