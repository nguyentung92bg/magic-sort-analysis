public class TeamArenaTeamLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 2394
{
	// Fields
	[SerializeField]
	private TeamArenaTeamViewFactory _factory; // 0x20
	private List<ITeamArenaLeaderboardViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2969F40 Offset: 0x2969F40 VA: 0x2969F40 Slot: 5
	public override int get_Count() { }

	// RVA: 0x2969F8C Offset: 0x2969F8C VA: 0x2969F8C
	public void SetViewModels(List<ITeamArenaLeaderboardViewModel> viewModels) { }

	// RVA: 0x2969F94 Offset: 0x2969F94 VA: 0x2969F94 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2969F98 Offset: 0x2969F98 VA: 0x2969F98 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x296A00C Offset: 0x296A00C VA: 0x296A00C Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x296A158 Offset: 0x296A158 VA: 0x296A158 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x296A1B0 Offset: 0x296A1B0 VA: 0x296A1B0 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x296A29C Offset: 0x296A29C VA: 0x296A29C Slot: 12
	public override void UpdateView(BasicView view, object viewModel) { }

	// RVA: 0x296A394 Offset: 0x296A394 VA: 0x296A394 Slot: 13
	public override void Reverse() { }

	// RVA: 0x296A08C Offset: 0x296A08C VA: 0x296A08C
	private int GetViewIdByIndex(int index) { }

	// RVA: 0x296A3EC Offset: 0x296A3EC VA: 0x296A3EC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups.TeamLeaderboard