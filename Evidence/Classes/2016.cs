public class TowerWinStreakRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2016
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x32E1B30 Offset: 0x32E1B30 VA: 0x32E1B30
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x32E1B74 Offset: 0x32E1B74 VA: 0x32E1B74 Slot: 4
	public void Initialize() { }

	// RVA: 0x32E1BDC Offset: 0x32E1BDC VA: 0x32E1BDC Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(TowerWinStreakRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x32E1BF0 Offset: 0x32E1BF0 VA: 0x32E1BF0
	public Task<ApiResponse<TowerWinStreakEventInfoResponse>> GetEventInfo(int eventType) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]