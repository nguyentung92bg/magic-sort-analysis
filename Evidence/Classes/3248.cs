public class OnePlusFreeOfferRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3248
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x358A92C Offset: 0x358A92C VA: 0x358A92C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x358A970 Offset: 0x358A970 VA: 0x358A970 Slot: 4
	public void Initialize() { }

	// RVA: 0x358A9D8 Offset: 0x358A9D8 VA: 0x358A9D8 Slot: 5
	public void Dispose() { }

	// RVA: 0x358A9EC Offset: 0x358A9EC VA: 0x358A9EC
	public void CancelRequests() { }

	// RVA: 0x358AA64 Offset: 0x358AA64 VA: 0x358AA64
	public Task<ApiResponse<OnePlusOneOfferResponse>> SendGetRequest(long eventType) { }

	// RVA: 0x358AC2C Offset: 0x358AC2C VA: 0x358AC2C
	public Task<ApiResponse<OnePlusOneOfferResponse>> SendClaimRequest(long eventType, string eventId) { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferRemoteService.<SendRequest>d__9))]
	// RVA: 0x358AAF0 Offset: 0x358AAF0 VA: 0x358AAF0
	private Task<ApiResponse<OnePlusOneOfferResponse>> SendRequest(string url, IMessage requestMessage) { }
}

// Namespace: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts