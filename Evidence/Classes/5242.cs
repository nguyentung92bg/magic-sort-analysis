public class RemoteConfigHandler // TypeDefIndex: 5242
{
	// Fields
	private const int GrandABReadyTimeoutMilliseconds = 250;
	private FirebaseInitializer _firebaseInitializer; // 0x10
	private FirebaseConfigPersistenceService _firebaseConfigPersistenceService; // 0x18
	private GrandConfigPersistenceService _grandConfigPersistenceService; // 0x20
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x28
	private HttpProxy _httpProxy; // 0x30
	private AdjustInitializer _adjustInitializer; // 0x38
	private IPlayerService _playerService; // 0x40

	// Methods

	// RVA: 0x1CC38CC Offset: 0x1CC38CC VA: 0x1CC38CC
	public void .ctor(FirebaseConfigPersistenceService firebaseConfigPersistenceService, GrandConfigPersistenceService grandConfigPersistenceService, BackendEnvironmentConfig backendEnvironmentConfig, HttpProxy httpProxy, FirebaseInitializer firebaseInitializer, AdjustInitializer adjustInitializer, IPlayerService playerService) { }

	[AsyncStateMachine(typeof(RemoteConfigHandler.<InitFirebaseAndEventSenderAndGetRemoteConfigs>d__9))]
	// RVA: 0x1CC398C Offset: 0x1CC398C VA: 0x1CC398C
	public Task<RemoteConfigs> InitFirebaseAndEventSenderAndGetRemoteConfigs(GrandABService grandABService) { }

	// RVA: 0x1CC3ABC Offset: 0x1CC3ABC VA: 0x1CC3ABC
	private static void ApplyGrandSdkSettings(RemoteConfigs remoteConfigs) { }
}

// Namespace: Modules.Contexts.Application.RemoteConfig.Scripts