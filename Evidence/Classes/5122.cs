public class NotificationService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 5122
{
	// Fields
	private ISaveLoad<NotificationModel> _saveLoad; // 0x10
	private NotificationModel _model; // 0x18
	private LocalNotificationSo _lifeNotificationConfig; // 0x20
	private LocalNotificationSo _ret1NotificationConfig; // 0x28
	private LocalNotificationSo _streakTournamentEndNotificationConfig; // 0x30
	private LocalNotificationSo _weeklyTournamentEndNotificationConfig; // 0x38
	private LocalNotificationSo _jetpackRaceNotificationSo; // 0x40
	private LocalNotificationSo _skyJumpStartedAfterWinNotificationSo; // 0x48
	private LocalNotificationSo _skyJumpStartedAfterLoseNotificationSo; // 0x50
	private LocalNotificationSo _dailyStartedNotificationSo; // 0x58
	private LocalNotificationSo _welcomeBackNotificationSo; // 0x60
	private LocalNotificationSo _wheelOfFortuneSpinReminderNotificationSo; // 0x68
	private IPlayerService _playerService; // 0x70
	private GameNotificationsPlatform _gameNotificationsPlatform; // 0x78
	private bool _initializeStarted; // 0x80
	private bool _initialized; // 0x81

	// Methods

	// RVA: 0x137A534 Offset: 0x137A534 VA: 0x137A534
	public void .ctor(LocalNotificationSo lifeNotificationConfig, LocalNotificationSo ret1NotificationConfig, LocalNotificationSo streakTournamentEndNotificationConfig, LocalNotificationSo weeklyTournamentEndNotificationConfig, LocalNotificationSo jetpackRaceNotificationSo, LocalNotificationSo skyJumpStartedAfterWinNotificationSo, LocalNotificationSo skyJumpStartedAfterLoseNotificationSo, LocalNotificationSo dailyStartedNotificationSo, LocalNotificationSo welcomeBackNotificationSo, LocalNotificationSo wheelOfFortuneSpinReminderNotificationSo, IPlayerService playerService) { }

	// RVA: 0x137A654 Offset: 0x137A654 VA: 0x137A654 Slot: 4
	public void Initialize() { }

	[AsyncStateMachine(typeof(NotificationService.<RequestPermission>d__18))]
	// RVA: 0x137A874 Offset: 0x137A874 VA: 0x137A874
	public Task RequestPermission() { }

	// RVA: 0x137A964 Offset: 0x137A964 VA: 0x137A964
	private void SendNotification(LocalNotificationSo localNotificationSo, int delayAsSeconds) { }

	// RVA: 0x137AB00 Offset: 0x137AB00 VA: 0x137AB00
	private void Cancel(int id) { }

	// RVA: 0x137AB50 Offset: 0x137AB50 VA: 0x137AB50
	private void OnNotificationPreferenceChanged(bool isOn) { }

	// RVA: 0x137AB34 Offset: 0x137AB34 VA: 0x137AB34
	public bool GetNotificationPreference() { }

	// RVA: 0x137ACD0 Offset: 0x137ACD0 VA: 0x137ACD0
	public void SendD1RetNotification() { }

	// RVA: 0x137ACE0 Offset: 0x137ACE0 VA: 0x137ACE0
	public void SendLifeNotification(int delayAsSeconds) { }

	// RVA: 0x137ACF0 Offset: 0x137ACF0 VA: 0x137ACF0
	public void SendStreakTournamentEndNotification(int delayAsSeconds) { }

	// RVA: 0x137AD00 Offset: 0x137AD00 VA: 0x137AD00
	public void SendWeeklyTournamentEndNotification(int delayAsSeconds) { }

	// RVA: 0x137AD10 Offset: 0x137AD10 VA: 0x137AD10
	public void SendJetpackRaceEndNotification(int delayAsSeconds) { }

	// RVA: 0x137AD20 Offset: 0x137AD20 VA: 0x137AD20
	public void SendSkyJumpStartedAfterWinNotification(int delayAsSeconds) { }

	// RVA: 0x137AD30 Offset: 0x137AD30 VA: 0x137AD30
	public void CancelSkyJumpStartedAfterWinNotification() { }

	// RVA: 0x137AD4C Offset: 0x137AD4C VA: 0x137AD4C
	public void SendSkyJumpStartedAfterLoseNotification(int delayAsSeconds) { }

	// RVA: 0x137AD5C Offset: 0x137AD5C VA: 0x137AD5C
	public void SendDailyStartedNotification(int delayAsSeconds) { }

	// RVA: 0x137AD6C Offset: 0x137AD6C VA: 0x137AD6C
	public void SendWelcomeBackNotification(int delayAsSeconds) { }

	// RVA: 0x137AD7C Offset: 0x137AD7C VA: 0x137AD7C
	public void CancelDailyNotification() { }

	// RVA: 0x137AD98 Offset: 0x137AD98 VA: 0x137AD98
	public void CancelSkyJumpStartedAfterLoseNotification() { }

	// RVA: 0x137ADB4 Offset: 0x137ADB4 VA: 0x137ADB4
	public void CancelJetpackRaceNotification() { }

	// RVA: 0x137ADD0 Offset: 0x137ADD0 VA: 0x137ADD0
	public void CancelStreakTournamentNotification() { }

	// RVA: 0x137ADEC Offset: 0x137ADEC VA: 0x137ADEC
	public void CancelLifeNotification() { }

	// RVA: 0x137AE08 Offset: 0x137AE08 VA: 0x137AE08 Slot: 5
	public void Dispose() { }

	// RVA: 0x137AEEC Offset: 0x137AEEC VA: 0x137AEEC
	public void SendSkyJumpWithStageStartedAfterLoseNotification(int delayAsSeconds) { }

	// RVA: 0x137AEFC Offset: 0x137AEFC VA: 0x137AEFC
	public void CancelSkyJumpWithStageStartedAfterLoseNotification() { }

	// RVA: 0x137AF00 Offset: 0x137AF00 VA: 0x137AF00
	public void SendWheelOfFortuneSpinReminderNotification(int amount, int delayAsSeconds) { }

	// RVA: 0x137AFE0 Offset: 0x137AFE0 VA: 0x137AFE0
	public void CancelWheelOfFortuneSpinReminderNotification() { }
}

// Namespace: Modules.Contexts.Application.Notification.Scripts
[Serializable]