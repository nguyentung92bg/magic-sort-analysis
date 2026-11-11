public class ChooseOneSpecialOfferStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3455
{
	// Fields
	private ChooseOneSpecialOfferService _ChooseOneSpecialOfferService; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private IPopUpService _popUpService; // 0x28
	private ChooseOneSpecialOfferState _lastState; // 0x30
	private AdService _adService; // 0x38

	// Methods

	// RVA: 0x20AE510 Offset: 0x20AE510 VA: 0x20AE510
	public void .ctor(ChooseOneSpecialOfferService ChooseOneSpecialOfferService, RemoteConfigs remoteConfigs, IPopUpService popUpService, IPlayerService playerService, AdService adService) { }

	// RVA: 0x20AE5A8 Offset: 0x20AE5A8 VA: 0x20AE5A8 Slot: 4
	public void Initialize() { }

	// RVA: 0x20AE61C Offset: 0x20AE61C VA: 0x20AE61C Slot: 5
	public void Dispose() { }

	// RVA: 0x20AE620 Offset: 0x20AE620 VA: 0x20AE620
	private ChooseOneSpecialOfferConfigModel GetConfig() { }

	// RVA: 0x20AE644 Offset: 0x20AE644 VA: 0x20AE644
	private ChooseOneSpecialOfferState GetState() { }

	// RVA: 0x20AE328 Offset: 0x20AE328 VA: 0x20AE328
	public bool ShouldSendGetRequest() { }

	// RVA: 0x20AD9C0 Offset: 0x20AD9C0 VA: 0x20AD9C0
	public bool CanShowChooseOneSpecialOffer() { }

	// RVA: 0x20AE420 Offset: 0x20AE420 VA: 0x20AE420
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x20ACF1C Offset: 0x20ACF1C VA: 0x20ACF1C
	public bool IsDataWrong() { }

	// RVA: 0x20ACE34 Offset: 0x20ACE34 VA: 0x20ACE34
	public void UpdateState() { }
}

// Namespace: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI