private struct GrandABService.<InitializeAsync>d__20 : IAsyncStateMachine // TypeDefIndex: 5219
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public GrandABService <>4__this; // 0x20
	public bool useGrandAB; // 0x28
	public bool dryRun; // 0x29
	public int timeoutMs; // 0x2C
	private Stopwatch <waitClock>5__2; // 0x30
	private long <waited>5__3; // 0x38
	private bool <launchFetchComplete>5__4; // 0x40
	private TaskAwaiter<bool> <>u__1; // 0x48
	private TaskAwaiter <>u__2; // 0x50

	// Methods

	// RVA: 0x1CBB444 Offset: 0x1CBB444 VA: 0x1CBB444 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1CBBCC8 Offset: 0x1CBBCC8 VA: 0x1CBBCC8 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: 
[CompilerGenerated]