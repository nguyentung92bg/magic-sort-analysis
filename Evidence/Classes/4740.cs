public class ChampionsLeagueService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable, IIntervalUpdate // TypeDefIndex: 4740
{
	// Fields
	private readonly ChampionsLeagueStateService _stateService; // 0x10
	private readonly ChampionsLeagueRemoteService _championsLeagueRemoteService; // 0x18
	private readonly ChampionsLeagueDataService _championsLeagueDataService; // 0x20
	private readonly IPlayerService _playerService; // 0x28
	private readonly UserProfileService _userProfileService; // 0x30
	private readonly RemoteConfigs _remoteConfigs; // 0x38
	private readonly CustomUpdater _customUpdater; // 0x40
	private bool _isInInvalidState; // 0x48
	private bool _isPreJoinRequestScheduled; // 0x49
	private SecondTimer _secondTimer; // 0x50

	// Methods

	// RVA: 0x3B2CB94 Offset: 0x3B2CB94 VA: 0x3B2CB94
	public void .ctor(IPlayerService playerService, ChampionsLeagueStateService stateService, ChampionsLeagueRemoteService championsLeagueRemoteService, ChampionsLeagueDataService championsLeagueDataService, RemoteConfigs remoteConfigs, CustomUpdater customUpdater, UserProfileService userProfileService) { }

	// RVA: 0x3B2CC68 Offset: 0x3B2CC68 VA: 0x3B2CC68 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B2CCF4 Offset: 0x3B2CCF4 VA: 0x3B2CCF4 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B2CD28 Offset: 0x3B2CD28 VA: 0x3B2CD28 Slot: 7
	public void IntervalUpdate() { }

	// RVA: 0x3B2CDE4 Offset: 0x3B2CDE4 VA: 0x3B2CDE4 Slot: 6
	public void InitializeData() { }

	// RVA: 0x3B2CDE8 Offset: 0x3B2CDE8 VA: 0x3B2CDE8
	public bool IsActive() { }

	// RVA: 0x3B2CE24 Offset: 0x3B2CE24 VA: 0x3B2CE24
	public bool ShouldShowInProfile() { }

	// RVA: 0x3B2CE60 Offset: 0x3B2CE60 VA: 0x3B2CE60
	public bool ShouldShowInProfile(int level) { }

	// RVA: 0x3B2CEB4 Offset: 0x3B2CEB4 VA: 0x3B2CEB4
	public List<IChampionsLeagueLeaderboardViewModel> GetLeaderboardPlayers() { }

	// RVA: 0x3B2D5C8 Offset: 0x3B2D5C8 VA: 0x3B2D5C8
	private bool CanPromoteThisLeague() { }

	// RVA: 0x3B2D5E0 Offset: 0x3B2D5E0 VA: 0x3B2D5E0
	private bool CanDemoteThisLeague() { }

	// RVA: 0x3B21414 Offset: 0x3B21414 VA: 0x3B21414
	public int GetLastElo() { }

	// RVA: 0x3B2363C Offset: 0x3B2363C VA: 0x3B2363C
	public int GetMyPlayerRank() { }

	// RVA: 0x3B2D70C Offset: 0x3B2D70C VA: 0x3B2D70C
	public int GetMyPlayerScore() { }

	// RVA: 0x3B2D748 Offset: 0x3B2D748 VA: 0x3B2D748
	public bool GetMyPlayerPromotionZoneState() { }

	// RVA: 0x3B25990 Offset: 0x3B25990 VA: 0x3B25990
	public Nullable<int> GetMyPlayerLastSeenRank() { }

	// RVA: 0x3B2D77C Offset: 0x3B2D77C VA: 0x3B2D77C
	public void SetMyPlayerLastSeenRank(int lastSeenRank) { }

	// RVA: 0x3B2D794 Offset: 0x3B2D794 VA: 0x3B2D794
	public Nullable<bool> GetMyPlayerLastSeenPromotionZoneState() { }

	// RVA: 0x3B2D7B4 Offset: 0x3B2D7B4 VA: 0x3B2D7B4
	public void SetMyPlayerLastSeenPromotionZoneState(bool isInPromotionZone) { }

	// RVA: 0x3B2D7D0 Offset: 0x3B2D7D0 VA: 0x3B2D7D0
	public Nullable<int> GetMyPlayerLastSeenScore() { }

	// RVA: 0x3B2D7E8 Offset: 0x3B2D7E8 VA: 0x3B2D7E8
	public void SetMyPlayerLastSeenScore(int lastSeenScore) { }

	// RVA: 0x3B2D800 Offset: 0x3B2D800 VA: 0x3B2D800
	public bool CanShowLobbyButton() { }

	// RVA: 0x3B23390 Offset: 0x3B23390 VA: 0x3B23390
	public bool CanShowPreJoinPopup() { }

	// RVA: 0x3B2D8E0 Offset: 0x3B2D8E0 VA: 0x3B2D8E0
	public bool IsInPreJoin() { }

	// RVA: 0x3B2D91C Offset: 0x3B2D91C VA: 0x3B2D91C
	public int GetPreJoinScore() { }

	// RVA: 0x3B2D934 Offset: 0x3B2D934 VA: 0x3B2D934
	public int GetTargetPreJoinScore() { }

	// RVA: 0x3B23378 Offset: 0x3B23378 VA: 0x3B23378
	public bool CanShowJoinPopup() { }

	// RVA: 0x3B233A8 Offset: 0x3B233A8 VA: 0x3B233A8
	public bool CanShowLeaderboard() { }

	// RVA: 0x3B23A78 Offset: 0x3B23A78 VA: 0x3B23A78
	public bool CanShowLeaderboardResult() { }

	// RVA: 0x3B233E8 Offset: 0x3B233E8 VA: 0x3B233E8
	public bool ShouldEnforceGetLeaderboard() { }

	// RVA: 0x3B2DA08 Offset: 0x3B2DA08 VA: 0x3B2DA08
	public bool HasAvailableLeaderboardData() { }

	// RVA: 0x3B23400 Offset: 0x3B23400 VA: 0x3B23400
	public bool IsInLocalTimeFinishedClaimable() { }

	// RVA: 0x3B2DA44 Offset: 0x3B2DA44 VA: 0x3B2DA44
	public bool CanShowClaimButton() { }

	// RVA: 0x3B2D6B8 Offset: 0x3B2D6B8 VA: 0x3B2D6B8
	public bool IsLeaderboardEntitySelectable() { }

	// RVA: 0x3B23428 Offset: 0x3B23428 VA: 0x3B23428
	public bool IsClaimed() { }

	// RVA: 0x3B2DAC0 Offset: 0x3B2DAC0 VA: 0x3B2DAC0
	public bool CanShowAreYouSure() { }

	// RVA: 0x3B258A8 Offset: 0x3B258A8 VA: 0x3B258A8
	public bool CanShowProgressIncrease() { }

	// RVA: 0x3B23464 Offset: 0x3B23464 VA: 0x3B23464
	public bool TryGrantRewards(out RewardModel rewards) { }

	// RVA: 0x3B2D5F8 Offset: 0x3B2D5F8 VA: 0x3B2D5F8
	private bool TryGetRewardsOfRank(long rank, out RewardModel rewardModel) { }

	// RVA: 0x3B2DAFC Offset: 0x3B2DAFC VA: 0x3B2DAFC
	private List<RewardModel> GetEloRewards(int elo) { }

	// RVA: 0x3B23568 Offset: 0x3B23568 VA: 0x3B23568
	public PromotionInfo GetPromotionInfo() { }

	// RVA: 0x3B2D6D0 Offset: 0x3B2D6D0 VA: 0x3B2D6D0
	public int GetCurrentElo() { }

	// RVA: 0x3B2DC24 Offset: 0x3B2DC24 VA: 0x3B2DC24
	public DateTime GetEndDate() { }

	// RVA: 0x3B2DD34 Offset: 0x3B2DD34 VA: 0x3B2DD34
	public int GetRemainingSecondsToPreJoinWindow() { }

	// RVA: 0x3B2DD4C Offset: 0x3B2DD4C VA: 0x3B2DD4C
	public void SavePreClaimState() { }

	// RVA: 0x3B23538 Offset: 0x3B23538 VA: 0x3B23538
	public void SaveTournamentRewardClaimState() { }

	// RVA: 0x3B2344C Offset: 0x3B2344C VA: 0x3B2344C
	public bool IsTournamentRewardAlreadyClaimed() { }

	// RVA: 0x3B2360C Offset: 0x3B2360C VA: 0x3B2360C
	public void SavePromotionAnimationShownState() { }

	// RVA: 0x3B23550 Offset: 0x3B23550 VA: 0x3B23550
	public bool IsPromotionAnimationAlreadyShown() { }

	// RVA: 0x3B2DD64 Offset: 0x3B2DD64 VA: 0x3B2DD64
	public int GetDemotionCountInCurrentElo() { }

	// RVA: 0x3B23708 Offset: 0x3B23708 VA: 0x3B23708
	public int GetPromotionCountOfElo(int elo) { }

	// RVA: 0x3B2DD8C Offset: 0x3B2DD8C VA: 0x3B2DD8C
	private void AttemptToIncreaseProfileWinCount() { }

	// RVA: 0x3B23678 Offset: 0x3B23678 VA: 0x3B23678
	public string GetEloLocalizationKey(int elo) { }

	// RVA: 0x3B2DDD8 Offset: 0x3B2DDD8 VA: 0x3B2DDD8
	public string GetLeagueLocalizationKey(int elo) { }

	// RVA: 0x3B2DE68 Offset: 0x3B2DE68 VA: 0x3B2DE68
	public ChampionsLeagueProfileData GetProfileData() { }

	[AsyncStateMachine(typeof(ChampionsLeagueService.<FetchCurrentEvent>d__65))]
	// RVA: 0x3B2CD2C Offset: 0x3B2CD2C VA: 0x3B2CD2C
	private void FetchCurrentEvent() { }

	// RVA: 0x3B2DEA4 Offset: 0x3B2DEA4 VA: 0x3B2DEA4
	private void FetchOnTimerEnd() { }

	// RVA: 0x3B2DEA8 Offset: 0x3B2DEA8 VA: 0x3B2DEA8
	public void OnLevelWin() { }

	// RVA: 0x3B23720 Offset: 0x3B23720 VA: 0x3B23720
	public void FinishEvent() { }

	// RVA: 0x3B23424 Offset: 0x3B23424 VA: 0x3B23424
	public void ForceFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(ChampionsLeagueService.<SendGetLeaderboardRequestAsync>d__70))]
	// RVA: 0x3B2E05C Offset: 0x3B2E05C VA: 0x3B2E05C
	private Task SendGetLeaderboardRequestAsync() { }

	[AsyncStateMachine(typeof(ChampionsLeagueService.<SendGetPreJoinScoreRequestAsync>d__71))]
	// RVA: 0x3B2E148 Offset: 0x3B2E148 VA: 0x3B2E148
	private Task SendGetPreJoinScoreRequestAsync() { }

	[AsyncStateMachine(typeof(ChampionsLeagueService.<SendPreJoinRequestAsync>d__72))]
	// RVA: 0x3B2E234 Offset: 0x3B2E234 VA: 0x3B2E234
	private Task SendPreJoinRequestAsync() { }

	// RVA: 0x3B2E320 Offset: 0x3B2E320 VA: 0x3B2E320
	private void FetchAndClearPreJoinRequestState() { }

	[AsyncStateMachine(typeof(ChampionsLeagueService.<SendJoinRequestAsync>d__74))]
	// RVA: 0x3B2E338 Offset: 0x3B2E338 VA: 0x3B2E338
	public Task<bool> SendJoinRequestAsync() { }

	[AsyncStateMachine(typeof(ChampionsLeagueService.<SendClaimRequestAsync>d__75))]
	// RVA: 0x3B2E44C Offset: 0x3B2E44C VA: 0x3B2E44C
	public Task<bool> SendClaimRequestAsync() { }

	// RVA: 0x3B2E564 Offset: 0x3B2E564 VA: 0x3B2E564
	private bool IsTournamentIdValid(string tournamentId) { }

	// RVA: -1 Offset: -1
	private bool ValidateResponse<T>(ApiResponse<T> response) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x271B50C Offset: 0x271B50C VA: 0x271B50C
	|-ChampionsLeagueService.ValidateResponse<object>
	*/

	// RVA: 0x3B2E5BC Offset: 0x3B2E5BC VA: 0x3B2E5BC
	public void ResetLeaderboardCheat() { }

	// RVA: 0x3B2E5D4 Offset: 0x3B2E5D4 VA: 0x3B2E5D4
	public void SetPreviousScoreOnQuit() { }

	// RVA: 0x3B2E644 Offset: 0x3B2E644 VA: 0x3B2E644
	public bool ShouldPlayPlayButtonAnimation() { }

	// RVA: 0x3B2E7C8 Offset: 0x3B2E7C8 VA: 0x3B2E7C8
	public bool IsCrownEnabled() { }

	// RVA: 0x3B2E7EC Offset: 0x3B2E7EC VA: 0x3B2E7EC
	public void IncreaseProgressBy10Cheat() { }

	// RVA: 0x3B23A60 Offset: 0x3B23A60 VA: 0x3B23A60
	public ChampionsLeagueSessionCacheModel GetSessionCacheModel() { }

	// RVA: 0x3B2E8C0 Offset: 0x3B2E8C0 VA: 0x3B2E8C0
	public string GetTournamentId() { }

	// RVA: 0x3B2E934 Offset: 0x3B2E934 VA: 0x3B2E934
	public long GetStartTimeAsUnix() { }

	// RVA: 0x3B2E94C Offset: 0x3B2E94C VA: 0x3B2E94C
	public int GetRemainingSecondsOfEvent() { }

	// RVA: 0x3B23624 Offset: 0x3B23624 VA: 0x3B23624
	public void SavePreviousPromotionInfo(PromotionInfo promotionInfo) { }

	// RVA: 0x3B2E964 Offset: 0x3B2E964 VA: 0x3B2E964
	public int GetPreviousPromotionInfo() { }

	// RVA: 0x3B2E97C Offset: 0x3B2E97C VA: 0x3B2E97C
	public int GetPlayerCountInTheLeague() { }

	// RVA: 0x3B2E9E4 Offset: 0x3B2E9E4 VA: 0x3B2E9E4
	public int GetLeaderScore() { }

	// RVA: 0x3B2EA7C Offset: 0x3B2EA7C VA: 0x3B2EA7C
	public int GetJoinStateForAnalyticsEvents() { }

	// RVA: 0x3B2EAB8 Offset: 0x3B2EAB8 VA: 0x3B2EAB8
	public bool CanShowLeaguePoster() { }

	// RVA: 0x3B2EAEC Offset: 0x3B2EAEC VA: 0x3B2EAEC
	public bool CanSelectLeaguePoster() { }

	// RVA: 0x3B2EB20 Offset: 0x3B2EB20 VA: 0x3B2EB20
	public bool GetPosterSelected() { }

	// RVA: 0x3B2EB38 Offset: 0x3B2EB38 VA: 0x3B2EB38
	public void SetPosterSelected(bool selected) { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.Services