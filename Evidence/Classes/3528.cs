public class MiniGameTooltipViewAdapter : ScrollViewAdapter // TypeDefIndex: 3528
{
	// Fields
	[SerializeField]
	private MiniGameTooltipRewardsFactory _factory; // 0x20
	private List<MiniGameStageViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2185B6C Offset: 0x2185B6C VA: 0x2185B6C Slot: 5
	public override int get_Count() { }

	// RVA: 0x2185BB4 Offset: 0x2185BB4 VA: 0x2185BB4 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2185C90 Offset: 0x2185C90 VA: 0x2185C90 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2185CFC Offset: 0x2185CFC VA: 0x2185CFC Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2185D6C Offset: 0x2185D6C VA: 0x2185D6C Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x2185E2C Offset: 0x2185E2C VA: 0x2185E2C Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2185F00 Offset: 0x2185F00 VA: 0x2185F00
	public MiniGameStageViewModel GetViewModelAt(int index) { }

	// RVA: 0x2185F58 Offset: 0x2185F58 VA: 0x2185F58 Slot: 13
	public override void Reverse() { }

	// RVA: 0x2185FA8 Offset: 0x2185FA8 VA: 0x2185FA8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.Board