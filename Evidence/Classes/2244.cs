public class JoinTeamCommand : TeamsCommandBase // TypeDefIndex: 2244
{
	// Fields
	private TeamViewModel _teamModel; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly IPopUpService _popUpService; // 0x20
	private readonly IPlayerService _playerService; // 0x28

	// Methods

	// RVA: 0x2EFD408 Offset: 0x2EFD408 VA: 0x2EFD408
	public void .ctor(TeamViewModel teamData) { }

	[AsyncStateMachine(typeof(JoinTeamCommand.<ExecuteAsync>d__5))]
	// RVA: 0x2F07128 Offset: 0x2F07128 VA: 0x2F07128 Slot: 6
	public override Task ExecuteAsync() { }

	// RVA: 0x2F0721C Offset: 0x2F0721C VA: 0x2F0721C Slot: 7
	public override void Dispose() { }

	[AsyncStateMachine(typeof(JoinTeamCommand.<ProcessErrorCodeInternal>d__7))]
	// RVA: 0x2F07220 Offset: 0x2F07220 VA: 0x2F07220
	private Task ProcessErrorCodeInternal(int errorCode) { }

	[AsyncStateMachine(typeof(JoinTeamCommand.<ChangeTeam>d__8))]
	// RVA: 0x2F07318 Offset: 0x2F07318 VA: 0x2F07318
	private Task<bool> ChangeTeam() { }
}

// Namespace: 
[CompilerGenerated]