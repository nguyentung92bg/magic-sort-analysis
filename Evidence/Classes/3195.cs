public class TreasureDrillStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3195
{
	// Fields
	private TreasureDrillService _treasureDrillService; // 0x10
	private TreasureDrillDataService _dataService; // 0x18
	private IPlayerService _playerService; // 0x20
	private RemoteConfigs _remoteConfigs; // 0x28
	private AdService _adService; // 0x30
	private TreasureDrillState _lastState; // 0x38

	// Methods

	// RVA: 0x3306774 Offset: 0x3306774 VA: 0x3306774
	public void .ctor(TreasureDrillService treasureDrillService, TreasureDrillDataService dataService, RemoteConfigs remoteConfigs, IPlayerService playerService, AdService adService) { }

	// RVA: 0x330680C Offset: 0x330680C VA: 0x330680C Slot: 4
	public void Initialize() { }

	// RVA: 0x330688C Offset: 0x330688C VA: 0x330688C Slot: 5
	public void Dispose() { }

	// RVA: 0x33057F8 Offset: 0x33057F8 VA: 0x33057F8
	public bool CanIncreaseTaskProgress() { }

	// RVA: 0x3305F00 Offset: 0x3305F00 VA: 0x3305F00
	public TreasureDrillConfigModel GetConfig() { }

	// RVA: 0x3305C80 Offset: 0x3305C80 VA: 0x3305C80
	public bool IsNotIntroduced() { }

	// RVA: 0x3304F00 Offset: 0x3304F00 VA: 0x3304F00
	public bool ShouldEventFinish() { }

	// RVA: 0x3306890 Offset: 0x3306890 VA: 0x3306890
	public TreasureDrillState GetEventState() { }

	// RVA: 0x3305C98 Offset: 0x3305C98 VA: 0x3305C98
	public bool IsInProgress() { }

	// RVA: 0x3305DB0 Offset: 0x3305DB0 VA: 0x3305DB0
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3304F74 Offset: 0x3304F74 VA: 0x3304F74
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x33056A4 Offset: 0x33056A4 VA: 0x33056A4
	public bool ShouldStartNewEvent() { }

	// RVA: 0x3306AB8 Offset: 0x3306AB8 VA: 0x3306AB8
	private bool IsEventFinishedWithoutClaimableSteps() { }

	// RVA: 0x3305828 Offset: 0x3305828 VA: 0x3305828
	public bool ShouldShowAlertView() { }

	// RVA: 0x3305E44 Offset: 0x3305E44 VA: 0x3305E44
	public bool IsLobbyIconGoingToBeShown() { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI