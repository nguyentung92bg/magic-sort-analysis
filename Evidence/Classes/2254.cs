public class ReplyJoinRequestCommand : TeamsCommandBase // TypeDefIndex: 2254
{
	// Fields
	private string _requestId; // 0x10
	private bool _accepted; // 0x18
	private TeamsService _teamsService; // 0x20
	private IPopUpService _popUpService; // 0x28

	// Methods

	// RVA: 0x2F0B940 Offset: 0x2F0B940 VA: 0x2F0B940
	public void .ctor(string requestId, bool accepted) { }

	[AsyncStateMachine(typeof(ReplyJoinRequestCommand.<ExecuteAsync>d__5))]
	// RVA: 0x2F0BA3C Offset: 0x2F0BA3C VA: 0x2F0BA3C Slot: 6
	public override Task ExecuteAsync() { }

	// RVA: 0x2F0BB2C Offset: 0x2F0BB2C VA: 0x2F0BB2C Slot: 7
	public override void Dispose() { }
}

// Namespace: 
[CompilerGenerated]