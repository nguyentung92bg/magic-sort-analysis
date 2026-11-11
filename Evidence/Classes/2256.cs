private struct ShowTeamCommand.<ExecuteAsync>d__6 : IAsyncStateMachine // TypeDefIndex: 2256
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public ShowTeamCommand <>4__this; // 0x20
	private Task<TeamDetailsViewModel> <teamDataTask>5__2; // 0x28
	private Task<List<TeamJoinRequestInfo>> <requestsTask>5__3; // 0x30
	private bool <shouldFetchRequests>5__4; // 0x38
	private TeamDetailsViewModel <teamData>5__5; // 0x40
	private List<TeamJoinRequestInfo> <requests>5__6; // 0x48
	private TaskAwaiter <>u__1; // 0x50

	// Methods

	// RVA: 0x2F0CD5C Offset: 0x2F0CD5C VA: 0x2F0CD5C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x2F0D860 Offset: 0x2F0D860 VA: 0x2F0D860 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI.Commands