public class GrandEventSenderRemoteService : IService, IInitializable, IDisposable // TypeDefIndex: 5265
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x1CC77EC Offset: 0x1CC77EC VA: 0x1CC77EC
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x1CC798C Offset: 0x1CC798C VA: 0x1CC798C Slot: 4
	public void Initialize() { }

	// RVA: 0x1CC9F5C Offset: 0x1CC9F5C VA: 0x1CC9F5C Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(GrandEventSenderRemoteService.<SendEvent>d__6))]
	// RVA: 0x1CC9F70 Offset: 0x1CC9F70 VA: 0x1CC9F70
	public Task<ApiResponse<string>> SendEvent(string eventName) { }
}

// Namespace: 
[CompilerGenerated]