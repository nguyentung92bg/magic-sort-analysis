public class GrandScreenShotRemoteService : IService, IInitializable, IDisposable // TypeDefIndex: 5267
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x1CC7830 Offset: 0x1CC7830 VA: 0x1CC7830
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x1CC79F4 Offset: 0x1CC79F4 VA: 0x1CC79F4 Slot: 4
	public void Initialize() { }

	// RVA: 0x1CCA594 Offset: 0x1CCA594 VA: 0x1CCA594 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(GrandScreenShotRemoteService.<SendScreenShot>d__6))]
	// RVA: 0x1CCA5A8 Offset: 0x1CCA5A8 VA: 0x1CCA5A8
	public Task<ApiResponse<string>> SendScreenShot(byte[] screenShotAsBytes) { }
}

// Namespace: Modules.Contexts.Application.Events.Scripts