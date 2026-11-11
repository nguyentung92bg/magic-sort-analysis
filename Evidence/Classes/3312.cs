public class SpecialOfferPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3312
{
	// Fields
	[SerializeField]
	private SpecialOfferController _specialOfferController; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[CompilerGenerated]
	private SpecialOfferPopupImpressionSource <PopupSource>k__BackingField; // 0x28

	// Properties
	public SpecialOfferPopupImpressionSource PopupSource { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x359A0AC Offset: 0x359A0AC VA: 0x359A0AC
	public SpecialOfferPopupImpressionSource get_PopupSource() { }

	[CompilerGenerated]
	// RVA: 0x359A0B4 Offset: 0x359A0B4 VA: 0x359A0B4
	public void set_PopupSource(SpecialOfferPopupImpressionSource value) { }

	// RVA: 0x359A0BC Offset: 0x359A0BC VA: 0x359A0BC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x359A33C Offset: 0x359A33C VA: 0x359A33C
	private void ClosePopupAfterPurchase(bool isSuccess) { }

	// RVA: 0x359A3C4 Offset: 0x359A3C4 VA: 0x359A3C4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x359A4A0 Offset: 0x359A4A0 VA: 0x359A4A0 Slot: 6
	public Task Hide() { }

	// RVA: 0x359A678 Offset: 0x359A678 VA: 0x359A678 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x359A2D0 Offset: 0x359A2D0 VA: 0x359A2D0
	private IAPContext GetIAPContext() { }

	// RVA: 0x359A680 Offset: 0x359A680 VA: 0x359A680
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.SpecialOffer.Scripts.UI