public class FreeLiveViewAdapter : ScrollViewAdapter // TypeDefIndex: 2234
{
	// Fields
	[SerializeField]
	private FreeLiveFactory _freeLiveFactory; // 0x20
	private List<FreeLiveViewModel> _viewModels; // 0x28

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2F056F4 Offset: 0x2F056F4 VA: 0x2F056F4 Slot: 5
	public override int get_Count() { }

	// RVA: 0x2F05740 Offset: 0x2F05740 VA: 0x2F05740
	public void SetViewModels(List<FreeLiveViewModel> viewModels) { }

	// RVA: 0x2F05748 Offset: 0x2F05748 VA: 0x2F05748 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2F0574C Offset: 0x2F0574C VA: 0x2F0574C Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2F057B8 Offset: 0x2F057B8 VA: 0x2F057B8 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2F05804 Offset: 0x2F05804 VA: 0x2F05804 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x2F058C4 Offset: 0x2F058C4 VA: 0x2F058C4 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2F05998 Offset: 0x2F05998 VA: 0x2F05998 Slot: 13
	public override void Reverse() { }

	// RVA: 0x2F04FE8 Offset: 0x2F04FE8 VA: 0x2F04FE8
	public void RemoveViewModel(int index) { }

	// RVA: 0x2F04F18 Offset: 0x2F04F18 VA: 0x2F04F18
	public int GetIndexOfViewModel(string messageId, string userId) { }

	// RVA: 0x2F059E8 Offset: 0x2F059E8 VA: 0x2F059E8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI.Chat