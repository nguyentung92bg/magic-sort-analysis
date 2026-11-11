public class MergeMiniGameService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3585
{
	// Fields
	private MergeMiniGameDataService _dataService; // 0x10
	private MergeMiniGameStateService _stateService; // 0x18
	private MergeMiniGameRemoteService _remoteService; // 0x20
	private RewardService _rewardService; // 0x28
	private CollectionService _collectionService; // 0x30
	private IPlayerService _playerService; // 0x38
	private CustomUpdater _customUpdater; // 0x40
	private InventoryService _inventoryService; // 0x48
	private WheelOfFortuneService _wheelOfFortuneService; // 0x50
	private MergeMiniGameViewModel _viewModel; // 0x58
	private MergeMiniGameScatterQueueViewModel _scatterQueueViewModel; // 0x60
	private readonly AssetManager _assetManager; // 0x68
	private string _mergeMinigameBundleId; // 0x70
	private bool _forceOpenedInSession; // 0x78
	private const int NoPendingCell = -1;
	private bool _shouldShowPopupAfterJoin; // 0x79

	// Methods

	// RVA: 0x219675C Offset: 0x219675C VA: 0x219675C
	public void .ctor(MergeMiniGameDataService dataService, MergeMiniGameRemoteService remoteService, MergeMiniGameStateService stateService, CustomUpdater customUpdater, RewardService rewardService, CollectionService collectionService, IPlayerService playerService, AssetManager assetManager, InventoryService inventoryService, WheelOfFortuneService wheelOfFortuneService) { }

	// RVA: 0x2196848 Offset: 0x2196848 VA: 0x2196848 Slot: 4
	public void Initialize() { }

	// RVA: 0x21968C0 Offset: 0x21968C0 VA: 0x21968C0 Slot: 7
	public void InitializeData() { }

	// RVA: 0x2196A98 Offset: 0x2196A98 VA: 0x2196A98 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x2196AB0 Offset: 0x2196AB0 VA: 0x2196AB0 Slot: 5
	public void Dispose() { }

	// RVA: 0x21969AC Offset: 0x21969AC VA: 0x21969AC
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(MergeMiniGameService.<FetchCurrentEvent>d__22))]
	// RVA: 0x2196B9C Offset: 0x2196B9C VA: 0x2196B9C
	private Task FetchCurrentEvent() { }

	// RVA: 0x2196C8C Offset: 0x2196C8C VA: 0x2196C8C
	private void TryStartNewEvent(MergeMiniGameEventInfoResponse response, int eventType) { }

	// RVA: 0x21969A8 Offset: 0x21969A8 VA: 0x21969A8
	private void TryClaimEventAutomatically() { }

	// RVA: 0x2196DA0 Offset: 0x2196DA0 VA: 0x2196DA0
	private void OnEventStateChanged() { }

	// RVA: 0x2196DA4 Offset: 0x2196DA4 VA: 0x2196DA4
	public MergeMiniGameCacheModel GetCacheEventInfo() { }

	// RVA: 0x2196DC8 Offset: 0x2196DC8 VA: 0x2196DC8
	public long GetRemainingSeconds() { }

	// RVA: 0x2196EC8 Offset: 0x2196EC8 VA: 0x2196EC8
	public DateTime GetEndDate() { }

	// RVA: 0x2196FB0 Offset: 0x2196FB0 VA: 0x2196FB0
	public long GetStartTimeAsUnix() { }

	// RVA: 0x2196F38 Offset: 0x2196F38 VA: 0x2196F38
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x2196FC8 Offset: 0x2196FC8 VA: 0x2196FC8
	public string GetEventId() { }

	// RVA: 0x2197028 Offset: 0x2197028 VA: 0x2197028
	public bool IsEventActive() { }

	// RVA: 0x2197068 Offset: 0x2197068 VA: 0x2197068
	public bool IsEligible() { }

	// RVA: 0x2197140 Offset: 0x2197140 VA: 0x2197140
	public bool IsEventIntroducedEverInLifeTime() { }

	// RVA: 0x2197164 Offset: 0x2197164 VA: 0x2197164
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x2196D48 Offset: 0x2196D48 VA: 0x2196D48
	public void ClaimEvent() { }

	// RVA: 0x2197194 Offset: 0x2197194 VA: 0x2197194
	public bool IsLobbyIconVisible() { }

	// RVA: 0x21971B0 Offset: 0x21971B0 VA: 0x21971B0
	public bool IsLobbyIconAlertVisible() { }

	// RVA: 0x21971E8 Offset: 0x21971E8 VA: 0x21971E8
	private bool HasEnoughEnergyToForce() { }

	// RVA: 0x21972B8 Offset: 0x21972B8 VA: 0x21972B8
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x219731C Offset: 0x219731C VA: 0x219731C
	public bool ShouldShowForceOpenPopUp(out MergeMiniGameForceOpenReason reason) { }

	// RVA: 0x2197488 Offset: 0x2197488 VA: 0x2197488
	private bool IsTimeUp() { }

	// RVA: 0x2196D40 Offset: 0x2196D40 VA: 0x2196D40
	private bool ShouldClaimEventAutomatically() { }

	// RVA: 0x21974A4 Offset: 0x21974A4 VA: 0x21974A4
	public bool ShouldClaimEvent() { }

	// RVA: 0x2197298 Offset: 0x2197298 VA: 0x2197298
	public int GetEnergyCount() { }

	// RVA: 0x2197534 Offset: 0x2197534 VA: 0x2197534
	public void TryIncreaseEnergyCount(LevelDifficultyType difficulty, bool isFirstTry, int additionalMultiplier = 1) { }

	// RVA: 0x21975B8 Offset: 0x21975B8 VA: 0x21975B8
	private int GetEnergyIncreaseCountByLevelDifficulty(LevelDifficultyType difficulty, bool isFirstTry, int additionalMultiplier) { }

	// RVA: 0x21972E8 Offset: 0x21972E8 VA: 0x21972E8
	public int GetLastEnergyIncreaseCount() { }

	// RVA: 0x219769C Offset: 0x219769C VA: 0x219769C
	private void SetLastEnergyIncreaseCount(int count) { }

	// RVA: 0x21976D0 Offset: 0x21976D0 VA: 0x21976D0
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x21976D8 Offset: 0x21976D8 VA: 0x21976D8
	public int GetTotalStageCount() { }

	// RVA: 0x21976E0 Offset: 0x21976E0 VA: 0x21976E0
	public bool HasGrandPrizeRewardInQueue() { }

	[AsyncStateMachine(typeof(MergeMiniGameService.<GiveGrandPrizeRewardInQueue>d__53))]
	// RVA: 0x2197700 Offset: 0x2197700 VA: 0x2197700
	public Task GiveGrandPrizeRewardInQueue() { }

	// RVA: 0x21977EC Offset: 0x21977EC VA: 0x21977EC
	public bool HasStageCompletedRewardInQueue() { }

	[AsyncStateMachine(typeof(MergeMiniGameService.<GiveStageCompletedRewardInQueue>d__55))]
	// RVA: 0x219780C Offset: 0x219780C VA: 0x219780C
	public Task GiveStageCompletedRewardInQueue() { }

	// RVA: 0x21978F8 Offset: 0x21978F8 VA: 0x21978F8
	public bool HasCollectibleRewardInQueue() { }

	[AsyncStateMachine(typeof(MergeMiniGameService.<GiveCollectibleRewardInQueue>d__57))]
	// RVA: 0x2197918 Offset: 0x2197918 VA: 0x2197918
	public Task GiveCollectibleRewardInQueue() { }

	// RVA: 0x2197A04 Offset: 0x2197A04 VA: 0x2197A04
	public MergeMiniGameViewModel GetViewModel() { }

	// RVA: 0x21982C4 Offset: 0x21982C4 VA: 0x21982C4
	public List<int> GetUnlockedMultipliers() { }

	// RVA: 0x2197B04 Offset: 0x2197B04 VA: 0x2197B04
	private List<MergeMiniGameCellViewModel> GetBoardView() { }

	// RVA: 0x21984B4 Offset: 0x21984B4 VA: 0x21984B4
	private bool IsItemInMaxLevel(MergeMiniGameItemModel itemModel) { }

	// RVA: 0x2198C18 Offset: 0x2198C18 VA: 0x2198C18
	private bool IsItemInMaxLevel(int sedId, int level) { }

	// RVA: 0x2198DA4 Offset: 0x2198DA4 VA: 0x2198DA4 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x2198DC0 Offset: 0x2198DC0 VA: 0x2198DC0 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x2197438 Offset: 0x2197438 VA: 0x2197438
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(MergeMiniGameService.<CheckAndResolveAssetDependency>d__66))]
	// RVA: 0x21969E0 Offset: 0x21969E0 VA: 0x21969E0
	private void CheckAndResolveAssetDependency() { }

	// RVA: 0x2198DDC Offset: 0x2198DDC VA: 0x2198DDC
	public void JoinEvent() { }

	// RVA: 0x2198DF4 Offset: 0x2198DF4 VA: 0x2198DF4
	public bool IsJoined() { }

	// RVA: 0x2198E30 Offset: 0x2198E30 VA: 0x2198E30
	public void SwapItems(int fromIndex, int toIndex) { }

	// RVA: 0x2198E48 Offset: 0x2198E48 VA: 0x2198E48
	public void SnapItem(int fromIndex, int toIndex) { }

	// RVA: 0x2198E60 Offset: 0x2198E60 VA: 0x2198E60
	public ItemSpawnResult GetItem(int setID, int level, bool canProduceScatteredProducts = False) { }

	// RVA: 0x21990B0 Offset: 0x21990B0 VA: 0x21990B0
	public List<List<MergeMiniGameItemModel>> GetScatteredProducts(int setId, int newLevel) { }

	// RVA: 0x2199674 Offset: 0x2199674 VA: 0x2199674
	public void TryIncreaseProgress(int setID, int level) { }

	// RVA: 0x2199B7C Offset: 0x2199B7C VA: 0x2199B7C
	public void PlaceItemInData(int position, MergeMiniGameItemModel itemModel) { }

	// RVA: 0x21987E4 Offset: 0x21987E4 VA: 0x21987E4
	public MergeMiniGameItemViewModel GetItemViewModel(int setId, int level) { }

	// RVA: 0x2198654 Offset: 0x2198654 VA: 0x2198654
	private RewardModel GetItemReward(int setId, int level) { }

	// RVA: 0x2199B94 Offset: 0x2199B94 VA: 0x2199B94
	public List<MergeMiniGameItemViewModel> GetItemViewModels(List<MergeMiniGameItemModel> itemModels) { }

	// RVA: 0x2199DB8 Offset: 0x2199DB8 VA: 0x2199DB8
	public void RemoveItemFromGeneratorList(int position) { }

	// RVA: 0x2198F14 Offset: 0x2198F14 VA: 0x2198F14
	private MergeMiniGameItemModel GetItemModel(int setId, int newLevel) { }

	// RVA: 0x2199DD0 Offset: 0x2199DD0 VA: 0x2199DD0
	public void RemoveItemsAt(int cellIndex) { }

	// RVA: 0x2199DE8 Offset: 0x2199DE8 VA: 0x2199DE8
	public void RemoveItemsAt(int cellIndex, List<int> itemIndexes) { }

	// RVA: 0x2199E94 Offset: 0x2199E94 VA: 0x2199E94
	public void RemoveItemAt(int cellIndex, int itemIndex) { }

	// RVA: 0x2199EAC Offset: 0x2199EAC VA: 0x2199EAC
	public void OnItemCollected(int setId, int levelId, int cellIndex) { }

	// RVA: 0x219A0A8 Offset: 0x219A0A8 VA: 0x219A0A8
	public void RemoveCellData(int cellIndex) { }

	// RVA: 0x2199EDC Offset: 0x2199EDC VA: 0x2199EDC
	public void GiveItemRewardAt(int setId, int levelId) { }

	// RVA: 0x219A0C0 Offset: 0x219A0C0 VA: 0x219A0C0
	private void IncreaseTotalCollectedCoinOrUnlimitedLifeAmount(int setID, RewardModel rewardModel) { }

	// RVA: 0x219A12C Offset: 0x219A12C VA: 0x219A12C
	public bool CanTapGeneratorButton() { }

	// RVA: 0x219A15C Offset: 0x219A15C VA: 0x219A15C
	public int GetMultiplier() { }

	// RVA: 0x21981D8 Offset: 0x21981D8 VA: 0x21981D8
	private int GetMultiplierForUI() { }

	// RVA: 0x219A190 Offset: 0x219A190 VA: 0x219A190
	public void SetMultiplier(int multiplier) { }

	// RVA: 0x219A1C4 Offset: 0x219A1C4 VA: 0x219A1C4
	public void OnItemCreatedSR(int setId, int levelId) { }

	// RVA: 0x219A4B8 Offset: 0x219A4B8 VA: 0x219A4B8
	public MergeStagesViewModel GetStageViewModel() { }

	// RVA: 0x21999BC Offset: 0x21999BC VA: 0x21999BC
	private int GetItemCountInSet(int setId) { }

	// RVA: 0x219A5B8 Offset: 0x219A5B8 VA: 0x219A5B8
	private List<IMergeStageScrollViewModel> GetStageViewModels() { }

	// RVA: 0x219A9AC Offset: 0x219A9AC VA: 0x219A9AC
	public int GetCurrentStage(int setID = 0) { }

	// RVA: 0x2199B2C Offset: 0x2199B2C VA: 0x2199B2C
	private List<RewardModel> GetStageRewards() { }

	// RVA: 0x21998D4 Offset: 0x21998D4 VA: 0x21998D4
	public RewardModel GetStageReward(int stageIndex) { }

	// RVA: 0x219A9C4 Offset: 0x219A9C4 VA: 0x219A9C4
	public MergeItemChainPopupViewModel GetChainPopupViewModel() { }

	// RVA: 0x219ADBC Offset: 0x219ADBC VA: 0x219ADBC
	public void AddToScatterQueue(List<MergeMiniGameItemModel> itemModels) { }

	// RVA: 0x219ADD4 Offset: 0x219ADD4 VA: 0x219ADD4
	public bool TryGetItemFromScatterQueue(out List<MergeMiniGameItemModel> itemModel) { }

	// RVA: 0x219ADEC Offset: 0x219ADEC VA: 0x219ADEC
	public void AddPendingPopulatedScatterCell(int cellIndex) { }

	// RVA: 0x219AE20 Offset: 0x219AE20 VA: 0x219AE20
	public void ClearBoard() { }

	// RVA: 0x219AE38 Offset: 0x219AE38 VA: 0x219AE38
	public MergeMiniGameScatterQueueViewModel GetScatterQueueViewModel() { }

	// RVA: 0x219AFA8 Offset: 0x219AFA8 VA: 0x219AFA8
	private int ConsumePendingPopulatedScatterCellIndex() { }

	// RVA: 0x219AFDC Offset: 0x219AFDC VA: 0x219AFDC
	private MergeMiniGameItemModel GetNextScatterQueueItem() { }

	// RVA: 0x219B14C Offset: 0x219B14C VA: 0x219B14C
	private bool DoesNextScatterQueueItemHaveBubble() { }

	// RVA: 0x219B46C Offset: 0x219B46C VA: 0x219B46C
	private List<MergeMiniGameItemModel> GetNextQueueItemSet() { }

	// RVA: 0x219B2C0 Offset: 0x219B2C0 VA: 0x219B2C0
	public int GetScatterQueueCount() { }

	// RVA: 0x219B354 Offset: 0x219B354 VA: 0x219B354
	private bool IsScatterQueueViewVisible() { }

	// RVA: 0x219B36C Offset: 0x219B36C VA: 0x219B36C
	private bool ShouldScatterQueueViewVisible() { }

	// RVA: 0x219B3AC Offset: 0x219B3AC VA: 0x219B3AC
	private bool ShouldScatterQueueViewDisappear() { }

	// RVA: 0x219B3F0 Offset: 0x219B3F0 VA: 0x219B3F0
	private bool IsScatterQueueIncreased() { }

	// RVA: 0x219B4F4 Offset: 0x219B4F4 VA: 0x219B4F4
	private int GetPreviousScatterQueueCount() { }

	// RVA: 0x219B438 Offset: 0x219B438 VA: 0x219B438
	private void RecordPreviousScatterQueueCount() { }

	// RVA: 0x2197504 Offset: 0x2197504 VA: 0x2197504
	private bool HasReachedFinalStage() { }

	// RVA: 0x219B51C Offset: 0x219B51C VA: 0x219B51C
	public bool ShouldPlayRewardAnimation(int setID) { }

	// RVA: 0x219B56C Offset: 0x219B56C VA: 0x219B56C
	public void MarkRewardAnimationShown(int setID = 0) { }

	// RVA: 0x219B5A4 Offset: 0x219B5A4 VA: 0x219B5A4
	public bool ShouldShowEventStartTutorial() { }

	// RVA: 0x219B5E0 Offset: 0x219B5E0 VA: 0x219B5E0
	public void EventStartTutorialCompleted() { }

	// RVA: 0x219B610 Offset: 0x219B610 VA: 0x219B610
	public bool ShouldShowGeneratorItemTutorial() { }

	// RVA: 0x219B64C Offset: 0x219B64C VA: 0x219B64C
	public void GeneratorItemTutorialCompleted() { }

	// RVA: 0x219B67C Offset: 0x219B67C VA: 0x219B67C
	public bool ShouldShowRewardedTutorial() { }

	// RVA: 0x219B6B0 Offset: 0x219B6B0 VA: 0x219B6B0
	public void RewardedTutorialCompleted() { }

	// RVA: 0x219B6E0 Offset: 0x219B6E0 VA: 0x219B6E0
	public bool ShouldShowBubbleTutorial() { }

	// RVA: 0x219B714 Offset: 0x219B714 VA: 0x219B714
	public void BubbleTutorialCompleted() { }

	// RVA: 0x219B744 Offset: 0x219B744 VA: 0x219B744
	public void MarkEventIntroduced() { }

	// RVA: 0x219B784 Offset: 0x219B784 VA: 0x219B784
	public void MarkEventForceOpened() { }

	// RVA: 0x219B790 Offset: 0x219B790 VA: 0x219B790
	public void TryIncreaseForceOpenCount(MergeMiniGameForceOpenReason reason) { }

	// RVA: 0x219B7D8 Offset: 0x219B7D8 VA: 0x219B7D8
	public int GetFirstStageToShowNewItemFound() { }

	// RVA: 0x219B7FC Offset: 0x219B7FC VA: 0x219B7FC
	public void IncreaseSpendEnergyCount(int amount) { }

	// RVA: 0x219B838 Offset: 0x219B838 VA: 0x219B838
	public int GetTotalCollectedEnergy() { }

	// RVA: 0x219B8A4 Offset: 0x219B8A4 VA: 0x219B8A4
	public bool ShouldShowPopupAfterJoin() { }

	// RVA: 0x219B8AC Offset: 0x219B8AC VA: 0x219B8AC
	public void SetShouldShowPopupAfterJoin(bool shouldShowPopupAfterJoin) { }

	// RVA: 0x219B8B8 Offset: 0x219B8B8 VA: 0x219B8B8
	public string GetReadableEventId() { }

	// RVA: 0x219B9B4 Offset: 0x219B9B4 VA: 0x219B9B4
	public int GetEmptySpaceCount() { }

	// RVA: 0x219BA24 Offset: 0x219BA24 VA: 0x219BA24
	public int GetTotalCollectedCoinAmount() { }

	// RVA: 0x219BA58 Offset: 0x219BA58 VA: 0x219BA58
	public TimeSpan GetTotalCollectedUnlimitedTime() { }

	// RVA: 0x219BA70 Offset: 0x219BA70 VA: 0x219BA70
	public string GetBoardState() { }

	// RVA: 0x219BA88 Offset: 0x219BA88 VA: 0x219BA88
	public List<List<MergeMiniGameItemModel>> GetScatterQueue() { }

	// RVA: 0x219BAC4 Offset: 0x219BAC4 VA: 0x219BAC4
	public bool IsAvailableForWheelOfFortune() { }

	// RVA: 0x219BAE0 Offset: 0x219BAE0 VA: 0x219BAE0
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x219BAE4 Offset: 0x219BAE4 VA: 0x219BAE4
	public int GetEventScoreByLevelDifficulty(LevelDifficultyType difficulty, bool isFirstTry, int selectedMultiplier) { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts