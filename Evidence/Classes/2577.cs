public class StoreScrollItemLayoutController : MonoBehaviour, IInitializable, IDisposable // TypeDefIndex: 2577
{
	// Fields
	[SerializeField]
	private CustomVerticalLayout _verticalLayout; // 0x18
	[CompilerGenerated]
	private List<StoreBaseView> <StoreItems>k__BackingField; // 0x20
	[CompilerGenerated]
	private List<VerticalLayoutItem> <LayoutItems>k__BackingField; // 0x28
	[CompilerGenerated]
	private MaxMin <LocalMaxMin>k__BackingField; // 0x30
	[CompilerGenerated]
	private MaxMin <HorizontalMaxMin>k__BackingField; // 0x38
	private StoreBaseViewFactory _factory; // 0x40

	// Properties
	public List<StoreBaseView> StoreItems { get; set; }
	public List<VerticalLayoutItem> LayoutItems { get; set; }
	public MaxMin LocalMaxMin { get; set; }
	public MaxMin HorizontalMaxMin { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x246A148 Offset: 0x246A148 VA: 0x246A148
	public List<StoreBaseView> get_StoreItems() { }

	[CompilerGenerated]
	// RVA: 0x246A150 Offset: 0x246A150 VA: 0x246A150
	private void set_StoreItems(List<StoreBaseView> value) { }

	[CompilerGenerated]
	// RVA: 0x246A158 Offset: 0x246A158 VA: 0x246A158
	public List<VerticalLayoutItem> get_LayoutItems() { }

	[CompilerGenerated]
	// RVA: 0x246A160 Offset: 0x246A160 VA: 0x246A160
	private void set_LayoutItems(List<VerticalLayoutItem> value) { }

	[CompilerGenerated]
	// RVA: 0x246A168 Offset: 0x246A168 VA: 0x246A168
	public MaxMin get_LocalMaxMin() { }

	[CompilerGenerated]
	// RVA: 0x246A170 Offset: 0x246A170 VA: 0x246A170
	private void set_LocalMaxMin(MaxMin value) { }

	[CompilerGenerated]
	// RVA: 0x246A178 Offset: 0x246A178 VA: 0x246A178
	public MaxMin get_HorizontalMaxMin() { }

	[CompilerGenerated]
	// RVA: 0x246A180 Offset: 0x246A180 VA: 0x246A180
	private void set_HorizontalMaxMin(MaxMin value) { }

	// RVA: 0x246A188 Offset: 0x246A188 VA: 0x246A188 Slot: 4
	public void Initialize() { }

	// RVA: 0x2469454 Offset: 0x2469454 VA: 0x2469454
	public void Initialize(MaxMin horizontalMaxMin) { }

	// RVA: 0x246A254 Offset: 0x246A254 VA: 0x246A254
	public void SetFactory(StoreBaseViewFactory factory) { }

	// RVA: 0x2469514 Offset: 0x2469514 VA: 0x2469514
	public void SetModel(List<StoreViewModel> storeScrollViewModel, int raycastOrder, IAPContext iapContext) { }

	// RVA: 0x2469E90 Offset: 0x2469E90 VA: 0x2469E90 Slot: 5
	public void Dispose() { }

	// RVA: 0x246A798 Offset: 0x246A798 VA: 0x246A798
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]