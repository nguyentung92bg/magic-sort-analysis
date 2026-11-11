public class MagicStreakService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3734
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private MagicStreakStateService _stateService; // 0x18
	private MagicStreakRemoteService _remoteService; // 0x20
	private MagicStreakDataService _dataService; // 0x28
	private CustomUpdater _customUpdater; // 0x30
	private IPlayerService _playerService; // 0x38
	private NotificationService _notificationService; // 0x40
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x48
	private SecondTimer _secondTimer; // 0x50
	private List<int> _multipliers; // 0x58
	private List<MagicStreakProgressbarRewardElementViewModel> _progressbarRewards; // 0x60
	private List<MagicStreakTournamentLeaderboardPlayerViewModel> _cachedLeaderboard; // 0x68

	// Properties
	public MagicStreakStateService StateService { get; }
	public MagicStreakDataService DataService { get; }

	// Methods

	// RVA: 0x411DAF0 Offset: 0x411DAF0 VA: 0x411DAF0
	public MagicStreakStateService get_StateService() { }

	// RVA: 0x411DAF8 Offset: 0x411DAF8 VA: 0x411DAF8
	public MagicStreakDataService get_DataService() { }

	// RVA: 0x411DB00 Offset: 0x411DB00 VA: 0x411DB00
	public void .ctor(MagicStreakStateService stateService, MagicStreakRemoteService remoteService, MagicStreakDataService dataService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, IPlayerService playerService, NotificationService notificationService, ProfileSpriteCacheService profileSpriteCacheService) { }

	// RVA: 0x411DBD4 Offset: 0x411DBD4 VA: 0x411DBD4 Slot: 4
	public void Initialize() { }

	// RVA: 0x411E12C Offset: 0x411E12C VA: 0x411E12C Slot: 5
	public void Dispose() { }

	// RVA: 0x411E160 Offset: 0x411E160 VA: 0x411E160 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x411E1B8 Offset: 0x411E1B8 VA: 0x411E1B8 Slot: 7
	public void InitializeData() { }

	// RVA: 0x411E460 Offset: 0x411E460 VA: 0x411E460
	public void ClaimTournamentReward() { }

	// RVA: 0x411E164 Offset: 0x411E164 VA: 0x411E164
	private void TryFetchCurrentEvent() { }

	// RVA: 0x411E8FC Offset: 0x411E8FC VA: 0x411E8FC
	private MagicStreakTournamentRequestModel CreateRequestModel() { }

	[AsyncStateMachine(typeof(MagicStreakService.<FetchCurrentEvent>d__24))]
	// RVA: 0x411E78C Offset: 0x411E78C VA: 0x411E78C
	private void FetchCurrentEvent() { }

	[AsyncStateMachine(typeof(MagicStreakService.<SendClaimRequest>d__25))]
	// RVA: 0x411E844 Offset: 0x411E844 VA: 0x411E844
	private void SendClaimRequest() { }

	// RVA: 0x411EA80 Offset: 0x411EA80 VA: 0x411EA80
	private void ChangeTournamentCache(MagicStreakTournamentResponse response) { }

	// RVA: 0x411E2E4 Offset: 0x411E2E4 VA: 0x411E2E4
	private void CacheProfileImages() { }

	// RVA: 0x411EBC8 Offset: 0x411EBC8 VA: 0x411EBC8
	public void OnFeatureIntroduced() { }

	// RVA: 0x411ED90 Offset: 0x411ED90 VA: 0x411ED90
	public List<MagicStreakTournamentLeaderboardPlayerViewModel> GetLeaderboard() { }

	// RVA: 0x411EDB4 Offset: 0x411EDB4 VA: 0x411EDB4
	private void UpdateLeaderboard() { }

	// RVA: 0x411EF60 Offset: 0x411EF60 VA: 0x411EF60
	private List<MagicStreakTournamentLeaderboardPlayerViewModel> CreateLeaderboard(MagicStreakTournamentModel cachedModel) { }

	// RVA: 0x411F154 Offset: 0x411F154 VA: 0x411F154
	private int ChoosePlayerScore(bool isMe, bool isFinished, int localScore, int remoteScore) { }

	// RVA: 0x411F07C Offset: 0x411F07C VA: 0x411F07C
	private void AssignTournamentRewardsAndSetRanks(List<MagicStreakTournamentLeaderboardPlayerViewModel> sortedLeaderboard) { }

	// RVA: 0x411F16C Offset: 0x411F16C VA: 0x411F16C
	private void AssignTournamentRewardToPlayer(MagicStreakTournamentLeaderboardPlayerViewModel player, int rankIndex, TournamentRewards rewardsConfig) { }

	// RVA: 0x411EC80 Offset: 0x411EC80 VA: 0x411EC80
	public int GetRemainingSeconds() { }

	// RVA: 0x411F1E8 Offset: 0x411F1E8 VA: 0x411F1E8
	public DateTime GetEndDate() { }

	// RVA: 0x411F2A8 Offset: 0x411F2A8 VA: 0x411F2A8
	private void ScheduleLeaderboardFetchOnTimerEnd() { }

	[AsyncStateMachine(typeof(MagicStreakService.<SendSetScoreRequest>d__38))]
	// RVA: 0x411F38C Offset: 0x411F38C VA: 0x411F38C
	public void SendSetScoreRequest() { }

	// RVA: 0x411F444 Offset: 0x411F444 VA: 0x411F444
	public MagicStreakTournamentPopupStateType GetPopupState() { }

	// RVA: 0x411F460 Offset: 0x411F460 VA: 0x411F460
	public void IncreaseAllScores() { }

	// RVA: 0x411F510 Offset: 0x411F510 VA: 0x411F510
	private void IncreaseTournamentScore(int scoreIncrement) { }

	// RVA: 0x411F540 Offset: 0x411F540 VA: 0x411F540
	private void IncreaseProgressbarRewardScore(int scoreIncrement) { }

	// RVA: 0x411E69C Offset: 0x411E69C VA: 0x411E69C
	private void ResetProgressbarRewardScoreAndMultiplierIndex() { }

	// RVA: 0x411E1E0 Offset: 0x411E1E0 VA: 0x411E1E0
	public void CacheLastSeenProgressbarValues() { }

	[CanBeNull]
	// RVA: 0x411F730 Offset: 0x411F730 VA: 0x411F730
	public List<RewardModel> GetEarnedProgressbarRewards() { }

	// RVA: 0x411F89C Offset: 0x411F89C VA: 0x411F89C
	public void ResetProgressbarLobbyRewardAnimationCache() { }

	// RVA: 0x411F8A0 Offset: 0x411F8A0 VA: 0x411F8A0
	public bool ShouldPlayProgressbarRewardAnimationLobbyReturn() { }

	// RVA: 0x411F684 Offset: 0x411F684 VA: 0x411F684
	private void IncreaseMultiplier() { }

	// RVA: 0x411F8F8 Offset: 0x411F8F8 VA: 0x411F8F8
	public int GetCurrentMultiplierIndex() { }

	// RVA: 0x411F91C Offset: 0x411F91C VA: 0x411F91C
	public void CacheMultiplierDataOnLevelStart() { }

	// RVA: 0x411F940 Offset: 0x411F940 VA: 0x411F940
	public void ResetMultiplierOnLevelEnd() { }

	// RVA: 0x411F96C Offset: 0x411F96C VA: 0x411F96C
	public void ResetStreakCountForAnimation() { }

	// RVA: 0x411F990 Offset: 0x411F990 VA: 0x411F990
	public int GetStreakCountForAnimation() { }

	// RVA: 0x411F9B0 Offset: 0x411F9B0 VA: 0x411F9B0
	public int GetAddedTournamentScoreForAnimation() { }

	// RVA: 0x411FA70 Offset: 0x411FA70 VA: 0x411FA70
	public void SendGetLeaderboardRequest() { }

	// RVA: 0x411E528 Offset: 0x411E528 VA: 0x411E528
	public int GetRank() { }

	// RVA: 0x411FA74 Offset: 0x411FA74 VA: 0x411FA74
	public int GetLiveOpsStateForLevelEvent() { }

	// RVA: 0x411FA90 Offset: 0x411FA90 VA: 0x411FA90
	public int GetRankIndex() { }

	// RVA: 0x411DC70 Offset: 0x411DC70 VA: 0x411DC70
	private void CreateProgressbarRewards() { }

	// RVA: 0x411FAA8 Offset: 0x411FAA8 VA: 0x411FAA8
	public List<MagicStreakProgressbarRewardElementViewModel> GetProgressbarAllRewards() { }

	[CanBeNull]
	// RVA: 0x411FB60 Offset: 0x411FB60 VA: 0x411FB60
	public RewardModel GetProgressbarCurrentReward() { }

	// RVA: 0x411FBEC Offset: 0x411FBEC VA: 0x411FBEC
	public int GetCurrentProgressbarRewardIndex() { }

	// RVA: 0x411FC10 Offset: 0x411FC10 VA: 0x411FC10
	public int GetCurrentProgressbarRewardStepScore() { }

	// RVA: 0x411FC34 Offset: 0x411FC34 VA: 0x411FC34
	public int GetCurrentProgressbarRewardStepMaxScore() { }

	// RVA: 0x411FCDC Offset: 0x411FCDC VA: 0x411FCDC
	public float GetCurrentProgressbarRatio() { }

	// RVA: 0x411FD1C Offset: 0x411FD1C VA: 0x411FD1C
	public float GetLastProgressbarRatio() { }

	// RVA: 0x411DE68 Offset: 0x411DE68 VA: 0x411DE68
	private void CacheMultipliers() { }

	// RVA: 0x411FDC0 Offset: 0x411FDC0 VA: 0x411FDC0
	public List<int> GetMultipliers() { }

	// RVA: 0x411FDC8 Offset: 0x411FDC8 VA: 0x411FDC8
	public string GetFinalRankText() { }

	// RVA: 0x411FE30 Offset: 0x411FE30 VA: 0x411FE30
	public RewardModel GetTournamentReward() { }

	// RVA: 0x411FF14 Offset: 0x411FF14 VA: 0x411FF14
	public bool ShouldForceOpenPopup() { }

	// RVA: 0x411FF30 Offset: 0x411FF30 VA: 0x411FF30
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x411FF4C Offset: 0x411FF4C VA: 0x411FF4C
	public bool ShouldShowBanner() { }

	// RVA: 0x411FF94 Offset: 0x411FF94 VA: 0x411FF94
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x411FFDC Offset: 0x411FFDC VA: 0x411FFDC
	public void OnInProgressPopupShown() { }

	// RVA: 0x411E208 Offset: 0x411E208 VA: 0x411E208
	private void CacheLastSeenData() { }

	// RVA: 0x411E6D0 Offset: 0x411E6D0 VA: 0x411E6D0
	public void ResetLastSeenData() { }

	// RVA: 0x4120014 Offset: 0x4120014 VA: 0x4120014
	public int GetLastSeenRank() { }

	// RVA: 0x411FFE0 Offset: 0x411FFE0 VA: 0x411FFE0
	public int GetScore() { }

	// RVA: 0x4120030 Offset: 0x4120030 VA: 0x4120030
	public int GetLastSeenScore() { }

	// RVA: 0x412004C Offset: 0x412004C VA: 0x412004C
	public bool IsRankUp() { }

	// RVA: 0x41200B0 Offset: 0x41200B0 VA: 0x41200B0
	public bool IsElapsedNLevelsSinceLastSeen() { }

	// RVA: 0x412018C Offset: 0x412018C VA: 0x412018C
	public bool ShouldShowScrollBar() { }

	// RVA: 0x41201B8 Offset: 0x41201B8 VA: 0x41201B8
	public bool ShouldSendStat() { }

	// RVA: 0x41201D4 Offset: 0x41201D4 VA: 0x41201D4
	public int GetStreakCount() { }

	// RVA: 0x41201E8 Offset: 0x41201E8 VA: 0x41201E8
	public int GetCurrentMultiplier() { }

	// RVA: 0x4120248 Offset: 0x4120248 VA: 0x4120248
	public long GetStartTimeAsUnix() { }

	// RVA: 0x412027C Offset: 0x412027C VA: 0x412027C
	public int GetClaimedProgressbarStepRank() { }

	// RVA: 0x41202A4 Offset: 0x41202A4 VA: 0x41202A4
	public int GetNeededScoreForProgressbarCurrentStep() { }

	// RVA: 0x4120334 Offset: 0x4120334 VA: 0x4120334
	public RewardModel GetProgressbarClaimedStepReward() { }

	// RVA: 0x41203C4 Offset: 0x41203C4 VA: 0x41203C4
	public int GetTournamentWinCount() { }

	// RVA: 0x411E668 Offset: 0x411E668 VA: 0x411E668
	private void IncreaseTournamentWinCount() { }

	// RVA: 0x41203E8 Offset: 0x41203E8 VA: 0x41203E8 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x4120404 Offset: 0x4120404 VA: 0x4120404 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	[CompilerGenerated]
	// RVA: 0x4120420 Offset: 0x4120420 VA: 0x4120420
	private void <ScheduleLeaderboardFetchOnTimerEnd>b__37_0() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts