public class IAPVerificationRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 5191
{
	// Fields
	private const int TokenMismatchStatusCode = -100;
	private const string GameKey = "magic-sort";
	private const string GameKeyHeader = "X-Game-Key";
	private const string AdjustTokenHeader = "X-Adjust-Token";
	private const string AdjustTokenSecret = "pFPnoGvABmB6Aoy2jdhgDKix6idDoZ+3e008ioOQtJc=";
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20
	private Dictionary<string, string> _headers; // 0x28

	// Methods

	// RVA: 0x138DC3C Offset: 0x138DC3C VA: 0x138DC3C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x138DC80 Offset: 0x138DC80 VA: 0x138DC80 Slot: 4
	public void Initialize() { }

	// RVA: 0x138DD90 Offset: 0x138DD90 VA: 0x138DD90 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(IAPVerificationRemoteService.<SendVerifyBatchRequest>d__12))]
	// RVA: 0x138DDC4 Offset: 0x138DDC4 VA: 0x138DDC4
	public Task<ApiResponse<VerifyPurchasesResponse>> SendVerifyBatchRequest(IReadOnlyList<VerificationCacheModel> pendingVerifications) { }

	// RVA: 0x138DEF0 Offset: 0x138DEF0 VA: 0x138DEF0
	private static VerifyPurchaseRequest CreateRequest(VerificationCacheModel pendingVerification) { }
}

// Namespace: 
[CompilerGenerated]