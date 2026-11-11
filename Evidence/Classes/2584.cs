public class StoreBaseView : BasicView // TypeDefIndex: 2584
{
	// Fields
	[SerializeField]
	private int _viewId; // 0x24
	[SerializeField]
	private IAPPriceView _iapPriceView; // 0x28
	[SerializeField]
	private StorePopularBestView _storePopularBestView; // 0x30
	[SerializeField]
	private StoreDiscountTagView _storeDiscountTagView; // 0x38
	[SerializeField]
	private StoreHorizontalOfferViewController _storeHorizontalOfferViewController; // 0x40
	[SerializeField]
	private StorePictureView _storePictureView; // 0x48
	[SerializeField]
	private TextMeshPro coinAmountText; // 0x50
	[SerializeField]
	private TextMeshPro _undoAmountText; // 0x58
	[SerializeField]
	private TextMeshPro _shuffleAmountText; // 0x60
	[SerializeField]
	private TextMeshPro _bottleAmountText; // 0x68
	[SerializeField]
	private TextMeshPro lifeDurationText; // 0x70
	[SerializeField]
	private TextMeshPro headerText; // 0x78
	[SerializeField]
	private Button button; // 0x80
	[SerializeField]
	private UIElementScaler _scaler; // 0x88
	private string _productId; // 0x90
	private IAPOrigin _iapOrigin; // 0x98
	private IAPContext _iapContext; // 0x9C
	[CompilerGenerated]
	private StoreViewType <StoreViewType>k__BackingField; // 0xA0

	// Properties
	public StoreViewType StoreViewType { get; set; }
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x246AB60 Offset: 0x246AB60 VA: 0x246AB60
	public StoreViewType get_StoreViewType() { }

	[CompilerGenerated]
	// RVA: 0x246AB68 Offset: 0x246AB68 VA: 0x246AB68
	private void set_StoreViewType(StoreViewType value) { }

	// RVA: 0x246AB70 Offset: 0x246AB70 VA: 0x246AB70 Slot: 5
	public override int get_Id() { }

	// RVA: 0x246AB78 Offset: 0x246AB78 VA: 0x246AB78 Slot: 6
	public override void set_Id(int value) { }

	[AsyncStateMachine(typeof(StoreBaseView.<OnClick>d__24))]
	// RVA: 0x246AB80 Offset: 0x246AB80 VA: 0x246AB80
	private void OnClick() { }

	// RVA: 0x24657A4 Offset: 0x24657A4 VA: 0x24657A4
	public void SetModel(StoreViewModel bundle) { }

	// RVA: 0x246610C Offset: 0x246610C VA: 0x246610C
	public void Scale() { }

	// RVA: 0x2465C68 Offset: 0x2465C68 VA: 0x2465C68
	public void SetRaycastOrder(int raycastOrder) { }

	// RVA: 0x246B090 Offset: 0x246B090 VA: 0x246B090
	public void SetOrigin(IAPOrigin iapOrigin) { }

	// RVA: 0x246B098 Offset: 0x246B098 VA: 0x246B098
	public void SetContext(IAPContext iapContext) { }

	// RVA: 0x246B0A0 Offset: 0x246B0A0 VA: 0x246B0A0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x246B0A4 Offset: 0x246B0A4 VA: 0x246B0A4
	private void Awake() { }

	// RVA: 0x246B178 Offset: 0x246B178 VA: 0x246B178 Slot: 8
	public override void Recycle() { }

	// RVA: 0x246B2F0 Offset: 0x246B2F0 VA: 0x246B2F0
	private void OnDestroy() { }

	// RVA: 0x246B3C4 Offset: 0x246B3C4 VA: 0x246B3C4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts.StoreScroll
[CreateAssetMenu(fileName = "StoreBaseViewFactory", menuName = "Factory/StoreBaseViewFactory")]