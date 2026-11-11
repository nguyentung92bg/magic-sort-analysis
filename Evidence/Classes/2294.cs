public class TeamQuestStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2294
{
	// Fields
	private TeamQuestService _teamQuestService; // 0x10
	private TeamQuestDataService _teamQuestDataService; // 0x18
	private IPlayerService _playerService; // 0x20
	private TeamQuestStateType _lastState; // 0x28

	// Methods

	// RVA: 0x2DDA6D0 Offset: 0x2DDA6D0 VA: 0x2DDA6D0
	public void .ctor(TeamQuestService teamQuestService, TeamQuestDataService teamQuestDataService, IPlayerService playerService) { }

	// RVA: 0x2DDA738 Offset: 0x2DDA738 VA: 0x2DDA738 Slot: 4
	public void Initialize() { }

	// RVA: 0x2DDA73C Offset: 0x2DDA73C VA: 0x2DDA73C Slot: 5
	public void Dispose() { }

	// RVA: 0x2DDA740 Offset: 0x2DDA740 VA: 0x2DDA740
	private TeamQuestStateType GetEventState() { }

	// RVA: 0x2DD6724 Offset: 0x2DD6724 VA: 0x2DD6724
	public void UpdateState() { }

	// RVA: 0x2DD6768 Offset: 0x2DD6768 VA: 0x2DD6768
	public bool IsLobbyButtonVisible() { }

	// RVA: 0x2DD6398 Offset: 0x2DD6398 VA: 0x2DD6398
	public bool ShouldSendFetchEventRequest() { }

	// RVA: 0x2DD6854 Offset: 0x2DD6854 VA: 0x2DD6854
	public bool IsInProgress() { }

	// RVA: 0x2DDAAAC Offset: 0x2DDAAAC VA: 0x2DDAAAC
	public bool ShouldShowEventPopup() { }

	// RVA: 0x2DDAAC8 Offset: 0x2DDAAC8 VA: 0x2DDAAC8
	public bool ShouldShowJoinPopup() { }

	// RVA: 0x2DDAAE4 Offset: 0x2DDAAE4 VA: 0x2DDAAE4
	public bool ShouldShowForceEventPopup() { }

	// RVA: 0x2DDAB30 Offset: 0x2DDAB30 VA: 0x2DDAB30
	public bool ShouldShowNoInternetConnection() { }

	// RVA: 0x2DDAB48 Offset: 0x2DDAB48 VA: 0x2DDAB48
	public bool ShouldShowForceJoinPopup() { }

	// RVA: 0x2DDAA74 Offset: 0x2DDAA74 VA: 0x2DDAA74
	private bool IsFinished() { }

	// RVA: 0x2DDAA3C Offset: 0x2DDAA3C VA: 0x2DDAA3C
	public bool IsJoined() { }

	// RVA: 0x2DDAA04 Offset: 0x2DDAA04 VA: 0x2DDAA04
	private bool IsClaimed() { }

	// RVA: 0x2DD9540 Offset: 0x2DD9540 VA: 0x2DD9540
	public bool ShouldDownloadAssets() { }

	// RVA: 0x2DD7EC8 Offset: 0x2DD7EC8 VA: 0x2DD7EC8
	public bool ShouldShowJoinTextLobbyIcon() { }

	// RVA: 0x2DD77B4 Offset: 0x2DD77B4 VA: 0x2DD77B4
	public bool IsRemoteEnd() { }

	// RVA: 0x2DD8EBC Offset: 0x2DD8EBC VA: 0x2DD8EBC
	public bool IsNotIntroduced() { }

	// RVA: 0x2DD7EE4 Offset: 0x2DD7EE4 VA: 0x2DD7EE4
	public bool ShouldShowFinishedAlert() { }

	// RVA: 0x2DD6DB4 Offset: 0x2DD6DB4 VA: 0x2DD6DB4
	public bool IsStateEligibleToJoin() { }

	// RVA: 0x2DD8E74 Offset: 0x2DD8E74 VA: 0x2DD8E74
	public bool IsLobbyGoingToBeShown() { }
}

// Namespace: 
[CompilerGenerated]