public class StoreHorizontalOfferViewAdapter : ScrollViewAdapter // TypeDefIndex: 2605
{
	// Fields
	[SerializeField]
	private StoreHorizontalOfferFactory _factory; // 0x20
	[SerializeField]
	private ScrollBar _scrollBar; // 0x28
	[SerializeField]
	private BasicScrollAdapter _basicScrollAdapter; // 0x30
	[SerializeField]
	private Transform _contentTransform; // 0x38
	[SerializeField]
	private ScrollBarIndexClamper _scrollBarIndexClamper; // 0x40
	private Vector3 _scaleRatio; // 0x48
	private List<StoreViewModel> _viewModels; // 0x58

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x246C4B4 Offset: 0x246C4B4 VA: 0x246C4B4 Slot: 5
	public override int get_Count() { }

	// RVA: 0x246C500 Offset: 0x246C500 VA: 0x246C500 Slot: 7
	public override void Initialize() { }

	// RVA: 0x246C504 Offset: 0x246C504 VA: 0x246C504
	public void Initialize(List<StoreViewModel> viewModels) { }

	// RVA: 0x246C640 Offset: 0x246C640 VA: 0x246C640 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x246C65C Offset: 0x246C65C VA: 0x246C65C Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x246C6FC Offset: 0x246C6FC VA: 0x246C6FC
	public void UpdateView(StoreHorizontalOfferModel offerModel) { }

	// RVA: 0x246C760 Offset: 0x246C760 VA: 0x246C760 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x246C85C Offset: 0x246C85C VA: 0x246C85C Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x246C994 Offset: 0x246C994 VA: 0x246C994 Slot: 13
	public override void Reverse() { }

	// RVA: 0x246C9E4 Offset: 0x246C9E4 VA: 0x246C9E4
	public void Recycle() { }

	// RVA: 0x246CA00 Offset: 0x246CA00 VA: 0x246CA00
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts.StoreScroll.HorizontalOffer