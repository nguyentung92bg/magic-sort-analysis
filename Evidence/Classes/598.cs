public class BasicScrollAdapter : MonoBehaviour, IScrollAdapter, IInitializable // TypeDefIndex: 598
{
	// Fields
	private Dictionary<int, BasicView> _visibleProgressScrollViews; // 0x18
	[SerializeField]
	private Transform _contentTransform; // 0x20
	[SerializeField]
	private Orientation _orientation; // 0x28
	[SerializeField]
	private Direction _elementPlacementDirection; // 0x2C
	private List<ScrollElement> _scrollElements; // 0x30
	[SerializeField]
	private ScrollViewAdapter _scrollViewAdapter; // 0x38
	private bool _isReversed; // 0x40

	// Properties
	public Orientation Orientation { get; }
	public Direction ElementPlacementDirection { get; }
	public Direction ContentMoveDirection { get; }

	// Methods

	// RVA: 0x4006848 Offset: 0x4006848 VA: 0x4006848 Slot: 10
	public Orientation get_Orientation() { }

	// RVA: 0x4006850 Offset: 0x4006850 VA: 0x4006850 Slot: 11
	public Direction get_ElementPlacementDirection() { }

	// RVA: 0x4006858 Offset: 0x4006858 VA: 0x4006858 Slot: 12
	public Direction get_ContentMoveDirection() { }

	// RVA: 0x4006868 Offset: 0x4006868 VA: 0x4006868 Slot: 15
	public void Initialize() { }

	// RVA: 0x4006A3C Offset: 0x4006A3C VA: 0x4006A3C
	private void InitializeScrollElements() { }

	// RVA: 0x4007174 Offset: 0x4007174 VA: 0x4007174
	public Dictionary<int, BasicView> GetVisibleViewsDict() { }

	// RVA: 0x400717C Offset: 0x400717C VA: 0x400717C
	public void UpdateVisibleScrollViews(int newRankIndex, BasicView userView, int currentRankIndex) { }

	// RVA: 0x4007400 Offset: 0x4007400 VA: 0x4007400
	public bool HasElementAtIndex(int index) { }

	// RVA: 0x400743C Offset: 0x400743C VA: 0x400743C
	public Vector3 GetLocalPositionForScrollElementView(int index) { }

	// RVA: 0x40074A4 Offset: 0x40074A4 VA: 0x40074A4
	public void RemoveElementFromScroll(int index) { }

	// RVA: 0x40074FC Offset: 0x40074FC VA: 0x40074FC
	public void InsertElementToScroll(int index, ScrollElement element) { }

	// RVA: 0x4007564 Offset: 0x4007564 VA: 0x4007564
	public void AddElementToVisibleDict(int index, BasicView view) { }

	// RVA: 0x40075CC Offset: 0x40075CC VA: 0x40075CC
	public bool IsElementAtIndexVisible(int index) { }

	// RVA: 0x4007624 Offset: 0x4007624 VA: 0x4007624 Slot: 4
	public ScrollElement GetScrollElementAt(int index) { }

	// RVA: 0x400767C Offset: 0x400767C VA: 0x400767C
	public int GetVisibleElementCount() { }

	// RVA: 0x40076CC Offset: 0x40076CC VA: 0x40076CC Slot: 5
	public int GetScrollElementsCount() { }

	// RVA: 0x4007714 Offset: 0x4007714 VA: 0x4007714 Slot: 6
	public void SetInvisibleAt(int index) { }

	// RVA: 0x40077C0 Offset: 0x40077C0 VA: 0x40077C0 Slot: 7
	public void SetVisibleAt(int index) { }

	// RVA: 0x4007928 Offset: 0x4007928 VA: 0x4007928
	public BasicView RemoveConnectionOfTheView(int index) { }

	// RVA: 0x40079B8 Offset: 0x40079B8 VA: 0x40079B8 Slot: 9
	public bool IsReversed() { }

	// RVA: 0x40079C0 Offset: 0x40079C0 VA: 0x40079C0 Slot: 8
	public MaxMin GetLocalLimit() { }

	// RVA: 0x4007B6C Offset: 0x4007B6C VA: 0x4007B6C
	public BasicView GetViewAt(int index) { }

	// RVA: 0x4007BC4 Offset: 0x4007BC4 VA: 0x4007BC4
	public GameObject GetContentObject() { }

	// RVA: 0x4007BE0 Offset: 0x4007BE0 VA: 0x4007BE0 Slot: 13
	public float GetScrollContentSize() { }

	// RVA: 0x4007D44 Offset: 0x4007D44 VA: 0x4007D44 Slot: 14
	public void Dispose() { }

	// RVA: 0x4007ED8 Offset: 0x4007ED8 VA: 0x4007ED8
	public float GetNormalizedPositionInVisibleItems(int index) { }

	// RVA: 0x40080DC Offset: 0x40080DC VA: 0x40080DC
	public void AddNewItemToScroll(int index) { }

	// RVA: 0x40086BC Offset: 0x40086BC VA: 0x40086BC
	public void RemoveItemFromScroll(int index) { }

	// RVA: 0x4008E94 Offset: 0x4008E94 VA: 0x4008E94
	public void .ctor() { }
}

// Namespace: Modules.Infrastructure.UI.Common.Scripts.Scroll