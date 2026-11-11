public class TeamQuestRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2282
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2DD4A10 Offset: 0x2DD4A10 VA: 0x2DD4A10
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2DD4A54 Offset: 0x2DD4A54 VA: 0x2DD4A54 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DD4ABC Offset: 0x2DD4ABC VA: 0x2DD4ABC Slot: 5
	public void Dispose() { }

	// RVA: 0x2DD4AD0 Offset: 0x2DD4AD0 VA: 0x2DD4AD0
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(TeamQuestRemoteService.<SendJoinRequest>d__7))]
	// RVA: 0x2DD4B48 Offset: 0x2DD4B48 VA: 0x2DD4B48
	public Task<ApiResponse<TeamQuestResponseModel>> SendJoinRequest(TeamQuestTournamentRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamQuestRemoteService.<SendGetRequest>d__8))]
	// RVA: 0x2DD4C74 Offset: 0x2DD4C74 VA: 0x2DD4C74
	public Task<ApiResponse<TeamQuestResponseModel>> SendGetRequest(TeamQuestTournamentRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamQuestRemoteService.<SendClaimRequest>d__9))]
	// RVA: 0x2DD4DA0 Offset: 0x2DD4DA0 VA: 0x2DD4DA0
	public Task<ApiResponse<TeamQuestResponseModel>> SendClaimRequest(TeamQuestTournamentRequestModel requestModel) { }

	[AsyncStateMachine(typeof(TeamQuestRemoteService.<SendRequest>d__10))]
	// RVA: 0x2DD4ECC Offset: 0x2DD4ECC VA: 0x2DD4ECC
	private Task<ApiResponse<TeamQuestResponseModel>> SendRequest(string url, TeamQuestTournamentRequestModel requestModel) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]