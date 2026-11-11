public class TryShowTeamQuestJoinCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2335
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private TeamQuestService _teamQuestService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x2DE20E8 Offset: 0x2DE20E8 VA: 0x2DE20E8 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2DE2108 Offset: 0x2DE2108 VA: 0x2DE2108 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2DE2110 Offset: 0x2DE2110 VA: 0x2DE2110
	private void set_IsShowed(bool value) { }

	// RVA: 0x2DE211C Offset: 0x2DE211C VA: 0x2DE211C Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x2DE2124 Offset: 0x2DE2124 VA: 0x2DE2124 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x2DE21AC Offset: 0x2DE21AC VA: 0x2DE21AC Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(TryShowTeamQuestJoinCommand.<ExecuteAsync>d__11))]
	// RVA: 0x2DE21C4 Offset: 0x2DE21C4 VA: 0x2DE21C4 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2DE22B0 Offset: 0x2DE22B0 VA: 0x2DE22B0 Slot: 11
	public void Dispose() { }

	// RVA: 0x2DE22B4 Offset: 0x2DE22B4 VA: 0x2DE22B4 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2DE22BC Offset: 0x2DE22BC VA: 0x2DE22BC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]