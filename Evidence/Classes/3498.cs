public class MiniGameStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3498
{
	// Fields
	private MiniGameStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private IPopUpService _popUpService; // 0x28
	private MiniGameDataService _dataService; // 0x30
	private MiniGameService _service; // 0x38

	// Methods

	// RVA: 0x20B8538 Offset: 0x20B8538 VA: 0x20B8538
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, MiniGameDataService dataService, MiniGameService service, IPopUpService popUpService) { }

	// RVA: 0x20B85C8 Offset: 0x20B85C8 VA: 0x20B85C8 Slot: 4
	public void Initialize() { }

	// RVA: 0x20B864C Offset: 0x20B864C VA: 0x20B864C Slot: 5
	public void Dispose() { }

	// RVA: 0x20B8650 Offset: 0x20B8650 VA: 0x20B8650
	private MiniGameConfigModel GetConfig() { }

	// RVA: 0x20B8674 Offset: 0x20B8674 VA: 0x20B8674
	private MiniGameOfferConfigModel GetOfferConfig() { }

	// RVA: 0x20B8698 Offset: 0x20B8698 VA: 0x20B8698
	private MiniGameStateType GetEventState() { }

	// RVA: 0x20B7CF0 Offset: 0x20B7CF0 VA: 0x20B7CF0
	public void UpdateState() { }

	// RVA: 0x20B5490 Offset: 0x20B5490 VA: 0x20B5490
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x20B565C Offset: 0x20B565C VA: 0x20B565C
	public bool ShouldStartNewEvent() { }

	// RVA: 0x20B5E20 Offset: 0x20B5E20 VA: 0x20B5E20
	public bool IsInProgress() { }

	// RVA: 0x20B6280 Offset: 0x20B6280 VA: 0x20B6280
	public bool IsNotIntroduced() { }

	// RVA: 0x20B62F8 Offset: 0x20B62F8 VA: 0x20B62F8
	public bool IsTimeUp() { }

	// RVA: 0x20B5FB4 Offset: 0x20B5FB4 VA: 0x20B5FB4
	public bool IsLobbyIconVisible() { }

	// RVA: 0x20B73C8 Offset: 0x20B73C8 VA: 0x20B73C8
	public bool IsLobbyIconGoingToBeShown() { }

	// RVA: 0x20B7410 Offset: 0x20B7410 VA: 0x20B7410
	public bool IsOfferEnabled() { }

	// RVA: 0x20B7CD8 Offset: 0x20B7CD8 VA: 0x20B7CD8
	public bool ShouldDownloadAssets() { }

	// RVA: 0x20B7A3C Offset: 0x20B7A3C VA: 0x20B7A3C
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI