public class PlayOnWithRewardedDataService : IService, IInitializable, IDisposable, ISyncable, ILateUpdate, IDeletable // TypeDefIndex: 1241
{
	// Fields
	private PlayOnWithRewardedDataModel _model; // 0x10
	private ISaveLoad<PlayOnWithRewardedDataModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x214904C Offset: 0x214904C VA: 0x214904C
	public void .ctor(ISaveLoad<PlayOnWithRewardedDataModel> saveLoad) { }

	// RVA: 0x2149084 Offset: 0x2149084 VA: 0x2149084 Slot: 4
	public void Initialize() { }

	// RVA: 0x21491DC Offset: 0x21491DC VA: 0x21491DC Slot: 5
	public void Dispose() { }

	// RVA: 0x2149260 Offset: 0x2149260 VA: 0x2149260 Slot: 6
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2149268 Offset: 0x2149268 VA: 0x2149268 Slot: 7
	public void DataSynced() { }

	// RVA: 0x2149270 Offset: 0x2149270 VA: 0x2149270 Slot: 8
	public string SerializeModelForSync() { }

	// RVA: 0x21492CC Offset: 0x21492CC VA: 0x21492CC Slot: 9
	public string GetSyncName() { }

	// RVA: 0x214930C Offset: 0x214930C VA: 0x214930C Slot: 10
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2149394 Offset: 0x2149394 VA: 0x2149394 Slot: 11
	public void LateUpdate() { }

	// RVA: 0x214944C Offset: 0x214944C VA: 0x214944C Slot: 12
	public void DeleteData() { }

	// RVA: 0x2149518 Offset: 0x2149518 VA: 0x2149518
	private void MarkForLateUpdate(bool shouldSyncWithBackend) { }

	// RVA: 0x214952C Offset: 0x214952C VA: 0x214952C
	public int GetCurrentWatchRewardedCount() { }

	// RVA: 0x2149548 Offset: 0x2149548 VA: 0x2149548
	public void IncreaseWatchedRewardedCount() { }

	// RVA: 0x2149574 Offset: 0x2149574 VA: 0x2149574
	public void SetLastWatchTime(DateTime time) { }

	// RVA: 0x2149598 Offset: 0x2149598 VA: 0x2149598
	public DateTime GetLastUsedTime() { }

	// RVA: 0x21495B4 Offset: 0x21495B4 VA: 0x21495B4
	public void ResetWatchCount(DateTime now) { }
}

// Namespace: Modules.Contexts.GamePlay.PlayOn.Scripts.PlayOnWithRewarded