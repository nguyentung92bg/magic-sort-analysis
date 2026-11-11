public class EditTeamCommand : TeamsCommandBase // TypeDefIndex: 2240
{
	// Fields
	private readonly EditTeamRequestModel _request; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly IPopUpService _popUpService; // 0x20

	// Methods

	// RVA: 0x2EFC0D0 Offset: 0x2EFC0D0 VA: 0x2EFC0D0
	public void .ctor(EditTeamRequestModel request) { }

	[AsyncStateMachine(typeof(EditTeamCommand.<ExecuteAsync>d__4))]
	// RVA: 0x2F06B3C Offset: 0x2F06B3C VA: 0x2F06B3C Slot: 6
	public override Task ExecuteAsync() { }

	// RVA: 0x2F06C28 Offset: 0x2F06C28 VA: 0x2F06C28 Slot: 7
	public override void Dispose() { }
}

// Namespace: 
[CompilerGenerated]