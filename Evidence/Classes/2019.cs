public class TowerWinStreakService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 2019
{
	// Fields
	private TowerWinStreakDataService _towerWinStreakDataService; // 0x10
	private TowerWinStreakRemoteService _towerWinStreakRemoteService; // 0x18
	private TowerWinStreakStateService _towerWinStreakStateService; // 0x20
	private CustomUpdater _customUpdater; // 0x28
	private RemoteConfigs _remoteConfigs; // 0x30
	private RewardService _rewardService; // 0x38
	private readonly LobbyEventsService _lobbyEventsService; // 0x40

	// Properties
	public TowerWinStreakStateService TowerWinStreakStateService { get; }

	// Methods

	// RVA: 0x32E21BC Offset: 0x32E21BC VA: 0x32E21BC
	public TowerWinStreakStateService get_TowerWinStreakStateService() { }

	// RVA: 0x32E21C4 Offset: 0x32E21C4 VA: 0x32E21C4
	public void .ctor(TowerWinStreakDataService towerWinStreakDataService, TowerWinStreakRemoteService towerWinStreakRemoteService, TowerWinStreakStateService towerWinStreakStateService, CustomUpdater customUpdater, RemoteConfigs remoteConfigs, RewardService rewardService, LobbyEventsService lobbyEventsService) { }

	// RVA: 0x32E2284 Offset: 0x32E2284 VA: 0x32E2284 Slot: 4
	public void Initialize() { }

	// RVA: 0x32E22A8 Offset: 0x32E22A8 VA: 0x32E22A8 Slot: 7
	public void InitializeData() { }

	// RVA: 0x32E22FC Offset: 0x32E22FC VA: 0x32E22FC Slot: 5
	public void Dispose() { }

	// RVA: 0x32E231C Offset: 0x32E231C VA: 0x32E231C Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x32E22AC Offset: 0x32E22AC VA: 0x32E22AC
	public void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(TowerWinStreakService.<FetchCurrentEvent>d__15))]
	// RVA: 0x32E2344 Offset: 0x32E2344 VA: 0x32E2344
	private void FetchCurrentEvent() { }

	// RVA: 0x32E23FC Offset: 0x32E23FC VA: 0x32E23FC
	private void TryStartNewEvent(TowerWinStreakEventInfoResponse towerWinStreakEventInfoResponse) { }

	// RVA: 0x32E24DC Offset: 0x32E24DC VA: 0x32E24DC
	public int GetRemainingSeconds() { }

	// RVA: 0x32E25EC Offset: 0x32E25EC VA: 0x32E25EC
	private DateTime ConvertToUtc(long time) { }

	// RVA: 0x32E2664 Offset: 0x32E2664 VA: 0x32E2664
	public DateTime GetEndDate() { }

	// RVA: 0x32E26E4 Offset: 0x32E26E4 VA: 0x32E26E4
	public bool IsWinStreakIncreasedSinceLastSeen() { }

	// RVA: 0x32E275C Offset: 0x32E275C VA: 0x32E275C
	public bool IsMainStepIncreasedSinceLastSeen() { }

	// RVA: 0x32E2924 Offset: 0x32E2924 VA: 0x32E2924
	public void TryIncreaseWinStreak() { }

	// RVA: 0x32E2A40 Offset: 0x32E2A40 VA: 0x32E2A40
	public bool TryResetWinStreak() { }

	// RVA: 0x32E2714 Offset: 0x32E2714 VA: 0x32E2714
	public int GetCurrentWinCount() { }

	// RVA: 0x32E2AB8 Offset: 0x32E2AB8 VA: 0x32E2AB8
	public int GetMaxWinCount() { }

	// RVA: 0x32E2ADC Offset: 0x32E2ADC VA: 0x32E2ADC
	public int GetMaxWinCountRecord() { }

	// RVA: 0x32E2738 Offset: 0x32E2738 VA: 0x32E2738
	public int GetLastSeenWinCount() { }

	// RVA: 0x32E2B00 Offset: 0x32E2B00 VA: 0x32E2B00
	public List<TowerWinStreakStepViewModel> GetLastSeenViewModels() { }

	// RVA: 0x32E3034 Offset: 0x32E3034 VA: 0x32E3034
	public void GiveRewardsAndCacheLastSeenWinCount() { }

	// RVA: 0x32E306C Offset: 0x32E306C VA: 0x32E306C
	private void GiveRewardsBetweenLastSeenAndCurrentWinCount() { }

	// RVA: 0x32E3424 Offset: 0x32E3424 VA: 0x32E3424
	public bool IsCurrentWinCountHasChest() { }

	// RVA: 0x32E35C4 Offset: 0x32E35C4 VA: 0x32E35C4
	public int GetNextMainStep() { }

	// RVA: 0x32E3774 Offset: 0x32E3774 VA: 0x32E3774
	public int GetNextMainStepButReturnMaxIfPlayerReached() { }

	// RVA: 0x32E3960 Offset: 0x32E3960 VA: 0x32E3960
	public float GetCachedLastSeenCircleProgressBarFillRatio() { }

	// RVA: 0x32E3984 Offset: 0x32E3984 VA: 0x32E3984
	public void MarkShowedCurrentCircleProgressBarFillRatio() { }

	// RVA: 0x32E39C8 Offset: 0x32E39C8 VA: 0x32E39C8
	public void MarkShowedCurrentCircleProgressBarFillRatioAndOpenedPopUp() { }

	// RVA: 0x32E2A20 Offset: 0x32E2A20 VA: 0x32E2A20
	private void SetLastSeenCircleProgressBarFillRatioToPrevious() { }

	// RVA: 0x32E3A68 Offset: 0x32E3A68 VA: 0x32E3A68
	private float GetPreviousMainStepFillRatioToCache() { }

	// RVA: 0x32E39A4 Offset: 0x32E39A4 VA: 0x32E39A4
	public float GetCurrentMainStepFillRatio() { }

	// RVA: 0x32E3B64 Offset: 0x32E3B64 VA: 0x32E3B64
	private float GetMainStepFillRatio(int winCount) { }

	// RVA: 0x32E3DE8 Offset: 0x32E3DE8 VA: 0x32E3DE8
	public void MarkEventIntroduced() { }

	// RVA: 0x32E3E18 Offset: 0x32E3E18 VA: 0x32E3E18
	public bool IsReachedMaxWinCount() { }

	// RVA: 0x32E3EBC Offset: 0x32E3EBC VA: 0x32E3EBC
	public void ClaimEvent() { }

	// RVA: 0x32E3F5C Offset: 0x32E3F5C VA: 0x32E3F5C
	public string GetTournamentId() { }

	// RVA: 0x32E3FC4 Offset: 0x32E3FC4 VA: 0x32E3FC4
	public int GetMaxStepStreak() { }

	// RVA: 0x32E405C Offset: 0x32E405C VA: 0x32E405C
	public long GetStartTimeAsUnix() { }

	// RVA: 0x32E4090 Offset: 0x32E4090 VA: 0x32E4090
	public bool IsPlayerFallDown() { }

	// RVA: 0x32E40CC Offset: 0x32E40CC VA: 0x32E40CC
	public int GetLastSeenWinCountBeforeReset() { }

	// RVA: 0x32E40F0 Offset: 0x32E40F0 VA: 0x32E40F0 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x32E4154 Offset: 0x32E4154 VA: 0x32E4154 Slot: 9
	public bool IsLobbyGoingToBeShown() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts