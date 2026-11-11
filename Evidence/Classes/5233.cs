public class FirebaseRemoteConfigResolver // TypeDefIndex: 5233
{
	// Fields
	private FirebaseRemoteConfigFetcher _firebaseRemoteConfigFetcher; // 0x10
	private FirebaseConfigPersistenceService _firebaseConfigPersistenceService; // 0x18

	// Methods

	// RVA: 0x1CBEB30 Offset: 0x1CBEB30 VA: 0x1CBEB30
	public void .ctor(FirebaseRemoteConfigFetcher firebaseRemoteConfigFetcher, FirebaseConfigPersistenceService firebaseConfigPersistenceService) { }

	// RVA: 0x1CBEB74 Offset: 0x1CBEB74 VA: 0x1CBEB74
	public FirebaseRemoteConfigs ResolveAndGetConfigService() { }

	// RVA: 0x1CC0FC0 Offset: 0x1CC0FC0 VA: 0x1CC0FC0
	private FirebaseRemoteConfigs ValidateAndFallbackConfigs(FirebaseRemoteConfigs remoteConfigs) { }

	// RVA: 0x1CC1374 Offset: 0x1CC1374 VA: 0x1CC1374
	private bool IsLevelConfigValid(BELevelConfig levelConfig) { }

	// RVA: 0x1CC13A0 Offset: 0x1CC13A0 VA: 0x1CC13A0
	private void PrintAllConfigs() { }

	// RVA: 0x1CBED80 Offset: 0x1CBED80 VA: 0x1CBED80
	private static void AddRootLevelConfigService(FirebaseRemoteConfigs remoteConfigs) { }
}

// Namespace: Modules.Contexts.Application.FirebaseNS.Scripts