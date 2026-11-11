public class SpecialOfferStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3298
{
	// Fields
	private SpecialOfferService _specialOfferService; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private IPopUpService _popUpService; // 0x28
	private SpecialOfferState _lastState; // 0x30

	// Methods

	// RVA: 0x3597400 Offset: 0x3597400 VA: 0x3597400
	public void .ctor(SpecialOfferService specialOfferService, RemoteConfigs remoteConfigs, IPopUpService popUpService, IPlayerService playerService) { }

	// RVA: 0x359747C Offset: 0x359747C VA: 0x359747C Slot: 4
	public void Initialize() { }

	// RVA: 0x35974F0 Offset: 0x35974F0 VA: 0x35974F0 Slot: 5
	public void Dispose() { }

	// RVA: 0x3595A24 Offset: 0x3595A24 VA: 0x3595A24
	public SpecialOfferConfigModel GetConfig() { }

	// RVA: 0x35974F4 Offset: 0x35974F4 VA: 0x35974F4
	private SpecialOfferState GetState() { }

	// RVA: 0x3597218 Offset: 0x3597218 VA: 0x3597218
	public bool ShouldSendGetRequest() { }

	// RVA: 0x359661C Offset: 0x359661C VA: 0x359661C
	public bool CanShowSpecialOffer() { }

	// RVA: 0x3597310 Offset: 0x3597310 VA: 0x3597310
	public bool ShouldSendClaimRequest() { }

	// RVA: 0x3595DCC Offset: 0x3595DCC VA: 0x3595DCC
	public bool IsDataWrong() { }

	// RVA: 0x3595CE4 Offset: 0x3595CE4 VA: 0x3595CE4
	public void UpdateState() { }

	// RVA: 0x3596E40 Offset: 0x3596E40 VA: 0x3596E40
	public bool ShouldDownloadAssets() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI
[CreateAssetMenu(fileName = "SpecialOfferBannerAnimationConfig", menuName = "Configs/SpecialOfferBannerAnimationConfig")]