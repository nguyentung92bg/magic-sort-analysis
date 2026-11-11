public class MagicPassRewardsViewAdapter : ScrollViewAdapter // TypeDefIndex: 3944
{
	// Fields
	[SerializeField]
	private MagicPassElementFactory _factory; // 0x20
	[SerializeField]
	private Vector3 _headerElementSize; // 0x28
	[SerializeField]
	private Vector3 _rewardElementSize; // 0x34
	[SerializeField]
	private Vector3 _vaultElementSize; // 0x40
	private MagicPassViewModel _viewModel; // 0x50
	private List<MagicPassRewardElementViewModel> _rewardViewModels; // 0x58
	private const int header_view_id = 0;
	private const int reward_view_id = 1;
	private const int vault_view_id = 2;

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x38EAAB8 Offset: 0x38EAAB8 VA: 0x38EAAB8 Slot: 5
	public override int get_Count() { }

	// RVA: 0x38EAB04 Offset: 0x38EAB04 VA: 0x38EAB04 Slot: 7
	public override void Initialize() { }

	// RVA: 0x38E99CC Offset: 0x38E99CC VA: 0x38E99CC
	public void Initialize(MagicPassViewModel viewModel) { }

	// RVA: 0x38EAB08 Offset: 0x38EAB08 VA: 0x38EAB08 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x38EAB14 Offset: 0x38EAB14 VA: 0x38EAB14 Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x38EAB88 Offset: 0x38EAB88 VA: 0x38EAB88 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x38EAC5C Offset: 0x38EAC5C VA: 0x38EAC5C Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x38EAEF4 Offset: 0x38EAEF4 VA: 0x38EAEF4 Slot: 12
	public override void UpdateView(BasicView view, object viewModel) { }

	// RVA: 0x38EB034 Offset: 0x38EB034 VA: 0x38EB034 Slot: 13
	public override void Reverse() { }

	// RVA: 0x38EB084 Offset: 0x38EB084 VA: 0x38EB084
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI