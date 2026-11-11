public class StorePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2561
{
	// Fields
	private StorePopUpArguments _storePopUpArguments; // 0x18
	[SerializeField]
	private PreviewStoreController _previewStoreController; // 0x20
	[SerializeField]
	private StoreScrollController _storeScrollController; // 0x28
	[SerializeField]
	private int _storeButtonsRaycastOrder; // 0x30
	[SerializeField]
	private StoreBaseViewFactory _factory; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40

	// Properties
	public StorePopUpSource StorePopUpSource { get; }

	// Methods

	// RVA: 0x2462840 Offset: 0x2462840 VA: 0x2462840
	public StorePopUpSource get_StorePopUpSource() { }

	// RVA: 0x2462858 Offset: 0x2462858 VA: 0x2462858 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2463AD8 Offset: 0x2463AD8 VA: 0x2463AD8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2463BB4 Offset: 0x2463BB4 VA: 0x2463BB4 Slot: 6
	public Task Hide() { }

	// RVA: 0x2463F24 Offset: 0x2463F24 VA: 0x2463F24
	private void CloseStoreAfterPurchase(bool isSuccess) { }

	// RVA: 0x2463FAC Offset: 0x2463FAC VA: 0x2463FAC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2463FB4 Offset: 0x2463FB4 VA: 0x2463FB4
	public void ShowMore() { }

	// RVA: 0x2462DD8 Offset: 0x2462DD8 VA: 0x2462DD8
	private IAPContext GetContext() { }

	// RVA: 0x2464198 Offset: 0x2464198 VA: 0x2464198
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts