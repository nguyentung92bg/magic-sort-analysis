public class WheelOfFortuneRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1867
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2DA42C4 Offset: 0x2DA42C4 VA: 0x2DA42C4
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2DA4308 Offset: 0x2DA4308 VA: 0x2DA4308 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DA4370 Offset: 0x2DA4370 VA: 0x2DA4370 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(WheelOfFortuneRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x2DA4384 Offset: 0x2DA4384 VA: 0x2DA4384
	public Task<ApiResponse<WheelOfFortuneInfoResponse>> GetEventInfo(int eventType) { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune
[Serializable]