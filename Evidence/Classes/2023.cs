public class TowerWinStreakStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2023
{
	// Fields
	private TowerWinStreakStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private TowerWinStreakDataService _towerWinStreakDataService; // 0x28
	private TowerWinStreakService _towerWinStreakService; // 0x30

	// Methods

	// RVA: 0x32E46C8 Offset: 0x32E46C8 VA: 0x32E46C8
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, TowerWinStreakDataService towerWinStreakDataService, TowerWinStreakService towerWinStreakService) { }

	// RVA: 0x32E473C Offset: 0x32E473C VA: 0x32E473C Slot: 4
	public void Initialize() { }

	// RVA: 0x32E47B8 Offset: 0x32E47B8 VA: 0x32E47B8 Slot: 5
	public void Dispose() { }

	// RVA: 0x32E47BC Offset: 0x32E47BC VA: 0x32E47BC
	private TowerWinStreakConfigModel GetConfig() { }

	// RVA: 0x32E47E0 Offset: 0x32E47E0 VA: 0x32E47E0
	private bool IsBroomStreakEnabled() { }

	// RVA: 0x32E480C Offset: 0x32E480C VA: 0x32E480C
	public TowerWinStreakStateType GetEventState() { }

	// RVA: 0x32E2320 Offset: 0x32E2320 VA: 0x32E2320
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x32E24B8 Offset: 0x32E24B8 VA: 0x32E24B8
	public bool ShouldStartNewEvent() { }

	// RVA: 0x32E4124 Offset: 0x32E4124 VA: 0x32E4124
	public bool IsLobbyIconVisible() { }

	// RVA: 0x32E49F8 Offset: 0x32E49F8 VA: 0x32E49F8
	private bool IsLobbyIconVisibleAndNotIntroduced() { }

	// RVA: 0x32E2960 Offset: 0x32E2960 VA: 0x32E2960
	public bool CanIncreaseScore() { }

	// RVA: 0x32E2AA0 Offset: 0x32E2AA0 VA: 0x32E2AA0
	public bool CanResetScore() { }

	// RVA: 0x32E4A30 Offset: 0x32E4A30 VA: 0x32E4A30
	public bool ShouldShowBroomAnimationOnLobbyReturn() { }

	// RVA: 0x32E4A84 Offset: 0x32E4A84 VA: 0x32E4A84
	public bool ShouldOpenAutomaticallyOnLobbyReturn(out TowerWinStreakSource towerWinStreakSource) { }

	// RVA: 0x32E19D8 Offset: 0x32E19D8 VA: 0x32E19D8
	public bool ShouldOpenAutomaticallyOnSessionStart(out TowerWinStreakSource towerWinStreakSource) { }

	// RVA: 0x32E1410 Offset: 0x32E1410 VA: 0x32E1410
	public bool ShouldShowForceHomeWelcoming() { }

	// RVA: 0x32E4B20 Offset: 0x32E4B20 VA: 0x32E4B20
	public bool ShouldShowTowerWinStreakBanner() { }

	// RVA: 0x32E4B38 Offset: 0x32E4B38 VA: 0x32E4B38
	public TowerWinStreakPopUpState GetPopUpState() { }

	// RVA: 0x32E4BA0 Offset: 0x32E4BA0 VA: 0x32E4BA0
	public bool ShouldShowInLevelStreakView() { }

	// RVA: 0x32E4BE0 Offset: 0x32E4BE0 VA: 0x32E4BE0
	public bool ShouldShowOnAreYouSure() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI