public class JetpackRaceService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 4232
{
	// Fields
	private JetpackRaceDataService _dataService; // 0x10
	private JetpackRaceRemoteService _remoteService; // 0x18
	private JetpackRaceStateService _stateService; // 0x20
	private MagicLabService _magicLabService; // 0x28
	private CustomUpdater _customUpdater; // 0x30
	private RemoteConfigs _remoteConfigs; // 0x38
	private NotificationService _notificationService; // 0x40
	private SecondTimer _secondTimer; // 0x48
	private ProfileSpriteCacheService _profileSpriteCacheService; // 0x50
	private bool _claimRequestedManuallyByUser; // 0x58
	[CompilerGenerated]
	private bool <IsSynced>k__BackingField; // 0x59
	[CompilerGenerated]
	private int <NotActiveStatusCode>k__BackingField; // 0x5C
	[CompilerGenerated]
	private bool <IsNextRaceIsAvailable>k__BackingField; // 0x60
	[CompilerGenerated]
	private JetpackRaceGetNextRaceEndTimeResponseModel <JetpackRaceGetNextRaceEndTimeResponseModel>k__BackingField; // 0x68
	[CompilerGenerated]
	private bool <ForceShowedJoinPopUpForThisSession>k__BackingField; // 0x70

	// Properties
	public JetpackRaceStateService StateService { get; }
	public bool IsSynced { get; set; }
	public int NotActiveStatusCode { get; set; }
	public bool IsNextRaceIsAvailable { get; set; }
	public JetpackRaceGetNextRaceEndTimeResponseModel JetpackRaceGetNextRaceEndTimeResponseModel { get; set; }
	public bool ForceShowedJoinPopUpForThisSession { get; set; }

	// Methods

	// RVA: 0x3B19B54 Offset: 0x3B19B54 VA: 0x3B19B54
	public JetpackRaceStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x3B19B5C Offset: 0x3B19B5C VA: 0x3B19B5C
	public bool get_IsSynced() { }

	[CompilerGenerated]
	// RVA: 0x3B19B64 Offset: 0x3B19B64 VA: 0x3B19B64
	public void set_IsSynced(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3B19B70 Offset: 0x3B19B70 VA: 0x3B19B70
	public int get_NotActiveStatusCode() { }

	[CompilerGenerated]
	// RVA: 0x3B19B78 Offset: 0x3B19B78 VA: 0x3B19B78
	public void set_NotActiveStatusCode(int value) { }

	[CompilerGenerated]
	// RVA: 0x3B19B80 Offset: 0x3B19B80 VA: 0x3B19B80
	public bool get_IsNextRaceIsAvailable() { }

	[CompilerGenerated]
	// RVA: 0x3B19B88 Offset: 0x3B19B88 VA: 0x3B19B88
	public void set_IsNextRaceIsAvailable(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3B19B94 Offset: 0x3B19B94 VA: 0x3B19B94
	public JetpackRaceGetNextRaceEndTimeResponseModel get_JetpackRaceGetNextRaceEndTimeResponseModel() { }

	[CompilerGenerated]
	// RVA: 0x3B19B9C Offset: 0x3B19B9C VA: 0x3B19B9C
	public void set_JetpackRaceGetNextRaceEndTimeResponseModel(JetpackRaceGetNextRaceEndTimeResponseModel value) { }

	[CompilerGenerated]
	// RVA: 0x3B19BA4 Offset: 0x3B19BA4 VA: 0x3B19BA4
	public bool get_ForceShowedJoinPopUpForThisSession() { }

	[CompilerGenerated]
	// RVA: 0x3B19BAC Offset: 0x3B19BAC VA: 0x3B19BAC
	private void set_ForceShowedJoinPopUpForThisSession(bool value) { }

	// RVA: 0x3B19BB8 Offset: 0x3B19BB8 VA: 0x3B19BB8
	public void .ctor(JetpackRaceDataService jetpackRaceDataService, JetpackRaceRemoteService jetpackRaceRemoteService, JetpackRaceStateService jetpackRaceStateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, NotificationService notificationService, ProfileSpriteCacheService profileSpriteCacheService, MagicLabService magicLabService) { }

	// RVA: 0x3B19C94 Offset: 0x3B19C94 VA: 0x3B19C94 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B19D34 Offset: 0x3B19D34 VA: 0x3B19D34 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B19D68 Offset: 0x3B19D68 VA: 0x3B19D68 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3B19DDC Offset: 0x3B19DDC VA: 0x3B19DDC Slot: 7
	public void InitializeData() { }

	// RVA: 0x3B19D6C Offset: 0x3B19D6C VA: 0x3B19D6C
	private void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(JetpackRaceService.<Join>d__38))]
	// RVA: 0x3B1A130 Offset: 0x3B1A130 VA: 0x3B1A130
	public Task<bool> Join() { }

