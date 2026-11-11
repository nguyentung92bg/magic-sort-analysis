public class EndlessPortalDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3358
{
	// Fields
	private readonly ISaveLoad<EndlessPortalDataModel> _saveLoad; // 0x10
	private EndlessPortalDataModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x3466E64 Offset: 0x3466E64 VA: 0x3466E64
	public void .ctor(ISaveLoad<EndlessPortalDataModel> saveLoad) { }

	// RVA: 0x3466E9C Offset: 0x3466E9C VA: 0x3466E9C Slot: 4
	public void Initialize() { }

	// RVA: 0x3466FAC Offset: 0x3466FAC VA: 0x3466FAC Slot: 5
	public void Dispose() { }

	// RVA: 0x3466FB0 Offset: 0x3466FB0 VA: 0x3466FB0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3467068 Offset: 0x3467068 VA: 0x3467068 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3467070 Offset: 0x3467070 VA: 0x3467070 Slot: 8
	public void DataSynced() { }

	// RVA: 0x3467078 Offset: 0x3467078 VA: 0x3467078 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x34670E0 Offset: 0x34670E0 VA: 0x34670E0 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3467120 Offset: 0x3467120 VA: 0x3467120 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3467230 Offset: 0x3467230 VA: 0x3467230 Slot: 12
	public void DeleteData() { }

	// RVA: 0x3467300 Offset: 0x3467300 VA: 0x3467300
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x3467314 Offset: 0x3467314 VA: 0x3467314
	public int GetCurrentStepIndex() { }

	// RVA: 0x3467340 Offset: 0x3467340 VA: 0x3467340
	public void SetCurrentStepIndex(int index) { }

	// RVA: 0x34673E8 Offset: 0x34673E8 VA: 0x34673E8
	public EndlessPortalResponse GetCachedBackendResponse() { }

	// RVA: 0x3467404 Offset: 0x3467404 VA: 0x3467404
	public void CacheBackendResponse(EndlessPortalResponse responseData) { }

	// RVA: 0x3467430 Offset: 0x3467430 VA: 0x3467430
	public void SetForceShownAtEventStart(bool value) { }

	// RVA: 0x3467458 Offset: 0x3467458 VA: 0x3467458
	public bool GetForceShownAtEventStart() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts