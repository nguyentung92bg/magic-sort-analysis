private struct GrandRemoteConfigFetcher.<RetryFetchingRegularLevels>d__16 : IAsyncStateMachine // TypeDefIndex: 5200
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncVoidMethodBuilder <>t__builder; // 0x8
	public GrandRemoteConfigFetcher <>4__this; // 0x28
	public int progress; // 0x30
	public Action onSuccessAction; // 0x38
	private Task<ApiResponse<GrandRemoteConfigResponse>> <fetchTask>5__2; // 0x40
	private TaskAwaiter<ApiResponse<GrandRemoteConfigResponse>> <>u__1; // 0x48

	// Methods

	// RVA: 0x1CB6378 Offset: 0x1CB6378 VA: 0x1CB6378 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1CB666C Offset: 0x1CB666C VA: 0x1CB666C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Application.GrandConfig.Scripts