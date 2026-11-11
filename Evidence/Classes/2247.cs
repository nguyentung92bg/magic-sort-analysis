public class KickUserFromTeamCommand : TeamsCommandBase // TypeDefIndex: 2247
{
	// Fields
	private TeamMemberViewModel _userToKick; // 0x10
	private string _teamId; // 0x18
	private TeamsService _teamsService; // 0x20
	private IPopUpService _popUpService; // 0x28

	// Methods

	// RVA: 0x2EFE9BC Offset: 0x2EFE9BC VA: 0x2EFE9BC
	public void .ctor(TeamMemberViewModel userToKick, string teamId) { }

	[AsyncStateMachine(typeof(KickUserFromTeamCommand.<ExecuteAsync>d__5))]
	// RVA: 0x2F092D0 Offset: 0x2F092D0 VA: 0x2F092D0 Slot: 6
	public override Task ExecuteAsync() { }

	// RVA: 0x2F093C0 Offset: 0x2F093C0 VA: 0x2F093C0 Slot: 7
	public override void Dispose() { }

	[AsyncStateMachine(typeof(KickUserFromTeamCommand.<KickUser>d__7))]
	// RVA: 0x2F093C4 Offset: 0x2F093C4 VA: 0x2F093C4
	private Task KickUser() { }
}

// Namespace: 
[CompilerGenerated]