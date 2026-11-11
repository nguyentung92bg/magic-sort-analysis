public class OnePlusFreeOfferPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3260
{
	// Fields
	[SerializeField]
	private OnePlusFreeOfferView _offerView; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	private OnePlusFreeOfferService _onePlusFreeOfferService; // 0x28
	[CompilerGenerated]
	private OnePlusFreeOfferPopupImpressionSource <PopupSource>k__BackingField; // 0x30

	// Properties
	public OnePlusFreeOfferPopupImpressionSource PopupSource { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x358F0AC Offset: 0x358F0AC VA: 0x358F0AC
	public OnePlusFreeOfferPopupImpressionSource get_PopupSource() { }

	[CompilerGenerated]
	// RVA: 0x358F0B4 Offset: 0x358F0B4 VA: 0x358F0B4
	public void set_PopupSource(OnePlusFreeOfferPopupImpressionSource value) { }

	// RVA: 0x358F0BC Offset: 0x358F0BC VA: 0x358F0BC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(OnePlusFreeOfferPopup.<ClosePopupAfterPurchase>d__8))]
	// RVA: 0x358F40C Offset: 0x358F40C VA: 0x358F40C
	private void ClosePopupAfterPurchase(bool isSuccess) { }

	// RVA: 0x358F4CC Offset: 0x358F4CC VA: 0x358F4CC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x358F5A8 Offset: 0x358F5A8 VA: 0x358F5A8 Slot: 6
	public Task Hide() { }

	// RVA: 0x358F814 Offset: 0x358F814 VA: 0x358F814 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x358F81C Offset: 0x358F81C VA: 0x358F81C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts.UI