public class TeamArenaStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2366
{
	// Fields
	private readonly TeamArenaService _service; // 0x10
	private readonly TeamArenaDataService _dataService; // 0x18
	private readonly IPlayerService _playerService; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28
	private TeamArenaStateType _lastState; // 0x30

	// Methods

	// RVA: 0x2964504 Offset: 0x2964504 VA: 0x2964504
	public void .ctor(TeamArenaService service, TeamArenaDataService dataService, IPlayerService playerService, RemoteConfigs remoteConfigs) { }

	// RVA: 0x2964578 Offset: 0x2964578 VA: 0x2964578 Slot: 4
	public void Initialize() { }

	// RVA: 0x29645E8 Offset: 0x29645E8 VA: 0x29645E8 Slot: 5
	public void Dispose() { }

	// RVA: 0x29645EC Offset: 0x29645EC VA: 0x29645EC
	public void UpdateState() { }

	// RVA: 0x29645F0 Offset: 0x29645F0 VA: 0x29645F0
	public TeamArenaStateType GetState() { }

	// RVA: 0x29648A4 Offset: 0x29648A4 VA: 0x29648A4
	private TeamArenaConfigModel GetConfig() { }

	// RVA: 0x29648C8 Offset: 0x29648C8 VA: 0x29648C8
	public bool ShouldGetEvent() { }

	// RVA: 0x2964904 Offset: 0x2964904 VA: 0x2964904
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x2964938 Offset: 0x2964938 VA: 0x2964938
	public bool ShouldShowEventPopup() { }

	// RVA: 0x2964954 Offset: 0x2964954 VA: 0x2964954
	public bool ShouldShowJoinPopupForce() { }

	// RVA: 0x29649D8 Offset: 0x29649D8 VA: 0x29649D8
	public bool ShouldShowForceEventPopup() { }

	// RVA: 0x2964A5C Offset: 0x2964A5C VA: 0x2964A5C
	public bool ShouldShowJoinPopup() { }

	// RVA: 0x2964AA4 Offset: 0x2964AA4 VA: 0x2964AA4
	public bool ShouldShowInPreGameScreen() { }

	// RVA: 0x2964ADC Offset: 0x2964ADC VA: 0x2964ADC
	public bool ShouldShowWarningLeaveTeam() { }
}

// Namespace: Modules.Contexts.Home.TeamArena