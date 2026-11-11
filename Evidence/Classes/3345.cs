public class NoAdsOfferStateService // TypeDefIndex: 3345
{
	// Fields
	private readonly NoAdsOfferDataService _noAdsOfferDataService; // 0x10
	private readonly NoAdsOfferService _noAdsOfferService; // 0x18
	private readonly InAppPurchaseHistoryService _inAppPurchaseHistoryService; // 0x20
	private readonly RemoteConfigs _remoteConfigs; // 0x28

	// Methods

	// RVA: 0x3464DEC Offset: 0x3464DEC VA: 0x3464DEC
	public void .ctor(RemoteConfigs remoteConfigs, NoAdsOfferDataService noAdsOfferDataService, InAppPurchaseHistoryService inAppPurchaseHistoryService) { }

	// RVA: 0x3464E4C Offset: 0x3464E4C VA: 0x3464E4C
	private NoAdsOfferState GetState() { }

	// RVA: 0x34645B0 Offset: 0x34645B0 VA: 0x34645B0
	public bool CanShowPopup() { }

	// RVA: 0x3464DC0 Offset: 0x3464DC0 VA: 0x3464DC0
	public bool ShouldSendGetRequest() { }
}

// Namespace: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts.UI