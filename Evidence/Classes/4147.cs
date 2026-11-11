public class JetpackRaceWithStageService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 4147
{
	// Fields
	private JetpackRaceWithStageDataService _dataService; // 0x10
	private JetpackRaceWithStageRemoteService _remoteService; // 0x18
	private JetpackRaceWithStageStateService _stateService; // 0x20
	private LobbyEventsService _lobbyEventsService; // 0x28
	private MagicLabService _magicLabService; // 0x30
	private WheelOfFortuneService _wheelOfFortuneService; // 0x38
	private CustomUpdater _customUpdater; // 0x40
	private RemoteConfigs _remoteConfigs; // 0x48
	private NotificationService _notificationService; // 0x50
	private SecondTimer _secondTimer; // 0x58
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x60
	private bool _isClaimInProgress; // 0x68
	[CompilerGenerated]
	private bool <IsSynced>k__BackingField; // 0x69
	private const int NotActiveStatusCode = 425;
	[CompilerGenerated]
	private JetpackRaceWithStageGetNextRaceEndTimeResponseModel <JetpackRaceWithStageGetNextRaceEndTimeResponseModel>k__BackingField; // 0x70
	[CompilerGenerated]
	private bool <ForceShowedJoinPopUpForThisSession>k__BackingField; // 0x78

	// Properties
	public JetpackRaceWithStageStateService StateService { get; }
	public bool IsSynced { get; set; }
	public JetpackRaceWithStageGetNextRaceEndTimeResponseModel JetpackRaceWithStageGetNextRaceEndTimeResponseModel { get; set; }
	public bool ForceShowedJoinPopUpForThisSession { get; set; }

	// Methods

	// RVA: 0x3A87040 Offset: 0x3A87040 VA: 0x3A87040
	public JetpackRaceWithStageStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x3A87048 Offset: 0x3A87048 VA: 0x3A87048
	public bool get_IsSynced() { }

	[CompilerGenerated]
	// RVA: 0x3A87050 Offset: 0x3A87050 VA: 0x3A87050
	public void set_IsSynced(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3A8705C Offset: 0x3A8705C VA: 0x3A8705C
	public JetpackRaceWithStageGetNextRaceEndTimeResponseModel get_JetpackRaceWithStageGetNextRaceEndTimeResponseModel() { }

	[CompilerGenerated]
	// RVA: 0x3A87064 Offset: 0x3A87064 VA: 0x3A87064
	public void set_JetpackRaceWithStageGetNextRaceEndTimeResponseModel(JetpackRaceWithStageGetNextRaceEndTimeResponseModel value) { }

	[CompilerGenerated]
	// RVA: 0x3A8706C Offset: 0x3A8706C VA: 0x3A8706C
	public bool get_ForceShowedJoinPopUpForThisSession() { }

	[CompilerGenerated]
	// RVA: 0x3A87074 Offset: 0x3A87074 VA: 0x3A87074
	private void set_ForceShowedJoinPopUpForThisSession(bool value) { }

	// RVA: 0x3A87080 Offset: 0x3A87080 VA: 0x3A87080
	public void .ctor(JetpackRaceWithStageDataService jetpackRaceWithStageDataService, JetpackRaceWithStageRemoteService jetpackRaceWithStageRemoteService, JetpackRaceWithStageStateService jetpackRaceWithStageStateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, NotificationService notificationService, ProfileSpriteCacheService profileSpriteCacheService, MagicLabService magicLabService, LobbyEventsService lobbyEventsService, WheelOfFortuneService wheelOfFortuneService) { }

	// RVA: 0x3A87180 Offset: 0x3A87180 VA: 0x3A87180 Slot: 4
	public void Initialize() { }

	// RVA: 0x3A87220 Offset: 0x3A87220 VA: 0x3A87220 Slot: 5
	public void Dispose() { }

	// RVA: 0x3A87254 Offset: 0x3A87254 VA: 0x3A87254 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3A872C8 Offset: 0x3A872C8 VA: 0x3A872C8 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3A87258 Offset: 0x3A87258 VA: 0x3A87258
	private void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageService.<Join>d__33))]
	// RVA: 0x3A87698 Offset: 0x3A87698 VA: 0x3A87698
	public Task<JoinResult> Join() { }

	// RVA: 0x3A877A4 Offset: 0x3A877A4 VA: 0x3A877A4
	public void SendGetRequest() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageService.<GetRequest>d__35))]
	// RVA: 0x3A874A4 Offset: 0x3A874A4 VA: 0x3A874A4
	private Task GetRequest() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageService.<SendGetNextRaceFinishTimeRequest>d__36))]
	// RVA: 0x3A877A8 Offset: 0x3A877A8 VA: 0x3A877A8
	private Task SendGetNextRaceFinishTimeRequest() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageService.<SendClaimRequest>d__37))]
	// RVA: 0x3A875AC Offset: 0x3A875AC VA: 0x3A875AC
	public Task SendClaimRequest() { }

	// RVA: 0x3A87894 Offset: 0x3A87894 VA: 0x3A87894
	private void TryIncreaseLastStageWinCount() { }

	// RVA: 0x3A878DC Offset: 0x3A878DC VA: 0x3A878DC
	private void ChangeTournamentCache(JetpackRaceWithStageResponseModel response) { }

	// RVA: 0x3A884A0 Offset: 0x3A884A0 VA: 0x3A884A0
	public bool IsEligibleForLimitlessLife() { }

	// RVA: 0x3A872E0 Offset: 0x3A872E0 VA: 0x3A872E0
	private void CacheProfileImages() { }

	// RVA: 0x3A884CC Offset: 0x3A884CC VA: 0x3A884CC
	public List<JetpackRaceWithStageLeaderboardPlayerViewModel> GetViewModels() { }

	// RVA: 0x3A88A0C Offset: 0x3A88A0C VA: 0x3A88A0C
	public int GetCurrentStage() { }

	// RVA: 0x3A88ACC Offset: 0x3A88ACC VA: 0x3A88ACC
	public List<JetpackRaceWithStageLeaderboardPlayerViewModel> GetLastSeenViewModels() { }

	// RVA: 0x3A89164 Offset: 0x3A89164 VA: 0x3A89164
	public List<JetpackRaceWithStageLeaderboardPlayerViewModel> GetLastSeenBannerViewModels() { }

	// RVA: 0x3A897FC Offset: 0x3A897FC VA: 0x3A897FC
	public int GetRemainingSeconds() { }

	// RVA: 0x3A8990C Offset: 0x3A8990C VA: 0x3A8990C
	public DateTime GetEndDate() { }

	// RVA: 0x3A899CC Offset: 0x3A899CC VA: 0x3A899CC
	public long GetStartTimeAsUnix() { }

	// RVA: 0x3A883C4 Offset: 0x3A883C4 VA: 0x3A883C4
	public DateTime GetNextRaceEndDate() { }

	// RVA: 0x3A89A00 Offset: 0x3A89A00 VA: 0x3A89A00
	private void ScheduleLeaderboardFetchOnTimerEnd() { }

	// RVA: 0x3A89AE4 Offset: 0x3A89AE4 VA: 0x3A89AE4
	public bool TryResetScore() { }

	// RVA: 0x3A89B6C Offset: 0x3A89B6C VA: 0x3A89B6C
	public bool IsStreakDisabled() { }

	// RVA: 0x3A89B98 Offset: 0x3A89B98 VA: 0x3A89B98
	public bool ShouldShowStreakDisabledPopup() { }

	// RVA: 0x3A89C08 Offset: 0x3A89C08 VA: 0x3A89C08
	public bool TryIncreaseScore() { }

	// RVA: 0x3A89C84 Offset: 0x3A89C84 VA: 0x3A89C84
	public int GetScore() { }

	// RVA: 0x3A89CB8 Offset: 0x3A89CB8 VA: 0x3A89CB8
	public int GetLastSeenScore() { }

	// RVA: 0x3A89CEC Offset: 0x3A89CEC VA: 0x3A89CEC
	public bool IsScoreIncreasedSinceLastSeen() { }

	// RVA: 0x3A89D1C Offset: 0x3A89D1C VA: 0x3A89D1C
	public bool ArePlayersScoreChanged() { }

	// RVA: 0x3A89F1C Offset: 0x3A89F1C VA: 0x3A89F1C
	public void UpdateLastSeen() { }

	// RVA: 0x3A89F34 Offset: 0x3A89F34 VA: 0x3A89F34
	public void UpdateLastSeenBanner() { }

	// RVA: 0x3A89F4C Offset: 0x3A89F4C VA: 0x3A89F4C
	public bool IsPlayerReachedMaxScore() { }

	// RVA: 0x3A89F8C Offset: 0x3A89F8C VA: 0x3A89F8C
	public int GetMaxReachableScore() { }

	// RVA: 0x3A8A04C Offset: 0x3A8A04C VA: 0x3A8A04C
	public void MarkEventIntroduced() { }

	// RVA: 0x3A8A064 Offset: 0x3A8A064 VA: 0x3A8A064
	public void ClaimLocally() { }

	// RVA: 0x3A8A1F0 Offset: 0x3A8A1F0 VA: 0x3A8A1F0
	public List<RewardModel> GetPlayerRewards() { }

	// RVA: 0x3A8A76C Offset: 0x3A8A76C VA: 0x3A8A76C
	public RewardModel GetRaceRewards() { }

	// RVA: 0x3A8A7F0 Offset: 0x3A8A7F0 VA: 0x3A8A7F0
	public bool CheckLastStageWinLimitExceeded() { }

	// RVA: 0x3A8A844 Offset: 0x3A8A844 VA: 0x3A8A844
	public RewardModel GetRewardModelByStage(int stage) { }

	// RVA: 0x3A8A24C Offset: 0x3A8A24C VA: 0x3A8A24C
	private List<RewardModel> GetRewardsByStage(int stage) { }

	// RVA: 0x3A838C0 Offset: 0x3A838C0 VA: 0x3A838C0
	public void TryMarkForceShowedJoinPopUpForSession() { }

	// RVA: 0x3A8AB80 Offset: 0x3A8AB80 VA: 0x3A8AB80
	public string GetTournamentId() { }

	// RVA: 0x3A8ABE8 Offset: 0x3A8ABE8 VA: 0x3A8ABE8
	public string GetLeaderboardId() { }

	// RVA: 0x3A8AC50 Offset: 0x3A8AC50 VA: 0x3A8AC50
	public int GetRank() { }

	// RVA: 0x3A8A1C4 Offset: 0x3A8A1C4 VA: 0x3A8A1C4
	public bool DidPlayerWin() { }

	// RVA: 0x3A8AD74 Offset: 0x3A8AD74 VA: 0x3A8AD74
	public int GetMaxScore() { }

	// RVA: 0x3A8ADA8 Offset: 0x3A8ADA8 VA: 0x3A8ADA8
	public void IncreaseWinRecord() { }

	// RVA: 0x3A8ADDC Offset: 0x3A8ADDC VA: 0x3A8ADDC
	public int GetWinRecord() { }

	// RVA: 0x3A8AE00 Offset: 0x3A8AE00 VA: 0x3A8AE00
	public bool IsPlayerFallDown() { }

	// RVA: 0x3A8AE3C Offset: 0x3A8AE3C VA: 0x3A8AE3C
	public int LastScoreBeforeFallDown() { }

	// RVA: 0x3A8AE70 Offset: 0x3A8AE70 VA: 0x3A8AE70
	public void OnJoinPopupOpened() { }

	// RVA: 0x3A8AEA0 Offset: 0x3A8AEA0 VA: 0x3A8AEA0
	public int GetLiveOpsStateForLevelEvent() { }

	// RVA: 0x3A8AF10 Offset: 0x3A8AF10 VA: 0x3A8AF10
	public int GetMagicLabEventType() { }

	// RVA: 0x3A8AF3C Offset: 0x3A8AF3C VA: 0x3A8AF3C Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x3A8AFA8 Offset: 0x3A8AFA8 VA: 0x3A8AFA8 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x3A88474 Offset: 0x3A88474 VA: 0x3A88474
	private void ResetLastStageWinCount() { }

	// RVA: 0x3A8B014 Offset: 0x3A8B014 VA: 0x3A8B014
	public void MarkStreakDisabledIntroduced() { }

	// RVA: 0x3A8B044 Offset: 0x3A8B044 VA: 0x3A8B044
	public bool CanCloseJoinPopup() { }

	// RVA: 0x3A8B078 Offset: 0x3A8B078 VA: 0x3A8B078
	public string GetEventId() { }

	// RVA: 0x3A8B210 Offset: 0x3A8B210 VA: 0x3A8B210
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x3A8B288 Offset: 0x3A8B288 VA: 0x3A8B288
	public bool IsJoinPopupIntroduced() { }

	// RVA: 0x3A8B2AC Offset: 0x3A8B2AC VA: 0x3A8B2AC
	public bool IsAvailableForWheelOfFortune() { }

	[CompilerGenerated]
	// RVA: 0x3A8B2F0 Offset: 0x3A8B2F0 VA: 0x3A8B2F0
	private void <ScheduleLeaderboardFetchOnTimerEnd>b__50_0() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts