public class CollectionService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILateLoginService // TypeDefIndex: 4560
{
	// Fields
	private CollectionDataService _dataService; // 0x10
	private CollectionStateService _stateService; // 0x18
	private CollectionRemoteService _remoteService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private CustomUpdater _customUpdater; // 0x30
	private TeamsService _teamsService; // 0x38
	private TeamChatService _chatService; // 0x40
	private IPlayerService _playerService; // 0x48
	private CollectionData _collectionData; // 0x50
	private Dictionary<string, CollectionCardData> _cardIdDataMap; // 0x58
	private Dictionary<string, CollectionThemeData> _cardIdThemeMap; // 0x60
	[TupleElementNames(new[] { "starCount", "isGold" })]
	private Dictionary<ValueTuple<int, bool>, int> _cardPoolMultiplierMap; // 0x68
	private Dictionary<int, int> _packIdCardCountMap; // 0x70
	private CollectionViewModel _viewModel; // 0x78
	private GameObject _loadedThemeIconsBundle; // 0x80
	private GameObject[] _loadedCardIconBundles; // 0x88
	private Dictionary<string, Sprite> _loadedThemeIcons; // 0x90
	private Dictionary<string, Sprite> _loadedCardIcons; // 0x98
	private List<TeamCardHelpResponse> _receivedCards; // 0xA0
	private string _backendCollectionId; // 0xA8
	private readonly MagicLabService _magicLabService; // 0xB0
	private readonly WheelOfFortuneService _wheelOfFortuneService; // 0xB8
	[CompilerGenerated]
	private Action OnCardInventoryUpdated; // 0xC0

	// Methods

	[CompilerGenerated]
	// RVA: 0x376B1D8 Offset: 0x376B1D8 VA: 0x376B1D8
	public void add_OnCardInventoryUpdated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x376B274 Offset: 0x376B274 VA: 0x376B274
	public void remove_OnCardInventoryUpdated(Action value) { }

	// RVA: 0x376B310 Offset: 0x376B310 VA: 0x376B310
	public void .ctor(CollectionDataService dataService, CollectionStateService stateService, CollectionRemoteService remoteService, RemoteConfigs remoteConfigs, CustomUpdater customUpdater, TeamChatService chatService, TeamsService teamsService, MagicLabService magicLabService, WheelOfFortuneService wheelOfFortuneService, IPlayerService playerService) { }

	// RVA: 0x376B410 Offset: 0x376B410 VA: 0x376B410 Slot: 4
	public void Initialize() { }

	// RVA: 0x376B4B4 Offset: 0x376B4B4 VA: 0x376B4B4 Slot: 7
	public void InitializeData() { }

	// RVA: 0x376BA48 Offset: 0x376BA48 VA: 0x376BA48
	private void CheckEmptyViewModel() { }

	// RVA: 0x376B508 Offset: 0x376B508 VA: 0x376B508
	private void MigrateTotalCompletedCollectionCount() { }

	// RVA: 0x376B608 Offset: 0x376B608 VA: 0x376B608
	private void TryInitializeCollectionDataMaps() { }

	// RVA: 0x376BAC4 Offset: 0x376BAC4 VA: 0x376BAC4
	private void InitializeCollectionDataMaps(TextAsset collectionDataJson) { }

	// RVA: 0x376C1F4 Offset: 0x376C1F4 VA: 0x376C1F4 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x376C228 Offset: 0x376C228 VA: 0x376C228
	private void TryFetchCurrentEventId() { }

	[AsyncStateMachine(typeof(CollectionService.<FetchCurrentEventId>d__34))]
	// RVA: 0x376C254 Offset: 0x376C254 VA: 0x376C254
	private void FetchCurrentEventId() { }

	// RVA: 0x376B6CC Offset: 0x376B6CC VA: 0x376B6CC
	private void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(CollectionService.<FetchCurrentEvent>d__36))]
	// RVA: 0x376C340 Offset: 0x376C340 VA: 0x376C340
	private void FetchCurrentEvent() { }

	// RVA: 0x376C3F8 Offset: 0x376C3F8 VA: 0x376C3F8
	private void TryStartNewEvent(CollectionResponseModel response) { }

	// RVA: 0x376C4C8 Offset: 0x376C4C8 VA: 0x376C4C8
	private bool ShouldStartNewEvent(CollectionResponseModel response) { }

	// RVA: 0x376C5E0 Offset: 0x376C5E0 VA: 0x376C5E0
	public bool IsEventActive() { }

	// RVA: 0x376C61C Offset: 0x376C61C VA: 0x376C61C
	public bool IsEligible() { }

	// RVA: 0x376B714 Offset: 0x376B714 VA: 0x376B714
	public bool IsEventEnabled() { }

	// RVA: 0x376C714 Offset: 0x376C714 VA: 0x376C714
	public bool IsNotIntroduced() { }

	// RVA: 0x376C750 Offset: 0x376C750 VA: 0x376C750
	public bool IsTimeUp() { }

	// RVA: 0x376C7A4 Offset: 0x376C7A4 VA: 0x376C7A4
	public void MarkEventIntroducedEverInLifeTime() { }

	// RVA: 0x376C7D4 Offset: 0x376C7D4 VA: 0x376C7D4
	public bool GetEventIntroducedEverInLifeTime() { }

	// RVA: 0x376C7F8 Offset: 0x376C7F8 VA: 0x376C7F8
	public string GetEventId() { }

	// RVA: 0x376C824 Offset: 0x376C824 VA: 0x376C824
	public long GetRemainingSeconds() { }

	// RVA: 0x376C938 Offset: 0x376C938 VA: 0x376C938
	public DateTime GetEndDate() { }

	// RVA: 0x376CA00 Offset: 0x376CA00 VA: 0x376CA00 Slot: 5
	public void Dispose() { }

	// RVA: 0x376C1D0 Offset: 0x376C1D0 VA: 0x376C1D0
	private CollectionConfigModel GetConfig() { }

	// RVA: 0x376CAA0 Offset: 0x376CAA0 VA: 0x376CAA0
	public int GetCollectionUnlockLevel() { }

	// RVA: 0x376CABC Offset: 0x376CABC VA: 0x376CABC
	public void AddCardToInventory(string cardId) { }

	// RVA: 0x376CD08 Offset: 0x376CD08 VA: 0x376CD08
	public void RemoveCardFromInventory(string cardId, int removeCount = 1) { }

	// RVA: 0x376CD20 Offset: 0x376CD20 VA: 0x376CD20
	public bool IsCardInInventory(string cardId) { }

	// RVA: 0x376CD44 Offset: 0x376CD44 VA: 0x376CD44
	public bool IsCardMissing(string cardId) { }

	// RVA: 0x376CBB8 Offset: 0x376CBB8 VA: 0x376CBB8
	public bool IsCardNew(string cardId) { }

	// RVA: 0x376CD5C Offset: 0x376CD5C VA: 0x376CD5C
	public int GetCardCount(string cardId) { }

	// RVA: 0x376CE7C Offset: 0x376CE7C VA: 0x376CE7C
	public int GetDuplicatedCardCount(string cardId) { }

	// RVA: 0x376CE64 Offset: 0x376CE64 VA: 0x376CE64
	public List<CardInventoryDataModel> GetCardInventory() { }

	// RVA: 0x376CEF8 Offset: 0x376CEF8 VA: 0x376CEF8
	public void ResetInventory() { }

	// RVA: 0x376CF10 Offset: 0x376CF10 VA: 0x376CF10
	public int GetExtraStarCount() { }

	// RVA: 0x376D0F4 Offset: 0x376D0F4 VA: 0x376D0F4
	public void OpenBonusChest(int chestIndex) { }

	// RVA: 0x376D8E0 Offset: 0x376D8E0 VA: 0x376D8E0
	private List<CollectionBonusChestModel> GetBonusChestModels() { }

	// RVA: 0x376DDD8 Offset: 0x376DDD8 VA: 0x376DDD8
	public OpenedCardPackData OpenPack(int packId, CurrencyEarnReason source) { }

	// RVA: 0x376DED8 Offset: 0x376DED8 VA: 0x376DED8
	private List<string> OpenBasicPack(int packId) { }

	// RVA: 0x376DF18 Offset: 0x376DF18 VA: 0x376DF18
	private List<string> OpenMiddlePack(int packId) { }

	// RVA: 0x376E358 Offset: 0x376E358 VA: 0x376E358
	private List<string> OpenPremiumPack(int packId) { }

	// RVA: 0x376EB9C Offset: 0x376EB9C VA: 0x376EB9C
	private void AddOpenedPackCardsToInventory(OpenedCardPackData openedPack, CurrencyEarnReason source) { }

	// RVA: 0x376F930 Offset: 0x376F930 VA: 0x376F930
	private void UpdateNewCardOpeningBoost(OpenedCardPackData openedPack, bool openedNewCard) { }

	// RVA: 0x376F21C Offset: 0x376F21C VA: 0x376F21C
	private bool ShouldOpenNewCard(int packId) { }

	// RVA: 0x376F340 Offset: 0x376F340 VA: 0x376F340
	private IEnumerable<CollectionCardData> GetAllCards() { }

	// RVA: 0x376EE38 Offset: 0x376EE38 VA: 0x376EE38
	private List<string> GetAllCardsPool() { }

	// RVA: 0x376F274 Offset: 0x376F274 VA: 0x376F274
	private List<string> GetMissingCardsPool() { }

	// RVA: 0x376EF80 Offset: 0x376EF80 VA: 0x376EF80
	private List<string> Get3PlusStarCardsPool() { }

	// RVA: 0x376F398 Offset: 0x376F398 VA: 0x376F398
	private List<string> GetCardsPoolByData(IEnumerable<CollectionCardData> cards) { }

	// RVA: 0x376F994 Offset: 0x376F994 VA: 0x376F994
	private int GetCardPoolMultiplier(CollectionCardData card) { }

	// RVA: 0x376F0AC Offset: 0x376F0AC VA: 0x376F0AC
	private string GetRandomCardFromPool(List<string> pool) { }

	// RVA: 0x376EE54 Offset: 0x376EE54 VA: 0x376EE54
	private List<string> GetRandomCardsFromPool(List<string> pool, int count) { }

	// RVA: 0x376FA48 Offset: 0x376FA48 VA: 0x376FA48
	public bool IsCollectionCompleted() { }

	// RVA: 0x376FB18 Offset: 0x376FB18 VA: 0x376FB18
	public bool IsClaimed() { }

	// RVA: 0x376FB54 Offset: 0x376FB54 VA: 0x376FB54
	public void OnCollectionCompleted() { }

	// RVA: 0x376FC6C Offset: 0x376FC6C VA: 0x376FC6C
	private void ActivateGoldCollection() { }

	// RVA: 0x376FCBC Offset: 0x376FCBC VA: 0x376FCBC
	private void OnGoldCollectionCompleted() { }

	// RVA: 0x376FD4C Offset: 0x376FD4C VA: 0x376FD4C
	private void OnRepeatCollectionCompleted() { }

	// RVA: 0x376FE88 Offset: 0x376FE88 VA: 0x376FE88
	private bool IsRepeatLimitReached() { }

	// RVA: 0x376FE50 Offset: 0x376FE50 VA: 0x376FE50
	private void TryClaimEvent(string logMessage) { }

	// RVA: 0x376FE2C Offset: 0x376FE2C VA: 0x376FE2C
	private bool CanOpenRepeatCollection() { }

	// RVA: 0x376CCE8 Offset: 0x376CCE8 VA: 0x376CCE8
	private void AddCompletedTheme(CollectionThemeData theme) { }

	// RVA: 0x376FED0 Offset: 0x376FED0 VA: 0x376FED0
	public void RemoveCompletedTheme(string themeId) { }

	// RVA: 0x376FEE8 Offset: 0x376FEE8 VA: 0x376FEE8
	public List<string> GetCompletedThemes() { }

	// RVA: 0x376FF00 Offset: 0x376FF00 VA: 0x376FF00
	public bool HasAnyCompletedTheme() { }

	// RVA: 0x376FF18 Offset: 0x376FF18 VA: 0x376FF18
	public RewardModel GetThemeReward(string themeId) { }

	// RVA: 0x3770020 Offset: 0x3770020 VA: 0x3770020
	public List<CollectionThemeRewardModel> GetActiveThemeRewards() { }

	// RVA: 0x3770070 Offset: 0x3770070 VA: 0x3770070
	public string GetCollectionId() { }

	// RVA: 0x376D8FC Offset: 0x376D8FC VA: 0x376D8FC
	private void GiveBonusChestReward(CollectionBonusChestModel chest) { }

	// RVA: 0x37700E0 Offset: 0x37700E0 VA: 0x37700E0
	public List<CollectionThemeData> GetThemes() { }

	// RVA: 0x3770164 Offset: 0x3770164 VA: 0x3770164
	public CollectionThemeData GetThemeData(string themeId) { }

	// RVA: 0x376CC3C Offset: 0x376CC3C VA: 0x376CC3C
	private bool IsThemeCompleted(CollectionThemeData themeData) { }

	// RVA: 0x377029C Offset: 0x377029C VA: 0x377029C
	public int GetThemeProgress(CollectionThemeData theme) { }

	// RVA: 0x3770348 Offset: 0x3770348 VA: 0x3770348
	public int GetThemeNewCardCount(CollectionThemeData theme) { }

	// RVA: 0x376CBE4 Offset: 0x376CBE4 VA: 0x376CBE4
	public CollectionThemeData GetCardTheme(string cardId) { }

	// RVA: 0x376D09C Offset: 0x376D09C VA: 0x376D09C
	public CollectionCardData GetCardData(string cardId) { }

	// RVA: 0x376F8CC Offset: 0x376F8CC VA: 0x376F8CC
	public int GetCardStarCount(string cardId) { }

	// RVA: 0x376FA78 Offset: 0x376FA78 VA: 0x376FA78
	public int GetTotalCardProgress() { }

	// RVA: 0x37703F4 Offset: 0x37703F4 VA: 0x37703F4
	public int GetTotalCardCountInInventory() { }

	// RVA: 0x376FAC8 Offset: 0x376FAC8 VA: 0x376FAC8
	public int GetTotalCardCount() { }

	// RVA: 0x376EDC0 Offset: 0x376EDC0 VA: 0x376EDC0
	public int GetPackCardCount(int packId) { }

	// RVA: 0x377054C Offset: 0x377054C VA: 0x377054C
	public bool IsGoldCollectionActive() { }

	// RVA: 0x376FDF4 Offset: 0x376FDF4 VA: 0x376FDF4
	public void SetGoldCollectionActive(bool isActive) { }

	// RVA: 0x376FC20 Offset: 0x376FC20 VA: 0x376FC20
	public CollectionPhase GetActivePhase() { }

	// RVA: 0x3770588 Offset: 0x3770588 VA: 0x3770588
	public CollectionViewModel GetViewModel() { }

	// RVA: 0x37705BC Offset: 0x37705BC VA: 0x37705BC
	private void CreateViewModel() { }

	// RVA: 0x376D9C8 Offset: 0x376D9C8 VA: 0x376D9C8
	private void UpdateDynamicViewModelInfos() { }

	// RVA: 0x3770F7C Offset: 0x3770F7C VA: 0x3770F7C
	public void MarkThemeCardsAsSeen(CollectionThemeData theme) { }

	// RVA: 0x3771300 Offset: 0x3771300 VA: 0x3771300
	public int GetDailyCardSendLimit() { }

	// RVA: 0x3771320 Offset: 0x3771320 VA: 0x3771320
	public int GetRemainedDailyCardSendCount() { }

	// RVA: 0x3771364 Offset: 0x3771364 VA: 0x3771364
	private int GetDailyCardSendCount() { }

	// RVA: 0x3771384 Offset: 0x3771384 VA: 0x3771384
	public void SendCard(string cardId) { }

	// RVA: 0x3771388 Offset: 0x3771388 VA: 0x3771388
	public int GetDailyCardRequestLimit() { }

	// RVA: 0x3771390 Offset: 0x3771390 VA: 0x3771390
	public int GetRemainedDailyCardRequestCount() { }

	// RVA: 0x37713B4 Offset: 0x37713B4 VA: 0x37713B4
	public bool RequestCard(string cardId) { }

	// RVA: 0x37713D0 Offset: 0x37713D0 VA: 0x37713D0
	public CardSendRequestState GetCardSendRequestState(CollectionCardData cardData) { }

	// RVA: 0x3770D98 Offset: 0x3770D98 VA: 0x3770D98
	public string GetActiveCollectionTokenId() { }

	// RVA: 0x3770DE8 Offset: 0x3770DE8 VA: 0x3770DE8
	public RewardModel GetActiveCollectionReward() { }

	// RVA: 0x377147C Offset: 0x377147C VA: 0x377147C
	public CollectionData GetActiveCollectionData() { }

	// RVA: 0x3770E4C Offset: 0x3770E4C VA: 0x3770E4C
	public RewardModel GetActiveCollectionRewardWithToken() { }

	// RVA: 0x3771484 Offset: 0x3771484 VA: 0x3771484
	private RewardModel GetActiveTokenReward() { }

	// RVA: 0x377150C Offset: 0x377150C VA: 0x377150C
	public void AddCollectionTokenToPlayerData() { }

	[AsyncStateMachine(typeof(CollectionService.<EquipCollectionToken>d__129))]
	// RVA: 0x37715D8 Offset: 0x37715D8 VA: 0x37715D8
	public void EquipCollectionToken(string tokenId) { }

	// RVA: 0x376B72C Offset: 0x376B72C VA: 0x376B72C
	private void TryLoadCollectionBundleAssets() { }

	// RVA: 0x37717BC Offset: 0x37717BC VA: 0x37717BC
	private void TryLoadCollectionThemeIconsBundle() { }

	// RVA: 0x3771A28 Offset: 0x3771A28 VA: 0x3771A28
	private void TryLoadCollectionCardIconsBundles() { }

	// RVA: 0x3771E5C Offset: 0x3771E5C VA: 0x3771E5C
	private bool IsCollectionAssetsDownloadedAndLoaded(string bundleName) { }

	// RVA: 0x3771F08 Offset: 0x3771F08 VA: 0x3771F08
	private void DownloadAndLoadCollectionAssets(string bundleName, int priority = 0) { }

	// RVA: 0x37716B0 Offset: 0x37716B0 VA: 0x37716B0
	private bool IsPlayerLevelEnoughForBundleDownload() { }

	// RVA: 0x376B770 Offset: 0x376B770 VA: 0x376B770
	private void ApplyPendingCollectionPacks() { }

	// RVA: 0x3771FCC Offset: 0x3771FCC VA: 0x3771FCC
	public List<TeamsAskCardThemeViewModel> GetMissingCards() { }

	// RVA: 0x37725EC Offset: 0x37725EC VA: 0x37725EC
	public bool CanSendCard(string cardId) { }

	[AsyncStateMachine(typeof(CollectionService.<SyncInventoryWithBackend>d__139))]
	// RVA: 0x376B990 Offset: 0x376B990 VA: 0x376B990
	private void SyncInventoryWithBackend() { }

	// RVA: 0x3772640 Offset: 0x3772640 VA: 0x3772640
	private void CompareAndSyncSentCards(List<CardHelpDataModel> sentCardsLocal, List<TeamCardHelpResponse> sentCardsBackend) { }

	// RVA: 0x3772F74 Offset: 0x3772F74 VA: 0x3772F74
	private void CompareAndSyncReceivedCards(List<CardHelpDataModel> receivedCardsLocal, List<TeamCardHelpResponse> receivedCardsBackend) { }

	// RVA: 0x3773530 Offset: 0x3773530 VA: 0x3773530
	private void OnCardSent(string messageId, string cardId) { }

	// RVA: 0x3773624 Offset: 0x3773624 VA: 0x3773624
	public List<CardHelpDataModel> GetNotClaimedReceivedCards() { }

	// RVA: 0x3773758 Offset: 0x3773758 VA: 0x3773758
	public void MarkAllReceivedCardsAsClaimed() { }

	// RVA: 0x3773770 Offset: 0x3773770 VA: 0x3773770
	public bool ShouldShowCardReceivedPopUp() { }

	// RVA: 0x37737D8 Offset: 0x37737D8 VA: 0x37737D8
	public bool ShouldShowThemeCompletedPopup() { }

	// RVA: 0x3773808 Offset: 0x3773808 VA: 0x3773808
	public bool ShouldShowCollectionActivationPopUp() { }

	// RVA: 0x3773864 Offset: 0x3773864 VA: 0x3773864
	public void MarkAsActivationRewardClaimed() { }

	// RVA: 0x377389C Offset: 0x377389C VA: 0x377389C
	public List<RewardModel> GetCollectionActivatedReward() { }

	// RVA: 0x376C554 Offset: 0x376C554 VA: 0x376C554
	private bool HasCollectionExistInLocal(string collectionId) { }

	// RVA: 0x37739C0 Offset: 0x37739C0 VA: 0x37739C0
	public string GetLocalizedCardName(string cardId) { }

	// RVA: 0x3772514 Offset: 0x3772514 VA: 0x3772514
	public string GetLocalizedThemeName(string themeId) { }

	// RVA: 0x37709D8 Offset: 0x37709D8 VA: 0x37709D8
	public string GetLocalizedActiveCollectionName() { }

	// RVA: 0x3770BBC Offset: 0x3770BBC VA: 0x3770BBC
	public string GetActiveGrandNumeral() { }

	// RVA: 0x3770C90 Offset: 0x3770C90 VA: 0x3770C90
	public string GetLocalizedActiveTokenName() { }

	// RVA: 0x3773A98 Offset: 0x3773A98 VA: 0x3773A98
	public long GetStartTime() { }

	// RVA: 0x3773ACC Offset: 0x3773ACC VA: 0x3773ACC
	public string GetSegment() { }

	// RVA: 0x3773B00 Offset: 0x3773B00 VA: 0x3773B00
	public int GetCompletedThemeCount() { }

	// RVA: 0x3773C7C Offset: 0x3773C7C VA: 0x3773C7C
	public bool IsTeamChatCardRequestActive() { }

	// RVA: 0x3773CC0 Offset: 0x3773CC0 VA: 0x3773CC0
	public bool IsCollectionActiveForTeam() { }

	// RVA: 0x3773CF8 Offset: 0x3773CF8 VA: 0x3773CF8
	public void ResetCollectionForDebug() { }

	// RVA: 0x3773D2C Offset: 0x3773D2C VA: 0x3773D2C
	public string GetReadableEventId() { }

	// RVA: 0x3773DE8 Offset: 0x3773DE8 VA: 0x3773DE8
	public string GetReadableActiveCollectionName() { }

	// RVA: 0x3773EBC Offset: 0x3773EBC VA: 0x3773EBC
	public bool IsAvailableForWheelOfFortune() { }

	// RVA: 0x3773EF8 Offset: 0x3773EF8 VA: 0x3773EF8
	public int GetTotalCollectionCompletedCount() { }

	[CompilerGenerated]
	// RVA: 0x3773F1C Offset: 0x3773F1C VA: 0x3773F1C
	private bool <GetMissingCardsPool>b__73_0(CollectionCardData card) { }

	[CompilerGenerated]
	// RVA: 0x3773F40 Offset: 0x3773F40 VA: 0x3773F40
	private bool <IsThemeCompleted>b__98_0(CollectionCardData card) { }

	[CompilerGenerated]
	// RVA: 0x3773F58 Offset: 0x3773F58 VA: 0x3773F58
	private bool <GetThemeProgress>b__99_0(CollectionCardData card) { }

	[CompilerGenerated]
	// RVA: 0x3773F70 Offset: 0x3773F70 VA: 0x3773F70
	private bool <GetThemeNewCardCount>b__100_0(CollectionCardData card) { }

	[CompilerGenerated]
	// RVA: 0x3773F88 Offset: 0x3773F88 VA: 0x3773F88
	private bool <MarkThemeCardsAsSeen>b__114_0(CollectionCardData cardData) { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts