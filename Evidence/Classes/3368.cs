public class EndlessPortalService : IService, IInitializable, IDisposable, IIntervalUpdate, IDataInitializable, ILobbyShownService // TypeDefIndex: 3368
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private EndlessPortalDataService _dataService; // 0x18
	private EndlessPortalRemoteService _remoteService; // 0x20
	private EndlessPortalStateService _stateService; // 0x28
	private RewardService _rewardService; // 0x30
	private IPopUpService _popUpService; // 0x38
	private List<EndlessPortalRewardStepModel> _sixSteps; // 0x40
	private Dictionary<string, IAPConfigModel> _uniqueIAPs; // 0x48
	private const int StepCountInUI = 6;
	private CustomUpdater _customUpdater; // 0x50
	private SecondTimer _secondTimer; // 0x58
	private readonly LobbyEventsService _lobbyEventsService; // 0x60

	// Properties
	public EndlessPortalDataService DataService { get; }
	public EndlessPortalStateService StateService { get; }

	// Methods

	// RVA: 0x346909C Offset: 0x346909C VA: 0x346909C
	public EndlessPortalDataService get_DataService() { }

	// RVA: 0x34690A4 Offset: 0x34690A4 VA: 0x34690A4
	public EndlessPortalStateService get_StateService() { }

	// RVA: 0x34690AC Offset: 0x34690AC VA: 0x34690AC
	public void .ctor(RemoteConfigs remoteConfigs, EndlessPortalDataService dataService, RewardService rewardService, EndlessPortalRemoteService remoteService, EndlessPortalStateService stateService, CustomUpdater customUpdater, IPopUpService popUpService, LobbyEventsService lobbyEventsService) { }

	// RVA: 0x3469180 Offset: 0x3469180 VA: 0x3469180 Slot: 4
	public void Initialize() { }

	// RVA: 0x3469264 Offset: 0x3469264 VA: 0x3469264 Slot: 7
	public void InitializeData() { }

	// RVA: 0x3469320 Offset: 0x3469320 VA: 0x3469320 Slot: 5
	public void Dispose() { }

	// RVA: 0x3469354 Offset: 0x3469354 VA: 0x3469354
	public Dictionary<string, IAPConfigModel> GetUniqueIAPs() { }

	// RVA: 0x3469604 Offset: 0x3469604 VA: 0x3469604
	public List<EndlessPortalRewardStepModel> GetSixSteps() { }

	// RVA: 0x346980C Offset: 0x346980C VA: 0x346980C
	public bool HasStepRewardInEventCache() { }

	// RVA: 0x346987C Offset: 0x346987C VA: 0x346987C
	public void ClaimStepRewards() { }

	// RVA: 0x346998C Offset: 0x346998C VA: 0x346998C
	public EndlessPortalRewardStepModel GetSixthStep() { }

	// RVA: 0x3469A70 Offset: 0x3469A70 VA: 0x3469A70
	public EndlessPortalRewardStepModel GetPreviousStep() { }

	// RVA: 0x3469928 Offset: 0x3469928 VA: 0x3469928
	public EndlessPortalRewardStepModel GetCurrentStep() { }

	// RVA: 0x3469764 Offset: 0x3469764 VA: 0x3469764
	private int GetCurrentLoopedIndex() { }

	// RVA: 0x3469A18 Offset: 0x3469A18 VA: 0x3469A18
	private int GetLoopedIndex(int index) { }

	// RVA: 0x3469AFC Offset: 0x3469AFC VA: 0x3469AFC
	public string GetEventID() { }

	// RVA: 0x3469B6C Offset: 0x3469B6C VA: 0x3469B6C
	public long GetStartTimeAsUnix() { }

	// RVA: 0x3469BA0 Offset: 0x3469BA0 VA: 0x3469BA0
	public int GetRemainingSeconds() { }

	// RVA: 0x3469CB8 Offset: 0x3469CB8 VA: 0x3469CB8
	public void OnPopupOpened() { }

	[AsyncStateMachine(typeof(EndlessPortalService.<TryFetchCurrentEvent>d__33))]
	// RVA: 0x3469268 Offset: 0x3469268 VA: 0x3469268
	public void TryFetchCurrentEvent() { }

	// RVA: 0x3469CD0 Offset: 0x3469CD0 VA: 0x3469CD0
	public void OnForceShownAtEventStart() { }

	// RVA: 0x3469D00 Offset: 0x3469D00 VA: 0x3469D00 Slot: 6
	public void IntervalUpdate() { }

	// RVA: 0x3469D04 Offset: 0x3469D04 VA: 0x3469D04
	private void ScheduleLeaderboardFetchOnTimerEnd() { }

	// RVA: 0x3469798 Offset: 0x3469798 VA: 0x3469798
	private List<EndlessPortalRewardStepModel> GetSteps() { }

	// RVA: 0x3469EA8 Offset: 0x3469EA8 VA: 0x3469EA8
	private List<EndlessPortalRewardStepModel> GetFallbackSteps() { }

	// RVA: 0x3469DE8 Offset: 0x3469DE8 VA: 0x3469DE8
	public DateTime GetEndDate() { }

	// RVA: 0x3469ED4 Offset: 0x3469ED4 VA: 0x3469ED4
	public string GetSegment() { }

	// RVA: 0x3469F44 Offset: 0x3469F44 VA: 0x3469F44
	public void ClaimWithFallbackStepsForUniqueInApps(string productId) { }

	// RVA: 0x34695D8 Offset: 0x34695D8 VA: 0x34695D8
	private List<EndlessPortalRewardStepModel> GetFallbackStepsForUniqueInApps() { }

	// RVA: 0x346A104 Offset: 0x346A104 VA: 0x346A104 Slot: 8
	public bool IsLobbyShown() { }

	// RVA: 0x346A134 Offset: 0x346A134 VA: 0x346A134 Slot: 9
	public bool IsLobbyGoingToBeShown() { }

	[CompilerGenerated]
	// RVA: 0x346A164 Offset: 0x346A164 VA: 0x346A164
	private void <ScheduleLeaderboardFetchOnTimerEnd>b__36_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts