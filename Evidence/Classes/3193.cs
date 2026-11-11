public class TreasureDrillService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3193
{
	// Fields
	private TreasureDrillDataService _dataService; // 0x10
	private TreasureDrillStateService _stateService; // 0x18
	private TreasureDrillRemoteService _remoteService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private CustomUpdater _customUpdater; // 0x30
	private IIntervalUpdate _intervalUpdateImplementation; // 0x38
	private RewardService _rewardService; // 0x40
	private IAPService _iapService; // 0x48
	private CollectionService _collectionService; // 0x50
	private InventoryService _inventoryService; // 0x58
	private readonly LobbyEventsService _lobbyEventsService; // 0x60

	// Properties
	public TreasureDrillDataService DataService { get; }
	public TreasureDrillStateService StateService { get; }

	// Methods

	// RVA: 0x33034A0 Offset: 0x33034A0 VA: 0x33034A0
	public TreasureDrillDataService get_DataService() { }

	// RVA: 0x33034A8 Offset: 0x33034A8 VA: 0x33034A8
	public TreasureDrillStateService get_StateService() { }

	// RVA: 0x33034B0 Offset: 0x33034B0 VA: 0x33034B0
	public void .ctor(CustomUpdater customUpdater, TreasureDrillDataService dataService, TreasureDrillStateService stateService, TreasureDrillRemoteService remoteService, RewardService rewardService, IAPService iapService, InventoryService inventoryService, RemoteConfigs remoteConfigs, LobbyEventsService lobbyEventsService, CollectionService collectionService) { }

	// RVA: 0x33035B0 Offset: 0x33035B0 VA: 0x33035B0
	private bool HasUnseenProgress() { }

	// RVA: 0x33035EC Offset: 0x33035EC VA: 0x33035EC
	public TreasureDrillViewModel GetViewModel() { }

	// RVA: 0x3303A50 Offset: 0x3303A50 VA: 0x3303A50
	private int GetLastSeenStep() { }

	// RVA: 0x3303A84 Offset: 0x3303A84 VA: 0x3303A84
	private int GetCurrentStep() { }

	// RVA: 0x3303AF4 Offset: 0x3303AF4 VA: 0x3303AF4
	private int GetProgress() { }

	// RVA: 0x3303B28 Offset: 0x3303B28 VA: 0x3303B28
	private int GetLastSeenProgress() { }

	// RVA: 0x3303EB0 Offset: 0x3303EB0 VA: 0x3303EB0
	private bool IsStepClaimable(int stepIndex) { }

	// RVA: 0x3303DE0 Offset: 0x3303DE0 VA: 0x3303DE0
	private bool IsStepClaimed(int stepIndex) { }

	// RVA: 0x3303FB4 Offset: 0x3303FB4 VA: 0x3303FB4
	public bool TryClaimStep(int stepIndex) { }

	// RVA: 0x3303FFC Offset: 0x3303FFC VA: 0x3303FFC
	private void ClaimStep(int step) { }

	// RVA: 0x33042D4 Offset: 0x33042D4 VA: 0x33042D4
	public void ClaimEligibleRewards() { }

	// RVA: 0x3304468 Offset: 0x3304468 VA: 0x3304468
	public int GetTotalCompletedTaskCount() { }

	// RVA: 0x3303C28 Offset: 0x3303C28 VA: 0x3303C28
	private List<RewardModel> GetStepRewards(TreasureDrillStepBase stepModel) { }

	// RVA: 0x3304608 Offset: 0x3304608 VA: 0x3304608
	public int GetClaimedTaskCount() { }

	// RVA: 0x33047D4 Offset: 0x33047D4 VA: 0x33047D4
	public string GetSegment() { }

	// RVA: 0x33047EC Offset: 0x33047EC VA: 0x33047EC
	public string GetEventId() { }

	// RVA: 0x330485C Offset: 0x330485C VA: 0x330485C
	public void ClaimEligibleRewardsDirectly() { }

	// RVA: 0x3304208 Offset: 0x3304208 VA: 0x3304208
	private TreasureDrillStepBase GetStepModel(int step) { }

	// RVA: 0x3304C70 Offset: 0x3304C70 VA: 0x3304C70 Slot: 4
	public void Initialize() { }

	// RVA: 0x3304C98 Offset: 0x3304C98 VA: 0x3304C98 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3304DB8 Offset: 0x3304DB8 VA: 0x3304DB8 Slot: 5
	public void Dispose() { }

	// RVA: 0x3304E9C Offset: 0x3304E9C VA: 0x3304E9C
	private void OnStateChanged() { }

	// RVA: 0x3304F70 Offset: 0x3304F70 VA: 0x3304F70 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3304D70 Offset: 0x3304D70 VA: 0x3304D70
	private void TryFetchCurrentEvent() { }

	// RVA: 0x3305030 Offset: 0x3305030 VA: 0x3305030
	public int GetRemainingSeconds() { }

	// RVA: 0x3303C10 Offset: 0x3303C10 VA: 0x3303C10
	public bool HasUnseenCompletedStep() { }

	// RVA: 0x3305140 Offset: 0x3305140 VA: 0x3305140
	public int GetLastUnseenCompletedStepIndex() { }

	[AsyncStateMachine(typeof(TreasureDrillService.<Purchase>d__43))]
	// RVA: 0x3305158 Offset: 0x3305158 VA: 0x3305158
	public Task<bool> Purchase(TreasureDrillActivationSource activationSource) { }

	// RVA: 0x3305280 Offset: 0x3305280 VA: 0x3305280
	public void SyncLastSeen() { }

	// RVA: 0x3305298 Offset: 0x3305298 VA: 0x3305298
	public void SetPurchased() { }

	// RVA: 0x3303AB8 Offset: 0x3303AB8 VA: 0x3303AB8
	public bool IsPurchased() { }

	// RVA: 0x3303B5C Offset: 0x3303B5C VA: 0x3303B5C
	public IAPConfigModel GetSegmentedIAPConfigModel() { }

	// RVA: 0x3305358 Offset: 0x3305358 VA: 0x3305358
	public Dictionary<string, IAPConfigModel> GetUniqueIAPConfigModels() { }

	// RVA: 0x330532C Offset: 0x330532C VA: 0x330532C
	private Dictionary<string, IAPConfigModel> GetSegmentedIAPs() { }

	[AsyncStateMachine(typeof(TreasureDrillService.<FetchCurrentEvent>d__50))]
	// RVA: 0x3304F78 Offset: 0x3304F78 VA: 0x3304F78
	private void FetchCurrentEvent() { }

	// RVA: 0x33055BC Offset: 0x33055BC VA: 0x33055BC
	private void TryStartNewEvent(TreasureDrillInfoResponse treasureDrillInfoResponse) { }

	// RVA: 0x33056D8 Offset: 0x33056D8 VA: 0x33056D8
	public int GetStep() { }

	// RVA: 0x330570C Offset: 0x330570C VA: 0x330570C
	public void TryIncreaseTaskProgress() { }

	// RVA: 0x3305810 Offset: 0x3305810 VA: 0x3305810
	public bool ShouldShowAlertView() { }

	// RVA: 0x33039D0 Offset: 0x33039D0 VA: 0x33039D0
	public DateTime GetEndDate() { }

	// RVA: 0x3305864 Offset: 0x3305864 VA: 0x3305864
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x33058DC Offset: 0x33058DC VA: 0x33058DC
	public int GetGrandPrize() { }

	// RVA: 0x3305BF8 Offset: 0x3305BF8 VA: 0x3305BF8
	public bool ShouldForceShowPopup() { }

	// RVA: 0x3305CB0 Offset: 0x3305CB0 VA: 0x3305CB0
	private bool IsLastCompletedStepMilestone() { }

	// RVA: 0x3305D58 Offset: 0x3305D58 VA: 0x3305D58
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x3305D88 Offset: 0x3305D88 VA: 0x3305D88
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3304F18 Offset: 0x3304F18 VA: 0x3304F18
	public void ClaimEvent() { }

	// RVA: 0x3304424 Offset: 0x3304424 VA: 0x3304424
	private bool TryGetClaimableStepsIndexes(out List<int> claimableStepIndex) { }

	// RVA: 0x3304B20 Offset: 0x3304B20 VA: 0x3304B20
	private IEnumerable<TreasureDrillStepBase> GetClaimableSteps() { }

	// RVA: 0x3304650 Offset: 0x3304650 VA: 0x3304650
	private List<TreasureDrillStepBase> GetClaimedSteps() { }

	// RVA: 0x33044B0 Offset: 0x33044B0 VA: 0x33044B0
	private List<TreasureDrillStepBase> GetStepsWithCompletedTask() { }

	// RVA: 0x3305DDC Offset: 0x3305DDC VA: 0x3305DDC Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x3305E04 Offset: 0x3305E04 VA: 0x3305E04 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x3305E7C Offset: 0x3305E7C VA: 0x3305E7C
	public bool ShouldShowEgo(bool isFirstPlayOn) { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts