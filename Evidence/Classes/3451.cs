public class ChooseOneSpecialOfferRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3451
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x20AB9D4 Offset: 0x20AB9D4 VA: 0x20AB9D4
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x20ABA18 Offset: 0x20ABA18 VA: 0x20ABA18 Slot: 4
	public void Initialize() { }

	// RVA: 0x20ABA80 Offset: 0x20ABA80 VA: 0x20ABA80 Slot: 5
	public void Dispose() { }

	// RVA: 0x20ABA94 Offset: 0x20ABA94 VA: 0x20ABA94
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(ChooseOneSpecialOfferRemoteService.<SendGetRequest>d__7))]
	// RVA: 0x20ABB0C Offset: 0x20ABB0C VA: 0x20ABB0C
	public Task<ApiResponse<ChooseOneSpecialOfferResponse>> SendGetRequest(ChooseOneSpecialOfferRequestModel requestModel) { }

	[AsyncStateMachine(typeof(ChooseOneSpecialOfferRemoteService.<SendClaimRequest>d__8))]
	// RVA: 0x20ABC38 Offset: 0x20ABC38 VA: 0x20ABC38
	public Task<ApiResponse<ChooseOneSpecialOfferResponse>> SendClaimRequest(ChooseOneSpecialOfferRequestModel requestModel) { }

	[AsyncStateMachine(typeof(ChooseOneSpecialOfferRemoteService.<SendRequest>d__9))]
	// RVA: 0x20ABD64 Offset: 0x20ABD64 VA: 0x20ABD64
	private Task<ApiResponse<ChooseOneSpecialOfferResponse>> SendRequest(string url, ChooseOneSpecialOfferRequestModel requestModel) { }
}

// Namespace: 
[CompilerGenerated]