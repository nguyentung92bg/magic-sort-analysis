private struct RemoteConfigHandler.<InitFirebaseAndEventSenderAndGetRemoteConfigs>d__9 : IAsyncStateMachine // TypeDefIndex: 5241
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder<RemoteConfigs> <>t__builder; // 0x8
	public RemoteConfigHandler <>4__this; // 0x20
	public GrandABService grandABService; // 0x28
	private FirebaseRemoteConfigFetcher <firebaseRemoteConfigFetcher>5__2; // 0x30
	private FirebaseRemoteConfigResolver <firebaseRemoteConfigResolver>5__3; // 0x38
	private RemoteConfigs <remoteConfigs>5__4; // 0x40
	private RootLevelConfigModel <rootConfig>5__5; // 0x48
	private Task<GrandRemoteRegularLevelsConfigs> <regularLevelsConfigTask>5__6; // 0x50
	private Task<GrandRemoteDailyLevelsConfig> <dailyLevelsConfigTask>5__7; // 0x58
	private TaskAwaiter <>u__1; // 0x60

	// Methods

	// RVA: 0x1CC3C9C Offset: 0x1CC3C9C VA: 0x1CC3C9C Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x1CC4824 Offset: 0x1CC4824 VA: 0x1CC4824 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Application.RemoteConfig.Scripts