public class ProgressScrollViewAdapter : ScrollViewAdapter // TypeDefIndex: 2859
{
	// Fields
	[SerializeField]
	private ProgressScrollViewFactory _factory; // 0x20
	private List<ProgressScrollViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2DD26C0 Offset: 0x2DD26C0 VA: 0x2DD26C0 Slot: 5
	public override int get_Count() { }

	// RVA: 0x2DD2708 Offset: 0x2DD2708 VA: 0x2DD2708 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2DD2848 Offset: 0x2DD2848 VA: 0x2DD2848 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2DD2894 Offset: 0x2DD2894 VA: 0x2DD2894 Slot: 11
	public override void UpdateView(BasicView basicView, int index) { }

	// RVA: 0x2DD2954 Offset: 0x2DD2954 VA: 0x2DD2954 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2DD2A28 Offset: 0x2DD2A28 VA: 0x2DD2A28 Slot: 13
	public override void Reverse() { }

	// RVA: 0x2DD2A78 Offset: 0x2DD2A78 VA: 0x2DD2A78 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2DD2AE4 Offset: 0x2DD2AE4 VA: 0x2DD2AE4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.ProgressScroll.Scripts
[CreateAssetMenu(fileName = "ProgressScrollViewFactory", menuName = "Factory/ProgressScrollViewFactory")]