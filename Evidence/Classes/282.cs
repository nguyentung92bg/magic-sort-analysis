public class EditorWoodboxKeyItem : EditorABlockerItem // TypeDefIndex: 282
{
	// Fields
	private EditorWoodboxKeyView _woodboxView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private EditorCell _belongingCell; // 0x40
	private WoodboxKeyType _woodboxKeyType; // 0x48

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x37B18A4 Offset: 0x37B18A4 VA: 0x37B18A4 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B18AC Offset: 0x37B18AC VA: 0x37B18AC Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B18B4 Offset: 0x37B18B4 VA: 0x37B18B4 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B1960 Offset: 0x37B1960 VA: 0x37B1960 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B1968 Offset: 0x37B1968 VA: 0x37B1968
	public void Prepare(Vector3 localPosition, EditorCell belongingCell, EditorBottleItem belongingBottle, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x37B19E8 Offset: 0x37B19E8 VA: 0x37B19E8 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B1A44 Offset: 0x37B1A44 VA: 0x37B1A44 Slot: 8
	public override void Show() { }

	// RVA: 0x37B1A64 Offset: 0x37B1A64 VA: 0x37B1A64 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B1A84 Offset: 0x37B1A84 VA: 0x37B1A84 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37B1A8C Offset: 0x37B1A8C VA: 0x37B1A8C Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37B1A94 Offset: 0x37B1A94 VA: 0x37B1A94
	public WoodboxKeyType GetWoodboxKeyType() { }

	// RVA: 0x37B1A9C Offset: 0x37B1A9C VA: 0x37B1A9C
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox