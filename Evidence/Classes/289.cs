public class EditorTagItem : EditorABlockerItem // TypeDefIndex: 289
{
	// Fields
	private EditorTagView _tagView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private ColorId _colorId; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x37B2900 Offset: 0x37B2900 VA: 0x37B2900 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B2908 Offset: 0x37B2908 VA: 0x37B2908 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B2910 Offset: 0x37B2910 VA: 0x37B2910 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B29BC Offset: 0x37B29BC VA: 0x37B29BC Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B29C4 Offset: 0x37B29C4 VA: 0x37B29C4
	public void Prepare(Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37B2AB4 Offset: 0x37B2AB4 VA: 0x37B2AB4 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B2B10 Offset: 0x37B2B10 VA: 0x37B2B10 Slot: 8
	public override void Show() { }

	// RVA: 0x37B2B30 Offset: 0x37B2B30 VA: 0x37B2B30 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B2B50 Offset: 0x37B2B50 VA: 0x37B2B50 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37B2B58 Offset: 0x37B2B58 VA: 0x37B2B58 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37B2B60 Offset: 0x37B2B60 VA: 0x37B2B60
	public ColorId GetColorId() { }

	// RVA: 0x37B2B68 Offset: 0x37B2B68 VA: 0x37B2B68
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Tag