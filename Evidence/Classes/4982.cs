public class AdjustStatSender // TypeDefIndex: 4982
{
	// Fields
	private AdjustStatModelService _adjustStatModelService; // 0x10
	private IAPService _iapService; // 0x18
	private WebShopService _webShopService; // 0x20

	// Methods

	// RVA: 0x3E29C8C Offset: 0x3E29C8C VA: 0x3E29C8C
	public void .ctor(AdjustStatModelService adjustStatModelService, IAPService iapService, WebShopService webShopService) { }

	// RVA: 0x3E29CEC Offset: 0x3E29CEC VA: 0x3E29CEC
	public void SendLevelStart1Event() { }

	// RVA: 0x3E29D64 Offset: 0x3E29D64 VA: 0x3E29D64
	public void TrySendLevelReachedStat(int level) { }

	// RVA: 0x3E29DFC Offset: 0x3E29DFC VA: 0x3E29DFC
	public void SendIAPStat(string id) { }

	// RVA: 0x3E29F8C Offset: 0x3E29F8C VA: 0x3E29F8C
	public void SendCoinSpendEvent() { }
}

// Namespace: Modules.Contexts.Application.TrackingSystems.Scripts