public class GrandRemoteConfigRemoteService // TypeDefIndex: 5208
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18

	// Methods

	// RVA: 0x1CB67C8 Offset: 0x1CB67C8 VA: 0x1CB67C8
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	[AsyncStateMachine(typeof(GrandRemoteConfigRemoteService.<GetConfigs>d__3))]
	// RVA: 0x1CB5EC4 Offset: 0x1CB5EC4 VA: 0x1CB5EC4
	public Task<ApiResponse<GrandRemoteConfigResponse>> GetConfigs(string configName, int configType, int progress) { }

	[AsyncStateMachine(typeof(GrandRemoteConfigRemoteService.<GetDailyConfig>d__4))]
	// RVA: 0x1CB583C Offset: 0x1CB583C VA: 0x1CB583C
	public Task<ApiResponse<GrandRemoteDailyLevelsConfigResponse>> GetDailyConfig(string configName) { }
}

// Namespace: 
[CompilerGenerated]