	// RVA: 0x3B1A244 Offset: 0x3B1A244 VA: 0x3B1A244
	public void SendGetRequest() { }

	[AsyncStateMachine(typeof(JetpackRaceService.<GetRequest>d__40))]
	// RVA: 0x3B19FA8 Offset: 0x3B19FA8 VA: 0x3B19FA8
	private void GetRequest() { }

	[AsyncStateMachine(typeof(JetpackRaceService.<SendGetNextRaceFinishTimeRequest>d__41))]
	// RVA: 0x3B1A248 Offset: 0x3B1A248 VA: 0x3B1A248
	private void SendGetNextRaceFinishTimeRequest() { }

	[AsyncStateMachine(typeof(JetpackRaceService.<SendClaimRequest>d__42))]
	// RVA: 0x3B1A078 Offset: 0x3B1A078 VA: 0x3B1A078
	public void SendClaimRequest() { }

	// RVA: 0x3B1A300 Offset: 0x3B1A300 VA: 0x3B1A300
	private void ChangeTournamentCache(JetPackRaceResponseModel response) { }

	// RVA: 0x3B1ACAC Offset: 0x3B1ACAC VA: 0x3B1ACAC
	public bool IsEligibleForLimitlessLife() { }

	// RVA: 0x3B19DF4 Offset: 0x3B19DF4 VA: 0x3B19DF4
	private void CacheProfileImages() { }

	// RVA: 0x3B1ACD8 Offset: 0x3B1ACD8 VA: 0x3B1ACD8
	public List<JetpackRaceLeaderboardPlayerViewModel> GetViewModels() { }

	// RVA: 0x3B1B1F4 Offset: 0x3B1B1F4 VA: 0x3B1B1F4
	public List<JetpackRaceLeaderboardPlayerViewModel> GetLastSeenViewModels() { }

	// RVA: 0x3B1B88C Offset: 0x3B1B88C VA: 0x3B1B88C
	public List<JetpackRaceLeaderboardPlayerViewModel> GetLastSeenBannerViewModels() { }

	// RVA: 0x3B1BF24 Offset: 0x3B1BF24 VA: 0x3B1BF24
	public int GetRemainingSeconds() { }

	// RVA: 0x3B1C034 Offset: 0x3B1C034 VA: 0x3B1C034
	public DateTime GetEndDate() { }

	// RVA: 0x3B1C0F4 Offset: 0x3B1C0F4 VA: 0x3B1C0F4
	public long GetStartTimeAsUnix() { }

	// RVA: 0x3B1C128 Offset: 0x3B1C128 VA: 0x3B1C128
	public DateTime GetNextRaceEndDate() { }

	// RVA: 0x3B1C1D8 Offset: 0x3B1C1D8 VA: 0x3B1C1D8
	private void ScheduleLeaderboardFetchOnTimerEnd() { }

	// RVA: 0x3B1C2BC Offset: 0x3B1C2BC VA: 0x3B1C2BC
	public bool TryResetScore() { }

	// RVA: 0x3B1C338 Offset: 0x3B1C338 VA: 0x3B1C338
	public bool TryIncreaseScore() { }

