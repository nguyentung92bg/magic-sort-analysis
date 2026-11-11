public class OpenTeamArenaJoinPopupCommand : ICommand // TypeDefIndex: 2415
{
	// Fields
	private readonly TeamArenaService _teamArenaService; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly IPopUpService _popUpService; // 0x20
	private readonly bool _forced; // 0x28

	// Methods

	// RVA: 0x296C4F0 Offset: 0x296C4F0 VA: 0x296C4F0
	public void .ctor(bool forced) { }

	[AsyncStateMachine(typeof(OpenTeamArenaJoinPopupCommand.<ExecuteAsync>d__5))]
	// RVA: 0x296C620 Offset: 0x296C620 VA: 0x296C620 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x296DDE4 Offset: 0x296DDE4 VA: 0x296DDE4 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]