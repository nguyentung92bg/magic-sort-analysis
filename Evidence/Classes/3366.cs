public class EndlessPortalRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3366
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x34681B8 Offset: 0x34681B8 VA: 0x34681B8
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x34681FC Offset: 0x34681FC VA: 0x34681FC Slot: 4
	public void Initialize() { }

	// RVA: 0x3468264 Offset: 0x3468264 VA: 0x3468264 Slot: 5
	public void Dispose() { }

	// RVA: 0x3468278 Offset: 0x3468278 VA: 0x3468278
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(EndlessPortalRemoteService.<SendGetRequest>d__7))]
	// RVA: 0x34682F0 Offset: 0x34682F0 VA: 0x34682F0
	public Task<ApiResponse<EndlessPortalResponse>> SendGetRequest(EndlessPortalRequestModel requestModel) { }

	[AsyncStateMachine(typeof(EndlessPortalRemoteService.<SendClaimRequest>d__8))]
	// RVA: 0x346841C Offset: 0x346841C VA: 0x346841C
	public Task<ApiResponse<EndlessPortalResponse>> SendClaimRequest(EndlessPortalRequestModel requestModel) { }

	[AsyncStateMachine(typeof(EndlessPortalRemoteService.<SendRequest>d__9))]
	// RVA: 0x3468548 Offset: 0x3468548 VA: 0x3468548
	private Task<ApiResponse<EndlessPortalResponse>> SendRequest(string url, EndlessPortalRequestModel requestModel) { }
}

// Namespace: 
[CompilerGenerated]