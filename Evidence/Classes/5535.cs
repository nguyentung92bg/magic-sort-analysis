private struct BestHttpTransport.<PostAsync>d__7 : IAsyncStateMachine // TypeDefIndex: 5535
{
	// Fields
	public int <>1__state; // 0x0
	[Nullable(0)]
	public AsyncTaskMethodBuilder<byte[]> <>t__builder; // 0x8
	[Nullable(0)]
	public string url; // 0x20
	[Nullable(new[] { 0, 1, 1 })]
	public Dictionary<string, string> headers; // 0x28
	[Nullable(0)]
	public byte[] payload; // 0x30
	public CancellationToken cancellationToken; // 0x38
	[Nullable(0)]
	private TaskAwaiter<byte[]> <>u__1; // 0x40

	// Methods

	// RVA: 0x14356F0 Offset: 0x14356F0 VA: 0x14356F0 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1435E68 Offset: 0x1435E68 VA: 0x1435E68 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: GrandSDK.Core.Networking
[NullableContext(1)]
[Nullable(0)]