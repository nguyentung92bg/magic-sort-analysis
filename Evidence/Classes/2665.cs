public class SkyJumpWithStageService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable // TypeDefIndex: 2665
{
	// Fields
	private SkyJumpWithStageDataService _dataService; // 0x10
	private SkyJumpWithStageRemoteService _remoteService; // 0x18
	private SkyJumpWithStageStateService _stateService; // 0x20
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
	private SkyJumpWithStageGetNextTournamentStartTimeResponseModel <SkyJumpWithStageGetNextTournamentStartTimeResponseModel>k__BackingField; // 0x60
	[CompilerGenerated]
	private bool <ForceShowedJoinPopUpForThisSession>k__BackingField; // 0x68

	// Properties
	public SkyJumpWithStageStateService StateService { get; }
	public int NotActiveStatusCode { get; set; }
	public bool IsNextRaceIsAvailable { get; set; }
	public SkyJumpWithStageGetNextTournamentStartTimeResponseModel SkyJumpWithStageGetNextTournamentStartTimeResponseModel { get; set; }
	public bool ForceShowedJoinPopUpForThisSession { get; set; }

	// Methods

	// RVA: 0x23315E4 Offset: 0x23315E4 VA: 0x23315E4
	public SkyJumpWithStageStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x23315EC Offset: 0x23315EC VA: 0x23315EC
	public int get_NotActiveStatusCode() { }

	[CompilerGenerated]
	// RVA: 0x23315F4 Offset: 0x23315F4 VA: 0x23315F4
	public void set_NotActiveStatusCode(int value) { }

	[CompilerGenerated]
	// RVA: 0x23315FC Offset: 0x23315FC VA: 0x23315FC
	public bool get_IsNextRaceIsAvailable() { }

	[CompilerGenerated]
	// RVA: 0x2331604 Offset: 0x2331604 VA: 0x2331604
	public void set_IsNextRaceIsAvailable(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2331610 Offset: 0x2331610 VA: 0x2331610
	public SkyJumpWithStageGetNextTournamentStartTimeResponseModel get_SkyJumpWithStageGetNextTournamentStartTimeResponseModel() { }

	[CompilerGenerated]
	// RVA: 0x2331618 Offset: 0x2331618 VA: 0x2331618
	public void set_SkyJumpWithStageGetNextTournamentStartTimeResponseModel(SkyJumpWithStageGetNextTournamentStartTimeResponseModel value) { }

	[CompilerGenerated]
	// RVA: 0x2331620 Offset: 0x2331620 VA: 0x2331620
	public bool get_ForceShowedJoinPopUpForThisSession() { }

	[CompilerGenerated]
	// RVA: 0x2331628 Offset: 0x2331628 VA: 0x2331628
	private void set_ForceShowedJoinPopUpForThisSession(bool value) { }

	// RVA: 0x2331634 Offset: 0x2331634 VA: 0x2331634
	public void .ctor(SkyJumpWithStageDataService dataService, SkyJumpWithStageRemoteService remoteService, SkyJumpWithStageStateService stateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, NotificationService notificationService, ProfileSpriteCacheService profileSpriteCacheService) { }

	// RVA: 0x23316FC Offset: 0x23316FC VA: 0x23316FC Slot: 4
	public void Initialize() { }

	// RVA: 0x23317A0 Offset: 0x23317A0 VA: 0x23317A0 Slot: 5
	public void Dispose() { }

	// RVA: 0x23317D4 Offset: 0x23317D4 VA: 0x23317D4 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x2331848 Offset: 0x2331848 VA: 0x2331848 Slot: 7
	public void InitializeData() { }

	// RVA: 0x23317D8 Offset: 0x23317D8 VA: 0x23317D8
	private void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(SkyJumpWithStageService.<Join>d__33))]
	// RVA: 0x2331D08 Offset: 0x2331D08 VA: 0x2331D08
	public Task<bool> Join() { }

	// RVA: 0x2331E1C Offset: 0x2331E1C VA: 0x2331E1C
	public void SendGetRequest() { }

	[AsyncStateMachine(typeof(SkyJumpWithStageService.<GetRequest>d__35))]
	// RVA: 0x2331B80 Offset: 0x2331B80 VA: 0x2331B80
	private void GetRequest() { }

	[AsyncStateMachine(typeof(SkyJumpWithStageService.<SendGetNextTournamentStartTimeRequest>d__36))]
	// RVA: 0x2331E20 Offset: 0x2331E20 VA: 0x2331E20
	private void SendGetNextTournamentStartTimeRequest() { }

	[AsyncStateMachine(typeof(SkyJumpWithStageService.<SendClaimRequest>d__37))]
	// RVA: 0x2331C50 Offset: 0x2331C50 VA: 0x2331C50
	public void SendClaimRequest() { }

	// RVA: 0x2331ED8 Offset: 0x2331ED8 VA: 0x2331ED8
	private void ChangeTournamentCache(SkyJumpWithStageResponseModel response) { }

	// RVA: 0x2331860 Offset: 0x2331860 VA: 0x2331860
	private void CacheProfileImages() { }

	// RVA: 0x2332510 Offset: 0x2332510 VA: 0x2332510
	public List<SkyJumpWithStageLeaderboardPlayerViewModel> GetViewModelsForSearchAnimation() { }

	// RVA: 0x23328B0 Offset: 0x23328B0 VA: 0x23328B0
	public ValueTuple<List<SkyJumpWithStageLeaderboardPlayerViewModel>, List<SkyJumpWithStageLeaderboardPlayerViewModel>> GetViewModelsInCurrentScore() { }

	// RVA: 0x2332D1C Offset: 0x2332D1C VA: 0x2332D1C
	public ValueTuple<List<SkyJumpWithStageLeaderboardPlayerViewModel>, List<SkyJumpWithStageLeaderboardPlayerViewModel>> GetViewModelsInMaxScore() { }

	// RVA: 0x2332D60 Offset: 0x2332D60 VA: 0x2332D60
	public ValueTuple<List<SkyJumpWithStageLeaderboardPlayerViewModel>, List<SkyJumpWithStageLeaderboardPlayerViewModel>> GetViewModelsInPreviousScore() { }

	// RVA: 0x2332D8C Offset: 0x2332D8C VA: 0x2332D8C
	public List<SkyJumpWithStageLeaderboardPlayerViewModel> GetSharingRewardsWith() { }

	// RVA: 0x23328F8 Offset: 0x23328F8 VA: 0x23328F8
	private ValueTuple<List<SkyJumpWithStageLeaderboardPlayerViewModel>, List<SkyJumpWithStageLeaderboardPlayerViewModel>> GetUsersInThisStep(int step) { }

	// RVA: 0x23323FC Offset: 0x23323FC VA: 0x23323FC
	private SkyJumpWithStageLeaderboardPlayerViewModel GetViewModel(Dictionary<string, string> playerImages, string userId) { }

	// RVA: 0x2332E94 Offset: 0x2332E94 VA: 0x2332E94
	public int GetRemainingSeconds() { }

	// RVA: 0x2332F9C Offset: 0x2332F9C VA: 0x2332F9C
	public DateTime GetEndDate() { }

	// RVA: 0x233305C Offset: 0x233305C VA: 0x233305C
	public long GetStartTimeAsUnix() { }

	// RVA: 0x2333084 Offset: 0x2333084 VA: 0x2333084
	public long GetEndTimeAsUnix() { }

	// RVA: 0x23330AC Offset: 0x23330AC VA: 0x23330AC
	public DateTime GetNextTournamentStartTime() { }

	// RVA: 0x233315C Offset: 0x233315C VA: 0x233315C
	public DateTime GetNextTournamentEndTime() { }

	// RVA: 0x233320C Offset: 0x233320C VA: 0x233320C
	private void ScheduleLeaderboardFetchOnTimerEnd() { }

	// RVA: 0x23332F0 Offset: 0x23332F0 VA: 0x23332F0
	public bool TryFall() { }

	// RVA: 0x233336C Offset: 0x233336C VA: 0x233336C
	public bool TryIncreaseScore() { }

	// RVA: 0x23328DC Offset: 0x23328DC VA: 0x23328DC
	public int GetScore() { }

	// RVA: 0x23333E8 Offset: 0x23333E8 VA: 0x23333E8
	public int GetLastSeenScore() { }

	// RVA: 0x2333404 Offset: 0x2333404 VA: 0x2333404
	public bool IsScoreIncreasedSinceLastSeen() { }

	// RVA: 0x2333448 Offset: 0x2333448 VA: 0x2333448
	public void UpdateLastSeen() { }

	// RVA: 0x2333464 Offset: 0x2333464 VA: 0x2333464
	public bool IsPlayerReachedMaxScore() { }

	// RVA: 0x2332E54 Offset: 0x2332E54 VA: 0x2332E54
	public int GetMaxReachableScore() { }

	// RVA: 0x233354C Offset: 0x233354C VA: 0x233354C
	public void MarkEventIntroduced() { }

	// RVA: 0x2333568 Offset: 0x2333568 VA: 0x2333568
	public void ClaimLocally(bool didWin) { }

	// RVA: 0x2333640 Offset: 0x2333640 VA: 0x2333640
	public int GetWinnerCount() { }

	// RVA: 0x2333754 Offset: 0x2333754 VA: 0x2333754
	public int GetSharingRewardsWithUserCount() { }

	// RVA: 0x2333768 Offset: 0x2333768 VA: 0x2333768
	public RewardModel GetPlayerReward() { }

	// RVA: 0x2333814 Offset: 0x2333814 VA: 0x2333814
	public int GetCurrentStageRewardAmount() { }

	// RVA: 0x23338D4 Offset: 0x23338D4 VA: 0x23338D4
	public int GetStageRewardAmount(int stageIndex) { }

	// RVA: 0x2333830 Offset: 0x2333830 VA: 0x2333830
	public int GetCurrentStage() { }

	// RVA: 0x2333934 Offset: 0x2333934 VA: 0x2333934
	public int GetStageStepCount(int stageIndex) { }

	// RVA: 0x23334B8 Offset: 0x23334B8 VA: 0x23334B8
	public int GetCurrentStageStepCount() { }

	// RVA: 0x2333954 Offset: 0x2333954 VA: 0x2333954
	public void TryMarkForceShowedJoinPopUpForSession() { }

	// RVA: 0x2333B80 Offset: 0x2333B80 VA: 0x2333B80
	public string GetTournamentId() { }

	// RVA: 0x2333BE4 Offset: 0x2333BE4 VA: 0x2333BE4
	public bool DidPlayerWin() { }

	// RVA: 0x2332E58 Offset: 0x2332E58 VA: 0x2332E58
	public bool DidPlayerLost() { }

	// RVA: 0x2333C3C Offset: 0x2333C3C VA: 0x2333C3C
	public bool DidPlayerFallDown() { }

	// RVA: 0x2333684 Offset: 0x2333684 VA: 0x2333684
	public int GetUserCountInStep(int step) { }

	// RVA: 0x2332D38 Offset: 0x2332D38 VA: 0x2332D38
	public int GetMaxScoreReached() { }

	// RVA: 0x2333C64 Offset: 0x2333C64 VA: 0x2333C64
	public void IncreaseWinRecord() { }

	// RVA: 0x2333C80 Offset: 0x2333C80 VA: 0x2333C80
	public int GetWinRecord() { }

	// RVA: 0x2333C9C Offset: 0x2333C9C VA: 0x2333C9C
	public void OnJoinPopupOpened() { }

	// RVA: 0x2333CBC Offset: 0x2333CBC VA: 0x2333CBC
	public int GetLiveOpsStateForLevelEvent() { }

	// RVA: 0x2333D08 Offset: 0x2333D08 VA: 0x2333D08
	private bool IsNextStageIsAvailable(SkyJumpWithStageResponseModel response) { }

	[CompilerGenerated]
	// RVA: 0x2333E3C Offset: 0x2333E3C VA: 0x2333E3C
	private void <ScheduleLeaderboardFetchOnTimerEnd>b__53_0() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts