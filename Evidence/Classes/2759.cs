public class SkyJumpService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable // TypeDefIndex: 2759
{
	// Fields
	private SkyJumpDataService _dataService; // 0x10
	private SkyJumpRemoteService _remoteService; // 0x18
	private SkyJumpStateService _stateService; // 0x20
	private CustomUpdater _customUpdater; // 0x28
	private RemoteConfigs _remoteConfigs; // 0x30
	private NotificationService _notificationService; // 0x38
	private SecondTimer _secondTimer; // 0x40
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x48
	private bool _claimRequestedManuallyByUser; // 0x50
	[CompilerGenerated]
	private int <NotActiveStatusCode>k__BackingField; // 0x54
	[CompilerGenerated]
	private bool <IsNextRaceIsAvailable>k__BackingField; // 0x58
	[CompilerGenerated]
	private SkyJumpGetNextTournamentStartTimeResponseModel <SkyJumpGetNextTournamentStartTimeResponseModel>k__BackingField; // 0x60
	[CompilerGenerated]
	private bool <ForceShowedJoinPopUpForThisSession>k__BackingField; // 0x68

	// Properties
	public SkyJumpStateService StateService { get; }
	public int NotActiveStatusCode { get; set; }
	public bool IsNextRaceIsAvailable { get; set; }
	public SkyJumpGetNextTournamentStartTimeResponseModel SkyJumpGetNextTournamentStartTimeResponseModel { get; set; }
	public bool ForceShowedJoinPopUpForThisSession { get; set; }

	// Methods

	// RVA: 0x2F15A40 Offset: 0x2F15A40 VA: 0x2F15A40
	public SkyJumpStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x2F15A48 Offset: 0x2F15A48 VA: 0x2F15A48
	public int get_NotActiveStatusCode() { }

	[CompilerGenerated]
	// RVA: 0x2F15A50 Offset: 0x2F15A50 VA: 0x2F15A50
	public void set_NotActiveStatusCode(int value) { }

	[CompilerGenerated]
	// RVA: 0x2F15A58 Offset: 0x2F15A58 VA: 0x2F15A58
	public bool get_IsNextRaceIsAvailable() { }

	[CompilerGenerated]
	// RVA: 0x2F15A60 Offset: 0x2F15A60 VA: 0x2F15A60
	public void set_IsNextRaceIsAvailable(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2F15A6C Offset: 0x2F15A6C VA: 0x2F15A6C
	public SkyJumpGetNextTournamentStartTimeResponseModel get_SkyJumpGetNextTournamentStartTimeResponseModel() { }

	[CompilerGenerated]
	// RVA: 0x2F15A74 Offset: 0x2F15A74 VA: 0x2F15A74
	public void set_SkyJumpGetNextTournamentStartTimeResponseModel(SkyJumpGetNextTournamentStartTimeResponseModel value) { }

	[CompilerGenerated]
	// RVA: 0x2F15A7C Offset: 0x2F15A7C VA: 0x2F15A7C
	public bool get_ForceShowedJoinPopUpForThisSession() { }

	[CompilerGenerated]
	// RVA: 0x2F15A84 Offset: 0x2F15A84 VA: 0x2F15A84
	private void set_ForceShowedJoinPopUpForThisSession(bool value) { }

	// RVA: 0x2F15A90 Offset: 0x2F15A90 VA: 0x2F15A90
	public void .ctor(SkyJumpDataService dataService, SkyJumpRemoteService remoteService, SkyJumpStateService stateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, NotificationService notificationService, ProfileSpriteCacheService profileSpriteCacheService) { }

	// RVA: 0x2F15B58 Offset: 0x2F15B58 VA: 0x2F15B58 Slot: 4
	public void Initialize() { }

	// RVA: 0x2F15BF8 Offset: 0x2F15BF8 VA: 0x2F15BF8 Slot: 5
	public void Dispose() { }

	// RVA: 0x2F15C2C Offset: 0x2F15C2C VA: 0x2F15C2C Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x2F15CA0 Offset: 0x2F15CA0 VA: 0x2F15CA0 Slot: 7
	public void InitializeData() { }

	// RVA: 0x2F15C30 Offset: 0x2F15C30 VA: 0x2F15C30
	private void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(SkyJumpService.<Join>d__33))]
	// RVA: 0x2F16160 Offset: 0x2F16160 VA: 0x2F16160
	public Task<bool> Join() { }

	// RVA: 0x2F16274 Offset: 0x2F16274 VA: 0x2F16274
	public void SendGetRequest() { }

	[AsyncStateMachine(typeof(SkyJumpService.<GetRequest>d__35))]
	// RVA: 0x2F15FD8 Offset: 0x2F15FD8 VA: 0x2F15FD8
	private void GetRequest() { }

	[AsyncStateMachine(typeof(SkyJumpService.<SendGetNextTournamentStartTimeRequest>d__36))]
	// RVA: 0x2F16278 Offset: 0x2F16278 VA: 0x2F16278
	private void SendGetNextTournamentStartTimeRequest() { }

	[AsyncStateMachine(typeof(SkyJumpService.<SendClaimRequest>d__37))]
	// RVA: 0x2F160A8 Offset: 0x2F160A8 VA: 0x2F160A8
	public void SendClaimRequest() { }

	// RVA: 0x2F16330 Offset: 0x2F16330 VA: 0x2F16330
	private void ChangeTournamentCache(SkyJumpResponseModel response) { }

	// RVA: 0x2F15CB8 Offset: 0x2F15CB8 VA: 0x2F15CB8
	private void CacheProfileImages() { }

	// RVA: 0x2F16960 Offset: 0x2F16960 VA: 0x2F16960
	public List<SkyJumpLeaderboardPlayerViewModel> GetViewModelsForSearchAnimation() { }

	// RVA: 0x2F16CF0 Offset: 0x2F16CF0 VA: 0x2F16CF0
	public ValueTuple<List<SkyJumpLeaderboardPlayerViewModel>, List<SkyJumpLeaderboardPlayerViewModel>> GetViewModelsInCurrentScore() { }

	// RVA: 0x2F17160 Offset: 0x2F17160 VA: 0x2F17160
	public ValueTuple<List<SkyJumpLeaderboardPlayerViewModel>, List<SkyJumpLeaderboardPlayerViewModel>> GetViewModelsInMaxScore() { }

	// RVA: 0x2F171B0 Offset: 0x2F171B0 VA: 0x2F171B0
	public ValueTuple<List<SkyJumpLeaderboardPlayerViewModel>, List<SkyJumpLeaderboardPlayerViewModel>> GetViewModelsInPreviousScore() { }

	// RVA: 0x2F171CC Offset: 0x2F171CC VA: 0x2F171CC
	public List<SkyJumpLeaderboardPlayerViewModel> GetSharingRewardsWith() { }

	// RVA: 0x2F16D40 Offset: 0x2F16D40 VA: 0x2F16D40
	private ValueTuple<List<SkyJumpLeaderboardPlayerViewModel>, List<SkyJumpLeaderboardPlayerViewModel>> GetUsersInThisStep(int step) { }

	// RVA: 0x2F1684C Offset: 0x2F1684C VA: 0x2F1684C
	private SkyJumpLeaderboardPlayerViewModel GetViewModel(Dictionary<string, string> playerImages, string userId) { }

	// RVA: 0x2F172D0 Offset: 0x2F172D0 VA: 0x2F172D0
	public SkyJumpCacheModel GetCachedModel() { }

	// RVA: 0x2F172F4 Offset: 0x2F172F4 VA: 0x2F172F4
	public int GetRemainingSeconds() { }

	// RVA: 0x2F17404 Offset: 0x2F17404 VA: 0x2F17404
	public DateTime GetEndDate() { }

	// RVA: 0x2F174C4 Offset: 0x2F174C4 VA: 0x2F174C4
	public long GetStartTimeAsUnix() { }

	// RVA: 0x2F174F8 Offset: 0x2F174F8 VA: 0x2F174F8
	public long GetEndTimeAsUnix() { }

	// RVA: 0x2F1752C Offset: 0x2F1752C VA: 0x2F1752C
	public DateTime GetNextTournamentStartTime() { }

	// RVA: 0x2F175DC Offset: 0x2F175DC VA: 0x2F175DC
	public DateTime GetNextTournamentEndTime() { }

	// RVA: 0x2F1768C Offset: 0x2F1768C VA: 0x2F1768C
	private void ScheduleLeaderboardFetchOnTimerEnd() { }

	// RVA: 0x2F17770 Offset: 0x2F17770 VA: 0x2F17770
	public bool TryFall() { }

	// RVA: 0x2F177E8 Offset: 0x2F177E8 VA: 0x2F177E8
	public bool TryIncreaseScore() { }

	// RVA: 0x2F16D0C Offset: 0x2F16D0C VA: 0x2F16D0C
	public int GetScore() { }

	// RVA: 0x2F17860 Offset: 0x2F17860 VA: 0x2F17860
	public int GetLastSeenScore() { }

	// RVA: 0x2F17894 Offset: 0x2F17894 VA: 0x2F17894
	public bool IsScoreIncreasedSinceLastSeen() { }

	// RVA: 0x2F178C4 Offset: 0x2F178C4 VA: 0x2F178C4
	public void UpdateLastSeen() { }

	// RVA: 0x2F178DC Offset: 0x2F178DC VA: 0x2F178DC
	public bool IsPlayerReachedMaxScore() { }

	// RVA: 0x2F1728C Offset: 0x2F1728C VA: 0x2F1728C
	public int GetMaxReachableScore() { }

	// RVA: 0x2F17918 Offset: 0x2F17918 VA: 0x2F17918
	public void MarkEventIntroduced() { }

	// RVA: 0x2F17930 Offset: 0x2F17930 VA: 0x2F17930
	public void ClaimLocally(bool didWin) { }

	// RVA: 0x2F17A04 Offset: 0x2F17A04 VA: 0x2F17A04
	public int GetWinnerCount() { }

	// RVA: 0x2F17B0C Offset: 0x2F17B0C VA: 0x2F17B0C
	public int GetSharingRewardsWithUserCount() { }

	// RVA: 0x2F17B20 Offset: 0x2F17B20 VA: 0x2F17B20
	public RewardModel GetPlayerReward() { }

	// RVA: 0x2F17BD0 Offset: 0x2F17BD0 VA: 0x2F17BD0
	public void TryMarkForceShowedJoinPopUpForSession() { }

	// RVA: 0x2F17DFC Offset: 0x2F17DFC VA: 0x2F17DFC
	public string GetTournamentId() { }

	// RVA: 0x2F17E64 Offset: 0x2F17E64 VA: 0x2F17E64
	public bool DidPlayerWin() { }

	// RVA: 0x2F17294 Offset: 0x2F17294 VA: 0x2F17294
	public bool DidPlayerLost() { }

	// RVA: 0x2F17EBC Offset: 0x2F17EBC VA: 0x2F17EBC
	public bool DidPlayerFallDown() { }

	// RVA: 0x2F17A3C Offset: 0x2F17A3C VA: 0x2F17A3C
	public int GetUserCountInStep(int step) { }

	// RVA: 0x2F1717C Offset: 0x2F1717C VA: 0x2F1717C
	public int GetMaxScoreReached() { }

	// RVA: 0x2F17EF8 Offset: 0x2F17EF8 VA: 0x2F17EF8
	public void IncreaseWinRecord() { }

	// RVA: 0x2F17F10 Offset: 0x2F17F10 VA: 0x2F17F10
	public int GetWinRecord() { }

	// RVA: 0x2F11808 Offset: 0x2F11808 VA: 0x2F11808
	public void OnJoinPopupOpened() { }

	// RVA: 0x2F17F28 Offset: 0x2F17F28 VA: 0x2F17F28
	public int GetLiveOpsStateForLevelEvent() { }

	[CompilerGenerated]
	// RVA: 0x2F17F74 Offset: 0x2F17F74 VA: 0x2F17F74
	private void <ScheduleLeaderboardFetchOnTimerEnd>b__54_0() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts