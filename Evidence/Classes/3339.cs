public class NoAdsOfferRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3339
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private readonly RemoteConfigs _remoteConfigs; // 0x20
	private CancellationTokenSource _cancellationTokenSource; // 0x28

	// Methods

	// RVA: 0x3462E94 Offset: 0x3462E94 VA: 0x3462E94
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, RemoteConfigs remoteConfigs) { }

	// RVA: 0x3462EF4 Offset: 0x3462EF4 VA: 0x3462EF4 Slot: 4
	public void Initialize() { }

	// RVA: 0x3462F5C Offset: 0x3462F5C VA: 0x3462F5C Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(NoAdsOfferRemoteService.<SendGetRequest>d__7))]
	// RVA: 0x3462F70 Offset: 0x3462F70 VA: 0x3462F70
	public Task<ApiResponse<NoAdsOfferResponse>> SendGetRequest() { }

	[AsyncStateMachine(typeof(NoAdsOfferRemoteService.<SendRequest>d__8))]
	// RVA: 0x346307C Offset: 0x346307C VA: 0x346307C
	private Task<ApiResponse<NoAdsOfferResponse>> SendRequest(string url, NoAdsOfferRequestModel requestModel) { }

	[AsyncStateMachine(typeof(NoAdsOfferRemoteService.<SendClaimRequest>d__9))]
	// RVA: 0x34631B8 Offset: 0x34631B8 VA: 0x34631B8
	public Task<ApiResponse<string>> SendClaimRequest() { }
}

// Namespace: 
[CompilerGenerated]