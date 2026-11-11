public class TeamLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 2189
{
	// Fields
	[SerializeField]
	private TeamLeaderboardViewFactory _factory; // 0x20
	private List<LeaderboardTeam> _teams; // 0x28
	private TeamsService _teamsService; // 0x30

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x345E7C4 Offset: 0x345E7C4 VA: 0x345E7C4 Slot: 5
	public override int get_Count() { }

	// RVA: 0x345E810 Offset: 0x345E810 VA: 0x345E810
	public void SetTeamData(List<LeaderboardTeam> teams) { }

	// RVA: 0x345E818 Offset: 0x345E818 VA: 0x345E818 Slot: 7
	public override void Initialize() { }

	// RVA: 0x345E81C Offset: 0x345E81C VA: 0x345E81C Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x345E888 Offset: 0x345E888 VA: 0x345E888 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x345E964 Offset: 0x345E964 VA: 0x345E964 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x345EA28 Offset: 0x345EA28 VA: 0x345EA28 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x345EB6C Offset: 0x345EB6C VA: 0x345EB6C Slot: 13
	public override void Reverse() { }

	// RVA: 0x345EBBC Offset: 0x345EBBC VA: 0x345EBBC
	private void Awake() { }

	// RVA: 0x345EC40 Offset: 0x345EC40 VA: 0x345EC40
	public LeaderboardTeam GetTeamData(string teamId, out int index) { }

	// RVA: 0x345ED28 Offset: 0x345ED28 VA: 0x345ED28
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI
[CreateAssetMenu(fileName = "TeamLeaderboardViewFactory", menuName = "Factory/TeamLeaderboardViewFactory")]