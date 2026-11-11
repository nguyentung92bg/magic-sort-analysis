public class StrikeShowRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2471
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2AF5F5C Offset: 0x2AF5F5C VA: 0x2AF5F5C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2AF5FA0 Offset: 0x2AF5FA0 VA: 0x2AF5FA0 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AF6008 Offset: 0x2AF6008 VA: 0x2AF6008 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AF601C Offset: 0x2AF601C VA: 0x2AF601C
	private void CancelRequests() { }

	// RVA: 0x2AF6094 Offset: 0x2AF6094 VA: 0x2AF6094
	public Task<ApiResponse<GetPreJoinStrikeShowResponse>> SendPreJoinRequest(long tournamentType) { }

	// RVA: 0x2AF6138 Offset: 0x2AF6138 VA: 0x2AF6138
	public Task<ApiResponse<StrikeShowLeaderboardResponse>> SendJoinRequest(long tournamentType) { }

	// RVA: 0x2AF61DC Offset: 0x2AF61DC VA: 0x2AF61DC
	public Task<ApiResponse<StrikeShowLeaderboardResponse>> SendGetLeaderboardRequest(string tournamentId, long tournamentType, long score) { }

	// RVA: 0x2AF62C4 Offset: 0x2AF62C4 VA: 0x2AF62C4
	public Task<ApiResponse<GetPreJoinStrikeShowResponse>> SendClaimRequest() { }

	[AsyncStateMachine(typeof(StrikeShowRemoteService.<SendRequest>d__11<T>))]
	// RVA: -1 Offset: -1
	private Task<ApiResponse<T>> SendRequest<T>(string url, IMessage requestMessage) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26E1A8C Offset: 0x26E1A8C VA: 0x26E1A8C
	|-StrikeShowRemoteService.SendRequest<object>
	*/
}

// Namespace: 
[CompilerGenerated]