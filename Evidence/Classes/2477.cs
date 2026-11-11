public class StrikeShowService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IIntervalUpdate, ILobbyShownService // TypeDefIndex: 2477
{
	// Fields
	private readonly CustomUpdater _customUpdater; // 0x10
	private readonly StrikeShowDataService _dataService; // 0x18
	private readonly StrikeShowStateService _stateService; // 0x20
	private readonly StrikeShowRemoteService _remoteService; // 0x28
	private readonly AssetManager _assetManager; // 0x30
	private readonly LobbyEventsService _lobbyEventsService; // 0x38
	private const int NotActiveStatusCode = 425;
	private const long NonClaimableFinishStateInt = 5;
	private const string StrikeShowBundleId = "strike_show_bundle";
	private SecondTimer _secondTimer; // 0x40

	// Methods

	// RVA: 0x2AF6360 Offset: 0x2AF6360 VA: 0x2AF6360
	public void .ctor(CustomUpdater customUpdater, StrikeShowDataService dataService, StrikeShowStateService stateService, StrikeShowRemoteService remoteService, AssetManager assetManager, LobbyEventsService lobbyEventsService) { }

	// RVA: 0x2AF6404 Offset: 0x2AF6404 VA: 0x2AF6404 Slot: 4
	public void Initialize() { }

	// RVA: 0x2AF6490 Offset: 0x2AF6490 VA: 0x2AF6490 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(StrikeShowService.<InitializeData>d__13))]
	// RVA: 0x2AF64C4 Offset: 0x2AF64C4 VA: 0x2AF64C4 Slot: 6
	public void InitializeData() { }

	// RVA: 0x2AF657C Offset: 0x2AF657C VA: 0x2AF657C Slot: 7
	public void IntervalUpdate() { }

	// RVA: 0x2AF6738 Offset: 0x2AF6738 VA: 0x2AF6738
	public int GetRemainingSeconds() { }

	// RVA: 0x2AF6844 Offset: 0x2AF6844 VA: 0x2AF6844
	public void ForceFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(StrikeShowService.<RefreshLeaderboardSilently>d__17))]
	// RVA: 0x2AF6848 Offset: 0x2AF6848 VA: 0x2AF6848
	public void RefreshLeaderboardSilently() { }

	[AsyncStateMachine(typeof(StrikeShowService.<FetchCurrentEvent>d__18))]
	// RVA: 0x2AF6680 Offset: 0x2AF6680 VA: 0x2AF6680
	private void FetchCurrentEvent() { }

	[AsyncStateMachine(typeof(StrikeShowService.<TryClaimAsync>d__19))]
	// RVA: 0x2AF6900 Offset: 0x2AF6900 VA: 0x2AF6900
	public Task<bool> TryClaimAsync() { }

	// RVA: 0x2AF6A14 Offset: 0x2AF6A14 VA: 0x2AF6A14
	private void TryUpdateEventDataFromPreJoinResponse(ApiResponse<GetPreJoinStrikeShowResponse> response) { }

	// RVA: 0x2AF6BE8 Offset: 0x2AF6BE8 VA: 0x2AF6BE8
	private void TryUpdateEventDataFromLeaderboardResponse(ApiResponse<StrikeShowLeaderboardResponse> response) { }

	// RVA: 0x2AF6D74 Offset: 0x2AF6D74 VA: 0x2AF6D74
	private void ApplyLocalScoreToLeaderboard() { }

	// RVA: 0x2AF6DF8 Offset: 0x2AF6DF8 VA: 0x2AF6DF8
	private void TryIncreaseWinCount() { }

	// RVA: 0x2AF6E48 Offset: 0x2AF6E48 VA: 0x2AF6E48
	public void OnLevelWin(LevelDifficultyType difficulty, int multiplier) { }

	// RVA: 0x2AF71C0 Offset: 0x2AF71C0 VA: 0x2AF71C0
	public void OnLevelLose() { }

	// RVA: 0x2AF71F8 Offset: 0x2AF71F8 VA: 0x2AF71F8
	public void MarkIntroduced() { }

	// RVA: 0x2AF7224 Offset: 0x2AF7224 VA: 0x2AF7224
	public void MarkEventPopupIntroduced() { }

	// RVA: 0x2AF7240 Offset: 0x2AF7240 VA: 0x2AF7240
	public void MarkInfoPopupShown() { }

	// RVA: 0x2AF726C Offset: 0x2AF726C VA: 0x2AF726C
	public bool IsClaimed() { }

	// RVA: 0x2AF7284 Offset: 0x2AF7284 VA: 0x2AF7284
	public StrikeShowLobbyIconViewModel GetLobbyButtonViewModel() { }

	// RVA: 0x2AF747C Offset: 0x2AF747C VA: 0x2AF747C
	public StrikeShowEventPopupArguments GetEventPopupArguments() { }

	// RVA: 0x2AF7628 Offset: 0x2AF7628 VA: 0x2AF7628
	private List<StrikeShowLeaderboardPlayerViewModel> GetLeaderboardViewModels(bool isClaimLeaderboard) { }

	// RVA: 0x2AF7DE4 Offset: 0x2AF7DE4 VA: 0x2AF7DE4
	public List<RewardModel> GetMyRewards() { }

	// RVA: 0x2AF7B10 Offset: 0x2AF7B10 VA: 0x2AF7B10
	private List<RewardModel> GetRewardsOfRank(int rank) { }

	// RVA: 0x2AF7E18 Offset: 0x2AF7E18 VA: 0x2AF7E18
	private List<List<RewardModel>> GetLeaderboardRewardsOfLeague(StrikeShowLeagueType league) { }

	// RVA: 0x2AF7A94 Offset: 0x2AF7A94 VA: 0x2AF7A94
	public List<int> GetMultipliers() { }

	// RVA: 0x2AF711C Offset: 0x2AF711C VA: 0x2AF711C
	public int GetCurrentMultiplier() { }

	// RVA: 0x2AF797C Offset: 0x2AF797C VA: 0x2AF797C
	public int GetCurrentMultiplierIndex() { }

	// RVA: 0x2AF7E68 Offset: 0x2AF7E68 VA: 0x2AF7E68
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x2AF7E80 Offset: 0x2AF7E80 VA: 0x2AF7E80
	public bool ShouldShowInLevelWinScreen() { }

	// RVA: 0x2AF7EF8 Offset: 0x2AF7EF8 VA: 0x2AF7EF8 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x2AF7F30 Offset: 0x2AF7F30 VA: 0x2AF7F30 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x2AF70D0 Offset: 0x2AF70D0 VA: 0x2AF70D0
	public int GetEventScoreByLevelDifficulty(LevelDifficultyType difficulty, int multiplier, bool forLevelWin = False) { }

	// RVA: 0x2AF7F90 Offset: 0x2AF7F90 VA: 0x2AF7F90
	private int GetScoreOfDifficulty(LevelDifficultyType difficulty) { }

	// RVA: 0x2AF7FE4 Offset: 0x2AF7FE4 VA: 0x2AF7FE4
	private void ScheduleFetchOnEventEnd() { }

	// RVA: 0x2AF81B8 Offset: 0x2AF81B8 VA: 0x2AF81B8
	private void FetchOnTimerEnd() { }

	// RVA: 0x2AF81BC Offset: 0x2AF81BC VA: 0x2AF81BC
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(StrikeShowService.<CheckAndResolveAssetDependency>d__48))]
	// RVA: 0x2AF6594 Offset: 0x2AF6594 VA: 0x2AF6594
	private Task CheckAndResolveAssetDependency() { }

	// RVA: 0x2AF823C Offset: 0x2AF823C VA: 0x2AF823C
	public DateTime GetEndDate() { }

	// RVA: 0x2AF73CC Offset: 0x2AF73CC VA: 0x2AF73CC
	public DateTime GetShownEndDate() { }

	// RVA: 0x2AF6764 Offset: 0x2AF6764 VA: 0x2AF6764
	private static long GetNowUnixSeconds() { }

	// RVA: 0x2AF82CC Offset: 0x2AF82CC VA: 0x2AF82CC
	public string GetReadableEventId() { }

	// RVA: 0x2AF7DCC Offset: 0x2AF7DCC VA: 0x2AF7DCC
	public StrikeShowLeagueType GetCurrentLeague() { }

	// RVA: 0x2AF83F4 Offset: 0x2AF83F4 VA: 0x2AF83F4
	public StrikeShowPromotionPopupArguments GetPromotionPopupArguments() { }

	// RVA: 0x2AF7AD0 Offset: 0x2AF7AD0 VA: 0x2AF7AD0
	public StrikeShowPromotionState GetMyPromotionState() { }

	// RVA: 0x2AF84DC Offset: 0x2AF84DC VA: 0x2AF84DC
	private StrikeShowLeagueType GetLeagueAfterResult(StrikeShowPromotionState promotionState) { }

	// RVA: 0x2AF859C Offset: 0x2AF859C VA: 0x2AF859C
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x2AF7EC4 Offset: 0x2AF7EC4 VA: 0x2AF7EC4
	public int GetLastScoreIncreaseCount() { }

	// RVA: 0x2AF704C Offset: 0x2AF704C VA: 0x2AF704C
	private void SetLastScoreIncreaseCount(int count) { }

	// RVA: 0x2AF85D8 Offset: 0x2AF85D8 VA: 0x2AF85D8
	public void TrySetLastSeenLobbyButtonProgress() { }

	// RVA: 0x2AF8628 Offset: 0x2AF8628 VA: 0x2AF8628
	public bool ShouldShowStreakAnimationOnLobbyReturn() { }

	// RVA: 0x2AF8660 Offset: 0x2AF8660 VA: 0x2AF8660
	public int GetLastSeenMultiplier() { }

	// RVA: 0x2AF7AB8 Offset: 0x2AF7AB8 VA: 0x2AF7AB8
	public bool IsLeagueEnabled() { }

	// RVA: 0x2AF8694 Offset: 0x2AF8694 VA: 0x2AF8694
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x2AF86DC Offset: 0x2AF86DC VA: 0x2AF86DC
	public StrikeShowInfoPopUpVariantType GetInfoPopUpVariant() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts