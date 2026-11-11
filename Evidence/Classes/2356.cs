public class TeamArenaRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2356
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20

	// Methods

	// RVA: 0x2DE4304 Offset: 0x2DE4304 VA: 0x2DE4304
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2DE4348 Offset: 0x2DE4348 VA: 0x2DE4348 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DE43B0 Offset: 0x2DE43B0 VA: 0x2DE43B0 Slot: 5
	public void Dispose() { }

	// RVA: 0x2DE43E8 Offset: 0x2DE43E8 VA: 0x2DE43E8
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(TeamArenaRemoteService.<FetchEvent>d__7))]
	// RVA: 0x2DE4470 Offset: 0x2DE4470 VA: 0x2DE4470
	public Task<ApiResponse<TeamArenaEventResponse>> FetchEvent(TeamArenaRequestModel request) { }

	[AsyncStateMachine(typeof(TeamArenaRemoteService.<JoinEvent>d__8))]
	// RVA: 0x2DE459C Offset: 0x2DE459C VA: 0x2DE459C
	public Task<ApiResponse<TeamArenaEventResponse>> JoinEvent(TeamArenaRequestModel request) { }

	[AsyncStateMachine(typeof(TeamArenaRemoteService.<ClaimEvent>d__9))]
	// RVA: 0x2DE46C8 Offset: 0x2DE46C8 VA: 0x2DE46C8
	public Task<ApiResponse<TeamArenaEventResponse>> ClaimEvent(TeamArenaRequestModel request) { }
}

// Namespace: Modules.Contexts.Home.TeamArena