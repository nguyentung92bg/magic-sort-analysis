public class EditorIcicleItem : EditorABlockerItem // TypeDefIndex: 305
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorIcicleView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private EditorCell _belongingCell; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3DD9468 Offset: 0x3DD9468 VA: 0x3DD9468 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DD9470 Offset: 0x3DD9470 VA: 0x3DD9470 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DD9478 Offset: 0x3DD9478 VA: 0x3DD9478 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DD9524 Offset: 0x3DD9524 VA: 0x3DD9524 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DD9544 Offset: 0x3DD9544 VA: 0x3DD9544
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, EditorCell belongingCell) { }

	// RVA: 0x3DD95A4 Offset: 0x3DD95A4 VA: 0x3DD95A4 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DD9660 Offset: 0x3DD9660 VA: 0x3DD9660 Slot: 8
	public override void Show() { }

	// RVA: 0x3DD9680 Offset: 0x3DD9680 VA: 0x3DD9680 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DD96A0 Offset: 0x3DD96A0 VA: 0x3DD96A0 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DD96A8 Offset: 0x3DD96A8 VA: 0x3DD96A8
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Icicle