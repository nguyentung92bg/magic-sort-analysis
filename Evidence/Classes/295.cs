public class EditorPlasterItem : EditorABlockerItem // TypeDefIndex: 295
{
	// Fields
	private EditorPlasterView _plasterView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x37B3AF8 Offset: 0x37B3AF8 VA: 0x37B3AF8 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B3B00 Offset: 0x37B3B00 VA: 0x37B3B00 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B3B08 Offset: 0x37B3B08 VA: 0x37B3B08 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B3BB4 Offset: 0x37B3BB4 VA: 0x37B3BB4 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B3BBC Offset: 0x37B3BBC VA: 0x37B3BBC
	public void Prepare(Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle) { }

	// RVA: 0x37B3C5C Offset: 0x37B3C5C VA: 0x37B3C5C Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B3CB8 Offset: 0x37B3CB8 VA: 0x37B3CB8 Slot: 8
	public override void Show() { }

	// RVA: 0x37B3CD8 Offset: 0x37B3CD8 VA: 0x37B3CD8 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B3CF8 Offset: 0x37B3CF8 VA: 0x37B3CF8 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37B3D00 Offset: 0x37B3D00 VA: 0x37B3D00 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37B3D08 Offset: 0x37B3D08 VA: 0x37B3D08
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Plaster