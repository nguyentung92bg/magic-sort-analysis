public class BoatRushStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4842
{
	// Fields
	private readonly BoatRushService _boatRushService; // 0x10
	private readonly BoatRushDataService _dataService; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private BoatRushStateType _lastState; // 0x30

	// Methods

	// RVA: 0x40F4E80 Offset: 0x40F4E80 VA: 0x40F4E80
	public void .ctor(BoatRushService boatRushService, BoatRushDataService boatRushDataService, IPlayerService playerService, RemoteConfigs remoteConfigs) { }

	// RVA: 0x40F4EFC Offset: 0x40F4EFC VA: 0x40F4EFC Slot: 4
	public void Initialize() { }

	// RVA: 0x40F4F08 Offset: 0x40F4F08 VA: 0x40F4F08 Slot: 5
	public void Dispose() { }

	// RVA: 0x40F4F0C Offset: 0x40F4F0C VA: 0x40F4F0C
	private BoatRushConfigModel GetConfig() { }

	// RVA: 0x40F4F30 Offset: 0x40F4F30 VA: 0x40F4F30
	private BoatRushStateType GetEventState() { }

	// RVA: 0x40F41E8 Offset: 0x40F41E8 VA: 0x40F41E8
	public void UpdateState() { }

	// RVA: 0x40F514C Offset: 0x40F514C VA: 0x40F514C
	public bool ShouldShowJoinPopUp() { }

	// RVA: 0x40F51A4 Offset: 0x40F51A4 VA: 0x40F51A4
	public bool ShouldShowRacePopUp() { }

	// RVA: 0x40F51C8 Offset: 0x40F51C8 VA: 0x40F51C8
	public bool IsRemoteEnd() { }

	// RVA: 0x40F51E0 Offset: 0x40F51E0 VA: 0x40F51E0
	public bool IsInProgress() { }

	// RVA: 0x40F51F8 Offset: 0x40F51F8 VA: 0x40F51F8
	public bool IsClaimed() { }

	// RVA: 0x40F5210 Offset: 0x40F5210 VA: 0x40F5210
	public bool CanIncreaseScore() { }

	// RVA: 0x40F5250 Offset: 0x40F5250 VA: 0x40F5250
	public bool ShouldShowBoatRushBanner() { }

	// RVA: 0x40F52B8 Offset: 0x40F52B8 VA: 0x40F52B8
	public bool ShouldSendGetRequest() { }

	// RVA: 0x40F52F8 Offset: 0x40F52F8 VA: 0x40F52F8
	public bool IsLobbyIconVisible() { }

	// RVA: 0x40F532C Offset: 0x40F532C VA: 0x40F532C
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x40F41D0 Offset: 0x40F41D0 VA: 0x40F41D0
	public bool ShouldDownloadAssets() { }

	// RVA: 0x40F5368 Offset: 0x40F5368 VA: 0x40F5368
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI
[CreateAssetMenu(fileName = "BoatRushAnimationConfig", menuName = "Configs/BoatRushAnimationConfig")]