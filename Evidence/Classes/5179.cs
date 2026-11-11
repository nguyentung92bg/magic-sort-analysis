public class IAPPurchaseVerificationService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 5179
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x138B018 Offset: 0x138B018 VA: 0x138B018
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x138B05C Offset: 0x138B05C VA: 0x138B05C Slot: 4
	public void Initialize() { }

	// RVA: 0x138B0C4 Offset: 0x138B0C4 VA: 0x138B0C4 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(IAPPurchaseVerificationService.<GetVerificationResult>d__6))]
	// RVA: 0x138A858 Offset: 0x138A858 VA: 0x138A858
	public Task<ApiResponse<IAPPurchaseVerificationResponse>> GetVerificationResult(string productId, PurchaseEventArgs argsPurchasedProduct) { }
}

// Namespace: Modules.Contexts.Application.IAP.Scripts