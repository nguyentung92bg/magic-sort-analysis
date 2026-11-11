public class JetpackRaceWithStageStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4151
{
	// Fields
	private JetpackRaceWithStageStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private JetpackRaceWithStageDataService _jetpackRaceWithStageDataService; // 0x28
	private JetpackRaceWithStageService _jetpackRaceWithStageService; // 0x30

	// Methods

	// RVA: 0x3A8CEF4 Offset: 0x3A8CEF4 VA: 0x3A8CEF4
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, JetpackRaceWithStageDataService jetpackRaceDataService, JetpackRaceWithStageService jetpackRaceWithStageService) { }

	// RVA: 0x3A8CF70 Offset: 0x3A8CF70 VA: 0x3A8CF70 Slot: 4
	public void Initialize() { }

	// RVA: 0x3A8CFF0 Offset: 0x3A8CFF0 VA: 0x3A8CFF0 Slot: 5
	public void Dispose() { }

	// RVA: 0x3A8CFF4 Offset: 0x3A8CFF4 VA: 0x3A8CFF4
	private JetpackRaceWithStageConfigModel GetConfig() { }

	// RVA: 0x3A8A8CC Offset: 0x3A8A8CC VA: 0x3A8A8CC
	public JetpackRaceWithStageStateType GetEventState() { }

	// RVA: 0x3A8D018 Offset: 0x3A8D018 VA: 0x3A8D018
	public bool CanOpenPopUp() { }

	// RVA: 0x3A8745C Offset: 0x3A8745C VA: 0x3A8745C
	public bool ShouldSendGetRequest() { }

	// RVA: 0x3A87594 Offset: 0x3A87594 VA: 0x3A87594
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x3A89B30 Offset: 0x3A89B30 VA: 0x3A89B30
	public bool CanResetScore() { }

	// RVA: 0x3A89C48 Offset: 0x3A89C48 VA: 0x3A89C48
	public bool CanIncreaseScore() { }

	// RVA: 0x3A8AF74 Offset: 0x3A8AF74 VA: 0x3A8AF74
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3A8AFE0 Offset: 0x3A8AFE0 VA: 0x3A8AFE0
	public bool IsLobbyGoingToBeShown() { }

	// RVA: 0x3A8D058 Offset: 0x3A8D058 VA: 0x3A8D058
	private bool IsLobbyIconVisibleAndNotIntroduced() { }

	// RVA: 0x3A8D084 Offset: 0x3A8D084 VA: 0x3A8D084
	public bool ShouldShowCollectibleEarnAnimationOnLobbyReturn() { }

	// RVA: 0x3A8D0D8 Offset: 0x3A8D0D8 VA: 0x3A8D0D8
	public bool ShouldOpenAutomaticallyOnLobbyReturn(out JetpackRaceWithStageImpressionSource jetpackRaceWithStageImpressionSource) { }

	// RVA: 0x3A83754 Offset: 0x3A83754 VA: 0x3A83754
	public bool ShouldOpenAutomaticallyOnSessionStart(out JetpackRaceWithStageImpressionSource jetpackRaceWithStageImpressionSource) { }

	// RVA: 0x3A8D208 Offset: 0x3A8D208 VA: 0x3A8D208
	public bool ShouldShowJetpackRaceWithStageBanner() { }

	// RVA: 0x3A83A10 Offset: 0x3A83A10 VA: 0x3A83A10
	public JetpackRaceWithStagePopUpState GetPopUpState() { }

	// RVA: 0x3A8D238 Offset: 0x3A8D238 VA: 0x3A8D238
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x3A838F8 Offset: 0x3A838F8 VA: 0x3A838F8
	public bool ShouldShowJoinPopup() { }

	// RVA: 0x3A8391C Offset: 0x3A8391C VA: 0x3A8391C
	public bool CanShowJoinPopupForce() { }

	// RVA: 0x3A8D298 Offset: 0x3A8D298 VA: 0x3A8D298
	public bool IsInProgressState() { }

	// RVA: 0x3A8AEDC Offset: 0x3A8AEDC VA: 0x3A8AEDC
	public int GetLiveOpsStateForLevelEvent() { }

	// RVA: 0x3A8B2D4 Offset: 0x3A8B2D4 VA: 0x3A8B2D4
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: 
[CompilerGenerated]