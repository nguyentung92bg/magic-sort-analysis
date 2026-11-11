public class CompensationDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3420
{
	// Fields
	private readonly ISaveLoad<CompensationDataModel> _saveLoad; // 0x10
	private CompensationDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x20A7EA8 Offset: 0x20A7EA8 VA: 0x20A7EA8
	public void .ctor(ISaveLoad<CompensationDataModel> saveLoad) { }

	// RVA: 0x20A7EE0 Offset: 0x20A7EE0 VA: 0x20A7EE0 Slot: 4
	public void Initialize() { }

	// RVA: 0x20A80C4 Offset: 0x20A80C4 VA: 0x20A80C4 Slot: 5
	public void Dispose() { }

	// RVA: 0x20A80C8 Offset: 0x20A80C8 VA: 0x20A80C8 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x20A8180 Offset: 0x20A8180 VA: 0x20A8180 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x20A8188 Offset: 0x20A8188 VA: 0x20A8188 Slot: 8
	public void DataSynced() { }

	// RVA: 0x20A8190 Offset: 0x20A8190 VA: 0x20A8190 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x20A81F8 Offset: 0x20A81F8 VA: 0x20A81F8 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x20A8238 Offset: 0x20A8238 VA: 0x20A8238 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x20A8400 Offset: 0x20A8400 VA: 0x20A8400 Slot: 12
	public void DeleteData() { }

	// RVA: 0x20A85B4 Offset: 0x20A85B4 VA: 0x20A85B4
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x20A85C8 Offset: 0x20A85C8 VA: 0x20A85C8
	public bool HasCompensation() { }

	// RVA: 0x20A85F4 Offset: 0x20A85F4 VA: 0x20A85F4
	public bool HasCompensationToClaim() { }

	// RVA: 0x20A8630 Offset: 0x20A8630 VA: 0x20A8630
	public CompensationPackage GetCompensationToClaim() { }

	[CanBeNull]
	// RVA: 0x20A8654 Offset: 0x20A8654 VA: 0x20A8654
	public CompensationPackage GetCompensationToSendClaimRequest() { }

	// RVA: 0x20A8690 Offset: 0x20A8690 VA: 0x20A8690
	public void AddCompensation(CompensationPackage compensation) { }

	// RVA: 0x20A86C4 Offset: 0x20A86C4 VA: 0x20A86C4
	public void RemoveCompensation() { }

	// RVA: 0x20A86FC Offset: 0x20A86FC VA: 0x20A86FC
	public void SetCompensationIsClaimed(bool isClaimed) { }

	// RVA: 0x20A8734 Offset: 0x20A8734 VA: 0x20A8734
	public void AddPreviousCompensationId(string compensationId) { }

	// RVA: 0x20A87FC Offset: 0x20A87FC VA: 0x20A87FC
	public bool ContainsPreviousCompensation(string compensationId) { }
}

// Namespace: Modules.Contexts.Home.Monetization.Compensation.Scripts
[Serializable]