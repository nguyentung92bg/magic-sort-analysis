public class MiniGameRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3491
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x20B496C Offset: 0x20B496C VA: 0x20B496C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x20B49B0 Offset: 0x20B49B0 VA: 0x20B49B0 Slot: 4
	public void Initialize() { }

	// RVA: 0x20B4A18 Offset: 0x20B4A18 VA: 0x20B4A18 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(MiniGameRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x20B4A2C Offset: 0x20B4A2C VA: 0x20B4A2C
	public Task<ApiResponse<MiniGameEventInfoResponse>> GetEventInfo(int eventType) { }
}

// Namespace: 
[CompilerGenerated]