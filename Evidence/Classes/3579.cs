public class MergeMiniGameRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3579
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2196054 Offset: 0x2196054 VA: 0x2196054
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2196098 Offset: 0x2196098 VA: 0x2196098 Slot: 4
	public void Initialize() { }

	// RVA: 0x2196100 Offset: 0x2196100 VA: 0x2196100 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(MergeMiniGameRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x2196114 Offset: 0x2196114 VA: 0x2196114
	public Task<ApiResponse<MergeMiniGameEventInfoResponse>> GetEventInfo(int eventType) { }

	// RVA: 0x2196234 Offset: 0x2196234 VA: 0x2196234
	public MergeMiniGameEventInfoResponse LoadMockResponse() { }
}

// Namespace: 
[CompilerGenerated]