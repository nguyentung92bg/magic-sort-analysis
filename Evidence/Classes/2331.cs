public class JoinTeamQuestEventCommand : ICommand // TypeDefIndex: 2331
{
	// Fields
	private readonly TeamQuestService _teamQuestService; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly bool _showLeaderboard; // 0x20
	private readonly bool _swipeToTeams; // 0x21

	// Methods

	// RVA: 0x2DDBF80 Offset: 0x2DDBF80 VA: 0x2DDBF80
	public void .ctor(bool showLeaderboard, bool swipeToTeams = True) { }

	[AsyncStateMachine(typeof(JoinTeamQuestEventCommand.<ExecuteAsync>d__5))]
	// RVA: 0x2DDC06C Offset: 0x2DDC06C VA: 0x2DDC06C Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2DE13FC Offset: 0x2DE13FC VA: 0x2DE13FC Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]