public class WheelOfFortuneService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 1873
{
	// Fields
	private readonly WheelOfFortuneDataService _dataService; // 0x10
	private readonly WheelOfFortuneStateService _stateService; // 0x18
	private readonly WheelOfFortuneRemoteService _remoteService; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private readonly CustomUpdater _customUpdater; // 0x30
	private readonly RewardService _rewardService; // 0x38
	private readonly IPlayerService _playerService; // 0x40
	private readonly CollectionService _collectionService; // 0x48
	private readonly NotificationService _notificationService; // 0x50
	private readonly LobbyEventsService _lobbyEventsService; // 0x58
	private readonly MagicLabService _magicLabService; // 0x60
	private readonly AssetManager _assetManager; // 0x68
	private string _wofBundleId; // 0x70

	// Properties
	public WheelOfFortuneDataService DataService { get; }
	public WheelOfFortuneStateService StateService { get; }

	// Methods

	// RVA: 0x2DA4950 Offset: 0x2DA4950 VA: 0x2DA4950
	public WheelOfFortuneDataService get_DataService() { }

	// RVA: 0x2DA4958 Offset: 0x2DA4958 VA: 0x2DA4958
	public WheelOfFortuneStateService get_StateService() { }

	// RVA: 0x2DA4960 Offset: 0x2DA4960 VA: 0x2DA4960
	public void .ctor(CustomUpdater customUpdater, WheelOfFortuneDataService dataService, IPlayerService playerService, WheelOfFortuneStateService stateService, WheelOfFortuneRemoteService remoteService, RewardService rewardService, CollectionService collectionService, NotificationService notificationService, RemoteConfigs remoteConfigs, LobbyEventsService lobbyEventsService, MagicLabService magicLabService, AssetManager assetManager) { }

	// RVA: 0x2DA4A94 Offset: 0x2DA4A94 VA: 0x2DA4A94 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DA4B04 Offset: 0x2DA4B04 VA: 0x2DA4B04 Slot: 5
	public void Dispose() { }

	// RVA: 0x2DA4BE8 Offset: 0x2DA4BE8 VA: 0x2DA4BE8 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x2DA4D38 Offset: 0x2DA4D38 VA: 0x2DA4D38 Slot: 7
	public void InitializeData() { }

	// RVA: 0x2DA4F30 Offset: 0x2DA4F30 VA: 0x2DA4F30
	public bool ShouldForceShowPopup() { }

	// RVA: 0x2DA5158 Offset: 0x2DA5158 VA: 0x2DA5158
	private bool CanAutoOpen() { }

	// RVA: 0x2DA51F0 Offset: 0x2DA51F0 VA: 0x2DA51F0
	private void ScheduleNotification() { }

	// RVA: 0x2DA53C8 Offset: 0x2DA53C8 VA: 0x2DA53C8
	public int GetRemainingSeconds() { }

	// RVA: 0x2DA54D8 Offset: 0x2DA54D8 VA: 0x2DA54D8
	public bool IsLobbyIconVisible() { }

	// RVA: 0x2DA54F4 Offset: 0x2DA54F4 VA: 0x2DA54F4
	public DateTime GetEndDate() { }

	// RVA: 0x2DA55EC Offset: 0x2DA55EC VA: 0x2DA55EC
	public void SetSpinResult(int stageId, int spinResult, WheelOfFortuneSpinStrategy spinStrategy) { }

	// RVA: 0x2DA5604 Offset: 0x2DA5604 VA: 0x2DA5604
	public bool ShouldShowSpinAlert() { }

	// RVA: 0x2DA5664 Offset: 0x2DA5664 VA: 0x2DA5664
	public void ClaimEvent() { }

	// RVA: 0x2DA56D8 Offset: 0x2DA56D8 VA: 0x2DA56D8
	private void OnStateChanged() { }

	// RVA: 0x2DA4E58 Offset: 0x2DA4E58 VA: 0x2DA4E58
	private void TryClaimEventAutomatically() { }

	// RVA: 0x2DA56FC Offset: 0x2DA56FC VA: 0x2DA56FC
	private bool ShouldClaimEventAutomatically() { }

	// RVA: 0x2DA5794 Offset: 0x2DA5794 VA: 0x2DA5794
	public bool ShouldShowAreYouSurePopUp() { }

