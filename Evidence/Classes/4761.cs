public class BroomStreakRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4761
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3FBC670 Offset: 0x3FBC670 VA: 0x3FBC670
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3FBC6B4 Offset: 0x3FBC6B4 VA: 0x3FBC6B4 Slot: 4
	public void Initialize() { }

	// RVA: 0x3FBC71C Offset: 0x3FBC71C VA: 0x3FBC71C Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(BroomStreakRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x3FBC730 Offset: 0x3FBC730 VA: 0x3FBC730
	public Task<ApiResponse<BroomStreakEventInfoResponse>> GetEventInfo(int eventType) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]