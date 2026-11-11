public class SegmentService : IRestartableService, IService, IInitializable, IDisposable, IDeletable, ILateUpdate // TypeDefIndex: 5016
{
	// Fields
	private SegmentRemoteService _segmentRemoteService; // 0x10
	private SegmentDataService _segmentDataService; // 0x18
	private bool _isInitialized; // 0x20

	// Methods

	// RVA: 0x3E2F5C8 Offset: 0x3E2F5C8 VA: 0x3E2F5C8
	public void .ctor(HttpProxy httpProxy, BackendEnvironmentConfig backendEnvironmentConfig) { }

	// RVA: 0x3E2F6FC Offset: 0x3E2F6FC VA: 0x3E2F6FC Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2F73C Offset: 0x3E2F73C VA: 0x3E2F73C Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(SegmentService.<FetchSegment>d__6))]
	// RVA: 0x3E2F774 Offset: 0x3E2F774 VA: 0x3E2F774
	public void FetchSegment() { }

	// RVA: 0x3E2F82C Offset: 0x3E2F82C VA: 0x3E2F82C
	public string GetSegment() { }

	// RVA: 0x3E2F844 Offset: 0x3E2F844 VA: 0x3E2F844 Slot: 6
	public void DeleteData() { }

	// RVA: 0x3E2F85C Offset: 0x3E2F85C VA: 0x3E2F85C Slot: 7
	public void LateUpdate() { }

	// RVA: 0x3E2F874 Offset: 0x3E2F874 VA: 0x3E2F874
	public void ChangeUserSegment(string userType, string segment) { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts
[Serializable]