	// RVA: 0x2DA50A8 Offset: 0x2DA50A8 VA: 0x2DA50A8
	private bool CanSpinWithPendingCurrency() { }

	// RVA: 0x2DA57BC Offset: 0x2DA57BC VA: 0x2DA57BC
	private int GetRealWheelOfFortuneCurrencyCount() { }

	// RVA: 0x2DA59D4 Offset: 0x2DA59D4 VA: 0x2DA59D4
	private Dictionary<WheelOfFortuneRewardSegment, float> GetRewardProbabilitiesFromConfig(int stageId) { }

	// RVA: 0x2DA5B98 Offset: 0x2DA5B98 VA: 0x2DA5B98
	private WheelOfFortuneSpinStrategy DecideSpinStrategy() { }

	// RVA: 0x2DA5D74 Offset: 0x2DA5D74 VA: 0x2DA5D74
	private WheelOfFortuneSpinStrategy GetRandomSpinStrategy() { }

	// RVA: 0x2DA5BF0 Offset: 0x2DA5BF0 VA: 0x2DA5BF0
	private bool IsThereConsecutiveStrategyOccured(out WheelOfFortuneSpinStrategy consecutiveStrategy) { }

	// RVA: 0x2DA5D9C Offset: 0x2DA5D9C VA: 0x2DA5D9C
	private bool TryGetSpinResultAsSegment(int stageId, out WheelOfFortuneRewardSegment rewardSegment) { }

	// RVA: 0x2DA5DE4 Offset: 0x2DA5DE4 VA: 0x2DA5DE4
	private bool TryGetStageRewardProbabilities(int stageId, out Dictionary<WheelOfFortuneRewardSegment, float> probabilities) { }

	// RVA: 0x2DA5E3C Offset: 0x2DA5E3C VA: 0x2DA5E3C
	private WheelOfFortuneRewardSegment SelectRewardTypeByProbability(Dictionary<WheelOfFortuneRewardSegment, float> probabilities) { }

	// RVA: 0x2DA6030 Offset: 0x2DA6030 VA: 0x2DA6030
	private void SetSpinAlertSeenOnLobbyButton() { }

	// RVA: 0x2DA5758 Offset: 0x2DA5758 VA: 0x2DA5758
	public bool IsPreviouslyClosedByCollectionReward() { }

	// RVA: 0x2DA563C Offset: 0x2DA563C VA: 0x2DA563C
	private bool CanSpinWithCurrentCurrency() { }

	// RVA: 0x2DA6128 Offset: 0x2DA6128 VA: 0x2DA6128
	public string GetSegment() { }

	// RVA: 0x2DA59A0 Offset: 0x2DA59A0 VA: 0x2DA59A0
	public int GetWheelOfFortuneCurrencyCount() { }

	// RVA: 0x2DA5988 Offset: 0x2DA5988 VA: 0x2DA5988
	public int GetStageSpinCost(int stageIndex) { }

	// RVA: 0x2DA615C Offset: 0x2DA615C VA: 0x2DA615C
	public void GiveStageReward(int stageIndex, int spinResultIndex) { }

	// RVA: 0x2DA5574 Offset: 0x2DA5574 VA: 0x2DA5574
	private DateTime ConvertToUtc(long time) { }

	[AsyncStateMachine(typeof(WheelOfFortuneService.<FetchCurrentEvent>d__52))]
	// RVA: 0x2DA6458 Offset: 0x2DA6458 VA: 0x2DA6458
	private void FetchCurrentEvent() { }

	// RVA: 0x2DA6510 Offset: 0x2DA6510 VA: 0x2DA6510
	private void TryStartNewEvent(WheelOfFortuneInfoResponse wheelOfFortuneInfoResponse) { }

	// RVA: 0x2DA6650 Offset: 0x2DA6650 VA: 0x2DA6650
	private void TryReachTaskStepsOnEventStart() { }

	// RVA: 0x2DA4C00 Offset: 0x2DA4C00 VA: 0x2DA4C00
	private void TryFetchCurrentEvent() { }

	// RVA: 0x2DA698C Offset: 0x2DA698C VA: 0x2DA698C
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x2DA69BC Offset: 0x2DA69BC VA: 0x2DA69BC
	public bool ShouldShowAlertView() { }

	// RVA: 0x2DA69F4 Offset: 0x2DA69F4 VA: 0x2DA69F4
	private bool HasUnseenClaimableTask() { }

	// RVA: 0x2DA6B9C Offset: 0x2DA6B9C VA: 0x2DA6B9C
	public int GetStageIndexToShowOnLobbyButton() { }

	// RVA: 0x2DA6E00 Offset: 0x2DA6E00 VA: 0x2DA6E00
	public int GetRemainingProgressInCurrentStage() { }

	// RVA: 0x2DA4ED4 Offset: 0x2DA4ED4 VA: 0x2DA4ED4
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x2DA4E7C Offset: 0x2DA4E7C VA: 0x2DA4E7C
	public void TrySetSpinAlertSeenOnLobbyButton() { }

	// RVA: 0x2DA6E74 Offset: 0x2DA6E74 VA: 0x2DA6E74
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x2DA6ED4 Offset: 0x2DA6ED4 VA: 0x2DA6ED4
	private int GetLastSeenProgress() { }

	// RVA: 0x2DA6F08 Offset: 0x2DA6F08 VA: 0x2DA6F08
	private int GetFirstShownStageIndex() { }

	// RVA: 0x2DA6C40 Offset: 0x2DA6C40 VA: 0x2DA6C40
	private int GetFirstClaimableStageIndex() { }

	// RVA: 0x2DA6FCC Offset: 0x2DA6FCC VA: 0x2DA6FCC
	private int GetCurrentProgress() { }

	// RVA: 0x2DA6EA4 Offset: 0x2DA6EA4 VA: 0x2DA6EA4
	private bool IsProgressed() { }

	// RVA: 0x2DA7000 Offset: 0x2DA7000 VA: 0x2DA7000
	private int GetMaxProgress() { }

	// RVA: 0x2DA5930 Offset: 0x2DA5930 VA: 0x2DA5930
	public int GetCurrentStageIndex() { }

	// RVA: 0x2DA53AC Offset: 0x2DA53AC VA: 0x2DA53AC
	public int GetCurrentStageProgress() { }

	// RVA: 0x2DA7100 Offset: 0x2DA7100 VA: 0x2DA7100
	private int GetLastSeenStageProgress() { }

	// RVA: 0x2DA711C Offset: 0x2DA711C VA: 0x2DA711C
	public int GetLastSeenLobbyButtonProgress() { }

	// RVA: 0x2DA7018 Offset: 0x2DA7018 VA: 0x2DA7018
	private int CalculateStageProgress(int totalProgress) { }

	// RVA: 0x2DA6638 Offset: 0x2DA6638 VA: 0x2DA6638
	private void AddWheelOfFortuneCurrency(int amount) { }

	// RVA: 0x2DA7150 Offset: 0x2DA7150 VA: 0x2DA7150
	public void SpendWheelOfFortuneCurrency(int amount) { }

	// RVA: 0x2DA5378 Offset: 0x2DA5378 VA: 0x2DA5378
	private int GetCurrentStageMaxProgress() { }

	// RVA: 0x2DA716C Offset: 0x2DA716C VA: 0x2DA716C
	public int GetLastSeenStageMaxProgress() { }

	// RVA: 0x2DA5970 Offset: 0x2DA5970 VA: 0x2DA5970
	private List<WheelOfFortuneStageModel> GetStages() { }

	// RVA: 0x2DA6348 Offset: 0x2DA6348 VA: 0x2DA6348
	private WheelOfFortuneStageModel GetStageModel(int stageIndex) { }

	// RVA: 0x2DA6E38 Offset: 0x2DA6E38 VA: 0x2DA6E38
	public bool IsStageChanged() { }

	// RVA: 0x2DA6DE8 Offset: 0x2DA6DE8 VA: 0x2DA6DE8
	private int GetLastSeenStageIndex() { }

	// RVA: 0x2DA71A0 Offset: 0x2DA71A0 VA: 0x2DA71A0
	public int GetSpinResultIndex(int stageIndex) { }

	// RVA: 0x2DA74C4 Offset: 0x2DA74C4 VA: 0x2DA74C4
	public WheelOfFortuneSpinStrategy GetSpinStrategy(int stageIndex) { }

