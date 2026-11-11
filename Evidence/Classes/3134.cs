public class WatchAndWinStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3134
{
	// Fields
	private readonly WatchAndWinService _watchAndWinService; // 0x10
	private readonly IPlayerService _playerService; // 0x18
	private readonly RemoteConfigs _remoteConfigs; // 0x20
	private readonly IPopUpService _popUpService; // 0x28
	private WatchAndWinState _lastState; // 0x30

	// Methods

	// RVA: 0x32FB138 Offset: 0x32FB138 VA: 0x32FB138
	public void .ctor(WatchAndWinService watchAndWinService, RemoteConfigs remoteConfigs, IPopUpService popUpService, IPlayerService playerService) { }

	// RVA: 0x32FB1B4 Offset: 0x32FB1B4 VA: 0x32FB1B4 Slot: 4
	public void Initialize() { }

	// RVA: 0x32FB228 Offset: 0x32FB228 VA: 0x32FB228 Slot: 5
	public void Dispose() { }

	// RVA: 0x32FB22C Offset: 0x32FB22C VA: 0x32FB22C
	public WatchAndWinConfigModel GetConfig() { }

	// RVA: 0x32FB250 Offset: 0x32FB250 VA: 0x32FB250
	private WatchAndWinState GetState() { }

	// RVA: 0x32FB048 Offset: 0x32FB048 VA: 0x32FB048
	public bool ShouldSendGetRequest() { }

	// RVA: 0x32FB3F0 Offset: 0x32FB3F0 VA: 0x32FB3F0
	public bool CanShowWatchAndWin() { }

	// RVA: 0x32FB408 Offset: 0x32FB408 VA: 0x32FB408
	public void UpdateState() { }

	// RVA: 0x32FB3EC Offset: 0x32FB3EC VA: 0x32FB3EC
	public bool IsWatchAndWinEnabled() { }

	// RVA: 0x32FB40C Offset: 0x32FB40C VA: 0x32FB40C
	private bool IsEnabledFromBackendAdConfigModel() { }

	// RVA: 0x32FB494 Offset: 0x32FB494 VA: 0x32FB494
	public bool CanOpenPopupAfterReward() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WatchAndWin.Scripts.UI