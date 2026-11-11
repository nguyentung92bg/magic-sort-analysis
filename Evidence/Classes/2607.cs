public class StoreHorizontalOfferViewController : MonoBehaviour // TypeDefIndex: 2607
{
	// Fields
	[SerializeField]
	private StoreHorizontalOfferViewAdapter _storeHorizontalOfferViewAdapter; // 0x18
	[SerializeField]
	private StoreHorizontalOfferSliderViewController _storeHorizontalOfferSliderViewController; // 0x20
	[SerializeField]
	private ScrollBarIndexClamper _scrollBarIndexClamper; // 0x28
	[SerializeField]
	private BoxCollider2D _boxCollider2D; // 0x30
	[SerializeField]
	private Vector2 _extendedBoxOffset; // 0x38
	[SerializeField]
	private Vector2 _extendedBoxSize; // 0x40
	[SerializeField]
	private Vector2 _boxOffset; // 0x48
	[SerializeField]
	private Vector2 _boxSize; // 0x50
	private int _activeViewModelCount; // 0x58
	private int _specialRewardIndex; // 0x5C

	// Methods

	// RVA: 0x246AFB0 Offset: 0x246AFB0 VA: 0x246AFB0
	public void Initialize(List<StoreViewModel> storeViewModels) { }

	// RVA: 0x246CBC8 Offset: 0x246CBC8 VA: 0x246CBC8
	private void OnSelectedIndexChanged(int index) { }

	// RVA: 0x246CAAC Offset: 0x246CAAC VA: 0x246CAAC
	private void UpdateColliderSize(int viewModelCount) { }

	// RVA: 0x246CA10 Offset: 0x246CA10 VA: 0x246CA10
	private void InitializeSpecialRewardData(List<StoreViewModel> storeViewModels) { }

	// RVA: 0x246CB1C Offset: 0x246CB1C VA: 0x246CB1C
	private void UpdateViews(int newIndex, bool shouldResetScroll) { }

	// RVA: 0x246B230 Offset: 0x246B230 VA: 0x246B230
	public void Recycle() { }

	// RVA: 0x246CBD0 Offset: 0x246CBD0 VA: 0x246CBD0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Snitch.Scripts