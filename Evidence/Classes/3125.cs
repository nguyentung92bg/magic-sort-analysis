public class WatchAndWinDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, IDeletable, ISyncable // TypeDefIndex: 3125
{
	// Fields
	private readonly ISaveLoad<WatchAndWinModel> _saveLoad; // 0x10
	private WatchAndWinModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x3170524 Offset: 0x3170524 VA: 0x3170524
	public void .ctor(ISaveLoad<WatchAndWinModel> saveLoad) { }

	// RVA: 0x317055C Offset: 0x317055C VA: 0x317055C Slot: 4
	public void Initialize() { }

	// RVA: 0x317061C Offset: 0x317061C VA: 0x317061C Slot: 5
	public void Dispose() { }

	// RVA: 0x3170620 Offset: 0x3170620 VA: 0x3170620 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x31706D8 Offset: 0x31706D8 VA: 0x31706D8 Slot: 8
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x31706E0 Offset: 0x31706E0 VA: 0x31706E0 Slot: 9
	public void DataSynced() { }

	// RVA: 0x31706E8 Offset: 0x31706E8 VA: 0x31706E8 Slot: 10
	public string SerializeModelForSync() { }

	// RVA: 0x3170744 Offset: 0x3170744 VA: 0x3170744 Slot: 11
	public string GetSyncName() { }

	// RVA: 0x3170784 Offset: 0x3170784 VA: 0x3170784 Slot: 12
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x317080C Offset: 0x317080C VA: 0x317080C Slot: 7
	public void DeleteData() { }

	// RVA: 0x31708DC Offset: 0x31708DC VA: 0x31708DC
	private void MarkDataForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x31708F0 Offset: 0x31708F0 VA: 0x31708F0
	public void CacheBackendResponse(WatchAndWinResponse responseData) { }

	[CanBeNull]
	// RVA: 0x317091C Offset: 0x317091C VA: 0x317091C
	public WatchAndWinResponse GetCachedBackendResponse() { }

	// RVA: 0x3170938 Offset: 0x3170938 VA: 0x3170938
	public void IncrementPopupTriggerCount() { }

	// RVA: 0x3170964 Offset: 0x3170964 VA: 0x3170964
	public void ClearPopupTriggerCount() { }

	// RVA: 0x3170988 Offset: 0x3170988 VA: 0x3170988
	public int GetPopupTriggerCount() { }

	// RVA: 0x31709A4 Offset: 0x31709A4 VA: 0x31709A4
	public bool IsPopupShown() { }

	// RVA: 0x31709C0 Offset: 0x31709C0 VA: 0x31709C0
	public void SetIsPopupShown(bool isShown) { }

	// RVA: 0x31709E8 Offset: 0x31709E8 VA: 0x31709E8
	public void SetAdProgress(int adProgress) { }

	// RVA: 0x3170A0C Offset: 0x3170A0C VA: 0x3170A0C
	public int GetAdProgress() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts