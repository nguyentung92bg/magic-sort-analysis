private struct GrandABService.<WaitForAsync>d__21 : IAsyncStateMachine // TypeDefIndex: 5221
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<bool> <>t__builder; // 0x8
	public Func<Task> poll; // 0x20
	public Func<bool> isComplete; // 0x28
	public int timeoutMs; // 0x30
	private Stopwatch <clock>5__2; // 0x38
	private TaskAwaiter <>u__1; // 0x40

	// Methods

	// RVA: 0x1CBC244 Offset: 0x1CBC244 VA: 0x1CBC244 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1CBC540 Offset: 0x1CBC540 VA: 0x1CBC540 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Application.GrandbaseNS.Scripts