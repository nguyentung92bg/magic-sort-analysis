public class WeeklyTournamentStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 1980
{
	// Fields
	private WeeklyTournamentStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private WeeklyTournamentDataService _weeklyTournamentDataService; // 0x20
	private WeeklyTournamentService _weeklyTournamentService; // 0x28
	private RemoteConfigs _remoteConfigs; // 0x30

	// Methods

	// RVA: 0x32DB77C Offset: 0x32DB77C VA: 0x32DB77C
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, WeeklyTournamentDataService weeklyTournamentDataService, WeeklyTournamentService weeklyTournamentService) { }

	// RVA: 0x32DB7F8 Offset: 0x32DB7F8 VA: 0x32DB7F8 Slot: 4
	public void Initialize() { }

	// RVA: 0x32D5570 Offset: 0x32D5570 VA: 0x32D5570
	public void OnDataCorrupted() { }

	// RVA: 0x32DB878 Offset: 0x32DB878 VA: 0x32DB878 Slot: 5
	public void Dispose() { }

	// RVA: 0x32DB87C Offset: 0x32DB87C VA: 0x32DB87C
	public WeeklyTournamentConfigModel GetConfig() { }

	// RVA: 0x32D5B44 Offset: 0x32D5B44 VA: 0x32D5B44
	public void UpdateLeaderboardState() { }

	// RVA: 0x32DB8A0 Offset: 0x32DB8A0 VA: 0x32DB8A0
	private WeeklyTournamentStateType GetLeaderboardState() { }

	// RVA: 0x32DB3FC Offset: 0x32DB3FC VA: 0x32DB3FC
	public bool ShouldSendGetLeaderboardRequest() { }

	// RVA: 0x32DBA88 Offset: 0x32DBA88 VA: 0x32DBA88
	public bool IsVisible() { }

	// RVA: 0x32DBAC8 Offset: 0x32DBAC8 VA: 0x32DBAC8
	public bool IsUnlocked() { }

	// RVA: 0x32D99EC Offset: 0x32D99EC VA: 0x32D99EC
	public bool CanIncreaseScore() { }

	// RVA: 0x32DBAE4 Offset: 0x32DBAE4 VA: 0x32DBAE4
	public bool ShouldHideLeaderboardTimer() { }

	// RVA: 0x32DBB24 Offset: 0x32DBB24 VA: 0x32DBB24
	public bool IsResultState() { }

	// RVA: 0x32D9E08 Offset: 0x32D9E08 VA: 0x32D9E08
	public bool IsLeaderboardEntitySelectable() { }

	// RVA: 0x32D6C8C Offset: 0x32D6C8C VA: 0x32D6C8C
	public bool IsResultStateNotIntroduced() { }

	// RVA: 0x32DBB48 Offset: 0x32DBB48 VA: 0x32DBB48
	public bool ShouldOpenAutomaticallyOnLobbyReturn() { }

	// RVA: 0x32D6C2C Offset: 0x32D6C2C VA: 0x32D6C2C
	public bool ShouldOpenAutomaticallyOnSessionStart() { }

	// RVA: 0x32DBBA8 Offset: 0x32DBBA8 VA: 0x32DBBA8
	public bool ShouldShowNewFeatureAlertView() { }

	// RVA: 0x32D6CD4 Offset: 0x32D6CD4 VA: 0x32D6CD4
	public bool IsNotIntroducedAndVisible() { }

	// RVA: 0x32DA040 Offset: 0x32DA040 VA: 0x32DA040
	public bool IsLocalTimeUp() { }

	// RVA: 0x32DA760 Offset: 0x32DA760 VA: 0x32DA760
	public int GetLiveOpsStateForLevelEvent() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts.UI