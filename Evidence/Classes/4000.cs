public class MagicLabStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4000
{
	// Fields
	private MagicLabStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private MagicLabDataService _magicLabDataService; // 0x28
	private MagicLabService _magicLabService; // 0x30

	// Methods

	// RVA: 0x37547B0 Offset: 0x37547B0 VA: 0x37547B0
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, MagicLabDataService magicLabDataService, MagicLabService magicLabService) { }

	// RVA: 0x3754824 Offset: 0x3754824 VA: 0x3754824 Slot: 4
	public void Initialize() { }

	// RVA: 0x37548A0 Offset: 0x37548A0 VA: 0x37548A0 Slot: 5
	public void Dispose() { }

	// RVA: 0x37548A4 Offset: 0x37548A4 VA: 0x37548A4
	private MagicLabConfigModel GetConfig() { }

	// RVA: 0x37548C8 Offset: 0x37548C8 VA: 0x37548C8
	public MagicLabStateType GetEventState() { }

	// RVA: 0x3752C10 Offset: 0x3752C10 VA: 0x3752C10
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x3752DF4 Offset: 0x3752DF4 VA: 0x3752DF4
	public bool ShouldStartNewEvent() { }

	// RVA: 0x3754414 Offset: 0x3754414 VA: 0x3754414
	public bool IsLobbyIconVisible() { }

	// RVA: 0x3754AB0 Offset: 0x3754AB0 VA: 0x3754AB0
	public bool ShouldOpenAutomaticallyOnLobbyReturn() { }

	// RVA: 0x3754B10 Offset: 0x3754B10 VA: 0x3754B10
	public bool IsPopUpResultState() { }

	// RVA: 0x3753684 Offset: 0x3753684 VA: 0x3753684
	public MagicLabPopUpState GetPopUpState() { }

	// RVA: 0x3754B28 Offset: 0x3754B28 VA: 0x3754B28
	public bool IsNotIntroduced() { }

	// RVA: 0x3754B40 Offset: 0x3754B40 VA: 0x3754B40
	public bool IsEventNotIntroducedInLifeTime() { }

	// RVA: 0x37539A0 Offset: 0x37539A0 VA: 0x37539A0
	public bool CanIncreaseTaskProgress() { }

	// RVA: 0x375408C Offset: 0x375408C VA: 0x375408C
	public bool ShouldShowAlertView() { }

	// RVA: 0x3754194 Offset: 0x3754194 VA: 0x3754194
	public bool IsTimeUp() { }

	// RVA: 0x3754464 Offset: 0x3754464 VA: 0x3754464
	public bool IsLobbyGoingToBeShown() { }
}

// Namespace: 
[CompilerGenerated]