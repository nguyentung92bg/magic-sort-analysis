public class EndlessPortalStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3370
{
	// Fields
	private IPlayerService _playerService; // 0x10
	private RemoteConfigs _remoteConfigs; // 0x18
	private EndlessPortalService _endlessPortalService; // 0x20
	private EndlessPortalStateType _lastState; // 0x28
	private AdService _adService; // 0x30

	// Methods

	// RVA: 0x346A8B8 Offset: 0x346A8B8 VA: 0x346A8B8
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, EndlessPortalService endlessPortalService, AdService adService) { }

	// RVA: 0x346A934 Offset: 0x346A934 VA: 0x346A934 Slot: 4
	public void Initialize() { }

	// RVA: 0x346A9A8 Offset: 0x346A9A8 VA: 0x346A9A8 Slot: 5
	public void Dispose() { }

	// RVA: 0x346A9AC Offset: 0x346A9AC VA: 0x346A9AC
	private EndlessPortalV2ConfigModel GetConfig() { }

	// RVA: 0x346A9D0 Offset: 0x346A9D0 VA: 0x346A9D0
	private EndlessPortalStateType GetState() { }

	// RVA: 0x346A878 Offset: 0x346A878 VA: 0x346A878
	public bool ShouldSendGetRequest() { }

	// RVA: 0x346A894 Offset: 0x346A894 VA: 0x346A894
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x3467950 Offset: 0x3467950 VA: 0x3467950
	public bool ShouldShowLobbyIcon() { }

	// RVA: 0x346ABA4 Offset: 0x346ABA4 VA: 0x346ABA4
	public bool ShouldForceOpenPopup() { }

	// RVA: 0x346ABBC Offset: 0x346ABBC VA: 0x346ABBC
	public void UpdateState() { }
}

// Namespace: 
[CompilerGenerated]