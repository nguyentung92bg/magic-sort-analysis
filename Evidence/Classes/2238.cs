public class CreateTeamCommand : TeamsCommandBase // TypeDefIndex: 2238
{
	// Fields
	private readonly TeamCreateRequestModel _request; // 0x10
	private readonly TeamsService _teamsService; // 0x18
	private readonly InventoryService _inventoryService; // 0x20

	// Methods

	// RVA: 0x2F060B0 Offset: 0x2F060B0 VA: 0x2F060B0
	public void .ctor(TeamCreateRequestModel request) { }

	[AsyncStateMachine(typeof(CreateTeamCommand.<ExecuteAsync>d__4))]
	// RVA: 0x2F061A8 Offset: 0x2F061A8 VA: 0x2F061A8 Slot: 6
	public override Task ExecuteAsync() { }

	// RVA: 0x2F06298 Offset: 0x2F06298 VA: 0x2F06298 Slot: 7
	public override void Dispose() { }
}

// Namespace: 
[CompilerGenerated]