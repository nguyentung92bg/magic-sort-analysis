public class FirebaseRemoteConfigFetcher : IAsyncInitializable // TypeDefIndex: 5232
{
	// Fields
	private FirebaseInitializer _firebaseInitializer; // 0x10
	private bool _isRemoteConfigFetchedAndActivated; // 0x18
	private bool _isRemoteConfigFetchedAndActivatedCancelled; // 0x19
	private bool _isRemoteConfigFetched; // 0x1A
	private bool _isRemoteConfigCancelled; // 0x1B
	private bool _cancelFetch; // 0x1C
	private const float _timeOut = 2.5;
	private bool _initDefaultConfigs; // 0x1D
	private bool _isInitDefaultConfigsCancelled; // 0x1E

	// Properties
	public bool IsRemoteConfigFetchedAndActivated { get; }

	// Methods

	// RVA: 0x1CBD2C8 Offset: 0x1CBD2C8 VA: 0x1CBD2C8
	public bool get_IsRemoteConfigFetchedAndActivated() { }

	// RVA: 0x1CBD2D0 Offset: 0x1CBD2D0 VA: 0x1CBD2D0
	public void .ctor(FirebaseInitializer firebaseInitializer) { }

	[AsyncStateMachine(typeof(FirebaseRemoteConfigFetcher.<InitializeAsync>d__12))]
	// RVA: 0x1CBD300 Offset: 0x1CBD300 VA: 0x1CBD300 Slot: 4
	public Task InitializeAsync() { }

	[AsyncStateMachine(typeof(FirebaseRemoteConfigFetcher.<InitializeDefaults>d__13))]
	// RVA: 0x1CBD3EC Offset: 0x1CBD3EC VA: 0x1CBD3EC
	private Task InitializeDefaults() { }

	[AsyncStateMachine(typeof(FirebaseRemoteConfigFetcher.<FetchRemoteConfig>d__14))]
	// RVA: 0x1CBD4D8 Offset: 0x1CBD4D8 VA: 0x1CBD4D8
	private Task FetchRemoteConfig() { }

	[AsyncStateMachine(typeof(FirebaseRemoteConfigFetcher.<ActivateRetrievedRemoteConfigValues>d__15))]
	// RVA: 0x1CBD5C4 Offset: 0x1CBD5C4 VA: 0x1CBD5C4
	private Task ActivateRetrievedRemoteConfigValues() { }

	[CompilerGenerated]
	// RVA: 0x1CBD6B0 Offset: 0x1CBD6B0 VA: 0x1CBD6B0
	private void <InitializeDefaults>b__13_0(Task previousTask) { }

	[CompilerGenerated]
	// RVA: 0x1CBD6C8 Offset: 0x1CBD6C8 VA: 0x1CBD6C8
	private void <FetchRemoteConfig>b__14_0(Task previousTask) { }

	[CompilerGenerated]
	// RVA: 0x1CBD6E0 Offset: 0x1CBD6E0 VA: 0x1CBD6E0
	private void <ActivateRetrievedRemoteConfigValues>b__15_0(Task<bool> previousTask) { }
}

// Namespace: Modules.Contexts.Application.FirebaseNS.Scripts