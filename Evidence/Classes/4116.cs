public class JetpackRaceWithStageDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable, IDeletable // TypeDefIndex: 4116
{
	// Fields
	private readonly ISaveLoad<JetpackRaceWithStageModel> _saveLoad; // 0x10
	private bool _isMarkedForLateUpdate; // 0x18
	private bool _isDataChangedSinceLastSave; // 0x19
	private JetpackRaceWithStageModel _model; // 0x20

	// Methods

	// RVA: 0x3A823D4 Offset: 0x3A823D4 VA: 0x3A823D4
	public void .ctor(ISaveLoad<JetpackRaceWithStageModel> saveLoad) { }

	// RVA: 0x3A8240C Offset: 0x3A8240C VA: 0x3A8240C Slot: 4
	public void Initialize() { }

	// RVA: 0x3A824CC Offset: 0x3A824CC VA: 0x3A824CC Slot: 5
	public void Dispose() { }

	// RVA: 0x3A824D0 Offset: 0x3A824D0 VA: 0x3A824D0 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3A82588 Offset: 0x3A82588 VA: 0x3A82588 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x3A82590 Offset: 0x3A82590 VA: 0x3A82590 Slot: 8
	public void DataSynced() { }

	// RVA: 0x3A82598 Offset: 0x3A82598 VA: 0x3A82598 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x3A82644 Offset: 0x3A82644 VA: 0x3A82644 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x3A82684 Offset: 0x3A82684 VA: 0x3A82684 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x3A8278C Offset: 0x3A8278C VA: 0x3A8278C Slot: 12
	public void DeleteData() { }

	// RVA: 0x3A8285C Offset: 0x3A8285C VA: 0x3A8285C
	private void MarkDataForLateUpdate() { }

	// RVA: 0x3A82868 Offset: 0x3A82868 VA: 0x3A82868
	public void ResetScore() { }

	// RVA: 0x3A828A0 Offset: 0x3A828A0 VA: 0x3A828A0
	public void IncreaseScore() { }

	// RVA: 0x3A82934 Offset: 0x3A82934 VA: 0x3A82934
	public int GetScore() { }

	// RVA: 0x3A82960 Offset: 0x3A82960 VA: 0x3A82960
	public int GetLastSeenScore() { }

	// RVA: 0x3A8298C Offset: 0x3A8298C VA: 0x3A8298C
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x3A829A8 Offset: 0x3A829A8 VA: 0x3A829A8
	public bool IsStreakDisabledPopupShowedEverInLifeTime() { }

	// RVA: 0x3A829C4 Offset: 0x3A829C4 VA: 0x3A829C4
	public void MarkEventIntroduced() { }

	// RVA: 0x3A829F8 Offset: 0x3A829F8 VA: 0x3A829F8
	public void MarkStreakDisabledIntroduced() { }

	// RVA: 0x3A82A20 Offset: 0x3A82A20 VA: 0x3A82A20
	public void SetClaimedLocally(bool status) { }

	[CanBeNull]
	// RVA: 0x3A82A50 Offset: 0x3A82A50 VA: 0x3A82A50
	public JetpackRaceWithStageCacheModel GetCachedRace() { }

	// RVA: 0x3A82A6C Offset: 0x3A82A6C VA: 0x3A82A6C
	public void CacheRace(JetpackRaceWithStageCacheModel cacheModel) { }

	// RVA: 0x3A82A98 Offset: 0x3A82A98 VA: 0x3A82A98
	public void IncreaseLastStageWinCount() { }

	// RVA: 0x3A82AC4 Offset: 0x3A82AC4 VA: 0x3A82AC4
	public void ResetLastStageWinCount() { }

	// RVA: 0x3A82AE8 Offset: 0x3A82AE8 VA: 0x3A82AE8
	public void UpdateLastSeen() { }

	// RVA: 0x3A82BE0 Offset: 0x3A82BE0 VA: 0x3A82BE0
	public void UpdateLastSeenBanner() { }

	// RVA: 0x3A82C90 Offset: 0x3A82C90 VA: 0x3A82C90
	public void IncreaseWinRecord() { }

	// RVA: 0x3A82CBC Offset: 0x3A82CBC VA: 0x3A82CBC
	public int GetWinRecord() { }

	// RVA: 0x3A82CD8 Offset: 0x3A82CD8 VA: 0x3A82CD8
	public bool IsJoinPopupIntroduced() { }

	// RVA: 0x3A82CF4 Offset: 0x3A82CF4 VA: 0x3A82CF4
	public void SetIsJoinPopupIntroduced(bool isJoinPopupIntroduced) { }

	// RVA: 0x3A82D1C Offset: 0x3A82D1C VA: 0x3A82D1C
	public void SetHasUsedLimitlessLife(bool hasUsedLimitlessLife) { }

	// RVA: 0x3A82D44 Offset: 0x3A82D44 VA: 0x3A82D44
	public bool HasUsedLimitlessLife() { }

	// RVA: 0x3A82D60 Offset: 0x3A82D60 VA: 0x3A82D60
	public int GetLastStageWinCount() { }

	// RVA: 0x3A82D7C Offset: 0x3A82D7C VA: 0x3A82D7C
	public long GetNextRaceFinishTime() { }

	// RVA: 0x3A82D98 Offset: 0x3A82D98 VA: 0x3A82D98
	public void SetNextRaceFinishTime(long nextRaceFinishTime) { }
}

// Namespace: 
[CompilerGenerated]