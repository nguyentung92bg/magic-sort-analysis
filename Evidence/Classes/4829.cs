public class BoatRushRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4829
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3FCC2E4 Offset: 0x3FCC2E4 VA: 0x3FCC2E4
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3FCC328 Offset: 0x3FCC328 VA: 0x3FCC328 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(BoatRushRemoteService.<SendJoinRequest>d__5))]
	// RVA: 0x3FCC390 Offset: 0x3FCC390 VA: 0x3FCC390
	public Task<ApiResponse<BoatRushResponse>> SendJoinRequest(JoinBoatRushRequestModel request) { }

	[AsyncStateMachine(typeof(BoatRushRemoteService.<GetLeaderboardRequest>d__6))]
	// RVA: 0x3FCC4BC Offset: 0x3FCC4BC VA: 0x3FCC4BC
	public Task<ApiResponse<BoatRushResponse>> GetLeaderboardRequest(GetBoatRushLeaderboardRequestModel request) { }

	[AsyncStateMachine(typeof(BoatRushRemoteService.<SendClaimRequest>d__7))]
	// RVA: 0x3FCC5E8 Offset: 0x3FCC5E8 VA: 0x3FCC5E8
	public Task<ApiResponse<BoatRushResponse>> SendClaimRequest(ClaimBoatRushRequestModel request) { }

	// RVA: 0x3FCC714 Offset: 0x3FCC714 VA: 0x3FCC714 Slot: 5
	public void Dispose() { }

	// RVA: 0x3FCC74C Offset: 0x3FCC74C VA: 0x3FCC74C
	public void CancelRequests() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]