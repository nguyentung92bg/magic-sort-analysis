public class WebShopPopupArguments : PopUpArguments // TypeDefIndex: 3063
{
	// Fields
	public IAPConfigModel IapConfigModel; // 0x28
	public WebShopProduct WebShopProduct; // 0x30
	public TaskCompletionSource<WebShopPromptResultType> PromptResultTcs; // 0x38

	// Methods

	// RVA: 0x3161934 Offset: 0x3161934 VA: 0x3161934
	public void .ctor(IAPConfigModel iapConfigModel, WebShopProduct webShopProduct, TaskCompletionSource<WebShopPromptResultType> resultTcs) { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts