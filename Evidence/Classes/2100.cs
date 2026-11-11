private struct TeamsRemoteService.<FetchChatHistory>d__23 : IAsyncStateMachine // TypeDefIndex: 2100
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<List<SocketMessage<TeamChatMessage>>> <>t__builder; // 0x8
	public TeamsRemoteService <>4__this; // 0x20
	public TeamChatHistoryRequestModel request; // 0x28
	private List<SocketMessage<TeamChatMessage>> <messages>5__2; // 0x30
	private object <>7__wrap2; // 0x38
	private int <>7__wrap3; // 0x40
	private TaskAwaiter<ApiResponse<byte[]>> <>u__1; // 0x48
	private TaskAwaiter<List<SocketMessage<TeamChatMessage>>> <>u__2; // 0x50

	// Methods

	// RVA: 0x35ABDF4 Offset: 0x35ABDF4 VA: 0x35ABDF4 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x35AC98C Offset: 0x35AC98C VA: 0x35AC98C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: 
[CompilerGenerated]