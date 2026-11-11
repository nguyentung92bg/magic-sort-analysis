public class MagicStreakGaeService : IRestartableService, IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable // TypeDefIndex: 3877
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private MagicStreakGaeStateService _stateService; // 0x18
	private MagicStreakGaeRemoteService _remoteService; // 0x20
	private MagicStreakGaeDataService _dataService; // 0x28
	private CustomUpdater _customUpdater; // 0x30
	private IPlayerService _playerService; // 0x38
	private SegmentService _segmentService; // 0x40
	private MagicLabService _magicLabService; // 0x48
	private WheelOfFortuneService _wheelOfFortuneService; // 0x50
	private SecondTimer _secondTimer; // 0x58
	private List<int> _streakMultipliers; // 0x60
	private List<MagicStreakGaeRewardElementViewModel> _rewardElementViewModels; // 0x68
	private bool _shouldSyncWithBackend; // 0x70
	private MagicStreakGaeViewCache _viewCache; // 0x78

	// Properties
	public MagicStreakGaeViewCache ViewCache { get; }
	public MagicStreakGaeStateService StateService { get; }

	// Methods

	// RVA: 0x3CFC448 Offset: 0x3CFC448 VA: 0x3CFC448
	public MagicStreakGaeViewCache get_ViewCache() { }

	// RVA: 0x3CFC458 Offset: 0x3CFC458 VA: 0x3CFC458
	public MagicStreakGaeStateService get_StateService() { }

	// RVA: 0x3CFC460 Offset: 0x3CFC460 VA: 0x3CFC460
	public void .ctor(RemoteConfigs remoteConfigs, MagicStreakGaeStateService stateService, MagicStreakGaeRemoteService remoteService, MagicStreakGaeDataService dataService, CustomUpdater customUpdater, IPlayerService playerService, SegmentService segmentService, MagicLabService magicLabService, WheelOfFortuneService wheelOfFortuneService) { }

	// RVA: 0x3CFC54C Offset: 0x3CFC54C VA: 0x3CFC54C Slot: 4
	public void Initialize() { }

	// RVA: 0x3CFC8AC Offset: 0x3CFC8AC VA: 0x3CFC8AC Slot: 5
	public void Dispose() { }

	// RVA: 0x3CFC8E0 Offset: 0x3CFC8E0 VA: 0x3CFC8E0 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3CF3DC4 Offset: 0x3CF3DC4 VA: 0x3CF3DC4
	public void CacheViewModel() { }

	// RVA: 0x3CF3840 Offset: 0x3CF3840 VA: 0x3CF3840
	public int GetCurrentStreakMultiplierIndex() { }

	// RVA: 0x3CFD710 Offset: 0x3CFD710 VA: 0x3CFD710 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3CF2E8C Offset: 0x3CF2E8C VA: 0x3CF2E8C
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x3CF9768 Offset: 0x3CF9768 VA: 0x3CF9768
	public int GetRewardStepsCount() { }

	// RVA: 0x3CFD734 Offset: 0x3CFD734 VA: 0x3CFD734
	public List<MagicStreakGaeRewardStepModel> GetRewardSteps() { }

	// RVA: 0x3CFCB44 Offset: 0x3CFCB44 VA: 0x3CFCB44
	public void CacheLastSeenProgressBarValues() { }

	// RVA: 0x3CFC5E8 Offset: 0x3CFC5E8 VA: 0x3CFC5E8
	private void CacheMultipliers() { }

	// RVA: 0x3CFDD6C Offset: 0x3CFDD6C VA: 0x3CFDD6C
	public List<int> GetStreakMultipliers() { }

	// RVA: 0x3CFD4BC Offset: 0x3CFD4BC VA: 0x3CFD4BC
	private int GetStepIndexInRewards() { }

	// RVA: 0x3CFDD74 Offset: 0x3CFDD74 VA: 0x3CFDD74
	private int GetTotalHatCountInRewards() { }

	// RVA: 0x3CFD3FC Offset: 0x3CFD3FC VA: 0x3CFD3FC
	public DateTime GetEndDateUtc() { }

	// RVA: 0x3CFC900 Offset: 0x3CFC900 VA: 0x3CFC900
	private void CreateRewardElementViewModels() { }

	// RVA: 0x3CFD588 Offset: 0x3CFD588 VA: 0x3CFD588
	private List<MagicStreakGaeRewardElementViewModel> GetProgressbarAllRewards(int totalRewardScore) { }

	// RVA: 0x3CFDEC8 Offset: 0x3CFDEC8 VA: 0x3CFDEC8
	private int CalculateCurrentRewardIndex(int totalRewardScore) { }

	// RVA: 0x3CFDF7C Offset: 0x3CFDF7C VA: 0x3CFDF7C
	public bool IsLocalTimeIsUp() { }

	// RVA: 0x3CFD288 Offset: 0x3CFD288 VA: 0x3CFD288
	public bool IsAllStepsAreClaimed() { }

	// RVA: 0x3CFDFF4 Offset: 0x3CFDFF4 VA: 0x3CFDFF4
	public bool IsOnGrandPrize() { }

	// RVA: 0x3CFE04C Offset: 0x3CFE04C VA: 0x3CFE04C
	public void OnLevelWin() { }

	// RVA: 0x3CFE060 Offset: 0x3CFE060 VA: 0x3CFE060
	public void OnLevelLose() { }

	// RVA: 0x3CFCB14 Offset: 0x3CFCB14 VA: 0x3CFCB14
	private void TryFetchCurrentEvent() { }

	[AsyncStateMachine(typeof(MagicStreakGaeService.<FetchCurrentEvent>d__43))]
	// RVA: 0x3CFE0D0 Offset: 0x3CFE0D0 VA: 0x3CFE0D0
	private void FetchCurrentEvent() { }

	// RVA: 0x3CFE188 Offset: 0x3CFE188 VA: 0x3CFE188
	private void ScheduleEventFetchOnTimerEnd() { }

	// RVA: 0x3CFE26C Offset: 0x3CFE26C VA: 0x3CFE26C
	private void ChangeEventCache(MagicStreakGaeResponseModel responseData) { }

	// RVA: 0x3CFE4B8 Offset: 0x3CFE4B8 VA: 0x3CFE4B8
	private void ResetRewardScoreAndStreakMultiplierIndex() { }

	// RVA: 0x3CFCB70 Offset: 0x3CFCB70 VA: 0x3CFCB70
	private List<MagicStreakGaeStepViewModel> GetMagicStreakGaeAnimationSteps() { }

	// RVA: 0x3CFCF90 Offset: 0x3CFCF90 VA: 0x3CFCF90
	private MagicStreakGaeAnimationType GetAnimationType(List<MagicStreakGaeStepViewModel> steps) { }

	// RVA: 0x3CFD114 Offset: 0x3CFD114 VA: 0x3CFD114
	public MagicStreakGaeStepViewModel GetViewModel(bool getLastSeenView = False) { }

	// RVA: 0x3CFD084 Offset: 0x3CFD084 VA: 0x3CFD084
	private MagicStreakGaeProgressViewModel GetMultiplierBarViewModel(bool shouldUseLastSeenValue = False) { }

	// RVA: 0x3CFE504 Offset: 0x3CFE504 VA: 0x3CFE504
	public void IncreaseScoreAndStreakMultiplier(int additionalMultiplier = 1) { }

	// RVA: 0x3CFE6A4 Offset: 0x3CFE6A4 VA: 0x3CFE6A4
	public void IncreaseScoreForDebug(int score) { }

	// RVA: 0x3CFE614 Offset: 0x3CFE614 VA: 0x3CFE614
	private void TryIncreaseWinMagicStreakGaeCount() { }

	// RVA: 0x3CFE7B4 Offset: 0x3CFE7B4 VA: 0x3CFE7B4
	public List<RewardModel> GetEarnedRewardsAndSendStepCompletedEvent() { }

	// RVA: 0x3CFEA38 Offset: 0x3CFEA38 VA: 0x3CFEA38
	private void OnStepReached(MagicStreakGaeRewardStepModel rewardStep, int stepRank) { }

	// RVA: 0x3CFEB30 Offset: 0x3CFEB30 VA: 0x3CFEB30
	private void ClearPlayOnCountBetweenSteps() { }

	// RVA: 0x3CFEB5C Offset: 0x3CFEB5C VA: 0x3CFEB5C
	public int GetPlayOnCountBetweenSteps() { }

	// RVA: 0x3CFEB80 Offset: 0x3CFEB80 VA: 0x3CFEB80
	public int GetCumulativePlayOnCount() { }

	// RVA: 0x3CFEBA4 Offset: 0x3CFEBA4 VA: 0x3CFEBA4
	public void TryIncreasePlayOnCount() { }

	// RVA: 0x3CFEC14 Offset: 0x3CFEC14 VA: 0x3CFEC14
	public void ResetStreakMultiplier() { }

	// RVA: 0x3CF34A8 Offset: 0x3CF34A8 VA: 0x3CF34A8
	public int GetStreakCountForAnimation() { }

	// RVA: 0x3CF38E8 Offset: 0x3CF38E8 VA: 0x3CF38E8
	public void ResetStreakCountForAnimation() { }

	// RVA: 0x3CF988C Offset: 0x3CF988C VA: 0x3CF988C
	public void MarkIntroduced() { }

	// RVA: 0x3CF98BC Offset: 0x3CF98BC VA: 0x3CF98BC
	public void MarkIntroducedEverInLifeTime() { }

	// RVA: 0x3CFEC40 Offset: 0x3CFEC40 VA: 0x3CFEC40
	public string GetTournamentId() { }

	// RVA: 0x3CFECA8 Offset: 0x3CFECA8 VA: 0x3CFECA8
	public long GetEndTimeAsUnix() { }

	// RVA: 0x3CFECDC Offset: 0x3CFECDC VA: 0x3CFECDC
	public long GetStartTimeAsUnix() { }

	// RVA: 0x3CFED10 Offset: 0x3CFED10 VA: 0x3CFED10
	public string GetSegment() { }

	// RVA: 0x3CFED28 Offset: 0x3CFED28 VA: 0x3CFED28
	public int GetRemainingSeconds() { }

	// RVA: 0x3CFEE38 Offset: 0x3CFEE38 VA: 0x3CFEE38
	public int GetTotalCompletedStepCount() { }

	// RVA: 0x3CFEFB0 Offset: 0x3CFEFB0 VA: 0x3CFEFB0
	public int GetTotalRewardScore() { }

	// RVA: 0x3CFEFD4 Offset: 0x3CFEFD4 VA: 0x3CFEFD4
	public bool IsAvailableForWheelOfFortune() { }

	// RVA: 0x3CFF010 Offset: 0x3CFF010 VA: 0x3CFF010
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x3CFF04C Offset: 0x3CFF04C VA: 0x3CFF04C
	public int GetEventScore(int selectedMultiplier) { }

	[CompilerGenerated]
	// RVA: 0x3CFF0B4 Offset: 0x3CFF0B4 VA: 0x3CFF0B4
	private void <ScheduleEventFetchOnTimerEnd>b__44_0() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts
[CreateAssetMenu(fileName = "MagicStreakGaeSpriteConfig", menuName = "Configs/MagicStreakGaeSpriteConfig")]