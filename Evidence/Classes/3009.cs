public class PermanentLeaderboardRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3009
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2AEB634 Offset: 0x2AEB634 VA: 0x2AEB634
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2AEB678 Offset: 0x2AEB678 VA: 0x2AEB678 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AEB6E0 Offset: 0x2AEB6E0 VA: 0x2AEB6E0 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(PermanentLeaderboardRemoteService.<GetLeaderboard>d__6))]
	// RVA: 0x2AEB6F4 Offset: 0x2AEB6F4 VA: 0x2AEB6F4
	public Task<ApiResponse<PermanentLeaderboardResponse>> GetLeaderboard() { }

	[AsyncStateMachine(typeof(PermanentLeaderboardRemoteService.<GetLeaderboardAsFlatBuffer>d__7))]
	// RVA: 0x2AEB800 Offset: 0x2AEB800 VA: 0x2AEB800
	public Task<ApiResponse<GetLeaderboardsResponse>> GetLeaderboardAsFlatBuffer() { }
}

// Namespace: 
[CompilerGenerated]