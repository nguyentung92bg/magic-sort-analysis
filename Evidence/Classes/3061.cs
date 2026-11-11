public class TryShowWebShopPromptCommand // TypeDefIndex: 3061
{
	// Fields
	private readonly string _productId; // 0x10
	private readonly IAPConfigModel _iapConfigModel; // 0x18
	private readonly WebShopService _webShopService; // 0x20
	private readonly IPopUpService _popUpService; // 0x28

	// Methods

	// RVA: 0x3160EAC Offset: 0x3160EAC VA: 0x3160EAC
	public void .ctor(string productId, IAPConfigModel iapConfigModel) { }

	[AsyncStateMachine(typeof(TryShowWebShopPromptCommand.<Execute>d__5))]
	// RVA: 0x3160FB0 Offset: 0x3160FB0 VA: 0x3160FB0
	public Task<WebShopPromptResult> Execute() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts