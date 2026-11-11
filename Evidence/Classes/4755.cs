public class BroomStreakDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 4755
{
	// Fields
	private ISaveLoad<BroomStreakModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private BroomStreakModel _model; // 0x20

	// Methods

	// RVA: 0x3B322DC Offset: 0x3B322DC VA: 0x3B322DC
	public void .ctor(ISaveLoad<BroomStreakModel> saveLoad) { }

	// RVA: 0x3B32314 Offset: 0x3B32314 VA: 0x3B32314 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B323D4 Offset: 0x3B323D4 VA: 0x3B323D4 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B323D8 Offset: 0x3B323D8 VA: 0x3B323D8
	public void ClaimEvent() { }

	// RVA: 0x3B32488 Offset: 0x3B32488 VA: 0x3B32488
	public void StartNewEvent(BroomStreakEventInfoResponse BroomStreakEventInfoResponse, BroomStreakConfigModel BroomStreakConfigModel) { }

	// RVA: 0x3B326E8 Offset: 0x3B326E8 VA: 0x3B326E8
	public string GetEventId() { }

	// RVA: 0x3B32748 Offset: 0x3B32748 VA: 0x3B32748
	public bool IsEventCached() { }

	// RVA: 0x3B3276C Offset: 0x3B3276C VA: 0x3B3276C
	public BroomStreakCache GetCachedEventInfo() { }

	// RVA: 0x3B32788 Offset: 0x3B32788 VA: 0x3B32788
	public void IncreaseWinCount() { }

	// RVA: 0x3B32888 Offset: 0x3B32888 VA: 0x3B32888
	public void SetCircleProgressBarFillRatio(float mainStepFillRatio) { }

	// RVA: 0x3B32930 Offset: 0x3B32930 VA: 0x3B32930
	public float GetCachedCircleProgressBarFillRatio() { }

	// RVA: 0x3B3294C Offset: 0x3B3294C VA: 0x3B3294C
	public int GetMaxWinCount() { }

	// RVA: 0x3B32968 Offset: 0x3B32968 VA: 0x3B32968
	public int GetMaxWinCountRecord() { }

	// RVA: 0x3B32984 Offset: 0x3B32984 VA: 0x3B32984
	public void FallDownTo(int checkPointWinCount) { }

	// RVA: 0x3B32A2C Offset: 0x3B32A2C VA: 0x3B32A2C
	public int GetWinCount() { }

	// RVA: 0x3B32A48 Offset: 0x3B32A48 VA: 0x3B32A48
	public int GetMaxClaimedStepIndex() { }

	// RVA: 0x3B32A64 Offset: 0x3B32A64 VA: 0x3B32A64
	public void SetMaxClaimedStepIndex(int step) { }

	// RVA: 0x3B32A88 Offset: 0x3B32A88 VA: 0x3B32A88
	public int GetLastSeenMaxClaimedStepIndex() { }

	// RVA: 0x3B32AA4 Offset: 0x3B32AA4 VA: 0x3B32AA4
	public int GetLastSeenMaxClaimedStepWinCount() { }

	// RVA: 0x3B32B1C Offset: 0x3B32B1C VA: 0x3B32B1C
	public void SetLastSeenMaxClaimedStepIndex(int step) { }

	// RVA: 0x3B32B40 Offset: 0x3B32B40 VA: 0x3B32B40
	public int GetMaxClaimedCheckPointStepIndex() { }

	// RVA: 0x3B32B5C Offset: 0x3B32B5C VA: 0x3B32B5C
	public void SetMaxClaimedCheckPointStepIndex(int step) { }

	// RVA: 0x3B32B80 Offset: 0x3B32B80 VA: 0x3B32B80
	public int GetMaxClaimedCheckPointWinCount() { }

	// RVA: 0x3B32BF8 Offset: 0x3B32BF8 VA: 0x3B32BF8
	public int GetLastSeenWinCount() { }

	// RVA: 0x3B32C14 Offset: 0x3B32C14 VA: 0x3B32C14
	public int GetLastSeenWinCountBeforeFallDown() { }

	// RVA: 0x3B32C30 Offset: 0x3B32C30 VA: 0x3B32C30
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x3B32C58 Offset: 0x3B32C58 VA: 0x3B32C58
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x3B32C74 Offset: 0x3B32C74 VA: 0x3B32C74
	public void MarkEventIntroduced() { }

	// RVA: 0x3B32CA4 Offset: 0x3B32CA4 VA: 0x3B32CA4
	public bool IsIntroduced() { }

	// RVA: 0x3B32CC8 Offset: 0x3B32CC8 VA: 0x3B32CC8
	public bool IsClaimed() { }

	// RVA: 0x3B32CEC Offset: 0x3B32CEC VA: 0x3B32CEC
	public void SetLastSeenWinCount(int winCount) { }

	// RVA: 0x3B32D10 Offset: 0x3B32D10 VA: 0x3B32D10
	public bool DidUseWinCountChange() { }

	// RVA: 0x3B32D38 Offset: 0x3B32D38 VA: 0x3B32D38 Slot: 12
	public void DeleteData() { }

	// RVA: 0x3B32E08 Offset: 0x3B32E08 VA: 0x3B32E08 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3B3247C Offset: 0x3B3247C VA: 0x3B3247C
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3B32EC0 Offset: 0x3B32EC0 VA: 0x3B32EC0 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3B32EC8 Offset: 0x3B32EC8 VA: 0x3B32EC8 Slot: 8
	public void DataSynced() { }

	// RVA: 0x3B32ED0 Offset: 0x3B32ED0 VA: 0x3B32ED0 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3B32F7C Offset: 0x3B32F7C VA: 0x3B32F7C Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3B32FBC Offset: 0x3B32FBC VA: 0x3B32FBC Slot: 11
	public void OverwriteModelFromSync(string data) { }
}

// Namespace: 
[CompilerGenerated]