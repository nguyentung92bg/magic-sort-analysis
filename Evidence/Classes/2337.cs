public class TryShowTeamQuestPopupCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2337
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

	// RVA: 0x2DE25FC Offset: 0x2DE25FC VA: 0x2DE25FC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2DE261C Offset: 0x2DE261C VA: 0x2DE261C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2DE2624 Offset: 0x2DE2624 VA: 0x2DE2624
	private void set_IsShowed(bool value) { }

	// RVA: 0x2DE2630 Offset: 0x2DE2630 VA: 0x2DE2630 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x2DE2638 Offset: 0x2DE2638 VA: 0x2DE2638 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowTeamQuestPopupCommand.<ExecuteAsync>d__10))]
	// RVA: 0x2DE26C0 Offset: 0x2DE26C0 VA: 0x2DE26C0 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2DE27AC Offset: 0x2DE27AC VA: 0x2DE27AC Slot: 11
	public void Dispose() { }

	// RVA: 0x2DE27B0 Offset: 0x2DE27B0 VA: 0x2DE27B0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2DE27C8 Offset: 0x2DE27C8 VA: 0x2DE27C8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2DE27D0 Offset: 0x2DE27D0 VA: 0x2DE27D0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena
[Serializable]