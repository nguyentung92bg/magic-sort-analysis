public class ChooseOneSpecialOfferPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3465
{
	// Fields
	[SerializeField]
	private ChooseOneSpecialOfferController _chooseOneSpecialOfferController; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[CompilerGenerated]
	private ChooseOneSpecialOfferPopupImpressionSource <PopupSource>k__BackingField; // 0x28

	// Properties
	public ChooseOneSpecialOfferPopupImpressionSource PopupSource { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x20B0308 Offset: 0x20B0308 VA: 0x20B0308
	public ChooseOneSpecialOfferPopupImpressionSource get_PopupSource() { }

	[CompilerGenerated]
	// RVA: 0x20B0310 Offset: 0x20B0310 VA: 0x20B0310
	public void set_PopupSource(ChooseOneSpecialOfferPopupImpressionSource value) { }

	// RVA: 0x20B0318 Offset: 0x20B0318 VA: 0x20B0318 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x20B0510 Offset: 0x20B0510 VA: 0x20B0510
	private void ClosePopupAfterPurchase(bool isSuccess) { }

	// RVA: 0x20B0598 Offset: 0x20B0598 VA: 0x20B0598 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x20B0674 Offset: 0x20B0674 VA: 0x20B0674 Slot: 6
	public Task Hide() { }

	// RVA: 0x20B0854 Offset: 0x20B0854 VA: 0x20B0854 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x20B085C Offset: 0x20B085C VA: 0x20B085C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.UI