public class WelcomeBackRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3046
{
	// Fields
	private const string ServiceName = "WelcomeBackRemoteService";
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x315DFC4 Offset: 0x315DFC4 VA: 0x315DFC4
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x315E008 Offset: 0x315E008 VA: 0x315E008 Slot: 4
	public void Initialize() { }

	// RVA: 0x315E070 Offset: 0x315E070 VA: 0x315E070 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(WelcomeBackRemoteService.<SendGetWelcomeBackRequest>d__7))]
	// RVA: 0x315E084 Offset: 0x315E084 VA: 0x315E084
	public Task<ApiResponse<GetWelcomeBackResponse>> SendGetWelcomeBackRequest() { }

	[AsyncStateMachine(typeof(WelcomeBackRemoteService.<SendClaimWelcomeBackRequest>d__8))]
	// RVA: 0x315E190 Offset: 0x315E190 VA: 0x315E190
	public Task<ApiResponse<ClaimWelcomeBackResponse>> SendClaimWelcomeBackRequest(ClaimWelcomeBackRequest requestModel) { }
}

// Namespace: 
[CompilerGenerated]