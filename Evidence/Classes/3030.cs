public class MultiplierDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 3030
{
	// Fields
	private readonly ISaveLoad<MultiplierModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private MultiplierModel _model; // 0x20

	// Methods

	// RVA: 0x2AF2818 Offset: 0x2AF2818 VA: 0x2AF2818
	public void .ctor(ISaveLoad<MultiplierModel> saveLoad) { }

	// RVA: 0x2AF2850 Offset: 0x2AF2850 VA: 0x2AF2850 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AF2910 Offset: 0x2AF2910 VA: 0x2AF2910 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AF2914 Offset: 0x2AF2914 VA: 0x2AF2914 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2AF29CC Offset: 0x2AF29CC VA: 0x2AF29CC Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2AF29D4 Offset: 0x2AF29D4 VA: 0x2AF29D4 Slot: 8
	public void DataSynced() { }

	// RVA: 0x2AF29DC Offset: 0x2AF29DC VA: 0x2AF29DC Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x2AF2A88 Offset: 0x2AF2A88 VA: 0x2AF2A88 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2AF2AC8 Offset: 0x2AF2AC8 VA: 0x2AF2AC8 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2AF2BD0 Offset: 0x2AF2BD0 VA: 0x2AF2BD0 Slot: 12
	public void DeleteData() { }

	// RVA: 0x2AF2CB4 Offset: 0x2AF2CB4 VA: 0x2AF2CB4
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2AF2CC0 Offset: 0x2AF2CC0 VA: 0x2AF2CC0
	public int GetTooltipDisplayCount() { }

	// RVA: 0x2AF2CDC Offset: 0x2AF2CDC VA: 0x2AF2CDC
	public void IncreaseTooltipDisplayCount() { }

	// RVA: 0x2AF2D08 Offset: 0x2AF2D08 VA: 0x2AF2D08
	public int GetLastMultiplierSelectedLevel() { }

	// RVA: 0x2AF2D24 Offset: 0x2AF2D24 VA: 0x2AF2D24
	public void SetLastMultiplierSelectedLevel(int level) { }

	// RVA: 0x2AF2D54 Offset: 0x2AF2D54 VA: 0x2AF2D54
	public int GetLastTooltipDisplayedLevel() { }

	// RVA: 0x2AF2D70 Offset: 0x2AF2D70 VA: 0x2AF2D70
	public void SetLastTooltipDisplayedLevel(int level) { }
}

// Namespace: Modules.Contexts.Home.Multiplier