public class GameEconomyConfigRemoteService // TypeDefIndex: 5254
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x1CC5044 Offset: 0x1CC5044 VA: 0x1CC5044
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x1CC5088 Offset: 0x1CC5088 VA: 0x1CC5088
	public void Initialize() { }

	// RVA: 0x1CC50F0 Offset: 0x1CC50F0 VA: 0x1CC50F0
	public void CancelRequests() { }

	// RVA: 0x1CC5168 Offset: 0x1CC5168 VA: 0x1CC5168
	public void Dispose() { }

	[AsyncStateMachine(typeof(GameEconomyConfigRemoteService.<GetGameEconomyConfigModel>d__7))]
	// RVA: 0x1CC517C Offset: 0x1CC517C VA: 0x1CC517C
	public Task<ApiResponse<GameEconomyConfigResponseModel>> GetGameEconomyConfigModel(int configType, long clientHierarchy) { }
}

// Namespace: Modules.Contexts.Application.RemoteConfig.Scripts.ConfigService
[Serializable]