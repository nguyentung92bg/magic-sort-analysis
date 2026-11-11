public class EditorGeneratorItem : EditorABlockerItem // TypeDefIndex: 309
{
	// Fields
	private EditorGeneratorView _generatorView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private List<ColorId> _colorsInBottle; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x3DD9BF4 Offset: 0x3DD9BF4 VA: 0x3DD9BF4 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DD9BFC Offset: 0x3DD9BFC VA: 0x3DD9BFC Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DD9C04 Offset: 0x3DD9C04 VA: 0x3DD9C04 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DD9CB0 Offset: 0x3DD9CB0 VA: 0x3DD9CB0 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DD9CB8 Offset: 0x3DD9CB8 VA: 0x3DD9CB8
	public void Prepare(Vector3 localPosition, EditorBottleItem belongingBottle, List<ColorId> colorsInBottle) { }

	// RVA: 0x3DD9E10 Offset: 0x3DD9E10 VA: 0x3DD9E10
	public int GetColorsAmount() { }

	// RVA: 0x3DD9F28 Offset: 0x3DD9F28 VA: 0x3DD9F28
	private void OnAmountTextChanged(int amount) { }

	// RVA: 0x3DDA10C Offset: 0x3DDA10C VA: 0x3DDA10C
	public void ShowCanvas() { }

	// RVA: 0x3DDA144 Offset: 0x3DDA144 VA: 0x3DDA144 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DDA2D0 Offset: 0x3DDA2D0 VA: 0x3DDA2D0 Slot: 8
	public override void Show() { }

	// RVA: 0x3DDA2F0 Offset: 0x3DDA2F0 VA: 0x3DDA2F0 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DDA310 Offset: 0x3DDA310 VA: 0x3DDA310 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x3DDA318 Offset: 0x3DDA318 VA: 0x3DDA318 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DDA320 Offset: 0x3DDA320 VA: 0x3DDA320
	public List<ColorId> GetWaterColorIds() { }

	// RVA: 0x3DDA3CC Offset: 0x3DDA3CC VA: 0x3DDA3CC
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Generator