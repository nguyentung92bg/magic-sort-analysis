public class ThemedSpecialOfferPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3320
{
	// Fields
	[SerializeField]
	private SpecialOfferThemeController _specialOfferController; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[CompilerGenerated]
	private SpecialOfferPopupImpressionSource <PopupSource>k__BackingField; // 0x28

	// Properties
	public SpecialOfferPopupImpressionSource PopupSource { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3460738 Offset: 0x3460738 VA: 0x3460738
	public SpecialOfferPopupImpressionSource get_PopupSource() { }

	[CompilerGenerated]
	// RVA: 0x3460740 Offset: 0x3460740 VA: 0x3460740
	public void set_PopupSource(SpecialOfferPopupImpressionSource value) { }

	// RVA: 0x3460748 Offset: 0x3460748 VA: 0x3460748 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x34609CC Offset: 0x34609CC VA: 0x34609CC
	private void ClosePopupAfterPurchase(bool isSuccess) { }

	// RVA: 0x3460A54 Offset: 0x3460A54 VA: 0x3460A54 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3460B30 Offset: 0x3460B30 VA: 0x3460B30 Slot: 6
	public Task Hide() { }

	// RVA: 0x3460CAC Offset: 0x3460CAC VA: 0x3460CAC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3460960 Offset: 0x3460960 VA: 0x3460960
	private IAPContext GetIAPContext() { }

	// RVA: 0x3460730 Offset: 0x3460730 VA: 0x3460730
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI