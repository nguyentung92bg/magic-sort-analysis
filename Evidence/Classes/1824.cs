public class WindQuestDataService : IRestartableService, IService, IInitializable, IDisposable, ILateUpdate, ISyncable // TypeDefIndex: 1824
{
	// Fields
	private readonly ISaveLoad<WindQuestDataModel> _saveLoad; // 0x10
	private readonly RemoteConfigs _remoteConfigs; // 0x18
	private WindQuestDataModel _model; // 0x20
	private bool _isMarkedForLateUpdate; // 0x28
	private bool _isDataChangedSinceLastSave; // 0x29
	private int _levelsCompletedThisSession; // 0x2C
	private bool _showedCloseToCompletion; // 0x30

	// Methods

	// RVA: 0x2D9BA50 Offset: 0x2D9BA50 VA: 0x2D9BA50
	public void .ctor(SaveLoad<WindQuestDataModel> saveLoad, RemoteConfigs remoteConfigs) { }

	// RVA: 0x2D9BA9C Offset: 0x2D9BA9C VA: 0x2D9BA9C Slot: 4
	public void Initialize() { }

	// RVA: 0x2D9BBE8 Offset: 0x2D9BBE8 VA: 0x2D9BBE8 Slot: 5
	public void Dispose() { }

	// RVA: 0x2D9BBEC Offset: 0x2D9BBEC VA: 0x2D9BBEC Slot: 6
	public void LateUpdate() { }

	// RVA: 0x2D9BCA4 Offset: 0x2D9BCA4 VA: 0x2D9BCA4 Slot: 7
	public bool IsDataChangedSinceLastSave() { }

	// RVA: 0x2D9BCAC Offset: 0x2D9BCAC VA: 0x2D9BCAC Slot: 8
	public void DataSynced() { }

	// RVA: 0x2D9BCB4 Offset: 0x2D9BCB4 VA: 0x2D9BCB4 Slot: 9
	public string SerializeModelForSync() { }

	// RVA: 0x2D9BD60 Offset: 0x2D9BD60 VA: 0x2D9BD60 Slot: 10
	public string GetSyncName() { }

	// RVA: 0x2D9BDA0 Offset: 0x2D9BDA0 VA: 0x2D9BDA0 Slot: 11
	public void OverwriteModelFromSync(string data) { }

	// RVA: 0x2D9BEF8 Offset: 0x2D9BEF8 VA: 0x2D9BEF8
	private void MarkDataForLateUpdate() { }

	// RVA: 0x2D9BF04 Offset: 0x2D9BF04 VA: 0x2D9BF04
	public void SetEventCache(WindQuestResponseModel responseModel) { }

	// RVA: 0x2D9C0CC Offset: 0x2D9C0CC VA: 0x2D9C0CC
	public WindQuestEventCacheModel GetCachedTask() { }

	// RVA: 0x2D9C0E8 Offset: 0x2D9C0E8 VA: 0x2D9C0E8
	public List<WindQuestStepCacheModel> GetGoals() { }

	// RVA: 0x2D9C150 Offset: 0x2D9C150 VA: 0x2D9C150
	public string GetEventId() { }

	// RVA: 0x2D9C174 Offset: 0x2D9C174 VA: 0x2D9C174
	public WindQuestTaskType GetTaskType() { }

	// RVA: 0x2D9C198 Offset: 0x2D9C198 VA: 0x2D9C198
	public int GetUnlockLevelRequirement() { }

	// RVA: 0x2D9C1BC Offset: 0x2D9C1BC VA: 0x2D9C1BC
	public bool IsTimerStarted() { }

	// RVA: 0x2D9C1E8 Offset: 0x2D9C1E8 VA: 0x2D9C1E8
	public void StartTaskTimer(long nowUnixSeconds) { }

	// RVA: 0x2D9C22C Offset: 0x2D9C22C VA: 0x2D9C22C
	public long GetTaskEndTime() { }

	// RVA: 0x2D9C26C Offset: 0x2D9C26C VA: 0x2D9C26C
	public bool IsTaskTimedOut(long nowUnixSeconds) { }

	// RVA: 0x2D9C2A8 Offset: 0x2D9C2A8 VA: 0x2D9C2A8
	public bool IsCycleEnded(long nowUnixSeconds) { }

	// RVA: 0x2D9C2E0 Offset: 0x2D9C2E0 VA: 0x2D9C2E0
	public int GetProgress() { }

	// RVA: 0x2D9C304 Offset: 0x2D9C304 VA: 0x2D9C304
	public void AddProgress(int extraEarnedProgress) { }

	// RVA: 0x2D9C338 Offset: 0x2D9C338 VA: 0x2D9C338
	public void SetProgress(int progress) { }

	// RVA: 0x2D9C364 Offset: 0x2D9C364 VA: 0x2D9C364
	public int GetLastSeenProgress() { }

	// RVA: 0x2D9B32C Offset: 0x2D9B32C VA: 0x2D9B32C
	public void SetLastSeenProgress(int progress) { }

	// RVA: 0x2D9C388 Offset: 0x2D9C388 VA: 0x2D9C388
	public void SetGoalRewardGranted(int goalIndex) { }

	// RVA: 0x2D9C424 Offset: 0x2D9C424 VA: 0x2D9C424
	public RewardModel GetGoalReward(WindQuestStepCacheModel stepCacheModel) { }

	// RVA: 0x2D9C4D0 Offset: 0x2D9C4D0 VA: 0x2D9C4D0
	public bool IsClaimed() { }

	// RVA: 0x2D9C4F4 Offset: 0x2D9C4F4 VA: 0x2D9C4F4
	public void SetClaimed(bool isClaimed) { }

	// RVA: 0x2D9C524 Offset: 0x2D9C524 VA: 0x2D9C524
	public WindQuestConfigModel GetConfig() { }

	// RVA: 0x2D9C548 Offset: 0x2D9C548 VA: 0x2D9C548
	public int GetLevelsCompletedThisSession() { }

	// RVA: 0x2D9C550 Offset: 0x2D9C550 VA: 0x2D9C550
	public bool IsShowedCloseToCompletion() { }

	// RVA: 0x2D9C558 Offset: 0x2D9C558 VA: 0x2D9C558
	public void SetShowedCloseToCompletion(bool value) { }

	// RVA: 0x2D9C564 Offset: 0x2D9C564 VA: 0x2D9C564
	public void IncreaseLevelsCompletedThisSessionBy(int value) { }

	// RVA: 0x2D9C574 Offset: 0x2D9C574 VA: 0x2D9C574
	public void SetTaskDurationInSeconds(int durationInSeconds) { }

	// RVA: 0x2D9C5A4 Offset: 0x2D9C5A4 VA: 0x2D9C5A4
	public void ResetSessionData() { }

	// RVA: 0x2D9C5B0 Offset: 0x2D9C5B0 VA: 0x2D9C5B0
	public float GetSegmentScore() { }

	// RVA: 0x2D9C5D4 Offset: 0x2D9C5D4 VA: 0x2D9C5D4
	public int GetEventType() { }
}

// Namespace: Modules.Contexts.Home.WindQuest.Scripts