public class StrikeShowStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2479
{
	// Fields
	private readonly StrikeShowService _service; // 0x10
	private readonly StrikeShowDataService _dataService; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private StrikeShowStateType _lastState; // 0x28

	// Methods

	// RVA: 0x2AF9ABC Offset: 0x2AF9ABC VA: 0x2AF9ABC
	public void .ctor(StrikeShowService service, StrikeShowDataService dataService, IPlayerService playerService) { }

	// RVA: 0x2AF9B1C Offset: 0x2AF9B1C VA: 0x2AF9B1C Slot: 4
	public void Initialize() { }

	// RVA: 0x2AF9B28 Offset: 0x2AF9B28 VA: 0x2AF9B28 Slot: 5
	public void Dispose() { }

	// RVA: 0x2AF6BE4 Offset: 0x2AF6BE4 VA: 0x2AF6BE4
	public void UpdateState() { }

	// RVA: 0x2AF9B2C Offset: 0x2AF9B2C VA: 0x2AF9B2C
	private StrikeShowStateType GetState() { }

	// RVA: 0x2AF9104 Offset: 0x2AF9104 VA: 0x2AF9104
	public bool ShouldSendPreJoinRequest() { }

	// RVA: 0x2AF9128 Offset: 0x2AF9128 VA: 0x2AF9128
	public bool ShouldGetEvent() { }

	// RVA: 0x2AF737C Offset: 0x2AF737C VA: 0x2AF737C
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x2AF9DD4 Offset: 0x2AF9DD4 VA: 0x2AF9DD4
	public bool ShouldShowJoinPopup() { }

	// RVA: 0x2AF9DF0 Offset: 0x2AF9DF0 VA: 0x2AF9DF0
	public bool ShouldShowEventPopup() { }

	// RVA: 0x2AF9E2C Offset: 0x2AF9E2C VA: 0x2AF9E2C
	public bool ShouldShowForceIntroducePopup() { }

	// RVA: 0x2AF9E44 Offset: 0x2AF9E44 VA: 0x2AF9E44
	public bool ShouldShowForceEventPopup() { }

	// RVA: 0x2AF917C Offset: 0x2AF917C VA: 0x2AF917C
	public bool ShouldSendJoinRequest() { }

	// RVA: 0x2AF7F78 Offset: 0x2AF7F78 VA: 0x2AF7F78
	public bool ShouldDownloadAssets() { }

	// RVA: 0x2AF819C Offset: 0x2AF819C VA: 0x2AF819C
	public bool ShouldScheduleFetchOnEventEnd() { }

	// RVA: 0x2AF7080 Offset: 0x2AF7080 VA: 0x2AF7080
	public bool IsInPreJoin() { }

	// RVA: 0x2AF7018 Offset: 0x2AF7018 VA: 0x2AF7018
	public bool IsWaitingToJoin() { }

	// RVA: 0x2AF7098 Offset: 0x2AF7098 VA: 0x2AF7098
	public bool CanEarnScore() { }

	// RVA: 0x2AF7608 Offset: 0x2AF7608 VA: 0x2AF7608
	public bool CanClaim() { }

	// RVA: 0x2AF73B0 Offset: 0x2AF73B0 VA: 0x2AF73B0
	public bool CanDisplayRank() { }
}

// Namespace: Modules.Contexts.Home.StrikeShow.Scripts.UI