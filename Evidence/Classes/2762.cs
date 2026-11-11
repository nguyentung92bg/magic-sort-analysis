public class SkyJumpStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2762
{
	// Fields
	private SkyJumpStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private SkyJumpDataService _dataService; // 0x28
	private SkyJumpService _skyJumpService; // 0x30

	// Methods

	// RVA: 0x2F1947C Offset: 0x2F1947C VA: 0x2F1947C
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, SkyJumpDataService hetpackRaceDataService, SkyJumpService skyJumpService) { }

	// RVA: 0x2F194F8 Offset: 0x2F194F8 VA: 0x2F194F8 Slot: 4
	public void Initialize() { }

	// RVA: 0x2F19578 Offset: 0x2F19578 VA: 0x2F19578 Slot: 5
	public void Dispose() { }

	// RVA: 0x2F1957C Offset: 0x2F1957C VA: 0x2F1957C
	private SkyJumpConfigModel GetConfig() { }

	// RVA: 0x2F17C08 Offset: 0x2F17C08 VA: 0x2F17C08
	public SkyJumpStateType GetEventState() { }

	// RVA: 0x2F195A0 Offset: 0x2F195A0 VA: 0x2F195A0
	public bool CanJoinTournament() { }

	// RVA: 0x2F15FA4 Offset: 0x2F15FA4 VA: 0x2F15FA4
	public bool ShouldSendGetRequest() { }

	// RVA: 0x2F16090 Offset: 0x2F16090 VA: 0x2F16090
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x2F17824 Offset: 0x2F17824 VA: 0x2F17824
	public bool CanIncreaseScore() { }

	// RVA: 0x2F177AC Offset: 0x2F177AC VA: 0x2F177AC
	public bool CanFall() { }

	// RVA: 0x2F1963C Offset: 0x2F1963C VA: 0x2F1963C
	public bool IsLobbyIconVisible() { }

	// RVA: 0x2F19670 Offset: 0x2F19670 VA: 0x2F19670
	public bool ShouldOpenJoinPopUpAutomaticallyOnLobbyReturn(out SkyJumpImpressionSource skyJumpImpressionSource) { }

	// RVA: 0x2F196CC Offset: 0x2F196CC VA: 0x2F196CC
	public bool ShouldOpenResultOnLobbyReturn(out SkyJumpImpressionSource skyJumpImpressionSource) { }

	// RVA: 0x2F19700 Offset: 0x2F19700 VA: 0x2F19700
	public bool ShouldOpenStepIncreasedOnLobbyReturn(out SkyJumpImpressionSource skyJumpImpressionSource) { }

	// RVA: 0x2F19774 Offset: 0x2F19774 VA: 0x2F19774
	public bool ShouldOpenAutomaticallyOnSessionStart(out SkyJumpImpressionSource skyJumpImpressionSource) { }

	// RVA: 0x2F19840 Offset: 0x2F19840 VA: 0x2F19840
	public SkyJumpPopUpState GetPopUpState() { }

	// RVA: 0x2F198F8 Offset: 0x2F198F8 VA: 0x2F198F8
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x2F17EA0 Offset: 0x2F17EA0 VA: 0x2F17EA0
	public bool IsEventFinished() { }

	// RVA: 0x2F1993C Offset: 0x2F1993C VA: 0x2F1993C
	public bool ShouldShowJoinPopup() { }

	// RVA: 0x2F19960 Offset: 0x2F19960 VA: 0x2F19960
	public bool CanShowJoinPopupForce() { }

	// RVA: 0x2F17F40 Offset: 0x2F17F40 VA: 0x2F17F40
	public int GetLiveOpsStateForLevelEvent() { }
}

// Namespace: 
[CompilerGenerated]