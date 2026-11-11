public class SpecialOfferRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3293
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x35943C4 Offset: 0x35943C4 VA: 0x35943C4
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3594408 Offset: 0x3594408 VA: 0x3594408 Slot: 4
	public void Initialize() { }

	// RVA: 0x3594470 Offset: 0x3594470 VA: 0x3594470 Slot: 5
	public void Dispose() { }

	// RVA: 0x3594484 Offset: 0x3594484 VA: 0x3594484
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(SpecialOfferRemoteService.<SendGetRequest>d__7))]
	// RVA: 0x35944FC Offset: 0x35944FC VA: 0x35944FC
	public Task<ApiResponse<SpecialOfferResponse>> SendGetRequest(SpecialOfferRequestModel requestModel) { }

	[AsyncStateMachine(typeof(SpecialOfferRemoteService.<SendClaimRequest>d__8))]
	// RVA: 0x3594628 Offset: 0x3594628 VA: 0x3594628
	public Task<ApiResponse<SpecialOfferResponse>> SendClaimRequest(SpecialOfferRequestModel requestModel) { }

	[AsyncStateMachine(typeof(SpecialOfferRemoteService.<SendRequest>d__9))]
	// RVA: 0x3594754 Offset: 0x3594754 VA: 0x3594754
	private Task<ApiResponse<SpecialOfferResponse>> SendRequest(string url, SpecialOfferRequestModel requestModel) { }
}

// Namespace: 
[CompilerGenerated]