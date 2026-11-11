public class RefreshTeamInfoCommand : ICommand // TypeDefIndex: 2252
{
	// Fields
	private readonly string _teamId; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly IPopUpService _popUpService; // 0x20

	// Methods

	// RVA: 0x2F09174 Offset: 0x2F09174 VA: 0x2F09174
	public void .ctor(string teamId) { }

	[AsyncStateMachine(typeof(RefreshTeamInfoCommand.<ExecuteAsync>d__4))]
	// RVA: 0x2F0B494 Offset: 0x2F0B494 VA: 0x2F0B494 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2F0B580 Offset: 0x2F0B580 VA: 0x2F0B580 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]