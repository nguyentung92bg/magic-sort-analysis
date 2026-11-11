public class MergeStageScrollViewAdapter : ScrollViewAdapter // TypeDefIndex: 3653
{
	// Fields
	[SerializeField]
	private MergeProgressViewFactory _factory; // 0x20
	private List<IMergeStageScrollViewModel> _viewModels; // 0x28
	private Dictionary<int, Vector3> _sizes; // 0x30

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x3FB8744 Offset: 0x3FB8744 VA: 0x3FB8744 Slot: 5
	public override int get_Count() { }

	// RVA: 0x3FB8790 Offset: 0x3FB8790 VA: 0x3FB8790
	public void SetViewModels(List<IMergeStageScrollViewModel> viewModels) { }

	// RVA: 0x3FB8798 Offset: 0x3FB8798 VA: 0x3FB8798 Slot: 7
	public override void Initialize() { }

	// RVA: 0x3FB879C Offset: 0x3FB879C VA: 0x3FB879C Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x3FB89B4 Offset: 0x3FB89B4 VA: 0x3FB89B4 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x3FB8A28 Offset: 0x3FB8A28 VA: 0x3FB8A28 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x3FB8A80 Offset: 0x3FB8A80 VA: 0x3FB8A80 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x3FB8B6C Offset: 0x3FB8B6C VA: 0x3FB8B6C Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x3FB8C64 Offset: 0x3FB8C64 VA: 0x3FB8C64 Slot: 13
	public override void Reverse() { }

	// RVA: 0x3FB88FC Offset: 0x3FB88FC VA: 0x3FB88FC
	private int GetPrefabTypeByIndex(int index) { }

	// RVA: 0x3FB8CBC Offset: 0x3FB8CBC VA: 0x3FB8CBC
	public int GetIndexOfStageIndex(int stageIndex) { }

	// RVA: 0x3FB8DA0 Offset: 0x3FB8DA0 VA: 0x3FB8DA0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]