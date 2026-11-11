public class DuckFestivalRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4393
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x1B94BD4 Offset: 0x1B94BD4 VA: 0x1B94BD4
	public void .ctor(BackendEnvironmentConfig backendEnvironmentConfig, HttpProxy httpProxy) { }

	// RVA: 0x1B94C18 Offset: 0x1B94C18 VA: 0x1B94C18 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(DuckFestivalRemoteService.<SendPreJoinRequest>d__5))]
	// RVA: 0x1B94C80 Offset: 0x1B94C80 VA: 0x1B94C80
	public Task<ApiResponse<DuckFestivalResponse>> SendPreJoinRequest(int tournamentType) { }

	[AsyncStateMachine(typeof(DuckFestivalRemoteService.<SendJoinRequest>d__6))]
	// RVA: 0x1B94DA0 Offset: 0x1B94DA0 VA: 0x1B94DA0
	public Task<ApiResponse<DuckFestivalResponse>> SendJoinRequest(int tournamentType, int progress) { }

	[AsyncStateMachine(typeof(DuckFestivalRemoteService.<GetLeaderboardRequest>d__7))]
	// RVA: 0x1B94EC4 Offset: 0x1B94EC4 VA: 0x1B94EC4
	public Task<ApiResponse<DuckFestivalResponse>> GetLeaderboardRequest(int tournamentType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(DuckFestivalRemoteService.<SendClaimRequest>d__8))]
	// RVA: 0x1B95008 Offset: 0x1B95008 VA: 0x1B95008
	public Task<ApiResponse<DuckFestivalResponse>> SendClaimRequest() { }

	// RVA: 0x1B95114 Offset: 0x1B95114 VA: 0x1B95114 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]