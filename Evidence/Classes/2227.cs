public class UserSummaryViewAdapter : ScrollViewAdapter // TypeDefIndex: 2227
{
	// Fields
	[SerializeField]
	private UserSummaryViewFactory _factory; // 0x20
	private List<TeamMemberViewModel> _viewModels; // 0x28
	private bool _showHelp; // 0x30

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2F040D0 Offset: 0x2F040D0 VA: 0x2F040D0 Slot: 5
	public override int get_Count() { }

	// RVA: 0x2F0411C Offset: 0x2F0411C VA: 0x2F0411C Slot: 7
	public override void Initialize() { }

	// RVA: 0x2EFD78C Offset: 0x2EFD78C VA: 0x2EFD78C
	public void SetViewModels(List<TeamMemberViewModel> viewModels, bool showHelp) { }

	// RVA: 0x2F04120 Offset: 0x2F04120 VA: 0x2F04120 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2F0418C Offset: 0x2F0418C VA: 0x2F0418C Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2F04254 Offset: 0x2F04254 VA: 0x2F04254 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x2F04324 Offset: 0x2F04324 VA: 0x2F04324 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2F04474 Offset: 0x2F04474 VA: 0x2F04474 Slot: 13
	public override void Reverse() { }

	// RVA: 0x2EFDD5C Offset: 0x2EFDD5C VA: 0x2EFDD5C
	public void GetIndexByUserId(string userId, out int index) { }

	// RVA: 0x2F044C4 Offset: 0x2F044C4 VA: 0x2F044C4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "UserSummaryViewFactory", menuName = "Factory/UserSummaryViewFactory")]