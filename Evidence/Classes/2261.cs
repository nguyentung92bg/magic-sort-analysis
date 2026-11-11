public class UpdateMemberRoleCommand : TeamsCommandBase // TypeDefIndex: 2261
{
	// Fields
	private bool _promote; // 0x10
	private TeamMemberViewModel _userData; // 0x18
	private TeamsService _teamsService; // 0x20
	private IPopUpService _popUpService; // 0x28
	private int _coleaderCountInTeam; // 0x30

	// Methods

	// RVA: 0x2EFEB40 Offset: 0x2EFEB40 VA: 0x2EFEB40
	public void .ctor(TeamMemberViewModel userData, bool promote, int coleaderCountInTeam) { }

	[AsyncStateMachine(typeof(UpdateMemberRoleCommand.<ExecuteAsync>d__6))]
	// RVA: 0x2F0DCBC Offset: 0x2F0DCBC VA: 0x2F0DCBC Slot: 6
	public override Task ExecuteAsync() { }

	// RVA: 0x2F0DDAC Offset: 0x2F0DDAC VA: 0x2F0DDAC Slot: 7
	public override void Dispose() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts
[Serializable]