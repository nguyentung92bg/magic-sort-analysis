public class BoatRushService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 4838
{
	// Fields
	private readonly BoatRushDataService _dataService; // 0x10
	private readonly CollectionService _collectionService; // 0x18
	private readonly BoatRushStateService _stateService; // 0x20
	private readonly BoatRushRemoteService _remoteService; // 0x28
	private readonly LobbyEventsService _lobbyEventsService; // 0x30
	private readonly CustomUpdater _customUpdater; // 0x38
	private readonly RemoteConfigs _remoteConfigs; // 0x40
	private readonly ProfileSpriteCacheService _profileSpriteCacheService; // 0x48
	private readonly AssetManager _assetManager; // 0x50
	private readonly WheelOfFortuneService _wheelOfFortuneService; // 0x58
	private readonly UserProfileService _profileService; // 0x60
	private SecondTimer _secondTimer; // 0x68
	[CompilerGenerated]
	private bool <IsSynced>k__BackingField; // 0x70
	private const int NotActiveStatusCode = 425;
	private string _bundleId; // 0x78

	// Properties
	public BoatRushDataService DataService { get; }
	public BoatRushStateService StateService { get; }
	public bool IsSynced { get; set; }

	// Methods

	// RVA: 0x3FCD250 Offset: 0x3FCD250 VA: 0x3FCD250
	public BoatRushDataService get_DataService() { }

	// RVA: 0x3FCD258 Offset: 0x3FCD258 VA: 0x3FCD258
	public BoatRushStateService get_StateService() { }

	[CompilerGenerated]
	// RVA: 0x3FCD260 Offset: 0x3FCD260 VA: 0x3FCD260
	public bool get_IsSynced() { }

	[CompilerGenerated]
	// RVA: 0x3FCD268 Offset: 0x3FCD268 VA: 0x3FCD268
	public void set_IsSynced(bool value) { }

	// RVA: 0x3FCD274 Offset: 0x3FCD274 VA: 0x3FCD274
	public void .ctor(BoatRushDataService boatRushDataService, BoatRushRemoteService boatRushRemoteService, BoatRushStateService boatRushStateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, CollectionService collectionService, ProfileSpriteCacheService profileSpriteCacheService, LobbyEventsService lobbyEventsService, AssetManager assetManager, WheelOfFortuneService wheelOfWheelOfFortuneService, UserProfileService userProfileService) { }

	// RVA: 0x3FCD3D0 Offset: 0x3FCD3D0 VA: 0x3FCD3D0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3FCD484 Offset: 0x3FCD484 VA: 0x3FCD484 Slot: 5
	public void Dispose() { }

	// RVA: 0x3FCD4B8 Offset: 0x3FCD4B8 VA: 0x3FCD4B8 Slot: 6
	public void IntervalUpdate() { }

	[AsyncStateMachine(typeof(BoatRushService.<InitializeData>d__26))]
	// RVA: 0x3FCD608 Offset: 0x3FCD608 VA: 0x3FCD608 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3FCD6C0 Offset: 0x3FCD6C0 VA: 0x3FCD6C0
	private void CacheProfileImages() { }

	// RVA: 0x3FCD5BC Offset: 0x3FCD5BC VA: 0x3FCD5BC
	private void TryFetchCurrentEvent() { }

	// RVA: 0x3FCD844 Offset: 0x3FCD844 VA: 0x3FCD844
	public void SendGetRequest() { }

	[AsyncStateMachine(typeof(BoatRushService.<GetEvent>d__30))]
	// RVA: 0x3FCD848 Offset: 0x3FCD848 VA: 0x3FCD848
	private void GetEvent() { }

	[AsyncStateMachine(typeof(BoatRushService.<TryClaimStage>d__31))]
	// RVA: 0x3FCD900 Offset: 0x3FCD900 VA: 0x3FCD900
	public Task<bool> TryClaimStage() { }

	// RVA: 0x3FCDA14 Offset: 0x3FCDA14 VA: 0x3FCDA14
	private void TryIncreaseBoatRushWinCount() { }

	[AsyncStateMachine(typeof(BoatRushService.<TryJoinRace>d__33))]
	// RVA: 0x3FCDBA4 Offset: 0x3FCDBA4 VA: 0x3FCDBA4
	public Task<bool> TryJoinRace() { }

	// RVA: 0x3FCDCB8 Offset: 0x3FCDCB8 VA: 0x3FCDCB8
	private bool TryProcessEventData(ApiResponse<BoatRushResponse> response) { }

	// RVA: 0x3FCDE64 Offset: 0x3FCDE64 VA: 0x3FCDE64
	private void UpdateCache(BoatRushResponse response) { }

	// RVA: 0x3FCDE98 Offset: 0x3FCDE98 VA: 0x3FCDE98
	private void UpdateEventCache(BoatRushResponse response) { }

	// RVA: 0x3FCDFD8 Offset: 0x3FCDFD8 VA: 0x3FCDFD8
	private void UpdateRaceCache(BoatRushResponse response) { }

	// RVA: 0x3FCE90C Offset: 0x3FCE90C VA: 0x3FCE90C
	private void UpdateTierCache(BoatRushResponse response) { }

	// RVA: 0x3FCEEB8 Offset: 0x3FCEEB8 VA: 0x3FCEEB8
	public bool TryIncreaseScore() { }

	// RVA: 0x3FCEEFC Offset: 0x3FCEEFC VA: 0x3FCEEFC
	private List<BoatRushLeaderboardPlayerViewModel> GetLeaderboardViewModel() { }

	// RVA: 0x3FCF214 Offset: 0x3FCF214 VA: 0x3FCF214
	private List<BoatRushLeaderboardPlayerViewModel> GetLastSeenLeaderboardViewModel() { }

	// RVA: 0x3FCF5A0 Offset: 0x3FCF5A0 VA: 0x3FCF5A0
	public List<BoatRushLeaderboardPlayerViewModel> GetLastSeenBannerViewModels() { }

	// RVA: 0x3FCF944 Offset: 0x3FCF944 VA: 0x3FCF944
	public BoatRushJoinViewModel GetJoinViewModel() { }

	// RVA: 0x3FD009C Offset: 0x3FD009C VA: 0x3FD009C
	public BoatRushRaceViewModel GetRaceViewModel() { }

	// RVA: 0x3FD0870 Offset: 0x3FD0870 VA: 0x3FD0870
	private int GetNextChestIndex() { }

	// RVA: 0x3FD0980 Offset: 0x3FD0980 VA: 0x3FD0980
	public BoatRushProgressBarViewModel GetProgressBarViewModel() { }

	// RVA: 0x3FD0AE0 Offset: 0x3FD0AE0 VA: 0x3FD0AE0
	public BoatRushLobbyButtonViewModel GetLobbyButtonViewModel() { }

	// RVA: 0x3FD0BC0 Offset: 0x3FD0BC0 VA: 0x3FD0BC0
	public int GetRemainingSeconds() { }

	// RVA: 0x3FCECCC Offset: 0x3FCECCC VA: 0x3FCECCC
	public int GetCurrentStageIndex() { }

	// RVA: 0x3FCEDB0 Offset: 0x3FCEDB0 VA: 0x3FCEDB0
	private int GetLastSeenStage() { }

	// RVA: 0x3FCEDE4 Offset: 0x3FCEDE4 VA: 0x3FCEDE4
	private int GetLastSeenTierIndex() { }

	// RVA: 0x3FD0A44 Offset: 0x3FD0A44 VA: 0x3FD0A44
	private int GetLastSeenLocalStageIndex() { }

	// RVA: 0x3FCEE18 Offset: 0x3FCEE18 VA: 0x3FCEE18
	private int GetLocalMaxStageCount() { }

	// RVA: 0x3FCFA88 Offset: 0x3FCFA88 VA: 0x3FCFA88
	private bool IsEventIntroducedInLifeTime() { }

	// RVA: 0x3FD0244 Offset: 0x3FD0244 VA: 0x3FD0244
	private bool IsEventFinished() { }

	// RVA: 0x3FD022C Offset: 0x3FD022C VA: 0x3FD022C
	private bool IsEventTimeOut() { }

	// RVA: 0x3FD0CD0 Offset: 0x3FD0CD0 VA: 0x3FD0CD0
	private bool IsEventClaimed() { }

	// RVA: 0x3FD02D8 Offset: 0x3FD02D8 VA: 0x3FD02D8
	private bool DidPlayerWin() { }

	// RVA: 0x3FCDB74 Offset: 0x3FCDB74 VA: 0x3FCDB74
	public bool IsPlayerReachedMaxScore() { }

	// RVA: 0x3FD05D0 Offset: 0x3FD05D0 VA: 0x3FD05D0
	private int GetWinnerCount() { }

	// RVA: 0x3FD0D28 Offset: 0x3FD0D28 VA: 0x3FD0D28
	private bool IsTierCompleted() { }

	// RVA: 0x3FD060C Offset: 0x3FD060C VA: 0x3FD060C
	private RewardModel TierCompletedReward() { }

	// RVA: 0x3FCFD5C Offset: 0x3FCFD5C VA: 0x3FCFD5C
	private List<RewardModel> GetTierCompleteRewards() { }

	// RVA: 0x3FD032C Offset: 0x3FD032C VA: 0x3FD032C
	private List<RewardModel> GetStageWinRewards() { }

	// RVA: 0x3FCFCF4 Offset: 0x3FCFCF4 VA: 0x3FCFCF4
	public int GetTierIndex() { }

	// RVA: 0x3FD06DC Offset: 0x3FD06DC VA: 0x3FD06DC
	public int GetPlayerRank() { }

	// RVA: 0x3FD0A78 Offset: 0x3FD0A78 VA: 0x3FD0A78
	private int GetCurrentStageIndexInTier() { }

	// RVA: 0x3FD0AAC Offset: 0x3FD0AAC VA: 0x3FD0AAC
	private int GetMaxStageIndexInTier() { }

	// RVA: 0x3FCFAE8 Offset: 0x3FCFAE8 VA: 0x3FCFAE8
	private int GetTotalStageCount() { }

	// RVA: 0x3FD0CEC Offset: 0x3FD0CEC VA: 0x3FD0CEC
	public int GetScore() { }

	// RVA: 0x3FD0DFC Offset: 0x3FD0DFC VA: 0x3FD0DFC
	private int GetLastSeenScore() { }

	// RVA: 0x3FD0944 Offset: 0x3FD0944 VA: 0x3FD0944
	private int GetMaxReachableScore() { }

	// RVA: 0x3FCFBD0 Offset: 0x3FCFBD0 VA: 0x3FCFBD0
	private DateTime GetEndDate() { }

	// RVA: 0x3FCDD80 Offset: 0x3FCDD80 VA: 0x3FCDD80
	private void ScheduleLeaderboardFetchOnTimerEnd() { }

	// RVA: 0x3FCFCB4 Offset: 0x3FCFCB4 VA: 0x3FCFCB4
	private bool ShouldShowResultInJoinPopup() { }

	// RVA: 0x3FCFC90 Offset: 0x3FCFC90 VA: 0x3FCFC90
	private int GetPathVariantIndex() { }

	// RVA: 0x3FCFD28 Offset: 0x3FCFD28 VA: 0x3FCFD28
	private bool IsPathCompleted() { }

	// RVA: 0x3FCDA84 Offset: 0x3FCDA84 VA: 0x3FCDA84
	private bool IsInLastStage() { }

	// RVA: 0x3FD0260 Offset: 0x3FD0260 VA: 0x3FD0260
	private bool IsRacePopUpFirstShowForEvent() { }

	// RVA: 0x3FD029C Offset: 0x3FD029C VA: 0x3FD029C
	private bool IsRacePopUpFirstShowForStage() { }

	// RVA: 0x3FCFAAC Offset: 0x3FCFAAC VA: 0x3FCFAAC
	private bool IsJoinPopUpFirstShow() { }

	// RVA: 0x3FD0BA4 Offset: 0x3FD0BA4 VA: 0x3FD0BA4
	private bool ShouldShowJoinTextOnLobbyButton() { }

	// RVA: 0x3FD0E38 Offset: 0x3FD0E38 VA: 0x3FD0E38
	public bool ShouldOpenJoinPopUpAutomaticallyOnLobbyReturn() { }

	// RVA: 0x3FD0E7C Offset: 0x3FD0E7C VA: 0x3FD0E7C
	public bool ShouldOpenRacePopUpAutomaticallyOnLobbyReturn() { }

	// RVA: 0x3FD0F80 Offset: 0x3FD0F80 VA: 0x3FD0F80
	public bool IsEligibleForLimitlessLife() { }

	// RVA: 0x3FD0F1C Offset: 0x3FD0F1C VA: 0x3FD0F1C
	private bool IsOneWinRemainedForFinish() { }

	// RVA: 0x3FD0F50 Offset: 0x3FD0F50 VA: 0x3FD0F50
	private bool IsScoreIncreasedSinceLastSeen() { }

	// RVA: 0x3FD0FBC Offset: 0x3FD0FBC VA: 0x3FD0FBC
	public void SyncLastSeen() { }

	// RVA: 0x3FD0FD4 Offset: 0x3FD0FD4 VA: 0x3FD0FD4
	public void UpdateLastSeenBanner() { }

	// RVA: 0x3FD0FEC Offset: 0x3FD0FEC VA: 0x3FD0FEC
	public void MarkForceShowedJoinPopUpThisSession(bool value) { }

	// RVA: 0x3FD100C Offset: 0x3FD100C VA: 0x3FD100C
	public bool ShouldShowJoinPopUp() { }

	// RVA: 0x3FD1028 Offset: 0x3FD1028 VA: 0x3FD1028
	public bool ShouldShowJoinPopUpAfterClaim() { }

	// RVA: 0x3FD1060 Offset: 0x3FD1060 VA: 0x3FD1060
	public bool ShouldShowEventPopUp() { }

	// RVA: 0x3FD0B88 Offset: 0x3FD0B88 VA: 0x3FD0B88
	private bool ShouldShowLobbyIcon() { }

	// RVA: 0x3FD109C Offset: 0x3FD109C VA: 0x3FD109C
	public void MarkEventPopUpIntroducedForEvent() { }

	// RVA: 0x3FD10D4 Offset: 0x3FD10D4 VA: 0x3FD10D4
	public void MarkEventPopUpIntroducedForStage(bool value) { }

	// RVA: 0x3FD110C Offset: 0x3FD110C VA: 0x3FD110C
	public void MarkJoinPopUpIntroduced() { }

	// RVA: 0x3FD114C Offset: 0x3FD114C VA: 0x3FD114C
	public string GetTournamentId() { }

	// RVA: 0x3FD11BC Offset: 0x3FD11BC VA: 0x3FD11BC
	public string GetReadableEventId() { }

	// RVA: 0x3FD12B8 Offset: 0x3FD12B8 VA: 0x3FD12B8
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x3FD1330 Offset: 0x3FD1330 VA: 0x3FD1330 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x3FD134C Offset: 0x3FD134C VA: 0x3FD134C Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x3FD1368 Offset: 0x3FD1368 VA: 0x3FD1368
	public bool NeedToDownloadAssets() { }

	[AsyncStateMachine(typeof(BoatRushService.<CheckAndResolveAssetDependency>d__104))]
	// RVA: 0x3FCD4D0 Offset: 0x3FCD4D0 VA: 0x3FCD4D0
	private Task CheckAndResolveAssetDependency() { }

	// RVA: 0x3FD13B8 Offset: 0x3FD13B8 VA: 0x3FD13B8
	public void SetEventCompletedPopUpSeen() { }

	// RVA: 0x3FD13F0 Offset: 0x3FD13F0 VA: 0x3FD13F0
	public bool IsAvailableForWheelOfFortune() { }

	[CompilerGenerated]
	// RVA: 0x3FD140C Offset: 0x3FD140C VA: 0x3FD140C
	private void <ScheduleLeaderboardFetchOnTimerEnd>b__74_0() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts