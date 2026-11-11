public class TeamArenaPlayerLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 2404
{
	// Fields
	[SerializeField]
	private TeamArenaPlayerLeaderboardViewFactory _factory; // 0x20
	private List<ITeamArenaLeaderboardViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x296B3E0 Offset: 0x296B3E0 VA: 0x296B3E0 Slot: 5
	public override int get_Count() { }

	// RVA: 0x296B42C Offset: 0x296B42C VA: 0x296B42C
	public void SetViewModels(List<ITeamArenaLeaderboardViewModel> viewModels) { }

	// RVA: 0x296B434 Offset: 0x296B434 VA: 0x296B434 Slot: 7
	public override void Initialize() { }

	// RVA: 0x296B438 Offset: 0x296B438 VA: 0x296B438 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x296B4AC Offset: 0x296B4AC VA: 0x296B4AC Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x296B638 Offset: 0x296B638 VA: 0x296B638 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x296B690 Offset: 0x296B690 VA: 0x296B690 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x296B77C Offset: 0x296B77C VA: 0x296B77C Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x296B874 Offset: 0x296B874 VA: 0x296B874 Slot: 13
	public override void Reverse() { }

	// RVA: 0x296B52C Offset: 0x296B52C VA: 0x296B52C
	private int GetViewIdByIndex(int index) { }

	// RVA: 0x296B8CC Offset: 0x296B8CC VA: 0x296B8CC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups.PlayerLeaderboard
[CreateAssetMenu(fileName = "TeamArenaPlayerLeaderboardViewFactory", menuName = "Factory/TeamArenaPlayerLeaderboardViewFactory")]