public class DailyService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 4911
{
	// Fields
	private DailyDataService _dailyDataService; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private CustomUpdater _customUpdater; // 0x28
	private SecondTimer _secondTimer; // 0x30
	private DateTime _currentSelectedDate; // 0x38
	private NotificationService _notificationService; // 0x40

	// Properties
	private int MaxProgress { get; }

	// Methods

	// RVA: 0x4104A08 Offset: 0x4104A08 VA: 0x4104A08
	private int get_MaxProgress() { }

	// RVA: 0x4104A10 Offset: 0x4104A10 VA: 0x4104A10
	public void .ctor(DailyDataService dailyDataService, CustomUpdater customUpdater, IPlayerService playerService, RemoteConfigs remoteConfigs, NotificationService notificationService) { }

	// RVA: 0x4104AA0 Offset: 0x4104AA0 VA: 0x4104AA0 Slot: 4
	public void Initialize() { }

	// RVA: 0x4104B4C Offset: 0x4104B4C VA: 0x4104B4C Slot: 6
	public void InitializeData() { }

	// RVA: 0x4104F94 Offset: 0x4104F94 VA: 0x4104F94 Slot: 5
	public void Dispose() { }

	// RVA: 0x4104FB0 Offset: 0x4104FB0 VA: 0x4104FB0
	public bool IsEligibleForDaily() { }

	// RVA: 0x410508C Offset: 0x410508C VA: 0x410508C
	public int GetFirstLevelToShow() { }

	// RVA: 0x4104D58 Offset: 0x4104D58 VA: 0x4104D58
	private void ScheduleDateCheckAtEndOfTheDay() { }

	// RVA: 0x41050B8 Offset: 0x41050B8 VA: 0x41050B8
	public DateTime GetNextDayLocalDateTime() { }

	// RVA: 0x4104B6C Offset: 0x4104B6C VA: 0x4104B6C
	private void InitializeDate() { }

	// RVA: 0x4104E48 Offset: 0x4104E48 VA: 0x4104E48
	private void ScheduleDailyNotification() { }

	// RVA: 0x4105140 Offset: 0x4105140 VA: 0x4105140
	private void TryRescheduleDailyNotification(DateTime dateTime) { }

	[CanBeNull]
	// RVA: 0x41051E4 Offset: 0x41051E4 VA: 0x41051E4
	public RewardModel ClaimSelectedDayAndProgressBarReward() { }

	// RVA: 0x410549C Offset: 0x410549C VA: 0x410549C
	public RewardModel GetRewardModelByStep(int step) { }

	// RVA: 0x4105344 Offset: 0x4105344 VA: 0x4105344
	public void ClaimDay(DateTime dateTime) { }

	// RVA: 0x4105568 Offset: 0x4105568 VA: 0x4105568
	public void UnClaimDay(DateTime dateTime) { }

	// RVA: 0x4105580 Offset: 0x4105580 VA: 0x4105580
	public void UnlockSelectedDay() { }

	// RVA: 0x41055A0 Offset: 0x41055A0 VA: 0x41055A0
	public void UnlockAllDays() { }

	// RVA: 0x41055B8 Offset: 0x41055B8 VA: 0x41055B8
	public DailyViewModel GetDailyViewModelBySpecificDate(DateTime dateTime) { }

	// RVA: 0x41056AC Offset: 0x41056AC VA: 0x41056AC
	public DailyViewModel GetDailyViewModel(DateTime dateTime) { }

	// RVA: 0x4105930 Offset: 0x4105930 VA: 0x4105930
	public DailyViewModel GetActiveDailyViewModel() { }

	// RVA: 0x4105898 Offset: 0x4105898 VA: 0x4105898
	private DailyViewModel CreateDailyViewModel(DateTime currentTime, DateTime selectedDate, DailyDateModel[] monthDays) { }

	// RVA: 0x41059D4 Offset: 0x41059D4 VA: 0x41059D4
	private bool IsAllDaysClaimed(DateTime currentTime) { }

	// RVA: 0x41059A0 Offset: 0x41059A0 VA: 0x41059A0
	private DailyViewModel AssignProgressBarValues(DailyViewModel activeDailyDateModel) { }

	// RVA: 0x410543C Offset: 0x410543C VA: 0x410543C
	private int GetProgressOfMonth(DailyDateModel[] monthDays) { }

	// RVA: 0x4105A54 Offset: 0x4105A54 VA: 0x4105A54
	public void SetSelectedDate(DateTime dateTime) { }

	// RVA: 0x410533C Offset: 0x410533C VA: 0x410533C
	public DailyLevelInfo GetSelectedDailyLevelInfo() { }

	// RVA: 0x410535C Offset: 0x410535C VA: 0x410535C
	private DailyDateModel[] GetDailyDateModelsForMonth(DateTime targetMonth) { }

	// RVA: 0x4105A5C Offset: 0x4105A5C VA: 0x4105A5C
	private DateTime[] GetDaysInMonth(DateTime targetMonth) { }

	// RVA: 0x4105714 Offset: 0x4105714 VA: 0x4105714
	private DailyDateState GetDailyDateState(DateTime day) { }

	// RVA: 0x4105BA0 Offset: 0x4105BA0 VA: 0x4105BA0
	public bool DidTutorialLevelPlay() { }

	// RVA: 0x4105BC4 Offset: 0x4105BC4 VA: 0x4105BC4
	public void SetTutorialLevelPlayed() { }

	// RVA: 0x4105BF4 Offset: 0x4105BF4 VA: 0x4105BF4
	public bool IsNotIntroducedAndEligible() { }

	// RVA: 0x4105C3C Offset: 0x4105C3C VA: 0x4105C3C
	public void SetDailyIntroduced() { }

	[CompilerGenerated]
	// RVA: 0x4105C6C Offset: 0x4105C6C VA: 0x4105C6C
	private void <ScheduleDateCheckAtEndOfTheDay>b__15_0() { }
}

// Namespace: Modules.Contexts.Home.Daily.Scripts