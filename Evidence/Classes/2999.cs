public class PreBoosterWinStreakDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 2999
{
	// Fields
	private PreBoosterWinStreakModel _model; // 0x10
	private ISaveLoad<PreBoosterWinStreakModel> _saveLoad; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private bool _isDataChangedSinceLastSave; // 0x21

	// Methods

	// RVA: 0x2AE7C1C Offset: 0x2AE7C1C VA: 0x2AE7C1C
	public void .ctor(ISaveLoad<PreBoosterWinStreakModel> saveLoad) { }

	// RVA: 0x2AE7C54 Offset: 0x2AE7C54 VA: 0x2AE7C54 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AE7D08 Offset: 0x2AE7D08 VA: 0x2AE7D08
	public bool HasWinStreak() { }

	// RVA: 0x2AE7D2C Offset: 0x2AE7D2C VA: 0x2AE7D2C
	public void IncreaseWinStreak() { }

	// RVA: 0x2AE7D64 Offset: 0x2AE7D64 VA: 0x2AE7D64
	public int GetWinStreakCount() { }

	// RVA: 0x2AE7D80 Offset: 0x2AE7D80 VA: 0x2AE7D80
	public void ResetStreakCount() { }

	// RVA: 0x2AE7DA4 Offset: 0x2AE7DA4 VA: 0x2AE7DA4 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AE7DA8 Offset: 0x2AE7DA8 VA: 0x2AE7DA8 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2AE7D58 Offset: 0x2AE7D58 VA: 0x2AE7D58
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2AE7E60 Offset: 0x2AE7E60 VA: 0x2AE7E60 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2AE7E68 Offset: 0x2AE7E68 VA: 0x2AE7E68 Slot: 8
	public void DataSynced() { }

	// RVA: 0x2AE7E70 Offset: 0x2AE7E70 VA: 0x2AE7E70 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x2AE7F1C Offset: 0x2AE7F1C VA: 0x2AE7F1C Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2AE7F5C Offset: 0x2AE7F5C VA: 0x2AE7F5C Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2AE8064 Offset: 0x2AE8064 VA: 0x2AE8064 Slot: 12
	public void DeleteData() { }
}

// Namespace: Modules.Contexts.Home.PreBoosterWinStreak.Scripts