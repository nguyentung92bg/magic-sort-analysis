public class WelcomeBackService : IRestartableService, IService, IInitializable, IDisposable, IDataInitializable // TypeDefIndex: 3051
{
	// Fields
	private const int RetryLimit = 5;
	private const int RetryDelayInSeconds = 10;
	private readonly WelcomeBackDataService _dataService; // 0x10
	private readonly WelcomeBackStateService _stateService; // 0x18
	private readonly WelcomeBackRemoteService _remoteService; // 0x20
	private readonly NotificationService _notificationService; // 0x28
	private readonly CustomUpdater _customUpdater; // 0x30
	private readonly RemoteConfigs _remoteConfigs; // 0x38
	private NewSecondTimer _secondTimer; // 0x40
	private int _retryCount; // 0x48

	// Properties
	public bool IsEnabled { get; }
	public WelcomeBackDataService DataService { get; }
	public WelcomeBackStateService StateService { get; }

	// Methods

	// RVA: 0x315EB74 Offset: 0x315EB74 VA: 0x315EB74
	public bool get_IsEnabled() { }

	// RVA: 0x315EBA0 Offset: 0x315EBA0 VA: 0x315EBA0
	public WelcomeBackDataService get_DataService() { }

	// RVA: 0x315EBA8 Offset: 0x315EBA8 VA: 0x315EBA8
	public WelcomeBackStateService get_StateService() { }

	// RVA: 0x315EBB0 Offset: 0x315EBB0 VA: 0x315EBB0
	public void .ctor(WelcomeBackDataService dataService, WelcomeBackStateService stateService, WelcomeBackRemoteService remoteService, NotificationService notificationService, RemoteConfigs remoteConfigs, CustomUpdater customUpdater) { }

	// RVA: 0x315EC54 Offset: 0x315EC54 VA: 0x315EC54 Slot: 4
	public void Initialize() { }

	// RVA: 0x315ECC4 Offset: 0x315ECC4 VA: 0x315ECC4 Slot: 5
	public void Dispose() { }

	// RVA: 0x315ECEC Offset: 0x315ECEC VA: 0x315ECEC Slot: 6
	public void InitializeData() { }

	// RVA: 0x315ED3C Offset: 0x315ED3C VA: 0x315ED3C
	private void ScheduleWelcomeBackNotification() { }

	[AsyncStateMachine(typeof(WelcomeBackService.<TryFetchData>d__21))]
	// RVA: 0x315ED60 Offset: 0x315ED60 VA: 0x315ED60
	private void TryFetchData() { }

	[AsyncStateMachine(typeof(WelcomeBackService.<SendGetWelcomeBackRequest>d__22))]
	// RVA: 0x315EE18 Offset: 0x315EE18 VA: 0x315EE18
	private Task SendGetWelcomeBackRequest() { }

	// RVA: 0x315EF08 Offset: 0x315EF08 VA: 0x315EF08
	private void RetrySendGetWelcomeBackRequest() { }

	[AsyncStateMachine(typeof(WelcomeBackService.<TrySendClaimWelcomeBackRequest>d__24))]
	// RVA: 0x315EFFC Offset: 0x315EFFC VA: 0x315EFFC
	private Task TrySendClaimWelcomeBackRequest() { }

	[AsyncStateMachine(typeof(WelcomeBackService.<SendClaimWelcomeBackRequest>d__25))]
	// RVA: 0x315F0E8 Offset: 0x315F0E8 VA: 0x315F0E8
	private Task SendClaimWelcomeBackRequest(string welcomeBackId) { }

	// RVA: 0x315F1EC Offset: 0x315F1EC VA: 0x315F1EC
	public void ClaimReward() { }

	[CompilerGenerated]
	// RVA: 0x315F398 Offset: 0x315F398 VA: 0x315F398
	private void <RetrySendGetWelcomeBackRequest>b__23_0() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WelcomeBack.Scripts