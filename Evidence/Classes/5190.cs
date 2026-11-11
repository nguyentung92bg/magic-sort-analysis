private struct IAPVerificationRemoteService.<SendVerifyBatchRequest>d__12 : IAsyncStateMachine // TypeDefIndex: 5190
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<ApiResponse<VerifyPurchasesResponse>> <>t__builder; // 0x8
	public IReadOnlyList<VerificationCacheModel> pendingVerifications; // 0x20
	public IAPVerificationRemoteService <>4__this; // 0x28
	private TaskAwaiter<ApiResponse<VerifyPurchasesResponse>> <>u__1; // 0x30

	// Methods

	// RVA: 0x138DFE8 Offset: 0x138DFE8 VA: 0x138DFE8 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x138E8DC Offset: 0x138E8DC VA: 0x138E8DC Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts.VerificationService