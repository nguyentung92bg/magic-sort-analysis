public class WorldLeaderboardViewAdapter : ScrollViewAdapter // TypeDefIndex: 3026
{
	// Fields
	[SerializeField]
	private PermanentLeaderboardViewFactory _factory; // 0x20
	private List<PermanentLeaderboardPlayerViewModel> _viewModels; // 0x28
	[CompilerGenerated]
	private bool <IsInitialized>k__BackingField; // 0x30

	// Properties
	public override int Count { get; }
	public bool IsInitialized { get; set; }

	// Methods

	// RVA: 0x2AF15C4 Offset: 0x2AF15C4 VA: 0x2AF15C4 Slot: 5
	public override int get_Count() { }

	[CompilerGenerated]
	// RVA: 0x2AF160C Offset: 0x2AF160C VA: 0x2AF160C
	public bool get_IsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x2AF1614 Offset: 0x2AF1614 VA: 0x2AF1614
	private void set_IsInitialized(bool value) { }

	// RVA: 0x2AF1620 Offset: 0x2AF1620 VA: 0x2AF1620 Slot: 7
	public override void Initialize() { }

	// RVA: 0x2AF1624 Offset: 0x2AF1624 VA: 0x2AF1624
	public void SetViewModels(List<PermanentLeaderboardPlayerViewModel> viewModels) { }

	// RVA: 0x2AF162C Offset: 0x2AF162C VA: 0x2AF162C Slot: 10
	public override BasicView GetView(int index = -1) { }

	// RVA: 0x2AF1678 Offset: 0x2AF1678 VA: 0x2AF1678 Slot: 11
	public override void UpdateView(BasicView basicView, int index) { }

	// RVA: 0x2AF1738 Offset: 0x2AF1738 VA: 0x2AF1738 Slot: 12
	public override void UpdateView(BasicView basicView, object viewModel) { }

	// RVA: 0x2AF180C Offset: 0x2AF180C VA: 0x2AF180C Slot: 13
	public override void Reverse() { }

	// RVA: 0x2AF185C Offset: 0x2AF185C VA: 0x2AF185C Slot: 8
	public override Vector3 GetElementSize() { }

	// RVA: 0x2AF18C8 Offset: 0x2AF18C8 VA: 0x2AF18C8
	private void Awake() { }

	// RVA: 0x2AF18CC Offset: 0x2AF18CC VA: 0x2AF18CC
	private void OnDestroy() { }

	// RVA: 0x2AF18D0 Offset: 0x2AF18D0 VA: 0x2AF18D0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]