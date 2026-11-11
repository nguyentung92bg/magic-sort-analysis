public class GrandRemoteConfigFetcher // TypeDefIndex: 5201
{
	// Fields
	private FirebaseRemoteConfigs _firebaseRemoteConfigs; // 0x10
	private readonly GrandRemoteConfigRemoteService _configFetcher; // 0x18
	private const int FetchTimeoutMilliseconds = 2500;
	private const int MaxAttemptCount = 10;
	[CompilerGenerated]
	private GrandRemoteConfigResponse <RegularLevelsResult>k__BackingField; // 0x20
	private int _regularLevelAttemptCount; // 0x28
	[CompilerGenerated]
	private GrandRemoteDailyLevelsConfigResponse <DailyLevelsResult>k__BackingField; // 0x30
	private int _dailyLevelAttemptCount; // 0x38

	// Properties
	public GrandRemoteConfigResponse RegularLevelsResult { get; set; }
	public GrandRemoteDailyLevelsConfigResponse DailyLevelsResult { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1CB4F24 Offset: 0x1CB4F24 VA: 0x1CB4F24
	public GrandRemoteConfigResponse get_RegularLevelsResult() { }

	[CompilerGenerated]
	// RVA: 0x1CB4F2C Offset: 0x1CB4F2C VA: 0x1CB4F2C
	private void set_RegularLevelsResult(GrandRemoteConfigResponse value) { }

	[CompilerGenerated]
	// RVA: 0x1CB4F34 Offset: 0x1CB4F34 VA: 0x1CB4F34
	public GrandRemoteDailyLevelsConfigResponse get_DailyLevelsResult() { }

	[CompilerGenerated]
	// RVA: 0x1CB4F3C Offset: 0x1CB4F3C VA: 0x1CB4F3C
	private void set_DailyLevelsResult(GrandRemoteDailyLevelsConfigResponse value) { }

	// RVA: 0x1CB4F44 Offset: 0x1CB4F44 VA: 0x1CB4F44
	public void .ctor(FirebaseRemoteConfigs firebaseRemoteConfigs, GrandRemoteConfigRemoteService configFetcher) { }

	[AsyncStateMachine(typeof(GrandRemoteConfigFetcher.<FetchRegularLevelsConfigWithTimeout>d__15))]
	// RVA: 0x1CB4F88 Offset: 0x1CB4F88 VA: 0x1CB4F88
	public Task<ApiResponse<GrandRemoteConfigResponse>> FetchRegularLevelsConfigWithTimeout(int progress) { }

	[AsyncStateMachine(typeof(GrandRemoteConfigFetcher.<RetryFetchingRegularLevels>d__16))]
	// RVA: 0x1CB50A4 Offset: 0x1CB50A4 VA: 0x1CB50A4
	public void RetryFetchingRegularLevels(Action onSuccessAction, int progress) { }

	[AsyncStateMachine(typeof(GrandRemoteConfigFetcher.<FetchDailyConfigWithTimeout>d__17))]
	// RVA: 0x1CB5180 Offset: 0x1CB5180 VA: 0x1CB5180
	public Task<ApiResponse<GrandRemoteDailyLevelsConfigResponse>> FetchDailyConfigWithTimeout() { }

	[AsyncStateMachine(typeof(GrandRemoteConfigFetcher.<RetryFetchingDailyLevelsConfig>d__18))]
	// RVA: 0x1CB5290 Offset: 0x1CB5290 VA: 0x1CB5290
	public void RetryFetchingDailyLevelsConfig(Action onSuccessAction) { }
}

// Namespace: Modules.Contexts.Application.GrandConfig.Scripts