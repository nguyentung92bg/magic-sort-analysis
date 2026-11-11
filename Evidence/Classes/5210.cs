public class GrandRemoteDailyConfigResolver // TypeDefIndex: 5210
{
	// Fields
	private GrandRemoteConfigFetcher _configFetcher; // 0x10
	private GrandConfigPersistenceService _grandConfigPersistenceService; // 0x18
	private GrandRemoteDailyLevelsConfig _grandRemoteDailyLevelsConfig; // 0x20

	// Methods

	// RVA: 0x1CB7184 Offset: 0x1CB7184 VA: 0x1CB7184
	public void .ctor(FirebaseRemoteConfigs firebaseRemoteConfigs, HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, GrandConfigPersistenceService grandConfigPersistenceService) { }

	[AsyncStateMachine(typeof(GrandRemoteDailyConfigResolver.<FetchAndResolveConfig>d__4))]
	// RVA: 0x1CB725C Offset: 0x1CB725C VA: 0x1CB725C
	public Task<GrandRemoteDailyLevelsConfig> FetchAndResolveConfig() { }

	// RVA: 0x1CB7368 Offset: 0x1CB7368 VA: 0x1CB7368
	private void ResolveAndCacheConfig() { }
}

// Namespace: 
[CompilerGenerated]