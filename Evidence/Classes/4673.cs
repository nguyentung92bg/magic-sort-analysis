public class ChampionsLeagueLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 4673
{
	// Fields
	[SerializeField]
	private ChampionsLeagueLeaderboardViewFactory _viewFactory; // 0x20
	private List<IChampionsLeagueLeaderboardViewModel> _viewModels; // 0x28
	private Dictionary<Type, ChampionsLeagueLeaderboardViewAdapter.ExtraElementInfo> _elementSizeByType; // 0x30

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x3A78F30 Offset: 0x3A78F30 VA: 0x3A78F30 Slot: 5
	public override int get_Count() { }

	// RVA: 0x3A78F78 Offset: 0x3A78F78 VA: 0x3A78F78 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3A79370 Offset: 0x3A79370 VA: 0x3A79370 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x3A793DC Offset: 0x3A793DC VA: 0x3A793DC Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x3A7947C Offset: 0x3A7947C VA: 0x3A7947C Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x3A79588 Offset: 0x3A79588 VA: 0x3A79588 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x3A79674 Offset: 0x3A79674 VA: 0x3A79674 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3A7976C Offset: 0x3A7976C VA: 0x3A7976C Slot: 13
	public override void Reverse() { }

	// RVA: 0x3A74938 Offset: 0x3A74938 VA: 0x3A74938
	public void SetUserToIndex(int newRankIndex) { }

	// RVA: 0x3A747E0 Offset: 0x3A747E0 VA: 0x3A747E0
	public int GetIndexEquivalentOfRank(int rank) { }

	// RVA: 0x3A797BC Offset: 0x3A797BC VA: 0x3A797BC
	public int GetUserIndex() { }

	// RVA: 0x3A74F90 Offset: 0x3A74F90 VA: 0x3A74F90
	public void UpdateAllViewElementRanks() { }

	// RVA: 0x3A76278 Offset: 0x3A76278 VA: 0x3A76278
	public IChampionsLeagueLeaderboardViewModel GetViewModelAt(int index) { }

	// RVA: 0x3A762D0 Offset: 0x3A762D0 VA: 0x3A762D0
	public void RemoveFromModelList(int index) { }

	// RVA: 0x3A76328 Offset: 0x3A76328 VA: 0x3A76328
	public void InsertToModelList(int index, IChampionsLeagueLeaderboardViewModel playerViewModel) { }

	// RVA: 0x3A798C4 Offset: 0x3A798C4 VA: 0x3A798C4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI
[CreateAssetMenu(fileName = "ChampionsLeagueLeaderboardViewFactory", menuName = "Factory/ChampionsLeagueLeaderboardViewFactory")]