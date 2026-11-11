public class GrandRemoteRegularLevelsConfigResolver // TypeDefIndex: 5212
{
	// Fields
	private GrandRemoteConfigFetcher _configFetcher; // 0x10
	private GrandConfigPersistenceService _grandConfigPersistenceService; // 0x18
	private GrandRemoteRegularLevelsConfigs _grandRemoteRegularLevelsConfigs; // 0x20

	// Methods

	// RVA: 0x1CB784C Offset: 0x1CB784C VA: 0x1CB784C
	public void .ctor(FirebaseRemoteConfigs firebaseRemoteConfigs, HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig, GrandConfigPersistenceService grandConfigPersistenceService) { }

	[AsyncStateMachine(typeof(GrandRemoteRegularLevelsConfigResolver.<FetchAndResolveConfig>d__4))]
	// RVA: 0x1CB7924 Offset: 0x1CB7924 VA: 0x1CB7924
	public Task<GrandRemoteRegularLevelsConfigs> FetchAndResolveConfig(int progress) { }

	// RVA: 0x1CB7A44 Offset: 0x1CB7A44 VA: 0x1CB7A44
	private void ResolveAndCacheConfig() { }
}

// Namespace: Modules.Contexts.Application.GrandConfig.Scripts