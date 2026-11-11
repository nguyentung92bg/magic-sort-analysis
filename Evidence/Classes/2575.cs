public class StoreScrollControllerV2 : MonoBehaviour, IStoreScrollController // TypeDefIndex: 2575
{
	// Fields
	[SerializeField]
	private SimpleScrollBar _scrollBar; // 0x18
	[SerializeField]
	private ScrollItemsEnterAnimatorV2 _scrollItemsEnterAnimator; // 0x20
	[SerializeField]
	private StoreScrollPlace _place; // 0x28
	[SerializeField]
	private int _buttonsRaycastOrder; // 0x2C
	private List<Transform> _animationItems; // 0x30
	[SerializeField]
	private StoreScrollItemLayoutController _singleItemView; // 0x38
	private bool _isInitialized; // 0x40
	private bool _hasCache; // 0x41
	private Vector3 _totalScrollbarDisplacement; // 0x44

	// Methods

	// RVA: 0x2467F6C Offset: 0x2467F6C VA: 0x2467F6C Slot: 4
	public void Initialize(StoreBaseViewFactory factory, IAPContext context) { }

	// RVA: 0x246947C Offset: 0x246947C VA: 0x246947C
	private List<StoreViewModel> GetStoreViewModels() { }

	// RVA: 0x24680F4 Offset: 0x24680F4 VA: 0x24680F4
	public void StartAnimation() { }

	// RVA: 0x2469424 Offset: 0x2469424 VA: 0x2469424
	private void CacheLastScrollPosition() { }

	// RVA: 0x2469A38 Offset: 0x2469A38 VA: 0x2469A38
	private void ApplyLastScrollPositionCaches() { }

	// RVA: 0x2469174 Offset: 0x2469174 VA: 0x2469174 Slot: 5
	public void Dispose() { }

	// RVA: 0x246A04C Offset: 0x246A04C VA: 0x246A04C Slot: 6
	public void ResetCache() { }

	// RVA: 0x246A054 Offset: 0x246A054 VA: 0x246A054
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts.V2