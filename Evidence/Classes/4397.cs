public class DuckFestivalService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 4397
{
	// Fields
	private readonly DuckFestivalDataService _dataService; // 0x10
	private readonly DuckFestivalStateService _stateService; // 0x18
	private readonly DuckFestivalRemoteService _remoteService; // 0x20
	private readonly CustomUpdater _customUpdater; // 0x28
	private readonly IPlayerService _playerService; // 0x30
	private readonly ProfileSpriteCacheService _cacheService; // 0x38
	private readonly InventoryService _inventoryService; // 0x40
	private readonly LobbyEventsService _lobbyEventsService; // 0x48
	private readonly MagicLabService _magicLabService; // 0x50
	private readonly WheelOfFortuneService _wheelOfFortuneService; // 0x58
	private const int NotActiveStatusCode = 425;
	private const int MinimumClaimCountForForcePopUp = 4;
	private Dictionary<LevelDifficultyType, int> _scoreByLevelDifficultyMap; // 0x60
	private SecondTimer _secondTimer; // 0x68
	private bool _hasMultiplier; // 0x70
	private bool _hasUncollectedDucks; // 0x71
	private readonly UserProfileService _userProfileService; // 0x78

	// Methods

	// RVA: 0x1B9604C Offset: 0x1B9604C VA: 0x1B9604C
	public void .ctor(DuckFestivalStateService stateService, DuckFestivalDataService dataService, DuckFestivalRemoteService remoteService, CustomUpdater customUpdater, IPlayerService playerService, ProfileSpriteCacheService cacheService, InventoryService inventoryService, LobbyEventsService lobbyEventsService, MagicLabService magicLabService, WheelOfFortuneService wheelOfFortuneService, UserProfileService userProfileService) { }

	// RVA: 0x1B96168 Offset: 0x1B96168 VA: 0x1B96168 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(DuckFestivalService.<InitializeData>d__19))]
	// RVA: 0x1B96298 Offset: 0x1B96298 VA: 0x1B96298 Slot: 7
	public void InitializeData() { }

	// RVA: 0x1B96350 Offset: 0x1B96350 VA: 0x1B96350 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x1B96444 Offset: 0x1B96444 VA: 0x1B96444
	public void TryIncreaseScore(LevelDifficultyType levelDifficultyType, int additionalMultiplier = 1) { }

	// RVA: 0x1B965B4 Offset: 0x1B965B4 VA: 0x1B965B4
	private void TryFetchCurrentEvent() { }

	// RVA: 0x1B96540 Offset: 0x1B96540 VA: 0x1B96540
	private int GetScore(LevelDifficultyType levelDifficultyType, int additionalMultiplier) { }

	[AsyncStateMachine(typeof(DuckFestivalService.<TryFetchCurrentEventAsync>d__24))]
	// RVA: 0x1B96354 Offset: 0x1B96354 VA: 0x1B96354
	private Task TryFetchCurrentEventAsync() { }

	// RVA: 0x1B965B8 Offset: 0x1B965B8 VA: 0x1B965B8
	private void TryUpdateEventDataFromResponse(ApiResponse<DuckFestivalResponse> apiResponse, bool isJoinResponse = False, bool isPreJoinResponse = False) { }

	// RVA: 0x1B96930 Offset: 0x1B96930 VA: 0x1B96930
	private void UpdateEventData(DuckFestivalResponse responseData) { }

	// RVA: 0x1B96AD4 Offset: 0x1B96AD4 VA: 0x1B96AD4
	public int GetRemainingSeconds() { }

	// RVA: 0x1B96BD4 Offset: 0x1B96BD4 VA: 0x1B96BD4
	public DuckFestivalPopupStateType GetPopUpType() { }

	// RVA: 0x1B96C5C Offset: 0x1B96C5C VA: 0x1B96C5C
	public bool ShouldShowForcePopUp() { }

	// RVA: 0x1B96D64 Offset: 0x1B96D64 VA: 0x1B96D64 Slot: 5
	public void Dispose() { }

	// RVA: 0x1B96D98 Offset: 0x1B96D98 VA: 0x1B96D98
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x1B96E30 Offset: 0x1B96E30 VA: 0x1B96E30
	public DateTime GetShownEndDate() { }

	// RVA: 0x1B96F10 Offset: 0x1B96F10 VA: 0x1B96F10
	public int GetTargetPreJoinScore() { }

	// RVA: 0x1B96F28 Offset: 0x1B96F28 VA: 0x1B96F28
	public bool ShouldShowForceInfo() { }

	// RVA: 0x1B96F54 Offset: 0x1B96F54 VA: 0x1B96F54
	public void MarkInfoShown() { }

	// RVA: 0x1B96F84 Offset: 0x1B96F84 VA: 0x1B96F84
	public void OnPreJoinPopUpShow() { }

	// RVA: 0x1B96FB4 Offset: 0x1B96FB4 VA: 0x1B96FB4
	public List<DuckFestivalProgressViewModel> GetUnseenProgressViewModels(bool forLobby) { }

	// RVA: 0x1B972E4 Offset: 0x1B972E4 VA: 0x1B972E4
	public List<DuckFestivalLeaderboardViewModel> GetLeaderboardPlayerViewModels() { }

	// RVA: 0x1B976C0 Offset: 0x1B976C0 VA: 0x1B976C0
	private RewardModel GetRewardOfRank(int playerRank) { }

	// RVA: 0x1B9690C Offset: 0x1B9690C VA: 0x1B9690C
	public int GetMyPlayerRank() { }

	// RVA: 0x1B97774 Offset: 0x1B97774 VA: 0x1B97774
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x1B9778C Offset: 0x1B9778C VA: 0x1B9778C
	private bool IsLobbyButtonProgressIncreased() { }

	// RVA: 0x1B97918 Offset: 0x1B97918 VA: 0x1B97918
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x1B977A4 Offset: 0x1B977A4 VA: 0x1B977A4
	public int GetTotalProgressToAddForLobby() { }

	// RVA: 0x1B97954 Offset: 0x1B97954 VA: 0x1B97954
	public List<RewardModel> GetGaeRewardsToGive() { }

	// RVA: 0x1B96D34 Offset: 0x1B96D34 VA: 0x1B96D34
	public int GetUnclaimCount() { }

	// RVA: 0x1B97D50 Offset: 0x1B97D50 VA: 0x1B97D50
	public int GetCurrentProgressbarRewardIndex() { }

	// RVA: 0x1B97DA0 Offset: 0x1B97DA0 VA: 0x1B97DA0
	public List<DuckFestivalProgressbarRewardElementViewModel> GetProgressbarAllRewards() { }

	// RVA: 0x1B98008 Offset: 0x1B98008 VA: 0x1B98008
	public DuckFestivalProgressViewModel GetPreJoinProgressModel() { }

	// RVA: 0x1B98068 Offset: 0x1B98068 VA: 0x1B98068
	public DuckFestivalProgressViewModel GetLastSeenProgressViewModel(bool forLobby) { }

	// RVA: 0x1B9823C Offset: 0x1B9823C VA: 0x1B9823C
	public bool TryGetLeaderboardRewards(out RewardModel rewardModel) { }

	// RVA: 0x1B982FC Offset: 0x1B982FC VA: 0x1B982FC
	public bool IsClaimed() { }

	[AsyncStateMachine(typeof(DuckFestivalService.<SendClaimRequestAsync>d__53))]
	// RVA: 0x1B98320 Offset: 0x1B98320 VA: 0x1B98320
	public Task<bool> SendClaimRequestAsync() { }

	// RVA: 0x1B97750 Offset: 0x1B97750 VA: 0x1B97750
	public bool CanClaim() { }

	// RVA: 0x1B98434 Offset: 0x1B98434 VA: 0x1B98434
	public bool TryGetMyPlayerRank(out int rank) { }

	// RVA: 0x1B9848C Offset: 0x1B9848C VA: 0x1B9848C
	public int GetMyPlayerLastSeenRank() { }

	// RVA: 0x1B984B0 Offset: 0x1B984B0 VA: 0x1B984B0
	public int GetMyPlayerLastSeenLeaderboardProgress() { }

	// RVA: 0x1B984D4 Offset: 0x1B984D4 VA: 0x1B984D4
	public int GetProgress() { }

	// RVA: 0x1B984F8 Offset: 0x1B984F8 VA: 0x1B984F8
	public void SetMyPlayerLastSeenRank(int currentRank) { }

	// RVA: 0x1B98524 Offset: 0x1B98524 VA: 0x1B98524
	public void MarkProgressSeen() { }

	// RVA: 0x1B9853C Offset: 0x1B9853C VA: 0x1B9853C
	public void SetMyPlayerLastSeenLeaderboardProgress(int progress) { }

	// RVA: 0x1B98568 Offset: 0x1B98568 VA: 0x1B98568
	public int GetTotalUserCount() { }

	// RVA: 0x1B985B8 Offset: 0x1B985B8 VA: 0x1B985B8
	public int GetTournamentStartTime() { }

	// RVA: 0x1B985DC Offset: 0x1B985DC VA: 0x1B985DC
	public int GetRealUserCount() { }

	// RVA: 0x1B98738 Offset: 0x1B98738 VA: 0x1B98738
	public int GetBotUserCount() { }

	// RVA: 0x1B98890 Offset: 0x1B98890 VA: 0x1B98890
	public string GetTournamentId() { }

	// RVA: 0x1B988B4 Offset: 0x1B988B4 VA: 0x1B988B4
	public int GetRewardStage() { }

	// RVA: 0x1B988CC Offset: 0x1B988CC VA: 0x1B988CC
	public int GetLeaderScore() { }

	// RVA: 0x1B9894C Offset: 0x1B9894C VA: 0x1B9894C
	public long GetAvgProgress() { }

	// RVA: 0x1B98970 Offset: 0x1B98970 VA: 0x1B98970
	public int GetElo() { }

	// RVA: 0x1B98994 Offset: 0x1B98994 VA: 0x1B98994
	public void FinishEvent(DuckFestivalFinishEventParameters parameterCache) { }

	// RVA: 0x1B98A2C Offset: 0x1B98A2C VA: 0x1B98A2C
	public bool ShouldShowLobbyRewardText() { }

	// RVA: 0x1B98A68 Offset: 0x1B98A68 VA: 0x1B98A68
	public string GetLeaderboardId() { }

	// RVA: 0x1B98A80 Offset: 0x1B98A80 VA: 0x1B98A80
	public int GetPreviousElo() { }

	// RVA: 0x1B96958 Offset: 0x1B96958 VA: 0x1B96958
	private void RequestProfileImages() { }

	// RVA: 0x1B98AA4 Offset: 0x1B98AA4 VA: 0x1B98AA4 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x1B98AF4 Offset: 0x1B98AF4 VA: 0x1B98AF4 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x1B98B8C Offset: 0x1B98B8C VA: 0x1B98B8C
	public bool HasVisibleMultiplier() { }

	// RVA: 0x1B98BAC Offset: 0x1B98BAC VA: 0x1B98BAC
	public int GetRemainingMultiplierSeconds() { }

	// RVA: 0x1B98CC4 Offset: 0x1B98CC4 VA: 0x1B98CC4
	public void CacheMultiplierValues() { }

	// RVA: 0x1B98CE0 Offset: 0x1B98CE0 VA: 0x1B98CE0
	public bool HasUncollectedDucks() { }

	// RVA: 0x1B98CE8 Offset: 0x1B98CE8 VA: 0x1B98CE8
	public void OnDuckCollects() { }

	// RVA: 0x1B98CF0 Offset: 0x1B98CF0 VA: 0x1B98CF0
	public DateTimeOffset GetEventEndDate() { }

	// RVA: 0x1B98D60 Offset: 0x1B98D60 VA: 0x1B98D60
	public bool IsAvailableForWheelOfFortune() { }

	// RVA: 0x1B98DC4 Offset: 0x1B98DC4 VA: 0x1B98DC4
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x1B98DEC Offset: 0x1B98DEC VA: 0x1B98DEC
	public int GetDuckCountByLevelDifficulty(LevelDifficultyType difficulty, int multiplier) { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts