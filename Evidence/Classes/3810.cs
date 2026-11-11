public class MagicStreakTournamentLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 3810
{
	// Fields
	[SerializeField]
	private MagicStreakTournamentLeaderboardFactory _factory; // 0x20
	private List<MagicStreakTournamentLeaderboardPlayerViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x3E18B60 Offset: 0x3E18B60 VA: 0x3E18B60 Slot: 5
	public override int get_Count() { }

	// RVA: 0x3E18BA8 Offset: 0x3E18BA8 VA: 0x3E18BA8 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3E18E1C Offset: 0x3E18E1C VA: 0x3E18E1C Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x3E18E88 Offset: 0x3E18E88 VA: 0x3E18E88 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x3E18EF8 Offset: 0x3E18EF8 VA: 0x3E18EF8 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x3E18FB8 Offset: 0x3E18FB8 VA: 0x3E18FB8 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3E17374 Offset: 0x3E17374 VA: 0x3E17374
	public void UpdateAllViewElementRanks() { }

	// RVA: 0x3E17208 Offset: 0x3E17208 VA: 0x3E17208
	public void SetUserToIndex(int newRankIndex) { }

	// RVA: 0x3E184F8 Offset: 0x3E184F8 VA: 0x3E184F8
	public MagicStreakTournamentLeaderboardPlayerViewModel GetViewModelAt(int index) { }

	// RVA: 0x3E18550 Offset: 0x3E18550 VA: 0x3E18550
	public void RemoveFromModelList(int index) { }

	// RVA: 0x3E185A8 Offset: 0x3E185A8 VA: 0x3E185A8
	public void InsertToModelList(int index, MagicStreakTournamentLeaderboardPlayerViewModel playerViewModel) { }

	// RVA: 0x3E17A84 Offset: 0x3E17A84 VA: 0x3E17A84
	public int GetUserIndex() { }

	// RVA: 0x3E1908C Offset: 0x3E1908C VA: 0x3E1908C Slot: 13
	public override void Reverse() { }

	// RVA: 0x3E190DC Offset: 0x3E190DC VA: 0x3E190DC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]