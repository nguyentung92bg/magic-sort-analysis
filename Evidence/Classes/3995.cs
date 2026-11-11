public class MagicLabRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3995
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3752360 Offset: 0x3752360 VA: 0x3752360
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x37523A4 Offset: 0x37523A4 VA: 0x37523A4 Slot: 4
	public void Initialize() { }

	// RVA: 0x375240C Offset: 0x375240C VA: 0x375240C Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(MagicLabRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x3752420 Offset: 0x3752420 VA: 0x3752420
	public Task<ApiResponse<MagicLabEventInfoResponse>> GetEventInfo(int eventType) { }
}

// Namespace: 
[CompilerGenerated]