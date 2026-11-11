public class MiniGameService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3496
{
	// Fields
	private MiniGameDataService _dataService; // 0x10
	private MiniGameStateService _stateService; // 0x18
	private MiniGameRemoteService _remoteService; // 0x20
	private RewardService _rewardService; // 0x28
	private CollectionService _collectionService; // 0x30
	private IPlayerService _playerService; // 0x38
	private RemoteConfigs _remoteConfigs; // 0x40
	private CustomUpdater _customUpdater; // 0x48
	private MiniGameLevelsConfig _levelsConfig; // 0x50
	private MiniGameViewModel _viewModel; // 0x58
	private readonly MagicLabService _magicLabService; // 0x60
	private readonly WheelOfFortuneService _wheelOfFortuneService; // 0x68
	private readonly AssetManager _assetManager; // 0x70
	private string _minigameBundleId; // 0x78

	// Methods

	// RVA: 0x20B4FF8 Offset: 0x20B4FF8 VA: 0x20B4FF8
	public void .ctor(MiniGameDataService dataService, MiniGameRemoteService remoteService, MiniGameStateService stateService, RemoteConfigs remoteConfigs, CustomUpdater customUpdater, RewardService rewardService, CollectionService collectionService, IPlayerService playerService, MagicLabService magicLabService, AssetManager assetManager, WheelOfFortuneService wheelOfFortuneService) { }

	// RVA: 0x20B5114 Offset: 0x20B5114 VA: 0x20B5114 Slot: 4
	public void Initialize() { }

	// RVA: 0x20B5184 Offset: 0x20B5184 VA: 0x20B5184 Slot: 7
	public void InitializeData() { }

	// RVA: 0x20B538C Offset: 0x20B538C VA: 0x20B538C Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x20B53A4 Offset: 0x20B53A4 VA: 0x20B53A4 Slot: 5
	public void Dispose() { }

	// RVA: 0x20B52A4 Offset: 0x20B52A4 VA: 0x20B52A4
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(MiniGameService.<FetchCurrentEvent>d__20))]
	// RVA: 0x20B5494 Offset: 0x20B5494 VA: 0x20B5494
	private Task FetchCurrentEvent() { }

	// RVA: 0x20B5580 Offset: 0x20B5580 VA: 0x20B5580
	private void TryStartNewEvent(MiniGameEventInfoResponse response) { }

	// RVA: 0x20B5280 Offset: 0x20B5280 VA: 0x20B5280
	private void TryClaimEventAutomatically() { }

	// RVA: 0x20B5830 Offset: 0x20B5830 VA: 0x20B5830
	private void OnEventStateChanged() { }

	// RVA: 0x20B5748 Offset: 0x20B5748 VA: 0x20B5748
	private MiniGameConfigModel GetConfig() { }

	// RVA: 0x20B5784 Offset: 0x20B5784 VA: 0x20B5784
	private MiniGameOfferConfigModel GetOfferConfig() { }

	// RVA: 0x20B5854 Offset: 0x20B5854 VA: 0x20B5854
	private MiniGameIAPConfigModel GetSegmentedOfferPackage() { }

	// RVA: 0x20B5908 Offset: 0x20B5908 VA: 0x20B5908
	public Dictionary<string, IAPConfigModel> GetUniqueIAPConfigModels() { }

	// RVA: 0x20B5B78 Offset: 0x20B5B78 VA: 0x20B5B78
	public MiniGameCacheModel GetCacheEventInfo() { }

	// RVA: 0x20B5B9C Offset: 0x20B5B9C VA: 0x20B5B9C
	public long GetRemainingSeconds() { }

	// RVA: 0x20B5C9C Offset: 0x20B5C9C VA: 0x20B5C9C
	public DateTime GetEndDate() { }

	// RVA: 0x20B5D84 Offset: 0x20B5D84 VA: 0x20B5D84
	public long GetStartTimeAsUnix() { }

	// RVA: 0x20B5D0C Offset: 0x20B5D0C VA: 0x20B5D0C
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x20B58F0 Offset: 0x20B58F0 VA: 0x20B58F0
	public string GetSegment() { }

	// RVA: 0x20B5D9C Offset: 0x20B5D9C VA: 0x20B5D9C
	public string GetEventId() { }

	// RVA: 0x20B5DFC Offset: 0x20B5DFC VA: 0x20B5DFC
	public bool IsEventActive() { }

	// RVA: 0x20B5E38 Offset: 0x20B5E38 VA: 0x20B5E38
	public bool IsEligible() { }

	// RVA: 0x20B5F0C Offset: 0x20B5F0C VA: 0x20B5F0C
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x20B5F30 Offset: 0x20B5F30 VA: 0x20B5F30
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x20B5F60 Offset: 0x20B5F60 VA: 0x20B5F60
	public void ResetEventIntroducedEverInLifeTime() { }

	// RVA: 0x20B57D8 Offset: 0x20B57D8 VA: 0x20B57D8
	public void ClaimEvent() { }

	// RVA: 0x20B5F8C Offset: 0x20B5F8C VA: 0x20B5F8C
	public bool IsLobbyIconVisible() { }

	// RVA: 0x20B5FD0 Offset: 0x20B5FD0 VA: 0x20B5FD0
	public bool IsLobbyIconAlertVisible() { }

	// RVA: 0x20B6194 Offset: 0x20B6194 VA: 0x20B6194
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x20B61F8 Offset: 0x20B61F8 VA: 0x20B61F8
	public bool ShouldShowForceOpenPopUp() { }

	// RVA: 0x20B62C8 Offset: 0x20B62C8 VA: 0x20B62C8
	public bool ShouldShowTutorial() { }

	// RVA: 0x20B6298 Offset: 0x20B6298 VA: 0x20B6298
	public bool IsTimeUp() { }

	// RVA: 0x20B631C Offset: 0x20B631C VA: 0x20B631C
	public bool ShouldShowFinishedAreYouSurePopUp() { }

	// RVA: 0x20B57A8 Offset: 0x20B57A8 VA: 0x20B57A8
	private bool ShouldClaimEventAutomatically() { }

	// RVA: 0x20B634C Offset: 0x20B634C VA: 0x20B634C
	public bool ShouldClaimEvent() { }

	// RVA: 0x20B639C Offset: 0x20B639C VA: 0x20B639C
	private List<RewardModel> GetStageRewards() { }

	// RVA: 0x20B63EC Offset: 0x20B63EC VA: 0x20B63EC
	private RewardModel GetStageReward(int stageIndex) { }

	// RVA: 0x20B6084 Offset: 0x20B6084 VA: 0x20B6084
	public int GetTridentCount() { }

	// RVA: 0x20B576C Offset: 0x20B576C VA: 0x20B576C
	public void AddTrident(int amount) { }

	// RVA: 0x20B6474 Offset: 0x20B6474 VA: 0x20B6474
	public void SpendTrident() { }

	// RVA: 0x20B64C4 Offset: 0x20B64C4 VA: 0x20B64C4
	public void TryIncreaseTridentCount(LevelDifficultyType difficulty, bool isFirstTry, int additionalMultiplier = 1) { }

	// RVA: 0x20B6540 Offset: 0x20B6540 VA: 0x20B6540
	private int GetTridentIncreaseCountByLevelDifficulty(LevelDifficultyType difficulty, bool isFirstTry, int additionalMultiplier) { }

	// RVA: 0x20B61C4 Offset: 0x20B61C4 VA: 0x20B61C4
	public int GetLastTridentIncreaseCount() { }

	// RVA: 0x20B6618 Offset: 0x20B6618 VA: 0x20B6618
	private void SetLastTridentIncreaseCount(int count) { }

	// RVA: 0x20B664C Offset: 0x20B664C VA: 0x20B664C
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x20B6654 Offset: 0x20B6654 VA: 0x20B6654
	public int GetCurrentStage() { }

	// RVA: 0x20B6688 Offset: 0x20B6688 VA: 0x20B6688
	public void SetCurrentStage(int stage) { }

	// RVA: 0x20B66EC Offset: 0x20B66EC VA: 0x20B66EC
	public void CompleteCurrentStage() { }

	// RVA: 0x20B68EC Offset: 0x20B68EC VA: 0x20B68EC
	private void IncreaseCurrentStage() { }

	// RVA: 0x20B692C Offset: 0x20B692C VA: 0x20B692C
	public int GetTotalStageCount() { }

	// RVA: 0x20B606C Offset: 0x20B606C VA: 0x20B606C
	public bool AllStagesCompleted() { }

	// RVA: 0x20B6934 Offset: 0x20B6934 VA: 0x20B6934
	public int GetCurrentStageSeedIndex() { }

	// RVA: 0x20B6968 Offset: 0x20B6968 VA: 0x20B6968
	public void SetCurrentStageSeedIndex(int seedIndex) { }

	// RVA: 0x20B617C Offset: 0x20B617C VA: 0x20B617C
	public List<int> GetCurrentStageHitCells() { }

	// RVA: 0x20B699C Offset: 0x20B699C VA: 0x20B699C
	public void AddCurrentStageHitCell(int cellId) { }

	// RVA: 0x20B69B4 Offset: 0x20B69B4 VA: 0x20B69B4
	public int GetCurrentStageBoosterHitPercentage() { }

	// RVA: 0x20B69E8 Offset: 0x20B69E8 VA: 0x20B69E8
	public void IncreaseCurrentStageBoosterHitPercentage() { }

	// RVA: 0x20B6A44 Offset: 0x20B6A44 VA: 0x20B6A44
	public void MarkAsCurrentStageDynamicBoosterActivated() { }

	// RVA: 0x20B6A7C Offset: 0x20B6A7C VA: 0x20B6A7C
	public bool IsCurrentStageDynamicBoosterActivated() { }

	// RVA: 0x20B6800 Offset: 0x20B6800 VA: 0x20B6800
	private void ClaimStage(int stageIndex) { }

	// RVA: 0x20B6AB8 Offset: 0x20B6AB8 VA: 0x20B6AB8
	private bool IsStageRewardClaimed(int stageIndex) { }

	// RVA: 0x20B6D34 Offset: 0x20B6D34 VA: 0x20B6D34
	private bool AllStageRewardsClaimed() { }

	// RVA: 0x20B6D8C Offset: 0x20B6D8C VA: 0x20B6D8C
	private List<int> GetClaimedStages() { }

	// RVA: 0x20B6B18 Offset: 0x20B6B18 VA: 0x20B6B18
	public void AddClaimedStage(int stageIndex) { }

	// RVA: 0x20B6DA4 Offset: 0x20B6DA4 VA: 0x20B6DA4
	public void ResetClaimedStages() { }

	// RVA: 0x20B6B30 Offset: 0x20B6B30 VA: 0x20B6B30
	private void GiveStageRewards(int stageIndex) { }

	// RVA: 0x20B6DBC Offset: 0x20B6DBC VA: 0x20B6DBC
	public bool HasBulkRewardInQueue() { }

	[AsyncStateMachine(typeof(MiniGameService.<GiveBulkRewardInQueue>d__82))]
	// RVA: 0x20B6DDC Offset: 0x20B6DDC VA: 0x20B6DDC
	public Task GiveBulkRewardInQueue() { }

	// RVA: 0x20B6EC8 Offset: 0x20B6EC8 VA: 0x20B6EC8
	public bool HasOfferBulkRewardInQueue() { }

	[AsyncStateMachine(typeof(MiniGameService.<GiveOfferBulkRewardInQueue>d__84))]
	// RVA: 0x20B6EE8 Offset: 0x20B6EE8 VA: 0x20B6EE8
	public Task GiveOfferBulkRewardInQueue() { }

	// RVA: 0x20B60B8 Offset: 0x20B60B8 VA: 0x20B60B8
	private int GetCurrentStageTotalCellCount() { }

	// RVA: 0x20B6FD4 Offset: 0x20B6FD4 VA: 0x20B6FD4
	public MiniGameViewModel GetViewModel() { }

	// RVA: 0x20B7390 Offset: 0x20B7390 VA: 0x20B7390 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x20B7394 Offset: 0x20B7394 VA: 0x20B7394 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x20B73F8 Offset: 0x20B73F8 VA: 0x20B73F8
	public bool IsOfferEnabled() { }

	// RVA: 0x20B74BC Offset: 0x20B74BC VA: 0x20B74BC
	public MiniGameOfferViewModel GetOfferViewModel() { }

	// RVA: 0x20B757C Offset: 0x20B757C VA: 0x20B757C
	public List<RewardModel> GetOfferRewards() { }

	// RVA: 0x20B7604 Offset: 0x20B7604 VA: 0x20B7604
	public List<RewardModel> TridentOfferPurchased() { }

	// RVA: 0x20B7798 Offset: 0x20B7798 VA: 0x20B7798
	private List<RewardModel> GetOfferRewardsWithoutTrident() { }

	// RVA: 0x20B76EC Offset: 0x20B76EC VA: 0x20B76EC
	private int GetTridentCountOffer() { }

	// RVA: 0x20B78B0 Offset: 0x20B78B0 VA: 0x20B78B0
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(MiniGameService.<CheckAndResolveAssetDependency>d__96))]
	// RVA: 0x20B52D4 Offset: 0x20B52D4 VA: 0x20B52D4
	private void CheckAndResolveAssetDependency() { }

	// RVA: 0x20B7900 Offset: 0x20B7900 VA: 0x20B7900
	public bool ShouldShowOfferOnLastHit() { }

	// RVA: 0x20B791C Offset: 0x20B791C VA: 0x20B791C
	public bool IsOfferButtonVisible() { }

	// RVA: 0x20B796C Offset: 0x20B796C VA: 0x20B796C
	public void IntroduceOffer() { }

	// RVA: 0x20B79A4 Offset: 0x20B79A4 VA: 0x20B79A4
	public bool ShouldShowOfferAlert() { }

	// RVA: 0x20B79E0 Offset: 0x20B79E0 VA: 0x20B79E0
	public void OfferPopupOpened() { }

	// RVA: 0x20B7A18 Offset: 0x20B7A18 VA: 0x20B7A18
	public bool IsAvailableForWheelOfFortune() { }

	// RVA: 0x20B7A54 Offset: 0x20B7A54 VA: 0x20B7A54
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x20B7A58 Offset: 0x20B7A58 VA: 0x20B7A58
	public int GetTridentCountByLevelDifficulty(LevelDifficultyType difficulty, bool isFirstTry, int selectedMultiplier, bool getLastDelta = False) { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts