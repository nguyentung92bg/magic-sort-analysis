public class WeeklyTournamentRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1973
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x32D6E20 Offset: 0x32D6E20 VA: 0x32D6E20
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x32D6E64 Offset: 0x32D6E64 VA: 0x32D6E64 Slot: 4
	public void Initialize() { }

	// RVA: 0x32D6ECC Offset: 0x32D6ECC VA: 0x32D6ECC Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(WeeklyTournamentRemoteService.<GetLeaderboard>d__6))]
	// RVA: 0x32D6EE0 Offset: 0x32D6EE0 VA: 0x32D6EE0
	public Task<ApiResponse<WeeklyGetLeaderboardResponse>> GetLeaderboard(int progress) { }

	[AsyncStateMachine(typeof(WeeklyTournamentRemoteService.<GetLeaderboardWithFlatBuffer>d__7))]
	// RVA: 0x32D7000 Offset: 0x32D7000 VA: 0x32D7000
	public Task<ApiResponse<WeeklyGetLeaderboardResponse>> GetLeaderboardWithFlatBuffer(int progress) { }

	[AsyncStateMachine(typeof(WeeklyTournamentRemoteService.<ClaimWeeklyLeaderboard>d__8))]
	// RVA: 0x32D7120 Offset: 0x32D7120 VA: 0x32D7120
	public Task<ApiResponse<WeeklyLeaderboardClaimResponse>> ClaimWeeklyLeaderboard(int progress) { }

	[AsyncStateMachine(typeof(WeeklyTournamentRemoteService.<ClaimWeeklyLeaderboardWithFlatBuffer>d__9))]
	// RVA: 0x32D7240 Offset: 0x32D7240 VA: 0x32D7240
	public Task<ApiResponse<WeeklyLeaderboardClaimResponse>> ClaimWeeklyLeaderboardWithFlatBuffer(int progress) { }

	[AsyncStateMachine(typeof(WeeklyTournamentRemoteService.<SetScore>d__10))]
	// RVA: 0x32D7360 Offset: 0x32D7360 VA: 0x32D7360
	public Task<ApiResponse<string>> SetScore(int score, int playerProgress, string tournamentId) { }

	// RVA: 0x32D749C Offset: 0x32D749C VA: 0x32D749C
	private static WeeklyGetLeaderboardResponse ToModel(GetWeeklyLeaderboardResponse flatBuffer) { }

	// RVA: 0x32D77D0 Offset: 0x32D77D0 VA: 0x32D77D0
	private static WeeklyLeaderboardClaimResponse ClaimToModel(GetWeeklyLeaderboardResponse flatBuffer) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]