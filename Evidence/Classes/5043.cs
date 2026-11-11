private struct SyncService.<SyncFacebookAsync>d__21 : IAsyncStateMachine // TypeDefIndex: 5043
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<FacebookSyncResponse> <>t__builder; // 0x8
	public SyncService <>4__this; // 0x20
	public string facebookId; // 0x28
	public string facebookImageUrl; // 0x30
	public string facebookName; // 0x38
	public List<string> friendsList; // 0x40
	private ApiResponse<FacebookSyncResponse> <result>5__2; // 0x48
	private TaskAwaiter<ApiResponse<FacebookSyncResponse>> <>u__1; // 0x50
	private TaskAwaiter <>u__2; // 0x58
	private TaskAwaiter<bool> <>u__3; // 0x60

	// Methods

	// RVA: 0x3CD719C Offset: 0x3CD719C VA: 0x3CD719C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x3CD7738 Offset: 0x3CD7738 VA: 0x3CD7738 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: 
[CompilerGenerated]