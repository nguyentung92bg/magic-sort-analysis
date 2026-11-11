public class DailyRewardStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4486
{
	// Fields
	private DailyRewardStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private DailyRewardDataService _dataService; // 0x28
	private DailyRewardService _service; // 0x30

	// Methods

	// RVA: 0x38D4C04 Offset: 0x38D4C04 VA: 0x38D4C04
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, DailyRewardDataService dataService, DailyRewardService service) { }

	// RVA: 0x38D4C78 Offset: 0x38D4C78 VA: 0x38D4C78 Slot: 4
	public void Initialize() { }

	// RVA: 0x38D4CFC Offset: 0x38D4CFC VA: 0x38D4CFC Slot: 5
	public void Dispose() { }

	// RVA: 0x38D4D00 Offset: 0x38D4D00 VA: 0x38D4D00
	private DailyRewardConfigModelV2 GetConfig() { }

	// RVA: 0x38D4D24 Offset: 0x38D4D24 VA: 0x38D4D24
	private DailyRewardStateType GetEventState() { }

	// RVA: 0x38D3C7C Offset: 0x38D3C7C VA: 0x38D3C7C
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x38D3E38 Offset: 0x38D3E38 VA: 0x38D3E38
	public bool ShouldStartNewEvent() { }

	// RVA: 0x38D4444 Offset: 0x38D4444 VA: 0x38D4444
	public bool IsInProgress() { }

	// RVA: 0x38D3BF8 Offset: 0x38D3BF8 VA: 0x38D3BF8
	public bool IsLobbyIconVisible() { }

	// RVA: 0x38D3C28 Offset: 0x38D3C28 VA: 0x38D3C28
	public bool ShouldShowAlertView() { }

	// RVA: 0x38D431C Offset: 0x38D431C VA: 0x38D431C
	public bool IsNotIntroduced() { }

	// RVA: 0x38D437C Offset: 0x38D437C VA: 0x38D437C
	public bool ShouldForceOpen() { }

	// RVA: 0x38D45FC Offset: 0x38D45FC VA: 0x38D45FC
	public bool IsTimeUp() { }
}

// Namespace: 
[CompilerGenerated]