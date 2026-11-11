public class EditorDuckHouseItem : EditorABlockerItem // TypeDefIndex: 1587
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorDuckHouseView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private DuckType _duckType; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x230A21C Offset: 0x230A21C VA: 0x230A21C Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x230A224 Offset: 0x230A224 VA: 0x230A224 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x230A22C Offset: 0x230A22C VA: 0x230A22C Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x230A2D8 Offset: 0x230A2D8 VA: 0x230A2D8 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x230A2E0 Offset: 0x230A2E0 VA: 0x230A2E0
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, DuckType duckType) { }

	// RVA: 0x230A33C Offset: 0x230A33C VA: 0x230A33C
	public DuckType GetDuckType() { }

	// RVA: 0x230A344 Offset: 0x230A344 VA: 0x230A344 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x230A3B8 Offset: 0x230A3B8 VA: 0x230A3B8 Slot: 8
	public override void Show() { }

	// RVA: 0x230A3D8 Offset: 0x230A3D8 VA: 0x230A3D8 Slot: 9
	public override void Hide() { }

	// RVA: 0x230A3F8 Offset: 0x230A3F8 VA: 0x230A3F8 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x230A400 Offset: 0x230A400 VA: 0x230A400 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x230A408 Offset: 0x230A408 VA: 0x230A408
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox
[CreateAssetMenu(fileName = "WoodBoxAnimationConfig", menuName = "Configs/WoodBoxAnimationConfig")]