public class MagicPassRemoteService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3901
{
	// Fields
	private HttpProxy _httpProxy; // 0x10
	private BackendEnvironmentConfig _backendEnvironmentConfig; // 0x18
	private CancellationTokenSource _cancellationTokenSource; // 0x20

	// Methods

	// RVA: 0x3D02C0C Offset: 0x3D02C0C VA: 0x3D02C0C
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3D02C50 Offset: 0x3D02C50 VA: 0x3D02C50 Slot: 4
	public void Initialize() { }

	// RVA: 0x3D02CB8 Offset: 0x3D02CB8 VA: 0x3D02CB8 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(MagicPassRemoteService.<GetEventInfo>d__6))]
	// RVA: 0x3D02CCC Offset: 0x3D02CCC VA: 0x3D02CCC
	public Task<ApiResponse<MagicPassEventInfoResponse>> GetEventInfo(int eventType) { }

	[AsyncStateMachine(typeof(MagicPassRemoteService.<Claim>d__7))]
	// RVA: 0x3D02DEC Offset: 0x3D02DEC VA: 0x3D02DEC
	public Task<ApiResponse<MagicPassEventInfoResponse>> Claim(string eventId, int eventType) { }
}

// Namespace: 
[CompilerGenerated]