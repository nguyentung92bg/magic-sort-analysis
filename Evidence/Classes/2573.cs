public class StorePopUpV2 : MonoBehaviour, IPopUp // TypeDefIndex: 2573
{
	// Fields
	private StorePopUpArguments _storePopUpArguments; // 0x18
	[SerializeField]
	private PreviewStoreControllerV2 _previewStoreController; // 0x20
	[SerializeField]
	private StoreScrollControllerV2 _storeScrollController; // 0x28
	[SerializeField]
	private int _storeButtonsRaycastOrder; // 0x30
	[SerializeField]
	private StoreBaseViewFactory _factory; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40

	// Properties
	public StorePopUpSource StorePopUpSource { get; }

	// Methods

	// RVA: 0x2467B44 Offset: 0x2467B44 VA: 0x2467B44
	public StorePopUpSource get_StorePopUpSource() { }

	// RVA: 0x2467B5C Offset: 0x2467B5C VA: 0x2467B5C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2468D0C Offset: 0x2468D0C VA: 0x2468D0C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2468DE8 Offset: 0x2468DE8 VA: 0x2468DE8 Slot: 6
	public Task Hide() { }

	// RVA: 0x24691A8 Offset: 0x24691A8 VA: 0x24691A8
	private void CloseStoreAfterPurchase(bool isSuccess) { }

	// RVA: 0x2469230 Offset: 0x2469230 VA: 0x2469230 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2469238 Offset: 0x2469238 VA: 0x2469238
	public void ShowMore() { }

	// RVA: 0x2467EF4 Offset: 0x2467EF4 VA: 0x2467EF4
	private IAPContext GetContext() { }

	// RVA: 0x246941C Offset: 0x246941C VA: 0x246941C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]