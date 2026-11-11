public class MergeMiniGameStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3587
{
	// Fields
	private MergeMiniGameStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private IPopUpService _popUpService; // 0x28
	private MergeMiniGameDataService _dataService; // 0x30
	private MergeMiniGameService _service; // 0x38

	// Methods

	// RVA: 0x3FA6100 Offset: 0x3FA6100 VA: 0x3FA6100
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, MergeMiniGameDataService dataService, MergeMiniGameService service, IPopUpService popUpService) { }

	// RVA: 0x3FA6190 Offset: 0x3FA6190 VA: 0x3FA6190 Slot: 4
	public void Initialize() { }

	// RVA: 0x3FA6214 Offset: 0x3FA6214 VA: 0x3FA6214 Slot: 5
	public void Dispose() { }

	// RVA: 0x3FA6218 Offset: 0x3FA6218 VA: 0x3FA6218
	private MergeMiniGameStateType GetEventState() { }

	// RVA: 0x3FA5644 Offset: 0x3FA5644 VA: 0x3FA5644
	public void UpdateState() { }

	// RVA: 0x3FA6440 Offset: 0x3FA6440 VA: 0x3FA6440
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x3FA6444 Offset: 0x3FA6444 VA: 0x3FA6444
	public bool ShouldStartNewEvent() { }

	// RVA: 0x3FA6530 Offset: 0x3FA6530 VA: 0x3FA6530
	public bool IsInProgress() { }

	// RVA: 0x3FA6548 Offset: 0x3FA6548 VA: 0x3FA6548
	public bool IsNotIntroduced() { }

	// RVA: 0x3FA6560 Offset: 0x3FA6560 VA: 0x3FA6560
	public bool IsTimeUp() { }

	// RVA: 0x3FA6584 Offset: 0x3FA6584 VA: 0x3FA6584
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3FA65A8 Offset: 0x3FA65A8 VA: 0x3FA65A8
	public bool IsLobbyIconGoingToBeShown() { }

	// RVA: 0x3FA562C Offset: 0x3FA562C VA: 0x3FA562C
	public bool ShouldDownloadAssets() { }

	// RVA: 0x3FA65E4 Offset: 0x3FA65E4 VA: 0x3FA65E4
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: 
[CompilerGenerated]