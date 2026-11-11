public class EditorCurtainItem : EditorABlockerItem // TypeDefIndex: 318
{
	// Fields
	private EditorCurtainView _curtainView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private ColorAndColorId _colorAndColorId; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x3DDDA6C Offset: 0x3DDDA6C VA: 0x3DDDA6C Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DDDA74 Offset: 0x3DDDA74 VA: 0x3DDDA74 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DDDA7C Offset: 0x3DDDA7C VA: 0x3DDDA7C Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DDDB28 Offset: 0x3DDDB28 VA: 0x3DDDB28 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DDB554 Offset: 0x3DDB554 VA: 0x3DDB554
	public void Prepare(Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x3DDDB84 Offset: 0x3DDDB84 VA: 0x3DDDB84 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DDDBE8 Offset: 0x3DDDBE8 VA: 0x3DDDBE8 Slot: 8
	public override void Show() { }

	// RVA: 0x3DDDC08 Offset: 0x3DDDC08 VA: 0x3DDDC08 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DDDC28 Offset: 0x3DDDC28 VA: 0x3DDDC28
	public ColorAndColorId GetColorAndColorId() { }

	// RVA: 0x3DDDC30 Offset: 0x3DDDC30 VA: 0x3DDDC30
	public ColorId GetColorId() { }

	// RVA: 0x3DDDC4C Offset: 0x3DDDC4C VA: 0x3DDDC4C Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x3DDDC54 Offset: 0x3DDDC54 VA: 0x3DDDC54 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DDD258 Offset: 0x3DDD258 VA: 0x3DDD258
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Curtain