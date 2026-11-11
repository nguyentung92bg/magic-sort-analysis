public class StoreScrollController : MonoBehaviour, IStoreScrollController // TypeDefIndex: 2567
{
	// Fields
	[SerializeField]
	private SimpleScrollBar _scrollBar; // 0x18
	[SerializeField]
	private ScrollItemsEnterAnimator _scrollItemsEnterAnimator; // 0x20
	[SerializeField]
	private StoreScrollPlace _place; // 0x28
	[SerializeField]
	private int _buttonsRaycastOrder; // 0x2C
	private List<Transform> _animationItems; // 0x30
	[SerializeField]
	private StoreScrollSingleItemView _singleItemView; // 0x38
	private bool _isInitialized; // 0x40

	// Methods

	// RVA: 0x2462E50 Offset: 0x2462E50 VA: 0x2462E50 Slot: 4
	public void Initialize(StoreBaseViewFactory factory, IAPContext context) { }

	// RVA: 0x2464A38 Offset: 0x2464A38 VA: 0x2464A38
	private List<StoreViewModel> GetStoreViewModels() { }

	// RVA: 0x2462F64 Offset: 0x2462F64 VA: 0x2462F64
	public void StartAnimation() { }

	// RVA: 0x2463F00 Offset: 0x2463F00 VA: 0x2463F00 Slot: 5
	public void Dispose() { }

	// RVA: 0x2465618 Offset: 0x2465618 VA: 0x2465618 Slot: 6
	public void ResetCache() { }

	// RVA: 0x246561C Offset: 0x246561C VA: 0x246561C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts