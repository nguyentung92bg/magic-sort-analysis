public class MagicPassStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3911
{
	// Fields
	private MagicPassStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private MagicPassService _service; // 0x28
	private MagicPassDataService _dataService; // 0x30

	// Methods

	// RVA: 0x38E1174 Offset: 0x38E1174 VA: 0x38E1174
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, MagicPassDataService dataService, MagicPassService service) { }

	// RVA: 0x38E11F0 Offset: 0x38E11F0 VA: 0x38E11F0 Slot: 4
	public void Initialize() { }

	// RVA: 0x38E1270 Offset: 0x38E1270 VA: 0x38E1270 Slot: 5
	public void Dispose() { }

	// RVA: 0x38E1274 Offset: 0x38E1274 VA: 0x38E1274
	private MagicPassConfigModel GetConfig() { }

	// RVA: 0x38E1298 Offset: 0x38E1298 VA: 0x38E1298
	private MagicPassStateType GetEventState() { }

	// RVA: 0x38DB730 Offset: 0x38DB730 VA: 0x38DB730
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x38DB968 Offset: 0x38DB968 VA: 0x38DB968
	public bool ShouldStartNewEvent() { }

	// RVA: 0x38DB800 Offset: 0x38DB800 VA: 0x38DB800
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x38DE7B4 Offset: 0x38DE7B4 VA: 0x38DE7B4
	public bool IsTimeUp() { }

	// RVA: 0x38DE79C Offset: 0x38DE79C VA: 0x38DE79C
	public bool IsInProgress() { }

	// RVA: 0x38DE34C Offset: 0x38DE34C VA: 0x38DE34C
	public bool IsNotIntroduced() { }
}

// Namespace: 
[CompilerGenerated]