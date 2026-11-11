public class SyncRemoteService // TypeDefIndex: 5035
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18

	// Methods

	// RVA: 0x3E2FC04 Offset: 0x3E2FC04 VA: 0x3E2FC04
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	[AsyncStateMachine(typeof(SyncRemoteService.<AckForceFetched>d__3))]
	// RVA: 0x3E2FC48 Offset: 0x3E2FC48 VA: 0x3E2FC48
	public Task<ApiResponse<string>> AckForceFetched() { }

	[AsyncStateMachine(typeof(SyncRemoteService.<SyncUserDataAsync>d__4))]
	// RVA: 0x3E2FD54 Offset: 0x3E2FD54 VA: 0x3E2FD54
	public Task<ApiResponse<string>> SyncUserDataAsync(SyncRequestModel requestModel) { }

	[AsyncStateMachine(typeof(SyncRemoteService.<DeleteUserDataAsync>d__5))]
	// RVA: 0x3E2FE80 Offset: 0x3E2FE80 VA: 0x3E2FE80
	public Task<ApiResponse<string>> DeleteUserDataAsync() { }

	[AsyncStateMachine(typeof(SyncRemoteService.<DeleteProdUserDataAsync>d__6))]
	// RVA: 0x3E2FF8C Offset: 0x3E2FF8C VA: 0x3E2FF8C
	public Task<ApiResponse<string>> DeleteProdUserDataAsync() { }

	[AsyncStateMachine(typeof(SyncRemoteService.<GetDataAsync>d__7))]
	// RVA: 0x3E30098 Offset: 0x3E30098 VA: 0x3E30098
	public Task<ApiResponse<GetDataResponse>> GetDataAsync() { }

	[AsyncStateMachine(typeof(SyncRemoteService.<ChangeProfileAsync>d__8))]
	// RVA: 0x3E301A4 Offset: 0x3E301A4 VA: 0x3E301A4
	public Task<ApiResponse<string>> ChangeProfileAsync(ChangeProfileRequestModel requestModel) { }

	[AsyncStateMachine(typeof(SyncRemoteService.<FacebookSync>d__9))]
	// RVA: 0x3E302D0 Offset: 0x3E302D0 VA: 0x3E302D0
	public Task<ApiResponse<FacebookSyncResponse>> FacebookSync(FacebookSyncRequestModel requestModel) { }

	[AsyncStateMachine(typeof(SyncRemoteService.<AppleSync>d__10))]
	// RVA: 0x3E303FC Offset: 0x3E303FC VA: 0x3E303FC
	public Task<ApiResponse<AppleSyncResponse>> AppleSync(AppleSyncRequestModel requestModel) { }
}

// Namespace: 
[CompilerGenerated]