	// RVA: 0x2DA5948 Offset: 0x2DA5948 VA: 0x2DA5948
	public bool IsStageClaimed(int stageIndex) { }

	// RVA: 0x2DA750C Offset: 0x2DA750C VA: 0x2DA750C
	private bool IsLastStage(int stageIndex) { }

	// RVA: 0x2DA7524 Offset: 0x2DA7524 VA: 0x2DA7524
	public void SetClosedByCollectionReward() { }

	// RVA: 0x2DA755C Offset: 0x2DA755C VA: 0x2DA755C
	public void ResetClosedByCollectionRewardValue() { }

	// RVA: 0x2DA7590 Offset: 0x2DA7590 VA: 0x2DA7590
	private bool IsStageLocked(WheelOfFortuneStageModel stageModel) { }

	// RVA: 0x2DA6068 Offset: 0x2DA6068 VA: 0x2DA6068
	private bool IsStageSpinnable(int stageIndex) { }

	// RVA: 0x2DA6FA4 Offset: 0x2DA6FA4 VA: 0x2DA6FA4
	private bool IsStageClaimable(int stageIndex) { }

	// RVA: 0x2DA5B74 Offset: 0x2DA5B74 VA: 0x2DA5B74
	private WheelOfFortuneConfigModel GetConfig() { }

	// RVA: 0x2DA75C0 Offset: 0x2DA75C0 VA: 0x2DA75C0
	private List<WheelOfFortuneRewardModel> GetWheelOfFortuneRewardModels(WheelOfFortuneStageModel stageModel) { }

	// RVA: 0x2DA75FC Offset: 0x2DA75FC VA: 0x2DA75FC
	private List<RewardModel> GetStageRewards(WheelOfFortuneStageModel stageModel) { }

	// RVA: 0x2DA63EC Offset: 0x2DA63EC VA: 0x2DA63EC
	private RewardModel GetStageRewardAt(WheelOfFortuneStageModel stageModel, int index) { }

	// RVA: 0x2DA792C Offset: 0x2DA792C VA: 0x2DA792C
	public void TryIncreaseProgress() { }

	// RVA: 0x2DA7A74 Offset: 0x2DA7A74 VA: 0x2DA7A74
	private void ClaimEventIfAllStagesAreClaimed() { }

	// RVA: 0x2DA7A98 Offset: 0x2DA7A98 VA: 0x2DA7A98
	public bool AllStagesCompleted() { }

	// RVA: 0x2DA7B04 Offset: 0x2DA7B04 VA: 0x2DA7B04
	private bool IsEventActive() { }

	// RVA: 0x2DA7A70 Offset: 0x2DA7A70 VA: 0x2DA7A70
	private bool CanIncreaseProgress() { }

	// RVA: 0x2DA4FC4 Offset: 0x2DA4FC4 VA: 0x2DA4FC4
	private bool IsEligible() { }

	// RVA: 0x2DA4EA0 Offset: 0x2DA4EA0 VA: 0x2DA4EA0
	public void TrySetLastSeenProgress() { }

	// RVA: 0x2DA7B38 Offset: 0x2DA7B38 VA: 0x2DA7B38
	private void ResetSpinAlertSeenValue() { }

	// RVA: 0x2DA7B78 Offset: 0x2DA7B78 VA: 0x2DA7B78
	public void AutoClaimClaimableTasks() { }

	// RVA: 0x2DA5194 Offset: 0x2DA5194 VA: 0x2DA5194
	public bool ShouldClaimEvent() { }

	// RVA: 0x2DA7DDC Offset: 0x2DA7DDC VA: 0x2DA7DDC
	private bool IsTimeUp() { }

	// RVA: 0x2DA7DF8 Offset: 0x2DA7DF8 VA: 0x2DA7DF8
	private bool IsClaimed() { }

	// RVA: 0x2DA7E34 Offset: 0x2DA7E34 VA: 0x2DA7E34
	public WheelOfFortuneProbabilityViewModel GetProbabilityViewModel() { }

	// RVA: 0x2DA7F9C Offset: 0x2DA7F9C VA: 0x2DA7F9C
	private Dictionary<WheelOfFortuneRewardSegment, int> GetRewardSegmentCounts(WheelOfFortuneStageModel stageModel) { }

