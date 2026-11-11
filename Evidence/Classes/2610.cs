public class SnitchDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 2610
{
	// Fields
	private SnitchModel _model; // 0x10
	private ISaveLoad<SnitchModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x246CCA0 Offset: 0x246CCA0 VA: 0x246CCA0
	public void .ctor(ISaveLoad<SnitchModel> saveLoad) { }

	// RVA: 0x246CCD8 Offset: 0x246CCD8 VA: 0x246CCD8 Slot: 4
	public void Initialize() { }

	// RVA: 0x246CD98 Offset: 0x246CD98 VA: 0x246CD98 Slot: 5
	public void Dispose() { }

	// RVA: 0x246CD9C Offset: 0x246CD9C VA: 0x246CD9C Slot: 6
	public void LateUpdate() { }

	// RVA: 0x246CE54 Offset: 0x246CE54 VA: 0x246CE54 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x246CE5C Offset: 0x246CE5C VA: 0x246CE5C Slot: 8
	public void DataSynced() { }

	// RVA: 0x246CE64 Offset: 0x246CE64 VA: 0x246CE64 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x246CF10 Offset: 0x246CF10 VA: 0x246CF10 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x246CF50 Offset: 0x246CF50 VA: 0x246CF50 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x246D058 Offset: 0x246D058 VA: 0x246D058 Slot: 12
	public void DeleteData() { }

	// RVA: 0x246D128 Offset: 0x246D128 VA: 0x246D128
	private void MarkDataForLateUpdate() { }

	// RVA: 0x246D134 Offset: 0x246D134 VA: 0x246D134
	public void IncreaseProgress() { }

	// RVA: 0x246D160 Offset: 0x246D160 VA: 0x246D160
	public void ResetProgress() { }

	// RVA: 0x246D184 Offset: 0x246D184 VA: 0x246D184
	public int GetProgress() { }

	// RVA: 0x246D1A0 Offset: 0x246D1A0 VA: 0x246D1A0
	public void SetLastSeenLobbyButtonProgress(int progress) { }

	// RVA: 0x246D1C4 Offset: 0x246D1C4 VA: 0x246D1C4
	public int GetLastSeenLobbyButtonProgress() { }

	// RVA: 0x246D1E0 Offset: 0x246D1E0 VA: 0x246D1E0
	public void MarkInfoPopUpAsIntroduced() { }

	// RVA: 0x246D208 Offset: 0x246D208 VA: 0x246D208
	public bool IsInfoPopUpIntroduced() { }

	// RVA: 0x246D224 Offset: 0x246D224 VA: 0x246D224
	public void MarkLevelTutorialAsIntroduced() { }

	// RVA: 0x246D24C Offset: 0x246D24C VA: 0x246D24C
	public bool IsLevelTutorialIntroduced() { }

	// RVA: 0x246D268 Offset: 0x246D268 VA: 0x246D268
	public void MarkEventShownInLifeTime() { }

	// RVA: 0x246D290 Offset: 0x246D290 VA: 0x246D290
	public bool IsEventShownInLifeTime() { }
}

// Namespace: Modules.Contexts.Home.Snitch.Scripts