public class TreasureDrillRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3186
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3302CF4 Offset: 0x3302CF4 VA: 0x3302CF4
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3302D38 Offset: 0x3302D38 VA: 0x3302D38 Slot: 4
	public void Initialize() { }

	// RVA: 0x3302DA0 Offset: 0x3302DA0 VA: 0x3302DA0 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(TreasureDrillRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x3302DB4 Offset: 0x3302DB4 VA: 0x3302DB4
	public Task<ApiResponse<TreasureDrillInfoResponse>> GetEventInfo(int eventType) { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts