public class DuckFestivalLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 4452
{
	// Fields
	[SerializeField]
	private DuckFestivalLeaderboardViewFactory _viewFactory; // 0x20
	[SerializeField]
	private Vector3 _elementSize; // 0x28
	[SerializeField]
	private DuckFestivalLeaderboardFramesController _leaderboardFramesController; // 0x38
	private List<DuckFestivalLeaderboardViewModel> _viewModels; // 0x40

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x38CD9CC Offset: 0x38CD9CC VA: 0x38CD9CC Slot: 5
	public override int get_Count() { }

	// RVA: 0x38CDA14 Offset: 0x38CDA14 VA: 0x38CDA14 Slot: 7
	public override void Initialize() { }

	// RVA: 0x38CDB38 Offset: 0x38CDB38 VA: 0x38CDB38 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x38CDB44 Offset: 0x38CDB44 VA: 0x38CDB44 Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x38CDB50 Offset: 0x38CDB50 VA: 0x38CDB50 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x38CDB9C Offset: 0x38CDB9C VA: 0x38CDB9C Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x38CDC5C Offset: 0x38CDC5C VA: 0x38CDC5C Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x38CDD30 Offset: 0x38CDD30 VA: 0x38CDD30 Slot: 13
	public override void Reverse() { }

	// RVA: 0x38CAB2C Offset: 0x38CAB2C VA: 0x38CAB2C
	public void SetUserToIndex(int newRankIndex) { }

	// RVA: 0x38CAA14 Offset: 0x38CAA14 VA: 0x38CAA14
	public int GetIndexEquivalentOfRank(int rank) { }

	// RVA: 0x38CDD80 Offset: 0x38CDD80 VA: 0x38CDD80
	public int GetUserIndex() { }

	// RVA: 0x38CB168 Offset: 0x38CB168 VA: 0x38CB168
	public void UpdateAllViewElementRanks() { }

	// RVA: 0x38CC368 Offset: 0x38CC368 VA: 0x38CC368
	public DuckFestivalLeaderboardViewModel GetViewModelAt(int index) { }

	// RVA: 0x38CC3C0 Offset: 0x38CC3C0 VA: 0x38CC3C0
	public void RemoveFromModelList(int index) { }

	// RVA: 0x38CC418 Offset: 0x38CC418 VA: 0x38CC418
	public void InsertToModelList(int index, DuckFestivalLeaderboardViewModel playerViewModel) { }

	// RVA: 0x38CDE1C Offset: 0x38CDE1C VA: 0x38CDE1C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI.Leaderboard