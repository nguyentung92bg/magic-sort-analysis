public class TeamQuestLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 2329
{
	// Fields
	[SerializeField]
	private TeamQuestLeaderboardFactory _viewFactory; // 0x20
	[SerializeField]
	private Vector3 _elementSize; // 0x28
	private TeamQuestLeaderboardViewModel _viewModels; // 0x38
	private readonly Dictionary<Type, Vector3> _elementSizeByType; // 0x40

	// Properties
	public override int Count { get; }

	// Methods

	// RVA: 0x2DE0C50 Offset: 0x2DE0C50 VA: 0x2DE0C50 Slot: 5
	public override int get_Count() { }

	// RVA: 0x2DE0CA0 Offset: 0x2DE0CA0 VA: 0x2DE0CA0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2DE0E8C Offset: 0x2DE0E8C VA: 0x2DE0E8C Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2DE0EF8 Offset: 0x2DE0EF8 VA: 0x2DE0EF8 Slot: 9
	public override Vector3 GetElementSizeByIndex(int index) { }

	// RVA: 0x2DE0F90 Offset: 0x2DE0F90 VA: 0x2DE0F90 Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2DE1128 Offset: 0x2DE1128 VA: 0x2DE1128 Slot: 11
	public override void UpdateView(BasicView view, int index) { }

	// RVA: 0x2DE121C Offset: 0x2DE121C VA: 0x2DE121C Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2DE131C Offset: 0x2DE131C VA: 0x2DE131C Slot: 13
	public override void Reverse() { }

	// RVA: 0x2DE1374 Offset: 0x2DE1374 VA: 0x2DE1374
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]