	// RVA: 0x2DA81F0 Offset: 0x2DA81F0 VA: 0x2DA81F0
	public WheelOfFortuneViewModel GetViewModel() { }

	// RVA: 0x2DA8B94 Offset: 0x2DA8B94 VA: 0x2DA8B94
	public void TryIncreaseTaskProgress(WheelOfFortuneTaskType taskType, int amount = 1) { }

	// RVA: 0x2DA8C10 Offset: 0x2DA8C10 VA: 0x2DA8C10
	public void TryReachTaskProgress(WheelOfFortuneTaskType taskType, int target) { }

	// RVA: 0x2DA8C58 Offset: 0x2DA8C58 VA: 0x2DA8C58
	public void TryResetTaskProgress(WheelOfFortuneTaskType taskType) { }

	// RVA: 0x2DA6944 Offset: 0x2DA6944 VA: 0x2DA6944
	private void TryReachTaskProgressOnEventStart(WheelOfFortuneTaskType taskType, int target) { }

	// RVA: 0x2DA8D00 Offset: 0x2DA8D00 VA: 0x2DA8D00
	public bool TryClaimTask(int taskId, out WheelOfFortuneTaskViewModel nextTask) { }

	// RVA: 0x2DA7CE4 Offset: 0x2DA7CE4 VA: 0x2DA7CE4
	private void TryClaimTask(WheelOfFortuneTaskModel task) { }

	// RVA: 0x2DA9014 Offset: 0x2DA9014 VA: 0x2DA9014
	public void MarkTaskAsSeen(int taskId) { }

	// RVA: 0x2DA8AF0 Offset: 0x2DA8AF0 VA: 0x2DA8AF0
	private WheelOfFortuneTaskViewModel GetTaskViewModel(WheelOfFortuneTaskModel task) { }

	// RVA: 0x2DA8BDC Offset: 0x2DA8BDC VA: 0x2DA8BDC
	private bool CanIncreaseTaskProgress() { }

	// RVA: 0x2DA8C98 Offset: 0x2DA8C98 VA: 0x2DA8C98
	private bool CanResetTaskProgress() { }

	// RVA: 0x2DA8CCC Offset: 0x2DA8CCC VA: 0x2DA8CCC
	private bool CanIncreaseTaskProgressOnEventStart() { }

	// RVA: 0x2DA9050 Offset: 0x2DA9050 VA: 0x2DA9050 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x2DA906C Offset: 0x2DA906C VA: 0x2DA906C Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x2DA9088 Offset: 0x2DA9088 VA: 0x2DA9088
	public bool CanGetScoreForMagicLab() { }

	// RVA: 0x2DA908C Offset: 0x2DA908C VA: 0x2DA908C
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(WheelOfFortuneService.<CheckAndResolveAssetDependency>d__126))]
	// RVA: 0x2DA4C4C Offset: 0x2DA4C4C VA: 0x2DA4C4C
	private Task CheckAndResolveAssetDependency() { }

	// RVA: 0x2DA90EC Offset: 0x2DA90EC VA: 0x2DA90EC
	public string GetReadableEventId() { }

	// RVA: 0x2DA91E8 Offset: 0x2DA91E8 VA: 0x2DA91E8
	public List<int> GetActiveTaskTypes() { }

	// RVA: 0x2DA93F4 Offset: 0x2DA93F4 VA: 0x2DA93F4
	public int GetTotalTasksCompleted() { }

	// RVA: 0x2DA9564 Offset: 0x2DA9564 VA: 0x2DA9564
	public int GetTotalSpinnedWheel() { }

	// RVA: 0x2DA9700 Offset: 0x2DA9700 VA: 0x2DA9700
	public RewardModel GetStageReward(int stageIndex, int spinResultIndex) { }

	// RVA: 0x2DA8844 Offset: 0x2DA8844 VA: 0x2DA8844
	private bool IsTaskAvailable(WheelOfFortuneTaskType taskType) { }

	// RVA: 0x2DA973C Offset: 0x2DA973C VA: 0x2DA973C
	public void OnLevelWin(LevelDifficultyType difficulty, bool isFirstTry) { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune