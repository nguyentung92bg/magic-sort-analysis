public class OnePlusFreeOfferStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3255
{
	// Fields
	private OnePlusFreeOfferService _onePlusFreeOfferService; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private IPopUpService _popUpService; // 0x28
	private OnePlusFreeOfferState _lastState; // 0x30
	private AdService _adService; // 0x38

	// Methods

	// RVA: 0x358E604 Offset: 0x358E604 VA: 0x358E604
	public void .ctor(OnePlusFreeOfferService onePlusFreeOfferService, RemoteConfigs remoteConfigs, IPopUpService popUpService, IPlayerService playerService, AdService adService) { }

	// RVA: 0x358E69C Offset: 0x358E69C VA: 0x358E69C Slot: 4
	public void Initialize() { }

	// RVA: 0x358E710 Offset: 0x358E710 VA: 0x358E710 Slot: 5
	public void Dispose() { }

	// RVA: 0x358E714 Offset: 0x358E714 VA: 0x358E714
	private OnePlusFreeOfferConfigModel GetConfig() { }

	// RVA: 0x358E738 Offset: 0x358E738 VA: 0x358E738
	private OnePlusFreeOfferState GetState() { }

	// RVA: 0x358E500 Offset: 0x358E500 VA: 0x358E500
	public bool ShouldSendGetRequest() { }

	// RVA: 0x358D600 Offset: 0x358D600 VA: 0x358D600
	public bool CanShowOnePlusFreeOffer() { }

	// RVA: 0x358C688 Offset: 0x358C688 VA: 0x358C688
	public bool IsFreeStepUnlocked() { }

	// RVA: 0x358E41C Offset: 0x358E41C VA: 0x358E41C
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x358C128 Offset: 0x358C128 VA: 0x358C128
	public bool IsDataWrong() { }

	// RVA: 0x358BF5C Offset: 0x358BF5C VA: 0x358BF5C
	public void UpdateState() { }

	// RVA: 0x358DDB8 Offset: 0x358DDB8 VA: 0x358DDB8
	public bool ShouldDownloadAssets() { }
}

// Namespace: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI