public class SuperChargerDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 2424
{
	// Fields
	private SuperChargerModel _model; // 0x10
	private ISaveLoad<SuperChargerModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x296F6B4 Offset: 0x296F6B4 VA: 0x296F6B4
	public void .ctor(ISaveLoad<SuperChargerModel> saveLoad) { }

	// RVA: 0x296F6EC Offset: 0x296F6EC VA: 0x296F6EC Slot: 4
	public void Initialize() { }

	// RVA: 0x296F7AC Offset: 0x296F7AC VA: 0x296F7AC Slot: 5
	public void Dispose() { }

	// RVA: 0x296F7B0 Offset: 0x296F7B0 VA: 0x296F7B0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x296F868 Offset: 0x296F868 VA: 0x296F868 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x296F870 Offset: 0x296F870 VA: 0x296F870 Slot: 8
	public void DataSynced() { }

	// RVA: 0x296F878 Offset: 0x296F878 VA: 0x296F878 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x296F924 Offset: 0x296F924 VA: 0x296F924 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x296F964 Offset: 0x296F964 VA: 0x296F964 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x296FA6C Offset: 0x296FA6C VA: 0x296FA6C Slot: 12
	public void DeleteData() { }

	// RVA: 0x296FB3C Offset: 0x296FB3C VA: 0x296FB3C
	private void MarkDataForLateUpdate() { }

	// RVA: 0x296FB48 Offset: 0x296FB48 VA: 0x296FB48
	public void IncreaseProgress() { }

	// RVA: 0x296FB74 Offset: 0x296FB74 VA: 0x296FB74
	public void ResetProgress() { }

	// RVA: 0x296FB98 Offset: 0x296FB98 VA: 0x296FB98
	public int GetProgress() { }

	// RVA: 0x296FBB4 Offset: 0x296FBB4 VA: 0x296FBB4
	public void MarkInfoPopUpAsIntroduced() { }

	// RVA: 0x296FBDC Offset: 0x296FBDC VA: 0x296FBDC
	public bool IsInfoPopUpIntroduced() { }

	// RVA: 0x296FBF8 Offset: 0x296FBF8 VA: 0x296FBF8
	public void SetShouldShowLevelActivationPopUp(bool value) { }

	// RVA: 0x296FC20 Offset: 0x296FC20 VA: 0x296FC20
	public bool ShouldShowInLevelActivationPopUp() { }

	// RVA: 0x296FC3C Offset: 0x296FC3C VA: 0x296FC3C
	public void MarkEventShownInLifeTime() { }

	// RVA: 0x296FC64 Offset: 0x296FC64 VA: 0x296FC64
	public bool IsEventShownInLifeTime() { }

	// RVA: 0x296FC80 Offset: 0x296FC80 VA: 0x296FC80
	public void SetShouldShowJoinPopup(bool value) { }

	// RVA: 0x296FCA8 Offset: 0x296FCA8 VA: 0x296FCA8
	public bool ShouldShowJoinPopUp() { }

	// RVA: 0x296FCC4 Offset: 0x296FCC4 VA: 0x296FCC4
	public int GetForceTutorialShowCount() { }

	// RVA: 0x296FCE0 Offset: 0x296FCE0 VA: 0x296FCE0
	public void IncreaseForceTutorialShowCount() { }

	// RVA: 0x296FD0C Offset: 0x296FD0C VA: 0x296FD0C
	public int GetChargeableBottleTutorialShowCount() { }

	// RVA: 0x296FD28 Offset: 0x296FD28 VA: 0x296FD28
	public void IncreaseChargeableBottleTutorialShowCount() { }

	// RVA: 0x296FD54 Offset: 0x296FD54 VA: 0x296FD54
	public int GetSingleUseBottleTutorialShowCount() { }

	// RVA: 0x296FD70 Offset: 0x296FD70 VA: 0x296FD70
	public void IncreaseSingleUseBottleTutorialShowCount() { }

	// RVA: 0x296FD9C Offset: 0x296FD9C VA: 0x296FD9C
	public int GetRainbowWaterTutorialShowCount() { }

	// RVA: 0x296FDB8 Offset: 0x296FDB8 VA: 0x296FDB8
	public void IncreaseRainbowWaterTutorialShowCount() { }

	// RVA: 0x296FDE4 Offset: 0x296FDE4 VA: 0x296FDE4
	public int GetKeySortTutorialShowCount() { }

	// RVA: 0x296FE00 Offset: 0x296FE00 VA: 0x296FE00
	public void IncreaseKeySortTutorialShowCount() { }
}

// Namespace: Modules.Contexts.Home.SuperCharger.Scripts