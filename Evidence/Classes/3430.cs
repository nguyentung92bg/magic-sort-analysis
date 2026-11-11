public class CompensationRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3430
{
	// Fields
	private const string ServiceName = "CompensationRemoteService";
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x20A8974 Offset: 0x20A8974 VA: 0x20A8974
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x20A89B8 Offset: 0x20A89B8 VA: 0x20A89B8 Slot: 4
	public void Initialize() { }

	// RVA: 0x20A8A20 Offset: 0x20A8A20 VA: 0x20A8A20 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(CompensationRemoteService.<SendGetCompensationRequest>d__7))]
	// RVA: 0x20A8A34 Offset: 0x20A8A34 VA: 0x20A8A34
	public Task<ApiResponse<GetCompensationResponse>> SendGetCompensationRequest() { }

	[AsyncStateMachine(typeof(CompensationRemoteService.<SendClaimCompensationRequest>d__8))]
	// RVA: 0x20A8B40 Offset: 0x20A8B40 VA: 0x20A8B40
	public Task<ApiResponse<ClaimCompensationResponse>> SendClaimCompensationRequest(ClaimCompensationRequest requestModel) { }
}

// Namespace: 
[CompilerGenerated]