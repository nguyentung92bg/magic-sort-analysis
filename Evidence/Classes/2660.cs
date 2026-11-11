public class SkyJumpWithStageRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2660
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2473750 Offset: 0x2473750 VA: 0x2473750
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2473794 Offset: 0x2473794 VA: 0x2473794 Slot: 4
	public void Initialize() { }

	// RVA: 0x24737FC Offset: 0x24737FC VA: 0x24737FC Slot: 5
	public void Dispose() { }

	// RVA: 0x2473810 Offset: 0x2473810 VA: 0x2473810
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<Get>d__7))]
	// RVA: 0x2473888 Offset: 0x2473888 VA: 0x2473888
	public Task<ApiResponse<SkyJumpWithStageResponseModel>> Get(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<GetWithFlatBuffer>d__8))]
	// RVA: 0x24739CC Offset: 0x24739CC VA: 0x24739CC
	public Task<ApiResponse<SkyJumpWithStageResponseModel>> GetWithFlatBuffer(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<Join>d__9))]
	// RVA: 0x2473B10 Offset: 0x2473B10 VA: 0x2473B10
	public Task<ApiResponse<SkyJumpWithStageResponseModel>> Join(int eventType) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<JoinWithFlatBuffer>d__10))]
	// RVA: 0x2473C30 Offset: 0x2473C30 VA: 0x2473C30
	public Task<ApiResponse<SkyJumpWithStageResponseModel>> JoinWithFlatBuffer(int eventType) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<Claim>d__11))]
	// RVA: 0x2473D50 Offset: 0x2473D50 VA: 0x2473D50
	public Task<ApiResponse<SkyJumpWithStageResponseModel>> Claim(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<ClaimWithFlatBuffer>d__12))]
	// RVA: 0x2473E94 Offset: 0x2473E94 VA: 0x2473E94
	public Task<ApiResponse<SkyJumpWithStageResponseModel>> ClaimWithFlatBuffer(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<GetNextTournamentStartTime>d__13))]
	// RVA: 0x2473FD8 Offset: 0x2473FD8 VA: 0x2473FD8
	public Task<ApiResponse<SkyJumpWithStageGetNextTournamentStartTimeResponseModel>> GetNextTournamentStartTime(int eventType) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageRemoteService.<GetNextTournamentStartTimeWithFlatBuffer>d__14))]
	// RVA: 0x24740F8 Offset: 0x24740F8 VA: 0x24740F8
	public Task<ApiResponse<SkyJumpWithStageGetNextTournamentStartTimeResponseModel>> GetNextTournamentStartTimeWithFlatBuffer(int eventType) { }

	// RVA: 0x2474218 Offset: 0x2474218 VA: 0x2474218
	private static SkyJumpWithStageResponseModel ToModel(StagedSkyJumpTournamentLeaderboardResponse flatBuffer) { }

	// RVA: 0x2474878 Offset: 0x2474878 VA: 0x2474878
	private static SkyJumpWithStageGetNextTournamentStartTimeResponseModel ToModel(GetStagedSkyJumpTournamentEndTimeResponse flatBuffer) { }
}

// Namespace: 
[CompilerGenerated]