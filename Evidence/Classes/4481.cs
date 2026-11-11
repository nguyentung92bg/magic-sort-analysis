public class DailyRewardRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4481
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x38D3424 Offset: 0x38D3424 VA: 0x38D3424
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x38D3468 Offset: 0x38D3468 VA: 0x38D3468 Slot: 4
	public void Initialize() { }

	// RVA: 0x38D34D0 Offset: 0x38D34D0 VA: 0x38D34D0 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(DailyRewardRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x38D34E4 Offset: 0x38D34E4 VA: 0x38D34E4
	public Task<ApiResponse<DailyRewardEventInfoResponse>> GetEventInfo(int eventType) { }
}

// Namespace: 
[CompilerGenerated]