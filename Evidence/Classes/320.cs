public class EditorClayItem : EditorABlockerItem // TypeDefIndex: 320
{
	// Fields
	private EditorClayView _clayView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x3DDDD90 Offset: 0x3DDDD90 VA: 0x3DDDD90 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DDDD98 Offset: 0x3DDDD98 VA: 0x3DDDD98 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DDDDA0 Offset: 0x3DDDDA0 VA: 0x3DDDDA0 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DDDE4C Offset: 0x3DDDE4C VA: 0x3DDDE4C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DDB7F4 Offset: 0x3DDB7F4 VA: 0x3DDB7F4
	public void Prepare(Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle) { }

	// RVA: 0x3DDDE74 Offset: 0x3DDDE74 VA: 0x3DDDE74 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DDDED8 Offset: 0x3DDDED8 VA: 0x3DDDED8 Slot: 8
	public override void Show() { }

	// RVA: 0x3DDDEF8 Offset: 0x3DDDEF8 VA: 0x3DDDEF8 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DDDF18 Offset: 0x3DDDF18 VA: 0x3DDDF18 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x3DDDF20 Offset: 0x3DDDF20 VA: 0x3DDDF20 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DDD260 Offset: 0x3DDD260 VA: 0x3DDD260
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Clay