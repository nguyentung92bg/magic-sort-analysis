public class EditorIceItem : EditorABlockerItem // TypeDefIndex: 307
{
	// Fields
	private EditorIceView _iceView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private int _id; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x3DD97E0 Offset: 0x3DD97E0 VA: 0x3DD97E0 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DD97E8 Offset: 0x3DD97E8 VA: 0x3DD97E8 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DD97F0 Offset: 0x3DD97F0 VA: 0x3DD97F0 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DD989C Offset: 0x3DD989C VA: 0x3DD989C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DD98A4 Offset: 0x3DD98A4 VA: 0x3DD98A4
	public void Prepare(Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, int id) { }

	// RVA: 0x3DD9998 Offset: 0x3DD9998 VA: 0x3DD9998 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DD99FC Offset: 0x3DD99FC VA: 0x3DD99FC Slot: 8
	public override void Show() { }

	// RVA: 0x3DD9A1C Offset: 0x3DD9A1C VA: 0x3DD9A1C Slot: 9
	public override void Hide() { }

	// RVA: 0x3DD9A3C Offset: 0x3DD9A3C VA: 0x3DD9A3C Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x3DD9A44 Offset: 0x3DD9A44 VA: 0x3DD9A44 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DD9A4C Offset: 0x3DD9A4C VA: 0x3DD9A4C
	public int GetId() { }

	// RVA: 0x3DD9A54 Offset: 0x3DD9A54 VA: 0x3DD9A54
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ice