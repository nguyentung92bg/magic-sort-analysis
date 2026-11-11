public class BanRemoteService : IService, IInitializable, IDisposable // TypeDefIndex: 5328
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20

	// Methods

	// RVA: 0x1B5CF24 Offset: 0x1B5CF24 VA: 0x1B5CF24
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x1B5CF68 Offset: 0x1B5CF68 VA: 0x1B5CF68 Slot: 4
	public void Initialize() { }

	// RVA: 0x1B5CFD0 Offset: 0x1B5CFD0 VA: 0x1B5CFD0 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(BanRemoteService.<GetBanState>d__6))]
	// RVA: 0x1B5D008 Offset: 0x1B5D008 VA: 0x1B5D008
	public Task<ApiResponse<BanStateResponse>> GetBanState(string userId) { }
}

// Namespace: 
[CompilerGenerated]