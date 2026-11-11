public class WindQuestRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1834
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x2D9C80C Offset: 0x2D9C80C VA: 0x2D9C80C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x2D9C850 Offset: 0x2D9C850 VA: 0x2D9C850 Slot: 4
	public void Initialize() { }

	// RVA: 0x2D9C8B8 Offset: 0x2D9C8B8 VA: 0x2D9C8B8 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(WindQuestRemoteService.<SendGetRequest>d__6))]
	// RVA: 0x2D9C8CC Offset: 0x2D9C8CC VA: 0x2D9C8CC
	public Task<ApiResponse<WindQuestResponseModel>> SendGetRequest(WindQuestGetRequestModel requestModel) { }

	[AsyncStateMachine(typeof(WindQuestRemoteService.<SendClaimRequest>d__7))]
	// RVA: 0x2D9C9F8 Offset: 0x2D9C9F8 VA: 0x2D9C9F8
	public Task<ApiResponse<WindQuestResponseModel>> SendClaimRequest(WindQuestClaimRequestModel requestModel) { }

	[AsyncStateMachine(typeof(WindQuestRemoteService.<SendRequest>d__8))]
	// RVA: 0x2D9CB24 Offset: 0x2D9CB24 VA: 0x2D9CB24
	private Task<ApiResponse<WindQuestResponseModel>> SendRequest(string url, object requestModel) { }
}

// Namespace: 
[CompilerGenerated]