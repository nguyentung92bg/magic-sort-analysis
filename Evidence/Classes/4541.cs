public class CollectionRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4541
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3769F08 Offset: 0x3769F08 VA: 0x3769F08
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3769F4C Offset: 0x3769F4C VA: 0x3769F4C Slot: 4
	public void Initialize() { }

	// RVA: 0x3769FB4 Offset: 0x3769FB4 VA: 0x3769FB4 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(CollectionRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x3769FC8 Offset: 0x3769FC8 VA: 0x3769FC8
	public Task<ApiResponse<CollectionResponseModel>> GetEventInfo(int eventType) { }

	[AsyncStateMachine(typeof(CollectionRemoteService.<GetCardHelps>d__7))]
	// RVA: 0x376A0E8 Offset: 0x376A0E8 VA: 0x376A0E8
	public Task<GetCardHelpsResponseModel> GetCardHelps() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts