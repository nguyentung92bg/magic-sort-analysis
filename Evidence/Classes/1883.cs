public class WheelOfFortuneStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1883
{
	// Fields
	private WheelOfFortuneService _wheelOfFortuneService; // 0x10
	private WheelOfFortuneDataService _dataService; // 0x18
	private IPlayerService _playerService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private IPopUpService _popUpService; // 0x30
	private WheelOfFortuneState _lastState; // 0x38

	// Methods

	// RVA: 0x3198D28 Offset: 0x3198D28 VA: 0x3198D28
	public void .ctor(WheelOfFortuneService wheelOfFortuneService, WheelOfFortuneDataService dataService, RemoteConfigs remoteConfigs, IPlayerService playerService, IPopUpService popUpService) { }

	// RVA: 0x3198DC0 Offset: 0x3198DC0 VA: 0x3198DC0 Slot: 4
	public void Initialize() { }

	// RVA: 0x3198DCC Offset: 0x3198DCC VA: 0x3198DCC Slot: 5
	public void Dispose() { }

	// RVA: 0x3198DD0 Offset: 0x3198DD0 VA: 0x3198DD0
	private WheelOfFortuneConfigModel GetConfig() { }

	// RVA: 0x3198DF4 Offset: 0x3198DF4 VA: 0x3198DF4
	private WheelOfFortuneState GetEventState() { }

	// RVA: 0x3199028 Offset: 0x3199028 VA: 0x3199028
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3199060 Offset: 0x3199060 VA: 0x3199060
	public bool IsInProgress() { }

	// RVA: 0x3199078 Offset: 0x3199078 VA: 0x3199078
	public bool IsNotIntroduced() { }

	// RVA: 0x3199090 Offset: 0x3199090 VA: 0x3199090
	public bool ShouldShowAlertView() { }

	// RVA: 0x31990AC Offset: 0x31990AC VA: 0x31990AC
	public bool ShouldShowSpinAlert() { }

	// RVA: 0x31990C8 Offset: 0x31990C8 VA: 0x31990C8
	public bool IsTimeUp() { }

	// RVA: 0x31990E0 Offset: 0x31990E0 VA: 0x31990E0
	public bool ShouldStartNewEvent() { }

	// RVA: 0x3199008 Offset: 0x3199008 VA: 0x3199008
	public bool IsWheelOfFortuneEnabled() { }

	// RVA: 0x31991CC Offset: 0x31991CC VA: 0x31991CC
	public bool CanIncreaseTaskProgress() { }

	// RVA: 0x31991F0 Offset: 0x31991F0 VA: 0x31991F0
	public bool CanResetTaskProgress() { }

	// RVA: 0x3199228 Offset: 0x3199228 VA: 0x3199228
	public bool CanIncreaseTaskProgressOnEventStart() { }

	// RVA: 0x319883C Offset: 0x319883C VA: 0x319883C
	public bool ShouldDownloadAssets() { }

	// RVA: 0x3198854 Offset: 0x3198854 VA: 0x3198854
	public void UpdateState() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune.Scripts.UI
[CreateAssetMenu(fileName = "WheelOfFortuneAnimationConfig", menuName = "Configs/WheelOfFortuneAnimationConfig")]