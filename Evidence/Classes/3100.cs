public class WebShopRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3100
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20
	private Dictionary<string, string> _headers; // 0x28
	private RemoteConfigs _remoteConfigs; // 0x30

	// Methods

	// RVA: 0x3169C30 Offset: 0x3169C30 VA: 0x3169C30
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, RemoteConfigs remoteConfigs) { }

	// RVA: 0x3169C90 Offset: 0x3169C90 VA: 0x3169C90 Slot: 4
	public void Initialize() { }

	// RVA: 0x3169DF0 Offset: 0x3169DF0 VA: 0x3169DF0 Slot: 5
	public void Dispose() { }

	// RVA: 0x3169E24 Offset: 0x3169E24 VA: 0x3169E24
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(WebShopRemoteService.<SendCreateSessionRequest>d__9))]
	// RVA: 0x3168518 Offset: 0x3168518 VA: 0x3168518
	public Task<ApiResponse<CreateAppchargeSessionResponse>> SendCreateSessionRequest(CreateAppchargeSessionRequest request) { }

	[AsyncStateMachine(typeof(WebShopRemoteService.<SendGetPurchaseStatusRequest>d__10))]
	// RVA: 0x3169A34 Offset: 0x3169A34 VA: 0x3169A34
	public Task<ApiResponse<AppchargePurchaseStatusResponse>> SendGetPurchaseStatusRequest(string purchaseId) { }

	[AsyncStateMachine(typeof(WebShopRemoteService.<SendClaimPurchaseRequest>d__11))]
	// RVA: 0x31689E0 Offset: 0x31689E0 VA: 0x31689E0
	public Task<ApiResponse<ClaimAppchargePurchaseResponse>> SendClaimPurchaseRequest(string purchaseId) { }

	[AsyncStateMachine(typeof(WebShopRemoteService.<SendClaimPurchasesRequest>d__12))]
	// RVA: 0x3166F88 Offset: 0x3166F88 VA: 0x3166F88
	public Task<ApiResponse<ClaimAppchargePurchasesResponse>> SendClaimPurchasesRequest(List<string> purchaseIds) { }

	[AsyncStateMachine(typeof(WebShopRemoteService.<SendGetClaimablePurchasesRequest>d__13))]
	// RVA: 0x3167A34 Offset: 0x3167A34 VA: 0x3167A34
	public Task<ApiResponse<AppchargeClaimablePurchasesResponse>> SendGetClaimablePurchasesRequest() { }
}

// Namespace: 
[CompilerGenerated]