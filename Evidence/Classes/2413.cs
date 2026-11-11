public class JoinTeamArenaEventCommand : ICommand // TypeDefIndex: 2413
{
	// Fields
	private readonly TeamArenaService _teamArenaService; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly bool _pressedContinue; // 0x20
	private readonly bool _swipeToTeams; // 0x21

	// Methods

	// RVA: 0x2969534 Offset: 0x2969534 VA: 0x2969534
	public void .ctor(bool pressedContinue, bool swipeToTeams = True) { }

	[AsyncStateMachine(typeof(JoinTeamArenaEventCommand.<ExecuteAsync>d__5))]
	// RVA: 0x2969620 Offset: 0x2969620 VA: 0x2969620 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x296D63C Offset: 0x296D63C VA: 0x296D63C Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]