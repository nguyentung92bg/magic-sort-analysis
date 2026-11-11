public class JetpackRaceWithStageRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4135
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3A83D80 Offset: 0x3A83D80 VA: 0x3A83D80
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3A83DC4 Offset: 0x3A83DC4 VA: 0x3A83DC4 Slot: 4
	public void Initialize() { }

	// RVA: 0x3A83E2C Offset: 0x3A83E2C VA: 0x3A83E2C Slot: 5
	public void Dispose() { }

	// RVA: 0x3A83E40 Offset: 0x3A83E40 VA: 0x3A83E40
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<Get>d__7))]
	// RVA: 0x3A83EB8 Offset: 0x3A83EB8 VA: 0x3A83EB8
	public Task<ApiResponse<JetpackRaceWithStageResponseModel>> Get(int eventType, string leaderboardId, int score) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<GetWithFlatBuffer>d__8))]
	// RVA: 0x3A83FFC Offset: 0x3A83FFC VA: 0x3A83FFC
	public Task<ApiResponse<JetpackRaceWithStageResponseModel>> GetWithFlatBuffer(int eventType, string leaderboardId, int score) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<Join>d__9))]
	// RVA: 0x3A84140 Offset: 0x3A84140 VA: 0x3A84140
	public Task<ApiResponse<JetpackRaceWithStageResponseModel>> Join(int eventType) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<JoinWithFlatBuffer>d__10))]
	// RVA: 0x3A84260 Offset: 0x3A84260 VA: 0x3A84260
	public Task<ApiResponse<JetpackRaceWithStageResponseModel>> JoinWithFlatBuffer(int eventType) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<Claim>d__11))]
	// RVA: 0x3A84380 Offset: 0x3A84380 VA: 0x3A84380
	public Task<ApiResponse<JetpackRaceWithStageResponseModel>> Claim(int eventType, string leaderboardId, int score) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<ClaimWithFlatBuffer>d__12))]
	// RVA: 0x3A844C4 Offset: 0x3A844C4 VA: 0x3A844C4
	public Task<ApiResponse<JetpackRaceWithStageResponseModel>> ClaimWithFlatBuffer(int eventType, string leaderboardId, int score) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<GetNextRaceEndTime>d__13))]
	// RVA: 0x3A84608 Offset: 0x3A84608 VA: 0x3A84608
	public Task<ApiResponse<JetpackRaceWithStageGetNextRaceEndTimeResponseModel>> GetNextRaceEndTime(int eventType) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageRemoteService.<GetNextRaceEndTimeWithFlatBuffer>d__14))]
	// RVA: 0x3A84728 Offset: 0x3A84728 VA: 0x3A84728
	public Task<ApiResponse<JetpackRaceWithStageGetNextRaceEndTimeResponseModel>> GetNextRaceEndTimeWithFlatBuffer(int eventType) { }

	// RVA: 0x3A84848 Offset: 0x3A84848 VA: 0x3A84848
	private static JetpackRaceWithStageGetNextRaceEndTimeResponseModel ToModel(GetJetPackEndTimeResponseV2 flatBuffer) { }

	// RVA: 0x3A848E0 Offset: 0x3A848E0 VA: 0x3A848E0
	private static JetpackRaceWithStageResponseModel ToModel(JetPackResponseV2 flatBuffer) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]