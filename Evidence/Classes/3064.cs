public class WebShopPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3064
{
	// Fields
	[SerializeField]
	private Button _closeButton; // 0x18
	[SerializeField]
	private Button _payInAppButton; // 0x20
	[SerializeField]
	private Button _payOnWebButton; // 0x28
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x30
	[SerializeField]
	private IAPPriceView _oldPriceView; // 0x38
	[SerializeField]
	private WebShopPriceView _webShopPriceView; // 0x40
	[SerializeField]
	private WebShopDiscountView _discountView; // 0x48
	[SerializeField]
	private WebShopRewardView _rewardView; // 0x50
	[SerializeField]
	private PopupAnimationController _popupAnimationController; // 0x58
	private WebShopPopupArguments _args; // 0x60
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x68
	private WebShopPromptResultType _promptResultType; // 0x70

	// Methods

	// RVA: 0x3161B68 Offset: 0x3161B68 VA: 0x3161B68 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3161C50 Offset: 0x3161C50 VA: 0x3161C50 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x31620F0 Offset: 0x31620F0 VA: 0x31620F0 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x31620F8 Offset: 0x31620F8 VA: 0x31620F8 Slot: 6
	public Task Hide() { }

	// RVA: 0x3162230 Offset: 0x3162230 VA: 0x3162230
	private void Awake() { }

	// RVA: 0x316235C Offset: 0x316235C VA: 0x316235C
	private void OnDestroy() { }

	// RVA: 0x3162488 Offset: 0x3162488 VA: 0x3162488
	private void ClosePopup() { }

	// RVA: 0x3161F68 Offset: 0x3161F68 VA: 0x3161F68
	private void ShowViews() { }

	// RVA: 0x31625F0 Offset: 0x31625F0 VA: 0x31625F0
	private void OnInAppButtonClick() { }

	// RVA: 0x3162678 Offset: 0x3162678 VA: 0x3162678
	private void OnOnWebButtonClick() { }

	// RVA: 0x3162750 Offset: 0x3162750 VA: 0x3162750
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts