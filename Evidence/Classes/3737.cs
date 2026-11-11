public class MagicStreakStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3737
{
	// Fields
	private IPlayerService _playerService; // 0x10
	private RemoteConfigs _remoteConfigs; // 0x18
	private MagicStreakDataService _dataService; // 0x20
	private MagicStreakService _magicStreakService; // 0x28

	// Methods

	// RVA: 0x3E07C68 Offset: 0x3E07C68 VA: 0x3E07C68
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, MagicStreakDataService dataService, MagicStreakService magicStreakService) { }

	// RVA: 0x3E07CDC Offset: 0x3E07CDC VA: 0x3E07CDC Slot: 4
	public void Initialize() { }

	// RVA: 0x3E07CE0 Offset: 0x3E07CE0 VA: 0x3E07CE0 Slot: 5
	public void Dispose() { }

	// RVA: 0x3E07CE4 Offset: 0x3E07CE4 VA: 0x3E07CE4
	private MagicStreakTournamentConfigModel GetConfig() { }

	// RVA: 0x3E07D08 Offset: 0x3E07D08 VA: 0x3E07D08
	private MagicStreakStateType GetState() { }

	// RVA: 0x3E07EB0 Offset: 0x3E07EB0 VA: 0x3E07EB0
	private bool IsFinishedBeforeIntroduction() { }

	// RVA: 0x3E07EFC Offset: 0x3E07EFC VA: 0x3E07EFC
	public bool ShouldSendGetRequest() { }

	// RVA: 0x3E07F30 Offset: 0x3E07F30 VA: 0x3E07F30
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x3E07F48 Offset: 0x3E07F48 VA: 0x3E07F48
	public bool ShouldIncreaseScore() { }

	// RVA: 0x3E07F60 Offset: 0x3E07F60 VA: 0x3E07F60
	public bool ShouldForceOpen() { }

	// RVA: 0x3E07FD0 Offset: 0x3E07FD0 VA: 0x3E07FD0
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x3E08000 Offset: 0x3E08000 VA: 0x3E08000
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x3E0803C Offset: 0x3E0803C VA: 0x3E0803C
	public bool CanEarnTournamentScore() { }

	// RVA: 0x3E08054 Offset: 0x3E08054 VA: 0x3E08054
	public MagicStreakTournamentPopupStateType GetPopupState() { }

	// RVA: 0x3E08088 Offset: 0x3E08088 VA: 0x3E08088
	public bool ShouldSendStat() { }

	// RVA: 0x3E080B8 Offset: 0x3E080B8 VA: 0x3E080B8
	public int GetLiveOpsStateForLevelEvent() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts