public class WatchAndWinRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3130
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3170A88 Offset: 0x3170A88 VA: 0x3170A88
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3170ACC Offset: 0x3170ACC VA: 0x3170ACC Slot: 4
	public void Initialize() { }

	// RVA: 0x3170B34 Offset: 0x3170B34 VA: 0x3170B34 Slot: 5
	public void Dispose() { }

	// RVA: 0x3170B48 Offset: 0x3170B48 VA: 0x3170B48
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(WatchAndWinRemoteService.<SendGetRequest>d__7))]
	// RVA: 0x3170BC0 Offset: 0x3170BC0 VA: 0x3170BC0
	public Task<ApiResponse<WatchAndWinResponse>> SendGetRequest(WatchAndWinRequestModel requestModel) { }

	[AsyncStateMachine(typeof(WatchAndWinRemoteService.<SendRequest>d__8))]
	// RVA: 0x3170CEC Offset: 0x3170CEC VA: 0x3170CEC
	private Task<ApiResponse<WatchAndWinResponse>> SendRequest(string url, WatchAndWinRequestModel requestModel) { }
}

// Namespace: 
[CompilerGenerated]