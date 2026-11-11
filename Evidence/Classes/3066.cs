public class WebShopPurchaseFailedPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3066
{
	// Fields
	[SerializeField]
	private Button _restoreButton; // 0x18
	[SerializeField]
	private Button _closeButton; // 0x20
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x28

	// Methods

	// RVA: 0x3162760 Offset: 0x3162760 VA: 0x3162760 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x316285C Offset: 0x316285C VA: 0x316285C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3162928 Offset: 0x3162928 VA: 0x3162928 Slot: 6
	public Task Hide() { }

	// RVA: 0x3162A94 Offset: 0x3162A94 VA: 0x3162A94
	private void OnCloseButtonSelected() { }

	// RVA: 0x3162C58 Offset: 0x3162C58 VA: 0x3162C58 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3162C60 Offset: 0x3162C60 VA: 0x3162C60
	private void OnRestorePurchaseButtonSelected() { }

	// RVA: 0x3162D80 Offset: 0x3162D80 VA: 0x3162D80
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts