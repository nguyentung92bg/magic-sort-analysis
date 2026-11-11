public class HomeStoreController : MonoBehaviour // TypeDefIndex: 2536
{
	// Fields
	[SerializeField]
	private StoreScrollController _storeScrollController; // 0x18
	[SerializeField]
	private StoreBaseViewFactory _factory; // 0x20
	[SerializeField]
	private SwipeMenuManager _swipeMenuManager; // 0x28
	[Header("New Store Scroll Controller")]
	[SerializeField]
	private StoreScrollControllerV2 _storeScrollControllerV2; // 0x30
	[SerializeField]
	private StoreBaseViewFactory _factoryV2; // 0x38
	private IStoreScrollController _currentStoreScrollController; // 0x40
	private StoreBaseViewFactory _currentFactory; // 0x48
	private bool _noAdsState; // 0x50

	// Methods

	// RVA: 0x2B05514 Offset: 0x2B05514 VA: 0x2B05514
	private void Awake() { }

	// RVA: 0x2B05924 Offset: 0x2B05924 VA: 0x2B05924
	private void OnDestroy() { }

	// RVA: 0x2B05C5C Offset: 0x2B05C5C VA: 0x2B05C5C
	private void OnSwipeToPage(PageType pageType) { }

	// RVA: 0x2B05CE4 Offset: 0x2B05CE4 VA: 0x2B05CE4
	private void OnPagePeek(PageType pageType) { }

	// RVA: 0x2B05DA0 Offset: 0x2B05DA0 VA: 0x2B05DA0
	private void OnNavigationPageButtonClicked(PageType pageType) { }

	// RVA: 0x2B05DE0 Offset: 0x2B05DE0 VA: 0x2B05DE0
	private void OnContextChanged() { }

	// RVA: 0x2B05F60 Offset: 0x2B05F60 VA: 0x2B05F60
	public void Initialize() { }

	// RVA: 0x2B06068 Offset: 0x2B06068 VA: 0x2B06068
	private void UpdateStoreAfterPurchase(bool isSuccess) { }

	// RVA: 0x2B05CF4 Offset: 0x2B05CF4 VA: 0x2B05CF4
	private void UpdateStore() { }

	// RVA: 0x2B0606C Offset: 0x2B0606C VA: 0x2B0606C
	public void Dispose() { }

	// RVA: 0x2B06110 Offset: 0x2B06110 VA: 0x2B06110
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts