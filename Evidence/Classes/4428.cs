public class DuckFestivalRewardsViewAdapter : ScrollViewAdapter // TypeDefIndex: 4428
{
	// Fields
	[SerializeField]
	private DuckFestivalTournamentRewardsFactory _factory; // 0x20
	private List<DuckFestivalProgressbarRewardElementViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x38C6B58 Offset: 0x38C6B58 VA: 0x38C6B58 Slot: 5
	public override int get_Count() { }

	// RVA: 0x38C6BA0 Offset: 0x38C6BA0 VA: 0x38C6BA0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x38C6C7C Offset: 0x38C6C7C VA: 0x38C6C7C Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x38C6CE8 Offset: 0x38C6CE8 VA: 0x38C6CE8 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x38C6D58 Offset: 0x38C6D58 VA: 0x38C6D58 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x38C6E18 Offset: 0x38C6E18 VA: 0x38C6E18 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x38C6EEC Offset: 0x38C6EEC VA: 0x38C6EEC
	public DuckFestivalProgressbarRewardElementViewModel GetViewModelAt(int index) { }

	// RVA: 0x38C6F44 Offset: 0x38C6F44 VA: 0x38C6F44 Slot: 13
	public override void Reverse() { }

	// RVA: 0x38C6F94 Offset: 0x38C6F94 VA: 0x38C6F94
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts.UI.Rewards
[CreateAssetMenu(fileName = "MagicStreakTournamentRewardsFactory", menuName = "Factory/MagicStreakTournamentRewardsFactory")]