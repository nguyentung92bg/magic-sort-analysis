public class EditorCarpetItem : EditorABlockerItem // TypeDefIndex: 322
{
	// Fields
	private EditorCarpetView _carpetView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private int _id; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x3DDE0C0 Offset: 0x3DDE0C0 VA: 0x3DDE0C0 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DDE0C8 Offset: 0x3DDE0C8 VA: 0x3DDE0C8 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DDE0D0 Offset: 0x3DDE0D0 VA: 0x3DDE0D0 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DDE17C Offset: 0x3DDE17C VA: 0x3DDE17C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DDBE4C Offset: 0x3DDBE4C VA: 0x3DDBE4C
	public void Prepare(Vector3 localPosition, EditorBottleItem belongingBottle, int id) { }

	// RVA: 0x3DDE1CC Offset: 0x3DDE1CC VA: 0x3DDE1CC Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DDE230 Offset: 0x3DDE230 VA: 0x3DDE230 Slot: 8
	public override void Show() { }

	// RVA: 0x3DDE250 Offset: 0x3DDE250 VA: 0x3DDE250 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DDE270 Offset: 0x3DDE270 VA: 0x3DDE270 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x3DDE278 Offset: 0x3DDE278 VA: 0x3DDE278 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DDE280 Offset: 0x3DDE280 VA: 0x3DDE280
	public int GetId() { }

	// RVA: 0x3DDD268 Offset: 0x3DDD268 VA: 0x3DDD268
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Carpet