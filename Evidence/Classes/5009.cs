public class SegmentDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable // TypeDefIndex: 5009
{
	// Fields
	private readonly ISaveLoad<SegmentDataModel> _saveLoad; // 0x10
	private SegmentDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20

	// Methods

	// RVA: 0x3E2E604 Offset: 0x3E2E604 VA: 0x3E2E604
	public void .ctor(ISaveLoad<SegmentDataModel> saveLoad) { }

	// RVA: 0x3E2E634 Offset: 0x3E2E634 VA: 0x3E2E634 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2E6F0 Offset: 0x3E2E6F0 VA: 0x3E2E6F0 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E2E6F4 Offset: 0x3E2E6F4 VA: 0x3E2E6F4 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3E2E7AC Offset: 0x3E2E7AC VA: 0x3E2E7AC Slot: 7
	public void DeleteData() { }

	// RVA: 0x3E2E878 Offset: 0x3E2E878 VA: 0x3E2E878
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3E2E884 Offset: 0x3E2E884 VA: 0x3E2E884
	public void SetSegment(string segmentId) { }

	// RVA: 0x3E2E8B0 Offset: 0x3E2E8B0 VA: 0x3E2E8B0
	public string GetSegment() { }
}

// Namespace: Modules.Contexts.Application.ServerCommunication.Scripts