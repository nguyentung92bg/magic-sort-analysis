public class MagicStreakRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3728
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x411C2EC Offset: 0x411C2EC VA: 0x411C2EC
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x411C330 Offset: 0x411C330 VA: 0x411C330 Slot: 4
	public void Initialize() { }

	// RVA: 0x411C398 Offset: 0x411C398 VA: 0x411C398 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(MagicStreakRemoteService.<SendGetRequest>d__6))]
	// RVA: 0x411C3AC Offset: 0x411C3AC VA: 0x411C3AC
	public Task<ApiResponse<MagicStreakTournamentResponse>> SendGetRequest(MagicStreakTournamentRequestModel requestModel) { }

	[AsyncStateMachine(typeof(MagicStreakRemoteService.<SendClaimRequest>d__7))]
	// RVA: 0x411C4D8 Offset: 0x411C4D8 VA: 0x411C4D8
	public Task<ApiResponse<MagicStreakTournamentResponse>> SendClaimRequest(MagicStreakTournamentRequestModel requestModel) { }

	[AsyncStateMachine(typeof(MagicStreakRemoteService.<SendSetScoreRequest>d__8))]
	// RVA: 0x411C604 Offset: 0x411C604 VA: 0x411C604
	public Task<ApiResponse<string>> SendSetScoreRequest(MagicStreakTournamentRequestModel requestModel) { }

	[AsyncStateMachine(typeof(MagicStreakRemoteService.<SendRequest>d__9))]
	// RVA: 0x411C730 Offset: 0x411C730 VA: 0x411C730
	private Task<ApiResponse<MagicStreakTournamentResponse>> SendRequest(string url, MagicStreakTournamentRequestModel requestModel) { }

	[AsyncStateMachine(typeof(MagicStreakRemoteService.<SendSetRequest>d__10))]
	// RVA: 0x411C86C Offset: 0x411C86C VA: 0x411C86C
	private Task<ApiResponse<string>> SendSetRequest(string url, MagicStreakTournamentRequestModel requestModel) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]