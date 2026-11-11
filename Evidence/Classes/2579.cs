public class PreviewStoreController : MonoBehaviour // TypeDefIndex: 2579
{
	// Fields
	[SerializeField]
	private StoreBaseView _item1NoAds; // 0x18
	[SerializeField]
	private StoreBaseView _item1; // 0x20
	[SerializeField]
	private StoreBaseView _item1SpecialOffer; // 0x28
	[SerializeField]
	private StoreBaseView _item2NoAds; // 0x30
	[SerializeField]
	private StoreBaseView _item2; // 0x38
	[SerializeField]
	private StoreBaseView _item3; // 0x40
	[SerializeField]
	private StoreBaseView _item4; // 0x48
	[SerializeField]
	private GameObject _item5; // 0x50
	[SerializeField]
	private ScrollItemsEnterAnimator _scrollItemsEnterAnimator; // 0x58
	private List<Transform> _animationItems; // 0x60

	// Methods

	// RVA: 0x246A7A0 Offset: 0x246A7A0 VA: 0x246A7A0
	private void Awake() { }

	// RVA: 0x2463254 Offset: 0x2463254 VA: 0x2463254
	public void Show(List<StoreViewModel> storeViewModels, int raycastOrder, IAPContext context) { }

	// RVA: 0x246A81C Offset: 0x246A81C VA: 0x246A81C
	private void StartAnimation() { }

	// RVA: 0x2464034 Offset: 0x2464034 VA: 0x2464034
	public void Hide() { }

	// RVA: 0x246AA24 Offset: 0x246AA24 VA: 0x246AA24
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts.StoreScroll
[CreateAssetMenu(fileName = "ScrollItemsEnterAnimationConfig", menuName = "Configs/ScrollItemsEnterAnimationConfig", order = 1)]