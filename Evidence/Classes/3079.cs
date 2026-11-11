private struct WebShopHandler.<StartCheckoutAsync>d__4 : IAsyncStateMachine // TypeDefIndex: 3079
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<WebShopTransactionDataModel> <>t__builder; // 0x8
	public string productId; // 0x20
	public string webProductId; // 0x28
	public string countryCode; // 0x30
	public WebShopHandler <>4__this; // 0x38
	public IAPOrigin iapOrigin; // 0x40
	public IAPReason iapReason; // 0x44
	public IAPContext context; // 0x48
	public bool giveRewardsWithoutAnimation; // 0x4C
	private IPopUpService <popupService>5__2; // 0x50
	private TaskAwaiter<ApiResponse<CreateAppchargeSessionResponse>> <>u__1; // 0x58
	private TaskAwaiter <>u__2; // 0x60

	// Methods

	// RVA: 0x3167BC0 Offset: 0x3167BC0 VA: 0x3167BC0 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x3168644 Offset: 0x3168644 VA: 0x3168644 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: 
[CompilerGenerated]