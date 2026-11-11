public class SkyJumpRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2754
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2F124D0 Offset: 0x2F124D0 VA: 0x2F124D0
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2F12514 Offset: 0x2F12514 VA: 0x2F12514 Slot: 4
	public void Initialize() { }

	// RVA: 0x2F1257C Offset: 0x2F1257C VA: 0x2F1257C Slot: 5
	public void Dispose() { }

	// RVA: 0x2F12590 Offset: 0x2F12590 VA: 0x2F12590
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<Get>d__7))]
	// RVA: 0x2F12608 Offset: 0x2F12608 VA: 0x2F12608
	public Task<ApiResponse<SkyJumpResponseModel>> Get(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<GetWithFlatBuffer>d__8))]
	// RVA: 0x2F1274C Offset: 0x2F1274C VA: 0x2F1274C
	public Task<ApiResponse<SkyJumpResponseModel>> GetWithFlatBuffer(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<Join>d__9))]
	// RVA: 0x2F12890 Offset: 0x2F12890 VA: 0x2F12890
	public Task<ApiResponse<SkyJumpResponseModel>> Join(int eventType) { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<JoinWithFlatBuffer>d__10))]
	// RVA: 0x2F129B0 Offset: 0x2F129B0 VA: 0x2F129B0
	public Task<ApiResponse<SkyJumpResponseModel>> JoinWithFlatBuffer(int eventType) { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<Claim>d__11))]
	// RVA: 0x2F12AD0 Offset: 0x2F12AD0 VA: 0x2F12AD0
	public Task<ApiResponse<SkyJumpResponseModel>> Claim(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<ClaimWithFlatBuffer>d__12))]
	// RVA: 0x2F12C14 Offset: 0x2F12C14 VA: 0x2F12C14
	public Task<ApiResponse<SkyJumpResponseModel>> ClaimWithFlatBuffer(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<GetNextTournamentStartTime>d__13))]
	// RVA: 0x2F12D58 Offset: 0x2F12D58 VA: 0x2F12D58
	public Task<ApiResponse<SkyJumpGetNextTournamentStartTimeResponseModel>> GetNextTournamentStartTime(int eventType) { }

	[AsyncStateMachine(typeof(SkyJumpRemoteService.<GetNextTournamentStartTimeWithFlatBuffer>d__14))]
	// RVA: 0x2F12E78 Offset: 0x2F12E78 VA: 0x2F12E78
	public Task<ApiResponse<SkyJumpGetNextTournamentStartTimeResponseModel>> GetNextTournamentStartTimeWithFlatBuffer(int eventType) { }

	// RVA: 0x2F12F98 Offset: 0x2F12F98 VA: 0x2F12F98
	private static SkyJumpResponseModel ToModel(LavaTournamentData flatBuffer) { }

	// RVA: 0x2F135E8 Offset: 0x2F135E8 VA: 0x2F135E8
	private static SkyJumpGetNextTournamentStartTimeResponseModel ToModel(LavaTournamentStartTime flatBuffer) { }
}

// Namespace: 
[CompilerGenerated]