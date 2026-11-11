public class WebShopStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3113
{
	// Fields
	private readonly WebShopService _webShopService; // 0x10
	private readonly WebShopDataService _dataService; // 0x18
	private readonly IPlayerService _playerService; // 0x20

	// Methods

	// RVA: 0x316DC3C Offset: 0x316DC3C VA: 0x316DC3C
	public void .ctor(WebShopService webShopService, WebShopDataService dataService, IPlayerService playerService) { }

	// RVA: 0x316DC9C Offset: 0x316DC9C VA: 0x316DC9C Slot: 4
	public void Initialize() { }

	// RVA: 0x316DCA0 Offset: 0x316DCA0 VA: 0x316DCA0 Slot: 5
	public void Dispose() { }

	// RVA: 0x316C424 Offset: 0x316C424 VA: 0x316C424
	public WebShopState GetState() { }

	// RVA: 0x316C298 Offset: 0x316C298 VA: 0x316C298
	public bool CanTemporarilyDisableWebShop() { }

	// RVA: 0x316BD98 Offset: 0x316BD98 VA: 0x316BD98
	public bool ShouldShowWebShop() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts
[CreateAssetMenu(fileName = "PopupAnimationConfig", menuName = "Configs/PopupAnimationConfig")]