public class RateUsService : IDeletable // TypeDefIndex: 2838
{
	// Fields
	private RemoteConfigs _remoteConfigs; // 0x10
	private IPlayerService _playerService; // 0x18
	private TaskCompletionSource<bool> _taskCompletionSource; // 0x20
	private const string firstShowKey = "FirstShowRateUsPopup";
	private const int playerShownRateUsPopup = 1;
	private const int playerNotShownRateUsPopup = 0;
	private bool _isRateUsPopupFailedToOpen; // 0x28
	private ReviewManager _reviewManager; // 0x30

	// Methods

	// RVA: 0x2DCA65C Offset: 0x2DCA65C VA: 0x2DCA65C
	public void .ctor(RemoteConfigs remoteConfigs, IPlayerService playerService) { }

	[AsyncStateMachine(typeof(RateUsService.<TryShowRateUsPopup>d__9))]
	// RVA: 0x2DCA6A0 Offset: 0x2DCA6A0 VA: 0x2DCA6A0
	public Task<bool> TryShowRateUsPopup() { }

	// RVA: 0x2DCA7B4 Offset: 0x2DCA7B4 VA: 0x2DCA7B4
	public bool ShouldShow() { }

	[AsyncStateMachine(typeof(RateUsService.<MockPass>d__11))]
	// RVA: 0x2DCA92C Offset: 0x2DCA92C VA: 0x2DCA92C
	private void MockPass() { }

	// RVA: 0x2DCA8C8 Offset: 0x2DCA8C8 VA: 0x2DCA8C8
	private static int HasPlayerShownRateUs() { }

	// RVA: 0x2DCA9E4 Offset: 0x2DCA9E4 VA: 0x2DCA9E4
	private void SetRateUsShown() { }

	// RVA: 0x2DCAA2C Offset: 0x2DCAA2C VA: 0x2DCAA2C Slot: 4
	public void DeleteData() { }
}

// Namespace: Modules.Contexts.Home.UI.Toolbar.Scripts