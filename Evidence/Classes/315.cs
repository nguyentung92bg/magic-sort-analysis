public class EditorDuckHouseView : EditorAItemView // TypeDefIndex: 315
{
	// Fields
	[SerializeField]
	public KeyAnimationConfig config; // 0x20
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x28
	[SerializeField]
	private SpriteLibrary _lockLibrary; // 0x30
	[SerializeField]
	private Transform _bottomPivot; // 0x38
	[SerializeField]
	private WoodboxSizeContainer _container; // 0x40
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x48
	[SerializeField]
	private Sprite[] _duckSprites; // 0x50
	private DuckType _duckType; // 0x58

	// Methods

	// RVA: 0x3DDD290 Offset: 0x3DDD290 VA: 0x3DDD290 Slot: 4
	public override void Initialize() { }

	// RVA: 0x3DDD294 Offset: 0x3DDD294 VA: 0x3DDD294 Slot: 5
	public override void Spawn() { }

	// RVA: 0x3DDD308 Offset: 0x3DDD308 VA: 0x3DDD308
	public void Prepare(Sorting sorting, DuckType duckType) { }

	// RVA: 0x3DDD5CC Offset: 0x3DDD5CC VA: 0x3DDD5CC
	private void SetType(WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x3DDD58C Offset: 0x3DDD58C VA: 0x3DDD58C
	public void SetDuckType(DuckType duckType) { }

	// RVA: 0x3DDD698 Offset: 0x3DDD698 VA: 0x3DDD698 Slot: 6
	public override void Recycle() { }

	// RVA: 0x3DDD69C Offset: 0x3DDD69C VA: 0x3DDD69C Slot: 7
	public override void Show() { }

	// RVA: 0x3DDD6C0 Offset: 0x3DDD6C0 VA: 0x3DDD6C0 Slot: 8
	public override void Hide() { }

	// RVA: 0x3DDD548 Offset: 0x3DDD548 VA: 0x3DDD548
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x3DDD6E4 Offset: 0x3DDD6E4 VA: 0x3DDD6E4
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Duck