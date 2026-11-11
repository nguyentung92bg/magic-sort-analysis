public class BanService : IRestartableService, IService, IInitializable, IDisposable, ISecondUpdate // TypeDefIndex: 5330
{
	// Fields
	private CustomUpdater _customUpdater; // 0x10
	private BanRemoteService _remoteService; // 0x18
	private BanStateService _stateService; // 0x20
	private NetworkReachability _reachability; // 0x28
	private bool _fetching; // 0x2C

	// Methods

	// RVA: 0x1B5D5E0 Offset: 0x1B5D5E0 VA: 0x1B5D5E0
	public void .ctor(CustomUpdater customUpdater, BanRemoteService remoteService, BanStateService stateService) { }

	// RVA: 0x1B5D640 Offset: 0x1B5D640 VA: 0x1B5D640 Slot: 4
	public void Initialize() { }

	// RVA: 0x1B5D724 Offset: 0x1B5D724 VA: 0x1B5D724 Slot: 5
	public void Dispose() { }

	// RVA: 0x1B5D744 Offset: 0x1B5D744 VA: 0x1B5D744 Slot: 6
	public void SecondUpdate() { }

	[AsyncStateMachine(typeof(BanService.<FetchBanState>d__9))]
	// RVA: 0x1B5D66C Offset: 0x1B5D66C VA: 0x1B5D66C
	public void FetchBanState() { }

	// RVA: 0x1B5D798 Offset: 0x1B5D798 VA: 0x1B5D798
	public bool ShouldShowBanPopup() { }
}

// Namespace: Modules.Contexts.Application.Ban