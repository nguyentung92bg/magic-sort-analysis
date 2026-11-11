public class PreviewStoreControllerV2 : MonoBehaviour // TypeDefIndex: 2597
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
	private StoreBaseView _storeItem5; // 0x50
	[SerializeField]
	private GameObject _item5; // 0x58
	[SerializeField]
	private ScrollItemsEnterAnimatorV2 _scrollItemsEnterAnimator; // 0x60
	private List<Transform> _animationItems; // 0x68

	// Methods

	// RVA: 0x246BC4C Offset: 0x246BC4C VA: 0x246BC4C
	private void Awake() { }

	// RVA: 0x24683D0 Offset: 0x24683D0 VA: 0x24683D0
	public void Show(List<StoreViewModel> storeViewModels, int raycastOrder, IAPContext context) { }

	// RVA: 0x246BCC8 Offset: 0x246BCC8 VA: 0x246BCC8
	private void StartAnimation() { }

	// RVA: 0x24692B8 Offset: 0x24692B8 VA: 0x24692B8
	public void Hide() { }

	// RVA: 0x246BEBC Offset: 0x246BEBC VA: 0x246BEBC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts.StoreScroll
[CreateAssetMenu(fileName = "ScrollItemsEnterAnimationConfigV2", menuName = "Configs/ScrollItemsEnterAnimationConfigV2", order = 1)]