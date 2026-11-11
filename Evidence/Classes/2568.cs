public class StoreScrollSingleItemView : MonoBehaviour, IInitializable, IDisposable // TypeDefIndex: 2568
{
	// Fields
	[SerializeField]
	private VerticalLayout _verticalLayout; // 0x18
	[CompilerGenerated]
	private List<StoreBaseView> <StoreItems>k__BackingField; // 0x20
	private StoreBaseViewFactory _factory; // 0x28

	// Properties
	public List<StoreBaseView> StoreItems { get; set; }
	public MaxMin LocalMaxMin { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2465710 Offset: 0x2465710 VA: 0x2465710
	public List<StoreBaseView> get_StoreItems() { }

	[CompilerGenerated]
	// RVA: 0x2465718 Offset: 0x2465718 VA: 0x2465718
	private void set_StoreItems(List<StoreBaseView> value) { }

	// RVA: 0x2464F58 Offset: 0x2464F58 VA: 0x2464F58
	public MaxMin get_LocalMaxMin() { }

	// RVA: 0x24649B0 Offset: 0x24649B0 VA: 0x24649B0 Slot: 4
	public void Initialize() { }

	// RVA: 0x246579C Offset: 0x246579C VA: 0x246579C
	public void SetFactory(StoreBaseViewFactory factory) { }

	// RVA: 0x2464AD0 Offset: 0x2464AD0 VA: 0x2464AD0
	public void SetModel(List<StoreViewModel> storeScrollViewModel, int raycastOrder, IAPContext context) { }

	// RVA: 0x2465488 Offset: 0x2465488 VA: 0x2465488 Slot: 5
	public void Dispose() { }

	// RVA: 0x24662C4 Offset: 0x24662C4 VA: 0x24662C4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Store.Scripts