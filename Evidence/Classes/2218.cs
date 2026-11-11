public class TeamsSummaryViewAdapter : ScrollViewAdapter // TypeDefIndex: 2218
{
	// Fields
	[SerializeField]
	private TeamSummaryViewFactory _factory; // 0x20
	private List<TeamViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2F01AF8 Offset: 0x2F01AF8 VA: 0x2F01AF8 Slot: 5
	public override int get_Count() { }

	// RVA: 0x2F01B44 Offset: 0x2F01B44 VA: 0x2F01B44 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2F01B48 Offset: 0x2F01B48 VA: 0x2F01B48
	public void SetViewModels(List<TeamViewModel> viewModels) { }

	// RVA: 0x2F01B50 Offset: 0x2F01B50 VA: 0x2F01B50 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2F01BE4 Offset: 0x2F01BE4 VA: 0x2F01BE4 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2F01C30 Offset: 0x2F01C30 VA: 0x2F01C30 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x2F01EC0 Offset: 0x2F01EC0 VA: 0x2F01EC0 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2F01F94 Offset: 0x2F01F94 VA: 0x2F01F94 Slot: 13
	public override void Reverse() { }

	// RVA: 0x2F01FE4 Offset: 0x2F01FE4 VA: 0x2F01FE4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI