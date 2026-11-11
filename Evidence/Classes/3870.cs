public class MagicStreakGaeRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3870
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3CFAC7C Offset: 0x3CFAC7C VA: 0x3CFAC7C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3CFACC0 Offset: 0x3CFACC0 VA: 0x3CFACC0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3CFAD28 Offset: 0x3CFAD28 VA: 0x3CFAD28 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(MagicStreakGaeRemoteService.<SendRequest>d__6))]
	// RVA: 0x3CFAD3C Offset: 0x3CFAD3C VA: 0x3CFAD3C
	public Task<ApiResponse<MagicStreakGaeResponseModel>> SendRequest(MagicStreakGaeRequestModel requestModel) { }

	[AsyncStateMachine(typeof(MagicStreakGaeRemoteService.<SendRequestWithFlatBuffer>d__7))]
	// RVA: 0x3CFAE64 Offset: 0x3CFAE64 VA: 0x3CFAE64
	public Task<ApiResponse<MagicStreakGaeResponseModel>> SendRequestWithFlatBuffer(MagicStreakGaeRequestModel requestModel) { }

	// RVA: 0x3CFAF8C Offset: 0x3CFAF8C VA: 0x3CFAF8C
	private static MagicStreakGaeResponseModel ToModel(GetGAEEventResponse flatBuffer) { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts