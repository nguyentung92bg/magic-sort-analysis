public class AccountDeleteRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 5381
{
	// Fields
	private readonly HttpProxy _httpProxy; // 0x10
	private readonly BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cts; // 0x20

	// Methods

	// RVA: 0x185D548 Offset: 0x185D548 VA: 0x185D548
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x185D58C Offset: 0x185D58C VA: 0x185D58C Slot: 4
	public void Initialize() { }

	// RVA: 0x185D5F4 Offset: 0x185D5F4 VA: 0x185D5F4 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(AccountDeleteRemoteService.<SendCreateDeleteRequest>d__6))]
	// RVA: 0x185D62C Offset: 0x185D62C VA: 0x185D62C
	public Task<ApiResponse<AccountDeleteWebResponse>> SendCreateDeleteRequest() { }

	[AsyncStateMachine(typeof(AccountDeleteRemoteService.<SendCancelDeleteRequest>d__7))]
	// RVA: 0x185D738 Offset: 0x185D738 VA: 0x185D738
	public Task<ApiResponse<AccountDeleteWebResponse>> SendCancelDeleteRequest() { }

	[AsyncStateMachine(typeof(AccountDeleteRemoteService.<SendDataClearedAck>d__8))]
	// RVA: 0x185D844 Offset: 0x185D844 VA: 0x185D844
	public Task<ApiResponse<AccountDeleteWebResponse>> SendDataClearedAck() { }
}

// Namespace: 
[CompilerGenerated]