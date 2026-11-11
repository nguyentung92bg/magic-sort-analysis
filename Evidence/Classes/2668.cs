public class SkyJumpWithStageStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 2668
{
	// Fields
	private SkyJumpWithStageStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private SkyJumpWithStageDataService _dataService; // 0x28
	private SkyJumpWithStageService _SkyJumpWithStageService; // 0x30

	// Methods

	// RVA: 0x2335388 Offset: 0x2335388 VA: 0x2335388
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, SkyJumpWithStageDataService hetpackRaceDataService, SkyJumpWithStageService SkyJumpWithStageService) { }

	// RVA: 0x2335404 Offset: 0x2335404 VA: 0x2335404 Slot: 4
	public void Initialize() { }

	// RVA: 0x2335484 Offset: 0x2335484 VA: 0x2335484 Slot: 5
	public void Dispose() { }

	// RVA: 0x2335488 Offset: 0x2335488 VA: 0x2335488
	private SkyJumpWithStageConfigModel GetConfig() { }

	// RVA: 0x233398C Offset: 0x233398C VA: 0x233398C
	public SkyJumpWithStageStateType GetEventState() { }

	// RVA: 0x23354AC Offset: 0x23354AC VA: 0x23354AC
	public bool CanJoinTournament() { }

	// RVA: 0x2331B4C Offset: 0x2331B4C VA: 0x2331B4C
	public bool ShouldSendGetRequest() { }

	// RVA: 0x2331C38 Offset: 0x2331C38 VA: 0x2331C38
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x23333AC Offset: 0x23333AC VA: 0x23333AC
	public bool CanIncreaseScore() { }

	// RVA: 0x2333330 Offset: 0x2333330 VA: 0x2333330
	public bool CanFall() { }

	// RVA: 0x2335548 Offset: 0x2335548 VA: 0x2335548
	public bool IsLobbyIconVisible() { }

	// RVA: 0x233557C Offset: 0x233557C VA: 0x233557C
	public bool ShouldOpenJoinPopUpAutomaticallyOnLobbyReturn(out SkyJumpWithStageImpressionSource SkyJumpWithStageImpressionSource) { }

	// RVA: 0x23355D8 Offset: 0x23355D8 VA: 0x23355D8
	public bool ShouldOpenResultOnLobbyReturn(out SkyJumpWithStageImpressionSource SkyJumpWithStageImpressionSource) { }

	// RVA: 0x233560C Offset: 0x233560C VA: 0x233560C
	public bool ShouldOpenStepIncreasedOnLobbyReturn(out SkyJumpWithStageImpressionSource SkyJumpWithStageImpressionSource) { }

	// RVA: 0x2335668 Offset: 0x2335668 VA: 0x2335668
	public bool ShouldOpenAutomaticallyOnSessionStart(out SkyJumpWithStageImpressionSource SkyJumpWithStageImpressionSource) { }

	// RVA: 0x2335728 Offset: 0x2335728 VA: 0x2335728
	public SkyJumpWithStagePopUpState GetPopUpState() { }

	// RVA: 0x23357EC Offset: 0x23357EC VA: 0x23357EC
	public bool ShouldShowAreYouSure() { }

	// RVA: 0x2333C20 Offset: 0x2333C20 VA: 0x2333C20
	public bool IsEventFinished() { }

	// RVA: 0x233582C Offset: 0x233582C VA: 0x233582C
	public bool ShouldShowJoinPopup() { }

	// RVA: 0x2335850 Offset: 0x2335850 VA: 0x2335850
	public bool CanShowJoinPopupForce() { }

	// RVA: 0x2333CD4 Offset: 0x2333CD4 VA: 0x2333CD4
	public int GetLiveOpsStateForLevelEvent() { }
}

// Namespace: 
[CompilerGenerated]