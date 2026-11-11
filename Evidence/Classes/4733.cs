public class ChampionsLeagueRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4733
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3B28BEC Offset: 0x3B28BEC VA: 0x3B28BEC
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3B28C30 Offset: 0x3B28C30 VA: 0x3B28C30 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B28C98 Offset: 0x3B28C98 VA: 0x3B28C98 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<PreJoin>d__6))]
	// RVA: 0x3B28CAC Offset: 0x3B28CAC VA: 0x3B28CAC
	public Task<ApiResponse<GetPreJoinLeagueLeaderboardResponse>> PreJoin(long tournamentType) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<PreJoinWithFlatBuffer>d__7))]
	// RVA: 0x3B28DCC Offset: 0x3B28DCC VA: 0x3B28DCC
	public Task<ApiResponse<GetPreJoinLeagueLeaderboardResponse>> PreJoinWithFlatBuffer(long tournamentType) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<GetPreJoinScore>d__8))]
	// RVA: 0x3B28EEC Offset: 0x3B28EEC VA: 0x3B28EEC
	public Task<ApiResponse<GetPreJoinLeagueLeaderboardResponse>> GetPreJoinScore(string tournamentId, long score) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<GetPreJoinScoreWithFlatBuffer>d__9))]
	// RVA: 0x3B2901C Offset: 0x3B2901C VA: 0x3B2901C
	public Task<ApiResponse<GetPreJoinLeagueLeaderboardResponse>> GetPreJoinScoreWithFlatBuffer(string tournamentId, long score) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<Join>d__10))]
	// RVA: 0x3B2914C Offset: 0x3B2914C VA: 0x3B2914C
	public Task<ApiResponse<GetChampionsLeagueLeaderboardResponse>> Join(long tournamentType) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<JoinWithFlatBuffer>d__11))]
	// RVA: 0x3B2926C Offset: 0x3B2926C VA: 0x3B2926C
	public Task<ApiResponse<GetChampionsLeagueLeaderboardResponse>> JoinWithFlatBuffer(long tournamentType) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<GetLeaderboard>d__12))]
	// RVA: 0x3B2938C Offset: 0x3B2938C VA: 0x3B2938C
	public Task<ApiResponse<GetChampionsLeagueLeaderboardResponse>> GetLeaderboard(string tournamentId, long tournamentType, long score) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<GetLeaderboardWithFlatBuffer>d__13))]
	// RVA: 0x3B294CC Offset: 0x3B294CC VA: 0x3B294CC
	public Task<ApiResponse<GetChampionsLeagueLeaderboardResponse>> GetLeaderboardWithFlatBuffer(string tournamentId, long tournamentType, long score) { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<Claim>d__14))]
	// RVA: 0x3B2960C Offset: 0x3B2960C VA: 0x3B2960C
	public Task<ApiResponse<GetPreJoinLeagueLeaderboardResponse>> Claim() { }

	[AsyncStateMachine(typeof(ChampionsLeagueRemoteService.<ClaimWithFlatBuffer>d__15))]
	// RVA: 0x3B29718 Offset: 0x3B29718 VA: 0x3B29718
	public Task<ApiResponse<GetPreJoinLeagueLeaderboardResponse>> ClaimWithFlatBuffer() { }

	// RVA: 0x3B29824 Offset: 0x3B29824 VA: 0x3B29824
	private static GetPreJoinLeagueLeaderboardResponse ToModel(GetPreJoinLeagueLeaderboardResponse flatBuffer) { }

	// RVA: 0x3B2990C Offset: 0x3B2990C VA: 0x3B2990C
	private static GetChampionsLeagueLeaderboardResponse ToModel(GetChampionsLeagueLeaderboardResponse flatBuffer) { }
}

// Namespace: 
[CompilerGenerated]