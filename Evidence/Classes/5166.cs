private struct IAPHandler.<PurchaseAsync>d__1 : IAsyncStateMachine // TypeDefIndex: 5166
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<bool> <>t__builder; // 0x8
	public string productId; // 0x20
	public IAPReason iapReason; // 0x28
	public IAPOrigin iapOrigin; // 0x2C
	public IAPContext context; // 0x30
	public bool giveRewardsWithoutAnimation; // 0x34
	public IAPHandler <>4__this; // 0x38
	private Task<PurchaseResult> <purchaseTask>5__2; // 0x40
	private TaskAwaiter<PurchaseResult> <>u__1; // 0x48
	private TaskAwaiter <>u__2; // 0x50

	// Methods

	// RVA: 0x138739C Offset: 0x138739C VA: 0x138739C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x138811C Offset: 0x138811C VA: 0x138811C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts