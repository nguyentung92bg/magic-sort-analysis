public class PlayIntegrityRemoteService // TypeDefIndex: 5107
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3CEC510 Offset: 0x3CEC510 VA: 0x3CEC510
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3CEBD58 Offset: 0x3CEBD58 VA: 0x3CEBD58
	public void Initialize() { }

	// RVA: 0x3CEC554 Offset: 0x3CEC554 VA: 0x3CEC554
	public void CancelRequests() { }

	// RVA: 0x3CEC5CC Offset: 0x3CEC5CC VA: 0x3CEC5CC
	public void Dispose() { }

	[AsyncStateMachine(typeof(PlayIntegrityRemoteService.<SendTrackerToken>d__7))]
	// RVA: 0x3CEC12C Offset: 0x3CEC12C VA: 0x3CEC12C
	public Task<ApiResponse<string>> SendTrackerToken(string token) { }
}

// Namespace: Modules.Contexts.Application.Player.Scripts