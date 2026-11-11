public class JetpackRaceRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4220
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3B1826C Offset: 0x3B1826C VA: 0x3B1826C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3B182B0 Offset: 0x3B182B0 VA: 0x3B182B0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B18318 Offset: 0x3B18318 VA: 0x3B18318 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B1832C Offset: 0x3B1832C VA: 0x3B1832C
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(JetpackRaceRemoteService.<Get>d__7))]
	// RVA: 0x3B183A4 Offset: 0x3B183A4 VA: 0x3B183A4
	public Task<ApiResponse<JetPackRaceResponseModel>> Get(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(JetpackRaceRemoteService.<Join>d__8))]
	// RVA: 0x3B184E8 Offset: 0x3B184E8 VA: 0x3B184E8
	public Task<ApiResponse<JetPackRaceResponseModel>> Join(int eventType) { }

	[AsyncStateMachine(typeof(JetpackRaceRemoteService.<Claim>d__9))]
	// RVA: 0x3B18608 Offset: 0x3B18608 VA: 0x3B18608
	public Task<ApiResponse<JetPackRaceResponseModel>> Claim(int eventType, string tournamentId, int score) { }

	[AsyncStateMachine(typeof(JetpackRaceRemoteService.<GetNextRaceEndTime>d__10))]
	// RVA: 0x3B1874C Offset: 0x3B1874C VA: 0x3B1874C
	public Task<ApiResponse<JetpackRaceGetNextRaceEndTimeResponseModel>> GetNextRaceEndTime(int eventType) { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]