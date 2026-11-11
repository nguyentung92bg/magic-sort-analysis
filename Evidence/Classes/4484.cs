public class DailyRewardService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable // TypeDefIndex: 4484
{
	// Fields
	private DailyRewardDataService _dataService; // 0x10
	private DailyRewardRemoteService _remoteService; // 0x18
	private DailyRewardStateService _stateService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private CustomUpdater _customUpdater; // 0x30

	// Methods

	// RVA: 0x38D3AB0 Offset: 0x38D3AB0 VA: 0x38D3AB0
	public void .ctor(DailyRewardDataService dataService, DailyRewardRemoteService remoteService, DailyRewardStateService stateService, RemoteConfigs remoteConfigs, CustomUpdater customUpdater) { }

	// RVA: 0x38D3B40 Offset: 0x38D3B40 VA: 0x38D3B40 Slot: 4
	public void Initialize() { }

	// RVA: 0x38D3B64 Offset: 0x38D3B64 VA: 0x38D3B64 Slot: 7
	public void InitializeData() { }

	// RVA: 0x38D3BB0 Offset: 0x38D3BB0 VA: 0x38D3BB0 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x38D3BB4 Offset: 0x38D3BB4 VA: 0x38D3BB4 Slot: 5
	public void Dispose() { }

	// RVA: 0x38D3BD4 Offset: 0x38D3BD4 VA: 0x38D3BD4
	public bool IsLobbyIconVisible() { }

	// RVA: 0x38D3C10 Offset: 0x38D3C10 VA: 0x38D3C10
	public bool ShouldShowAlertView() { }

	// RVA: 0x38D3B68 Offset: 0x38D3B68 VA: 0x38D3B68
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(DailyRewardService.<FetchCurrentEvent>d__13))]
	// RVA: 0x38D3CAC Offset: 0x38D3CAC VA: 0x38D3CAC
	private Task FetchCurrentEvent() { }

	// RVA: 0x38D3D98 Offset: 0x38D3D98 VA: 0x38D3D98
	private void TryStartNewEvent(DailyRewardEventInfoResponse response) { }

	// RVA: 0x38D3E6C Offset: 0x38D3E6C VA: 0x38D3E6C
	public bool IsRewardPoolInitialized() { }

	// RVA: 0x38D3EA8 Offset: 0x38D3EA8 VA: 0x38D3EA8
	public void InitializeRewardPool() { }

	// RVA: 0x38D3EC0 Offset: 0x38D3EC0 VA: 0x38D3EC0
	public RewardModel SelectRandomRewardV2(int selectedRewardIndex) { }

	// RVA: 0x38D3EF8 Offset: 0x38D3EF8 VA: 0x38D3EF8
	public List<DailyRewardProbabilityRewardModelV2> GetTargetProbabilitiesForV2() { }

	// RVA: 0x38D404C Offset: 0x38D404C VA: 0x38D404C
	public RewardModel SelectRandomRewardFromPool(int selectedRewardIndex) { }

	// RVA: 0x38D4004 Offset: 0x38D4004 VA: 0x38D4004
	private DailyRewardConfigModelV2 GetConfig() { }

	// RVA: 0x38D4064 Offset: 0x38D4064 VA: 0x38D4064
	public long GetRemainingSeconds() { }

	// RVA: 0x38D4188 Offset: 0x38D4188 VA: 0x38D4188
	public DateTime GetEndDate() { }

	// RVA: 0x38D4270 Offset: 0x38D4270 VA: 0x38D4270
	public long GetStartTimeAsUnix() { }

	// RVA: 0x38D41F8 Offset: 0x38D41F8 VA: 0x38D41F8
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x38D4288 Offset: 0x38D4288 VA: 0x38D4288
	public string GetSegment() { }

	// RVA: 0x38D42A0 Offset: 0x38D42A0 VA: 0x38D42A0
	public string GetEventId() { }

	// RVA: 0x38D42F8 Offset: 0x38D42F8 VA: 0x38D42F8
	public bool IsNotIntroduced() { }

	// RVA: 0x38D4334 Offset: 0x38D4334 VA: 0x38D4334
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x38D4364 Offset: 0x38D4364 VA: 0x38D4364
	public void ClaimEvent() { }

	// RVA: 0x38D4028 Offset: 0x38D4028 VA: 0x38D4028
	public bool ShouldForceOpen() { }

	// RVA: 0x38D4394 Offset: 0x38D4394 VA: 0x38D4394
	public bool ShouldForceOpenOnStart() { }

	// RVA: 0x38D43E4 Offset: 0x38D43E4 VA: 0x38D43E4
	public bool ShouldForceOpenOnReturnHome() { }

	// RVA: 0x38D445C Offset: 0x38D445C VA: 0x38D445C
	public bool IsSelectionCompleted() { }

	// RVA: 0x38D4474 Offset: 0x38D4474 VA: 0x38D4474
	public List<DailyRewardSelectedRewardModel> GetSelectedRewards() { }

	// RVA: 0x38D4164 Offset: 0x38D4164 VA: 0x38D4164
	public DailyRewardCacheModel GetCacheEventInfo() { }

	// RVA: 0x38D448C Offset: 0x38D448C VA: 0x38D448C
	public void QueueSelectedReward(RewardModel selectedReward) { }

	[AsyncStateMachine(typeof(DailyRewardService.<GiveBulkRewards>d__37))]
	// RVA: 0x38D44A4 Offset: 0x38D44A4 VA: 0x38D44A4
	public Task GiveBulkRewards() { }

	// RVA: 0x38D4590 Offset: 0x38D4590 VA: 0x38D4590
	public bool HasRewardInQueue() { }

	// RVA: 0x38D45A8 Offset: 0x38D45A8 VA: 0x38D45A8
	public bool IsEventEnded() { }

	// RVA: 0x38D4614 Offset: 0x38D4614 VA: 0x38D4614
	public bool IsEventClaimed() { }
}

// Namespace: Modules.Contexts.Home.DailyReward.Scripts