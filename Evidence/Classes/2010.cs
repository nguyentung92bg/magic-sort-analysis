public class TowerWinStreakDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 2010
{
	// Fields
	private ISaveLoad<TowerWinStreakModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private TowerWinStreakModel _model; // 0x20

	// Methods

	// RVA: 0x32E06F0 Offset: 0x32E06F0 VA: 0x32E06F0
	public void .ctor(ISaveLoad<TowerWinStreakModel> saveLoad) { }

	// RVA: 0x32E0728 Offset: 0x32E0728 VA: 0x32E0728 Slot: 4
	public void Initialize() { }

	// RVA: 0x32E07E8 Offset: 0x32E07E8 VA: 0x32E07E8 Slot: 5
	public void Dispose() { }

	// RVA: 0x32E07EC Offset: 0x32E07EC VA: 0x32E07EC
	public void ClaimEvent() { }

	// RVA: 0x32E089C Offset: 0x32E089C VA: 0x32E089C
	public void StartNewEvent(TowerWinStreakEventInfoResponse towerWinStreakEventInfoResponse, TowerWinStreakConfigModel towerWinStreakConfigModel) { }

	// RVA: 0x32E0AF0 Offset: 0x32E0AF0 VA: 0x32E0AF0
	public string GetEventId() { }

	// RVA: 0x32E0B50 Offset: 0x32E0B50 VA: 0x32E0B50
	public bool IsEventCached() { }

	// RVA: 0x32E0B74 Offset: 0x32E0B74 VA: 0x32E0B74
	public TowerWinStreakCache GetCachedEventInfo() { }

	// RVA: 0x32E0B90 Offset: 0x32E0B90 VA: 0x32E0B90
	public void IncreaseWinCount() { }

	// RVA: 0x32E0C90 Offset: 0x32E0C90 VA: 0x32E0C90
	public void SetCircleProgressBarFillRatio(float mainStepFillRatio) { }

	// RVA: 0x32E0D38 Offset: 0x32E0D38 VA: 0x32E0D38
	public float GetCachedCircleProgressBarFillRatio() { }

	// RVA: 0x32E0D54 Offset: 0x32E0D54 VA: 0x32E0D54
	public int GetMaxWinCount() { }

	// RVA: 0x32E0D70 Offset: 0x32E0D70 VA: 0x32E0D70
	public int GetMaxWinCountRecord() { }

	// RVA: 0x32E0D8C Offset: 0x32E0D8C VA: 0x32E0D8C
	public void ResetWinStreak() { }

	// RVA: 0x32E0E30 Offset: 0x32E0E30 VA: 0x32E0E30
	public int GetWinCount() { }

	// RVA: 0x32E0E4C Offset: 0x32E0E4C VA: 0x32E0E4C
	public int GetLastSeenWinCount() { }

	// RVA: 0x32E0E68 Offset: 0x32E0E68 VA: 0x32E0E68
	public int GetLastSeenWinCountBeforeReset() { }

	// RVA: 0x32E0E84 Offset: 0x32E0E84 VA: 0x32E0E84
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x32E0EAC Offset: 0x32E0EAC VA: 0x32E0EAC
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x32E0EC8 Offset: 0x32E0EC8 VA: 0x32E0EC8
	public void MarkEventIntroduced() { }

	// RVA: 0x32E0EF8 Offset: 0x32E0EF8 VA: 0x32E0EF8
	public bool IsIntroduced() { }

	// RVA: 0x32E0F1C Offset: 0x32E0F1C VA: 0x32E0F1C
	public bool IsClaimed() { }

	// RVA: 0x32E0F40 Offset: 0x32E0F40 VA: 0x32E0F40
	public void SetLastSeenWinCount(int winCount) { }

	// RVA: 0x32E0F64 Offset: 0x32E0F64 VA: 0x32E0F64
	public bool DidUseWinCountChange() { }

	// RVA: 0x32E0F88 Offset: 0x32E0F88 VA: 0x32E0F88 Slot: 12
	public void DeleteData() { }

	// RVA: 0x32E1058 Offset: 0x32E1058 VA: 0x32E1058 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x32E0890 Offset: 0x32E0890 VA: 0x32E0890
	private void MarkDataForLateUpdate() { }

	// RVA: 0x32E1110 Offset: 0x32E1110 VA: 0x32E1110 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x32E1118 Offset: 0x32E1118 VA: 0x32E1118 Slot: 8
	public void DataSynced() { }

	// RVA: 0x32E1120 Offset: 0x32E1120 VA: 0x32E1120 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x32E11CC Offset: 0x32E11CC VA: 0x32E11CC Slot: 10
	public string GetSyncName() { }

	// RVA: 0x32E120C Offset: 0x32E120C VA: 0x32E120C Slot: 11
	public void OverwriteModelFromSync(string data) { }
}

// Namespace: 
[CompilerGenerated]