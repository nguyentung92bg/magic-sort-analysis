public class TeamArenaStepRewardViewAdapter : ScrollViewAdapter // TypeDefIndex: 2398
{
	// Fields
	[SerializeField]
	private TeamArenaStepRewardViewFactory _factory; // 0x20
	private List<TeamArenaStepRewardViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x296AC74 Offset: 0x296AC74 VA: 0x296AC74 Slot: 5
	public override int get_Count() { }

	// RVA: 0x296ACC0 Offset: 0x296ACC0 VA: 0x296ACC0
	public void SetViewModels(List<TeamArenaStepRewardViewModel> viewModels) { }

	// RVA: 0x296ACC8 Offset: 0x296ACC8 VA: 0x296ACC8 Slot: 7
	public override void Initialize() { }

	// RVA: 0x296ACCC Offset: 0x296ACCC VA: 0x296ACCC Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x296AD38 Offset: 0x296AD38 VA: 0x296AD38 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x296AD84 Offset: 0x296AD84 VA: 0x296AD84 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x296AE44 Offset: 0x296AE44 VA: 0x296AE44 Slot: 12
	public override void UpdateView(BasicView view, object viewModel) { }

	// RVA: 0x296AF18 Offset: 0x296AF18 VA: 0x296AF18 Slot: 13
	public override void Reverse() { }

	// RVA: 0x296AF70 Offset: 0x296AF70 VA: 0x296AF70
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamArena.UI.Popups.StepRewardsScrollBar
[CreateAssetMenu(fileName = "TeamArenaStepRewardViewFactory", menuName = "Factory/TeamArenaStepRewardViewFactory")]