	// RVA: 0x3B1C3B4 Offset: 0x3B1C3B4 VA: 0x3B1C3B4
	public int GetScore() { }

	// RVA: 0x3B1C3E8 Offset: 0x3B1C3E8 VA: 0x3B1C3E8
	public int GetLastSeenScore() { }

	// RVA: 0x3B1C41C Offset: 0x3B1C41C VA: 0x3B1C41C
	public bool IsScoreIncreasedSinceLastSeen() { }

	// RVA: 0x3B1C44C Offset: 0x3B1C44C VA: 0x3B1C44C
	public bool ArePlayersScoreChanged() { }

	// RVA: 0x3B1C64C Offset: 0x3B1C64C VA: 0x3B1C64C
	public void UpdateLastSeen() { }

	// RVA: 0x3B1C664 Offset: 0x3B1C664 VA: 0x3B1C664
	public void UpdateLastSeenBanner() { }

	// RVA: 0x3B1C67C Offset: 0x3B1C67C VA: 0x3B1C67C
	public bool IsPlayerReachedMaxScore() { }

	// RVA: 0x3B1C6BC Offset: 0x3B1C6BC VA: 0x3B1C6BC
	public int GetMaxReachableScore() { }

	// RVA: 0x3B1C764 Offset: 0x3B1C764 VA: 0x3B1C764
	public void MarkEventIntroduced() { }

	// RVA: 0x3B1C77C Offset: 0x3B1C77C VA: 0x3B1C77C
	public void ClaimLocally() { }

	// RVA: 0x3B1C8AC Offset: 0x3B1C8AC VA: 0x3B1C8AC
	public List<RewardModel> GetPlayerRewards() { }

	// RVA: 0x3B1C984 Offset: 0x3B1C984 VA: 0x3B1C984
	public RewardModel GetRaceRewards() { }

	// RVA: 0x3B17E90 Offset: 0x3B17E90 VA: 0x3B17E90
	public void TryMarkForceShowedJoinPopUpForSession() { }

	// RVA: 0x3B1CC58 Offset: 0x3B1CC58 VA: 0x3B1CC58
	public string GetTournamentId() { }

	// RVA: 0x3B1CCC0 Offset: 0x3B1CCC0 VA: 0x3B1CCC0
	public int GetRank() { }

	// RVA: 0x3B1C880 Offset: 0x3B1C880 VA: 0x3B1C880
	public bool DidPlayerWin() { }

	// RVA: 0x3B1CDE4 Offset: 0x3B1CDE4 VA: 0x3B1CDE4
	public int GetMaxScore() { }

	// RVA: 0x3B1CE18 Offset: 0x3B1CE18 VA: 0x3B1CE18
	public void IncreaseWinRecord() { }

	// RVA: 0x3B1CE4C Offset: 0x3B1CE4C VA: 0x3B1CE4C
	public int GetWinRecord() { }

	// RVA: 0x3B1CE70 Offset: 0x3B1CE70 VA: 0x3B1CE70
	public bool IsPlayerFallDown() { }

	// RVA: 0x3B1CEAC Offset: 0x3B1CEAC VA: 0x3B1CEAC
	public int LastScoreBeforeFallDown() { }

	// RVA: 0x3B1CEE0 Offset: 0x3B1CEE0 VA: 0x3B1CEE0
	public void OnJoinPopupOpened() { }

	// RVA: 0x3B1CF10 Offset: 0x3B1CF10 VA: 0x3B1CF10
	public int GetLiveOpsStateForLevelEvent() { }

	// RVA: 0x3B1CF80 Offset: 0x3B1CF80 VA: 0x3B1CF80 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x3B1CFEC Offset: 0x3B1CFEC VA: 0x3B1CFEC Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	[CompilerGenerated]
	// RVA: 0x3B1D024 Offset: 0x3B1D024 VA: 0x3B1D024
	private void <ScheduleLeaderboardFetchOnTimerEnd>b__53_0() { }
}

// Namespace: Modules.Contexts.Home.JetpackRace.Scripts