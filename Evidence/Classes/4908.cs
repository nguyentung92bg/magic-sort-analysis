public class DailyDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 4908
{
	// Fields
	private readonly ISaveLoad<DailyModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private DailyModel _model; // 0x20

	// Methods

	// RVA: 0x4102FF0 Offset: 0x4102FF0 VA: 0x4102FF0
	public void .ctor(ISaveLoad<DailyModel> saveLoad) { }

	// RVA: 0x4103028 Offset: 0x4103028 VA: 0x4103028 Slot: 4
	public void Initialize() { }

	// RVA: 0x4103160 Offset: 0x4103160 VA: 0x4103160 Slot: 5
	public void Dispose() { }

	// RVA: 0x4103164 Offset: 0x4103164 VA: 0x4103164 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x410321C Offset: 0x410321C VA: 0x410321C Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x4103224 Offset: 0x4103224 VA: 0x4103224 Slot: 8
	public void DataSynced() { }

	// RVA: 0x410322C Offset: 0x410322C VA: 0x410322C Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x41032D8 Offset: 0x41032D8 VA: 0x41032D8 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x4103318 Offset: 0x4103318 VA: 0x4103318 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x4103420 Offset: 0x4103420 VA: 0x4103420 Slot: 12
	public void DeleteData() { }

	// RVA: 0x4103154 Offset: 0x4103154 VA: 0x4103154
	private void MarkDataForLateUpdate() { }

	// RVA: 0x41034F0 Offset: 0x41034F0 VA: 0x41034F0
	public void RemoveOutdatedMonthsUpTo(DateTime dateTime) { }

	// RVA: 0x41036B0 Offset: 0x41036B0 VA: 0x41036B0
	public void RemoveAllSavedData() { }

	// RVA: 0x4103728 Offset: 0x4103728 VA: 0x4103728
	public void AddMissingMonthModel(DateTime dateTime) { }

	// RVA: 0x4103940 Offset: 0x4103940 VA: 0x4103940
	public DateTime GetMostRecentMonthDate() { }

	// RVA: 0x4103AF4 Offset: 0x4103AF4 VA: 0x4103AF4
	public void ClaimDay(DateTime dateTime) { }

	// RVA: 0x4103D58 Offset: 0x4103D58 VA: 0x4103D58
	public void UnClaimDay(DateTime dateTime) { }

	// RVA: 0x4103FBC Offset: 0x4103FBC VA: 0x4103FBC
	public bool IsDayClaimed(DateTime dateTime) { }

	// RVA: 0x4104254 Offset: 0x4104254 VA: 0x4104254
	public void UnlockDay(DateTime dateTime) { }

	// RVA: 0x4104498 Offset: 0x4104498 VA: 0x4104498
	public void UnlockAllDays() { }

	// RVA: 0x4104614 Offset: 0x4104614 VA: 0x4104614
	public bool IsDayUnlocked(DateTime dateTime) { }

	// RVA: 0x4103D38 Offset: 0x4103D38 VA: 0x4103D38
	private int MarkDay(int bitmask, int day) { }

	// RVA: 0x4103F9C Offset: 0x4103F9C VA: 0x4103F9C
	private int UnMarkDay(int bitmask, int day) { }

	// RVA: 0x410422C Offset: 0x410422C VA: 0x410422C
	private bool IsDayMarked(int bitmask, int day) { }

	// RVA: 0x4104884 Offset: 0x4104884 VA: 0x4104884
	public bool DidTutorialLevelPlay() { }

	// RVA: 0x41048A0 Offset: 0x41048A0 VA: 0x41048A0
	public void SetTutorialLevelPlayed() { }

	// RVA: 0x41048C8 Offset: 0x41048C8 VA: 0x41048C8
	public bool IsDailyIntroduced() { }

	// RVA: 0x41048E4 Offset: 0x41048E4 VA: 0x41048E4
	public void SetDailyIntroduced() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts
[Serializable]