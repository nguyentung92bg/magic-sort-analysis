public class BadgeContainerViewAdapter : ScrollViewAdapter // TypeDefIndex: 2160
{
	// Fields
	[SerializeField]
	private BadgeContainerViewFactory _factory; // 0x20
	private List<BadgeContainerViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x34531DC Offset: 0x34531DC VA: 0x34531DC Slot: 5
	public override int get_Count() { }

	// RVA: 0x3453228 Offset: 0x3453228 VA: 0x3453228 Slot: 7
	public override void Initialize() { }

	// RVA: 0x345322C Offset: 0x345322C VA: 0x345322C
	public void SetViewModels(List<BadgeContainerViewModel> viewModels) { }

	// RVA: 0x3453234 Offset: 0x3453234 VA: 0x3453234 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x34532A0 Offset: 0x34532A0 VA: 0x34532A0 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x34532EC Offset: 0x34532EC VA: 0x34532EC Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x34533AC Offset: 0x34533AC VA: 0x34533AC Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3453480 Offset: 0x3453480 VA: 0x3453480 Slot: 13
	public override void Reverse() { }

	// RVA: 0x34534D0 Offset: 0x34534D0 VA: 0x34534D0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "BadgeContainerViewFactory", menuName = "Factory/BadgeContainerViewFactory")]