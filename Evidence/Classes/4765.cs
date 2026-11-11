public class BroomStreakService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 4765
{
	// Fields
	private BroomStreakDataService _broomStreakDataService; // 0x10
	private BroomStreakRemoteService _broomStreakRemoteService; // 0x18
	private BroomStreakStateService _broomStreakStateService; // 0x20
	private CustomUpdater _customUpdater; // 0x28
	private RemoteConfigs _remoteConfigs; // 0x30
	private RewardService _rewardService; // 0x38
	private MagicLabService _magicLabService; // 0x40
	private LobbyEventsService _lobbyEventsService; // 0x48
	private WheelOfFortuneService _wheelOfFortuneService; // 0x50

	// Properties
	public BroomStreakStateService BroomStreakStateService { get; }

	// Methods

	// RVA: 0x3FBCCFC Offset: 0x3FBCCFC VA: 0x3FBCCFC
	public BroomStreakStateService get_BroomStreakStateService() { }

	// RVA: 0x3FBCD04 Offset: 0x3FBCD04 VA: 0x3FBCD04
	public void .ctor(BroomStreakDataService broomStreakDataService, BroomStreakRemoteService broomStreakRemoteService, BroomStreakStateService broomStreakStateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, RewardService rewardService, MagicLabService magicLabService, LobbyEventsService lobbyEventsService, WheelOfFortuneService wheelOfFortuneService) { }

	// RVA: 0x3FBCDF0 Offset: 0x3FBCDF0 VA: 0x3FBCDF0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3FBCE14 Offset: 0x3FBCE14 VA: 0x3FBCE14 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3FBCE68 Offset: 0x3FBCE68 VA: 0x3FBCE68 Slot: 5
	public void Dispose() { }

	// RVA: 0x3FBCE88 Offset: 0x3FBCE88 VA: 0x3FBCE88 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3FBCE18 Offset: 0x3FBCE18 VA: 0x3FBCE18
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(BroomStreakService.<FetchCurrentEvent>d__17))]
	// RVA: 0x3FBCEB0 Offset: 0x3FBCEB0 VA: 0x3FBCEB0
	private void FetchCurrentEvent() { }

	// RVA: 0x3FBCF68 Offset: 0x3FBCF68 VA: 0x3FBCF68
	private void TryStartNewEvent(BroomStreakEventInfoResponse BroomStreakEventInfoResponse) { }

	// RVA: 0x3FBD04C Offset: 0x3FBD04C VA: 0x3FBD04C
	public int GetRemainingSeconds() { }

	// RVA: 0x3FBD154 Offset: 0x3FBD154 VA: 0x3FBD154
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x3FBD1CC Offset: 0x3FBD1CC VA: 0x3FBD1CC
	public DateTime GetEndDate() { }

	// RVA: 0x3FBD248 Offset: 0x3FBD248 VA: 0x3FBD248
	public bool IsWinStreakIncreasedSinceLastSeen() { }

	// RVA: 0x3FBD2C4 Offset: 0x3FBD2C4 VA: 0x3FBD2C4
	public bool IsMainStepIncreasedSinceLastSeen() { }

	// RVA: 0x3FBD4C8 Offset: 0x3FBD4C8 VA: 0x3FBD4C8
	public void TryIncreaseWinStreak() { }

	// RVA: 0x3FBD5F8 Offset: 0x3FBD5F8 VA: 0x3FBD5F8
	public bool TryResetWinStreak() { }

	// RVA: 0x3FBD6B4 Offset: 0x3FBD6B4 VA: 0x3FBD6B4
	private int GetCheckPointWinCount() { }

	// RVA: 0x3FBD28C Offset: 0x3FBD28C VA: 0x3FBD28C
	public int GetCurrentWinCount() { }

	// RVA: 0x3FBD7C4 Offset: 0x3FBD7C4 VA: 0x3FBD7C4
	public int GetMaxWinCount() { }

	// RVA: 0x3FBD7E0 Offset: 0x3FBD7E0 VA: 0x3FBD7E0
	public int GetMaxWinCountRecord() { }

	// RVA: 0x3FBD2A8 Offset: 0x3FBD2A8 VA: 0x3FBD2A8
	public int GetLastSeenWinCount() { }

	// RVA: 0x3FBD7FC Offset: 0x3FBD7FC VA: 0x3FBD7FC
	public List<BroomStreakStepViewModel> GetLastSeenViewModels() { }

	// RVA: 0x3FBDF70 Offset: 0x3FBDF70 VA: 0x3FBDF70
	public void GiveRewardsAndCacheLastSeenWinCount() { }

	// RVA: 0x3FBDFD4 Offset: 0x3FBDFD4 VA: 0x3FBDFD4
	private void GiveRewardsBetweenLastSeenAndCurrentWinCount() { }

	// RVA: 0x3FBC4A8 Offset: 0x3FBC4A8 VA: 0x3FBC4A8
	public bool HasBulkRewardInQueue() { }

	[AsyncStateMachine(typeof(BroomStreakService.<GiveBulkRewardInQueue>d__35))]
	// RVA: 0x3FBC4C8 Offset: 0x3FBC4C8 VA: 0x3FBC4C8
	public Task GiveBulkRewardInQueue() { }

	// RVA: 0x3FBDECC Offset: 0x3FBDECC VA: 0x3FBDECC
	private RewardModel GetUpToDateStepRewardModel(BroomStreakStepConfigModel upToDateStepConfigModel) { }

	// RVA: 0x3FBE4DC Offset: 0x3FBE4DC VA: 0x3FBE4DC
	private void OnStepReached(BroomStreakStepConfigModel upToDateStepConfigModel, int winCount, int stepIndex) { }

	// RVA: 0x3FBE5DC Offset: 0x3FBE5DC VA: 0x3FBE5DC
	public bool IsCurrentWinCountHasChest() { }

	// RVA: 0x3FBE78C Offset: 0x3FBE78C VA: 0x3FBE78C
	public int GetWinCount() { }

	// RVA: 0x3FBE7A8 Offset: 0x3FBE7A8 VA: 0x3FBE7A8
	public int GetNextMainStep() { }

	// RVA: 0x3FBE968 Offset: 0x3FBE968 VA: 0x3FBE968
	public int GetNextMainStepButReturnMaxIfPlayerReached() { }

	// RVA: 0x3FBEB64 Offset: 0x3FBEB64 VA: 0x3FBEB64
	public float GetCachedLastSeenCircleProgressBarFillRatio() { }

	// RVA: 0x3FBEB80 Offset: 0x3FBEB80 VA: 0x3FBEB80
	public void MarkShowedCurrentCircleProgressBarFillRatio() { }

	// RVA: 0x3FBEBD0 Offset: 0x3FBEBD0 VA: 0x3FBEBD0
	public void MarkShowedCurrentCircleProgressBarFillRatioAndOpenedPopUp() { }

	// RVA: 0x3FBD5D4 Offset: 0x3FBD5D4 VA: 0x3FBD5D4
	private void SetLastSeenCircleProgressBarFillRatioToPrevious() { }

	// RVA: 0x3FBEC74 Offset: 0x3FBEC74 VA: 0x3FBEC74
	private float GetPreviousMainStepFillRatioToCache() { }

	// RVA: 0x3FBEBA4 Offset: 0x3FBEBA4 VA: 0x3FBEBA4
	public float GetCurrentMainStepFillRatio() { }

	// RVA: 0x3FBED74 Offset: 0x3FBED74 VA: 0x3FBED74
	private float GetMainStepFillRatio(int winCount) { }

	// RVA: 0x3FBEFF4 Offset: 0x3FBEFF4 VA: 0x3FBEFF4
	public void MarkEventIntroduced() { }

	// RVA: 0x3FBF024 Offset: 0x3FBF024 VA: 0x3FBF024
	public bool IsReachedMaxWinCount() { }

	// RVA: 0x3FBF0D0 Offset: 0x3FBF0D0 VA: 0x3FBF0D0
	public void ClaimEvent() { }

	// RVA: 0x3FBF174 Offset: 0x3FBF174 VA: 0x3FBF174
	public string GetTournamentId() { }

	// RVA: 0x3FBF1EC Offset: 0x3FBF1EC VA: 0x3FBF1EC
	public int GetMaxStepStreak() { }

	// RVA: 0x3FBF28C Offset: 0x3FBF28C VA: 0x3FBF28C
	public long GetStartTimeAsUnix() { }

	// RVA: 0x3FBF2CC Offset: 0x3FBF2CC VA: 0x3FBF2CC
	public bool IsPlayerFallDown() { }

	// RVA: 0x3FBF324 Offset: 0x3FBF324 VA: 0x3FBF324
	public int GetMaxClaimedCheckPointWinCount() { }

	// RVA: 0x3FBF340 Offset: 0x3FBF340 VA: 0x3FBF340
	public int GetLastSeenWinCountBeforeFallDown() { }

	// RVA: 0x3FBF35C Offset: 0x3FBF35C VA: 0x3FBF35C
	public int GetLiveOpsStateForLevelEvent() { }

	// RVA: 0x3FBF3CC Offset: 0x3FBF3CC VA: 0x3FBF3CC Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x3FBF430 Offset: 0x3FBF430 VA: 0x3FBF430 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x3FBF464 Offset: 0x3FBF464 VA: 0x3FBF464
	public string GetReadableEventId() { }

	// RVA: 0x3FBF580 Offset: 0x3FBF580 VA: 0x3FBF580
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts