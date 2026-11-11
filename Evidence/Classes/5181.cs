private struct IAPService.<ProcessPurchase>d__21 : IAsyncStateMachine // TypeDefIndex: 5181
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<bool> <>t__builder; // 0x8
	public IAPService <>4__this; // 0x20
	public string productId; // 0x28
	public IAPOrigin iapOrigin; // 0x30
	public IAPReason iapReason; // 0x34
	public IAPContext context; // 0x38
	public bool giveRewardsWithoutAnimation; // 0x3C
	private bool <result>5__2; // 0x3D
	private WebShopPromptResult <promptResult>5__3; // 0x40
	private TaskAwaiter<WebShopPromptResult> <>u__1; // 0x48
	private TaskAwaiter<bool> <>u__2; // 0x50

	// Methods

	// RVA: 0x138C640 Offset: 0x138C640 VA: 0x138C640 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x138CC38 Offset: 0x138CC38 VA: 0x138CC38 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts