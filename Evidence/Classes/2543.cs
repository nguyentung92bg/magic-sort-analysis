public class OpenStorePopupCommand : ICommand // TypeDefIndex: 2543
{
	// Fields
	private StorePopUpArguments _storePopUpArguments; // 0x10
	private IPopUpService _popUpService; // 0x18
	private SpecialOfferService _specialOfferService; // 0x20
	private ChooseOneSpecialOfferService _chooseOneSpecialOfferService; // 0x28
	private OnePlusFreeOfferService _onePlusFreeOfferService; // 0x30
	private InAppPurchaseHistoryService _inAppPurchaseHistoryService; // 0x38

	// Methods

	// RVA: 0x2B06838 Offset: 0x2B06838 VA: 0x2B06838
	public void .ctor(StorePopUpArguments storePopUpArguments) { }

	// RVA: 0x2B06A78 Offset: 0x2B06A78 VA: 0x2B06A78 Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(OpenStorePopupCommand.<OpenStorePopUpAsync>d__9))]
	// RVA: 0x2B06A7C Offset: 0x2B06A7C VA: 0x2B06A7C
	private Task OpenStorePopUpAsync() { }

	[AsyncStateMachine(typeof(OpenStorePopupCommand.<ShouldShowStorePopUp>d__10))]
	// RVA: 0x2B06B6C Offset: 0x2B06B6C VA: 0x2B06B6C
	private Task<bool> ShouldShowStorePopUp() { }

	// RVA: 0x2B06C80 Offset: 0x2B06C80 VA: 0x2B06C80
	private OpenStorePopupCommand.OfferBeforeStore GetOfferToShow() { }

	// RVA: 0x2B06D4C Offset: 0x2B06D4C VA: 0x2B06D4C Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts