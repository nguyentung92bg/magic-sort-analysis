public class PawTouchOfferRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3403
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3471640 Offset: 0x3471640 VA: 0x3471640
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3471684 Offset: 0x3471684 VA: 0x3471684 Slot: 4
	public void Initialize() { }

	// RVA: 0x34716EC Offset: 0x34716EC VA: 0x34716EC Slot: 5
	public void Dispose() { }

	// RVA: 0x3471700 Offset: 0x3471700 VA: 0x3471700
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(PawTouchOfferRemoteService.<SendGetRequest>d__7))]
	// RVA: 0x3471778 Offset: 0x3471778 VA: 0x3471778
	public Task<ApiResponse<GetPawTouchOfferResponse>> SendGetRequest(GetPawTouchOfferRequest request) { }

	[AsyncStateMachine(typeof(PawTouchOfferRemoteService.<SendClaimRequest>d__8))]
	// RVA: 0x34718A4 Offset: 0x34718A4 VA: 0x34718A4
	public Task SendClaimRequest(ClaimPawTouchOfferRequest request) { }
}

// Namespace: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts