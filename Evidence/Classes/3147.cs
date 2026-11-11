public class WatchAndWinStageScrollViewAdapter : ScrollViewAdapter // TypeDefIndex: 3147
{
	// Fields
	[SerializeField]
	private WatchAndWinProgressViewFactory _factory; // 0x20
	private List<IWatchAndWinStageScrollViewModel> _viewModels; // 0x28
	private Dictionary<int, Vector3> _sizes; // 0x30

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x32FC6E4 Offset: 0x32FC6E4 VA: 0x32FC6E4 Slot: 5
	public override int get_Count() { }

	// RVA: 0x32FC730 Offset: 0x32FC730 VA: 0x32FC730
	public void SetViewModels(List<IWatchAndWinStageScrollViewModel> viewModels) { }

	// RVA: 0x32FC738 Offset: 0x32FC738 VA: 0x32FC738 Slot: 7
	public override void Initialize() { }

	// RVA: 0x32FC73C Offset: 0x32FC73C VA: 0x32FC73C Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x32FC954 Offset: 0x32FC954 VA: 0x32FC954 Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x32FC9C8 Offset: 0x32FC9C8 VA: 0x32FC9C8 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x32FCA20 Offset: 0x32FCA20 VA: 0x32FCA20 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x32FCB0C Offset: 0x32FCB0C VA: 0x32FCB0C Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x32FCC04 Offset: 0x32FCC04 VA: 0x32FCC04 Slot: 13
	public override void Reverse() { }

	// RVA: 0x32FC89C Offset: 0x32FC89C VA: 0x32FC89C
	private int GetPrefabTypeByIndex(int index) { }

	// RVA: 0x32FBA60 Offset: 0x32FBA60 VA: 0x32FBA60
	public int GetIndexOfStageIndex(int stageIndex) { }

	// RVA: 0x32FCC5C Offset: 0x32FCC5C VA: 0x32FCC5C
	public void .ctor() { }
}

// Namespace: 
[Serializable]