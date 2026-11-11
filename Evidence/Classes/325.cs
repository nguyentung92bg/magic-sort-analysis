public class EditorBottleItem : EditorAItem // TypeDefIndex: 325
{
	// Fields
	[CompilerGenerated]
	private int <Height>k__BackingField; // 0x28
	private bool _isCompletable; // 0x2C
	private EditorBottleView _bottleView; // 0x30
	private EditorBottleItem _leftBottle; // 0x38
	private EditorBottleItem _rightBottle; // 0x40
	private Bounds _bounds; // 0x48
	private List<EditorCell> _cells; // 0x60
	private List<EditorABlockerItem> _blockers; // 0x68
	private List<EditorABlockerItem> _outItems; // 0x70
	private EditorBottleCollection _bottleCollection; // 0x78
	private int _bottleRowIndex; // 0x80
	private SortingService _sortingService; // 0x88

	// Properties
	public int Height { get; set; }
	public bool IsLongBottle { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3DDE420 Offset: 0x3DDE420 VA: 0x3DDE420
	public int get_Height() { }

	[CompilerGenerated]
	// RVA: 0x3DDE428 Offset: 0x3DDE428 VA: 0x3DDE428
	private void set_Height(int value) { }

	// RVA: 0x3DDE430 Offset: 0x3DDE430 VA: 0x3DDE430
	public bool get_IsLongBottle() { }

	// RVA: 0x3DDE498 Offset: 0x3DDE498 VA: 0x3DDE498 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DDE674 Offset: 0x3DDE674 VA: 0x3DDE674 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DDB0CC Offset: 0x3DDB0CC VA: 0x3DDB0CC
	public void Prepare(int height, bool isCompletable, EditorBottleCollection bottleCollection) { }

	// RVA: 0x3DDE9E0 Offset: 0x3DDE9E0 VA: 0x3DDE9E0 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DDEC2C Offset: 0x3DDEC2C VA: 0x3DDEC2C Slot: 8
	public override void Show() { }

	// RVA: 0x3DDEC4C Offset: 0x3DDEC4C VA: 0x3DDEC4C Slot: 9
	public override void Hide() { }

	// RVA: 0x3DDE678 Offset: 0x3DDE678 VA: 0x3DDE678
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x3DDEC70 Offset: 0x3DDEC70 VA: 0x3DDEC70
	public bool IsIntersect(Vector3 position) { }

	// RVA: 0x3DDED58 Offset: 0x3DDED58 VA: 0x3DDED58
	public void SetLeftBottle(EditorBottleItem leftBottle) { }

	// RVA: 0x3DDED60 Offset: 0x3DDED60 VA: 0x3DDED60
	public void SetRightBottle(EditorBottleItem rightBottle) { }

	// RVA: 0x3DDED68 Offset: 0x3DDED68 VA: 0x3DDED68
	public ColorId GetTopWaterColorId() { }

	[CanBeNull]
	// RVA: 0x3DDED90 Offset: 0x3DDED90 VA: 0x3DDED90
	public ColorAndColorId GetTopWaterColorAndColorId() { }

	// RVA: 0x3DDEE38 Offset: 0x3DDEE38 VA: 0x3DDEE38
	public int GetTopWaterHeight() { }

	[CanBeNull]
	// RVA: 0x3DDEDA8 Offset: 0x3DDEDA8 VA: 0x3DDEDA8
	public EditorWaterItem GetTopWater() { }

	// RVA: 0x3DDEE50 Offset: 0x3DDEE50 VA: 0x3DDEE50
	public void SetWaterItem(int index, int height, EditorWaterItem waterItem) { }

	// RVA: 0x3DDEEE8 Offset: 0x3DDEEE8 VA: 0x3DDEEE8
	public void UpdateWaterOrderComponents() { }

	// RVA: 0x3DDEF98 Offset: 0x3DDEF98 VA: 0x3DDEF98
	public bool IsEmpty() { }

	// RVA: 0x3DDF030 Offset: 0x3DDF030 VA: 0x3DDF030
	private bool IsFull() { }

	// RVA: 0x3DDF158 Offset: 0x3DDF158 VA: 0x3DDF158
	public void HideBottle() { }

	[CanBeNull]
	// RVA: 0x3DDF19C Offset: 0x3DDF19C VA: 0x3DDF19C
	public EditorCell GetCell(int index) { }

	// RVA: 0x3DDF220 Offset: 0x3DDF220 VA: 0x3DDF220
	public List<EditorCell> GetCells() { }

	// RVA: 0x3DDF228 Offset: 0x3DDF228 VA: 0x3DDF228
	public int GetQuestionMarkCount() { }

	// RVA: 0x3DDE690 Offset: 0x3DDE690 VA: 0x3DDE690
	public void UpdateBounds() { }

	// RVA: 0x3DDF384 Offset: 0x3DDF384 VA: 0x3DDF384
	public bool HasLeftBottle() { }

	// RVA: 0x3DDF394 Offset: 0x3DDF394 VA: 0x3DDF394
	public Bounds GetBounds() { }

	// RVA: 0x3DDF3A8 Offset: 0x3DDF3A8 VA: 0x3DDF3A8
	public bool HasOverlayBlocker() { }

	// RVA: 0x3DDF448 Offset: 0x3DDF448 VA: 0x3DDF448
	public bool HasAnyBlocker() { }

	// RVA: 0x3DDF498 Offset: 0x3DDF498 VA: 0x3DDF498
	public bool HasBlocker(ItemType itemType) { }

	// RVA: 0x3DDF540 Offset: 0x3DDF540 VA: 0x3DDF540
	public bool TryRemoveFromCell(int index) { }

	// RVA: 0x3DDF58C Offset: 0x3DDF58C VA: 0x3DDF58C
	public bool TryRemoveOverItem(int index) { }

	// RVA: 0x3DDF684 Offset: 0x3DDF684 VA: 0x3DDF684
	public bool TryRemoveQuestionMark(int index) { }

	// RVA: 0x3DDF77C Offset: 0x3DDF77C VA: 0x3DDF77C
	public bool TryRemoveWaterItem(int index) { }

	// RVA: 0x3DDF874 Offset: 0x3DDF874 VA: 0x3DDF874
	private void RemoveBlocker(EditorABlockerItem item) { }

	// RVA: 0x3DDF8F0 Offset: 0x3DDF8F0 VA: 0x3DDF8F0
	public void RemoveBlocker() { }

	// RVA: 0x3DDF960 Offset: 0x3DDF960 VA: 0x3DDF960
	public void SetBottleRowIndex(int rowIndex) { }

	// RVA: 0x3DDF968 Offset: 0x3DDF968 VA: 0x3DDF968
	public int GetBottleRowIndex() { }

	// RVA: 0x3DDF970 Offset: 0x3DDF970 VA: 0x3DDF970
	public void UpdateFillAmountsWithoutAnimation() { }

	// RVA: 0x3DDF974 Offset: 0x3DDF974 VA: 0x3DDF974
	public void AddBlocker(EditorABlockerItem curtainItem) { }

	// RVA: 0x3DDFA24 Offset: 0x3DDFA24 VA: 0x3DDFA24
	public void AddOutItem(EditorABlockerItem generatorItem) { }

	// RVA: 0x3DDFAD4 Offset: 0x3DDFAD4 VA: 0x3DDFAD4
	public List<EditorABlockerItem> GetBlockers() { }

	// RVA: 0x3DDFADC Offset: 0x3DDFADC VA: 0x3DDFADC
	public List<EditorABlockerItem> GetOutItems() { }

	// RVA: 0x3DDFAE4 Offset: 0x3DDFAE4 VA: 0x3DDFAE4
	public int GetWaterCount() { }

	// RVA: 0x3DDD250 Offset: 0x3DDD250 VA: 0x3DDD250
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bottle