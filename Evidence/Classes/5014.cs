public class SegmentRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 5014
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3E2E938 Offset: 0x3E2E938 VA: 0x3E2E938
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3E2E97C Offset: 0x3E2E97C VA: 0x3E2E97C Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2E9E4 Offset: 0x3E2E9E4 VA: 0x3E2E9E4 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E2E9F8 Offset: 0x3E2E9F8 VA: 0x3E2E9F8
	public void CancelRequests() { }

	[AsyncStateMachine(typeof(SegmentRemoteService.<SendGetSegmentResponse>d__7))]
	// RVA: 0x3E2EA70 Offset: 0x3E2EA70 VA: 0x3E2EA70
	public Task<ApiResponse<SegmentResponse>> SendGetSegmentResponse() { }

	[AsyncStateMachine(typeof(SegmentRemoteService.<ChangeUserType>d__8))]
	// RVA: 0x3E2EB7C Offset: 0x3E2EB7C VA: 0x3E2EB7C
	public Task<ApiResponse<string>> ChangeUserType(string userType, string segment) { }
}

// Namespace: 
[CompilerGenerated]