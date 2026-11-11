public class JetpackRaceStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4235
{
	// Fields
	private JetpackRaceStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private JetpackRaceDataService _jetpackRaceDataService; // 0x28
	private JetpackRaceService _jetpackRaceService; // 0x30

	// Methods

	// RVA: 0x3B1E29C Offset: 0x3B1E29C VA: 0x3B1E29C
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, JetpackRaceDataService hetpackRaceDataService, JetpackRaceService jetpackRaceService) { }

	// RVA: 0x3B1E318 Offset: 0x3B1E318 VA: 0x3B1E318 Slot: 4
	public void Initialize() { }

	// RVA: 0x3B1E398 Offset: 0x3B1E398 VA: 0x3B1E398 Slot: 5
	public void Dispose() { }

	// RVA: 0x3B1E39C Offset: 0x3B1E39C VA: 0x3B1E39C
	private JetpackRaceConfigModel GetConfig() { }

	// RVA: 0x3B1CA84 Offset: 0x3B1CA84 VA: 0x3B1CA84
	public JetpackRaceStateType GetEventState() { }

	// RVA: 0x3B1E3C0 Offset: 0x3B1E3C0 VA: 0x3B1E3C0
	public bool CanOpenPopUp() { }

	// RVA: 0x3B19F70 Offset: 0x3B19F70 VA: 0x3B19F70
	public bool ShouldSendGetRequest() { }

	// RVA: 0x3B1A060 Offset: 0x3B1A060 VA: 0x3B1A060
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x3B1C2FC Offset: 0x3B1C2FC VA: 0x3B1C2FC
	public bool CanResetScore() { }

	// RVA: 0x3B1C378 Offset: 0x3B1C378 VA: 0x3B1C378
	public bool CanIncreaseScore() { }

	// RVA: 0x3B1CFB8 Offset: 0x3B1CFB8 VA: 0x3B1CFB8
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3B1E400 Offset: 0x3B1E400 VA: 0x3B1E400
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x3B1E434 Offset: 0x3B1E434 VA: 0x3B1E434
	private bool IsLobbyIconVisibleAndNotIntroduced() { }

	// RVA: 0x3B1E460 Offset: 0x3B1E460 VA: 0x3B1E460
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x3B1E4B4 Offset: 0x3B1E4B4 VA: 0x3B1E4B4
	public bool ShouldOpenAutomaticallyOnLobbyReturn(out JetpackRaceImpressionSource jetpackRaceImpressionSource) { }

	// RVA: 0x3B17CE0 Offset: 0x3B17CE0 VA: 0x3B17CE0
	public bool ShouldOpenAutomaticallyOnSessionStart(out JetpackRaceImpressionSource jetpackRaceImpressionSource) { }

	// RVA: 0x3B1E664 Offset: 0x3B1E664 VA: 0x3B1E664
	public bool ShouldShowJetpackRaceBanner() { }

	// RVA: 0x3B17F04 Offset: 0x3B17F04 VA: 0x3B17F04
	public JetpackRacePopUpState GetPopUpState() { }

	// RVA: 0x3B1E694 Offset: 0x3B1E694 VA: 0x3B1E694
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x3B17EC8 Offset: 0x3B17EC8 VA: 0x3B17EC8
	public bool ShouldShowJoinPopup() { }

	// RVA: 0x3B17EEC Offset: 0x3B17EEC VA: 0x3B17EEC
	public bool CanShowJoinPopupForce() { }

	// RVA: 0x3B1E6DC Offset: 0x3B1E6DC VA: 0x3B1E6DC
	public bool IsInProgressState() { }

	// RVA: 0x3B1CF4C Offset: 0x3B1CF4C VA: 0x3B1CF4C
	public int GetLiveOpsStateForLevelEvent() { }
}

// Namespace: 
[CompilerGenerated]