public class MagicLabService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3997
{
	// Fields
	private MagicLabDataService _magicLabDataService; // 0x10
	private MagicLabRemoteService _magicLabRemoteService; // 0x18
	private MagicLabStateService _magicLabStateService; // 0x20
	private CustomUpdater _customUpdater; // 0x28
	private RemoteConfigs _remoteConfigs; // 0x30
	private RewardService _rewardService; // 0x38

	// Properties
	public MagicLabStateService StateService { get; }

	// Methods

	// RVA: 0x37529EC Offset: 0x37529EC VA: 0x37529EC
	public MagicLabStateService get_StateService() { }

	// RVA: 0x37529F4 Offset: 0x37529F4 VA: 0x37529F4
	public void .ctor(MagicLabDataService magicLabDataService, MagicLabRemoteService magicLabRemoteService, MagicLabStateService magicLabStateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, RewardService rewardService) { }

	// RVA: 0x3752A98 Offset: 0x3752A98 VA: 0x3752A98 Slot: 4
	public void Initialize() { }

	// RVA: 0x3752AC0 Offset: 0x3752AC0 VA: 0x3752AC0 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3752BEC Offset: 0x3752BEC VA: 0x3752BEC Slot: 5
	public void Dispose() { }

	// RVA: 0x3752C0C Offset: 0x3752C0C VA: 0x3752C0C Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3752BB4 Offset: 0x3752BB4 VA: 0x3752BB4
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(MagicLabService.<FetchCurrentEvent>d__14))]
	// RVA: 0x3752C34 Offset: 0x3752C34 VA: 0x3752C34
	private void FetchCurrentEvent() { }

	// RVA: 0x3752CE8 Offset: 0x3752CE8 VA: 0x3752CE8
	private void TryStartNewEvent(MagicLabEventInfoResponse magicLabEventInfoResponse, int eventType) { }

	// RVA: 0x375302C Offset: 0x375302C VA: 0x375302C
	public MagicLabViewModel GetViewModel() { }

	// RVA: 0x3753728 Offset: 0x3753728 VA: 0x3753728
	private static RewardModel GetStageRewardModel(MagicLabStage stage) { }

	// RVA: 0x37537D0 Offset: 0x37537D0 VA: 0x37537D0
	public void TryIncreaseTaskProgress(MagicLabTaskType taskType, int amount = 1) { }

	// RVA: 0x37539BC Offset: 0x37539BC VA: 0x37539BC
	public void TryReachTaskProgress(MagicLabTaskType taskType, int reachedProgress) { }

	// RVA: 0x3752E18 Offset: 0x3752E18 VA: 0x3752E18
	public void TryReachTaskStepsOnEventStart() { }

	// RVA: 0x3753B8C Offset: 0x3753B8C VA: 0x3753B8C
	public int GetRemainingSeconds() { }

	// RVA: 0x3753C9C Offset: 0x3753C9C VA: 0x3753C9C
	public int GetRemainingSecondsOfEvent() { }

	// RVA: 0x3753DAC Offset: 0x3753DAC VA: 0x3753DAC
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x3753E24 Offset: 0x3753E24 VA: 0x3753E24
	public DateTime GetEndDate() { }

	// RVA: 0x3752B5C Offset: 0x3752B5C VA: 0x3752B5C
	public void ClaimEvent() { }

	// RVA: 0x3753EA4 Offset: 0x3753EA4 VA: 0x3753EA4
	public string GetEventId() { }

	// RVA: 0x3753F0C Offset: 0x3753F0C VA: 0x3753F0C
	public long GetStartTimeAsUnix() { }

	// RVA: 0x3753F40 Offset: 0x3753F40 VA: 0x3753F40
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x3753F70 Offset: 0x3753F70 VA: 0x3753F70
	public bool TryGetClaimableStages(out List<int> rewardModels) { }

	// RVA: 0x3753FB4 Offset: 0x3753FB4 VA: 0x3753FB4
	public bool TryGetStageRewardsIfEligible(int stageId, out List<RewardModel> rewardModels) { }

	// RVA: 0x37536F4 Offset: 0x37536F4 VA: 0x37536F4
	public bool IsStageRewardsEligible(int stageId) { }

	// RVA: 0x3753FF8 Offset: 0x3753FF8 VA: 0x3753FF8
	public void TryClaimStage(int stageId) { }

	// RVA: 0x3754010 Offset: 0x3754010 VA: 0x3754010
	public bool IsLastSeenStageRewardEligible() { }

	// RVA: 0x3754044 Offset: 0x3754044 VA: 0x3754044
	public bool ShouldShowTwoTasksCompletedForcePopUp() { }

	// RVA: 0x375405C Offset: 0x375405C VA: 0x375405C
	public void SyncLastSeen() { }

	// RVA: 0x3754074 Offset: 0x3754074 VA: 0x3754074
	public bool ShouldShowAlertView() { }

	// RVA: 0x37540E8 Offset: 0x37540E8 VA: 0x37540E8
	public int GetCurrentStage() { }

	// RVA: 0x375411C Offset: 0x375411C VA: 0x375411C
	public int GetRemainingTaskInStage(int stageId) { }

	// RVA: 0x3754134 Offset: 0x3754134 VA: 0x3754134
	public int GetCompletedTaskCountInStage(int stageId) { }

	// RVA: 0x375414C Offset: 0x375414C VA: 0x375414C
	public int GetCompletedStageCount() { }

	// RVA: 0x3754164 Offset: 0x3754164 VA: 0x3754164
	public int GetClaimedChestCount() { }

	// RVA: 0x375417C Offset: 0x375417C VA: 0x375417C
	public string GetSegment() { }

	// RVA: 0x3752AE4 Offset: 0x3752AE4 VA: 0x3752AE4
	private bool CanAutoClaimEvent() { }

	// RVA: 0x37541AC Offset: 0x37541AC VA: 0x37541AC
	public string GetReadableEventId() { }

	// RVA: 0x37543EC Offset: 0x37543EC VA: 0x37543EC Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x3754430 Offset: 0x3754430 VA: 0x3754430 Slot: 9
	public bool IsLobbyGoingToBeShown() { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts