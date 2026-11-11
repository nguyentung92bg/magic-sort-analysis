public class EditorRainbowItem : EditorABlockerItem // TypeDefIndex: 264
{
	// Fields
	private EditorRainbowView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x37AC730 Offset: 0x37AC730 VA: 0x37AC730 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37AC738 Offset: 0x37AC738 VA: 0x37AC738 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37AC740 Offset: 0x37AC740 VA: 0x37AC740 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37AC7EC Offset: 0x37AC7EC VA: 0x37AC7EC Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37AC7F4 Offset: 0x37AC7F4 VA: 0x37AC7F4 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37AC9D8 Offset: 0x37AC9D8 VA: 0x37AC9D8 Slot: 8
	public override void Show() { }

	// RVA: 0x37AC9F8 Offset: 0x37AC9F8 VA: 0x37AC9F8 Slot: 9
	public override void Hide() { }

	// RVA: 0x37ACA18 Offset: 0x37ACA18 VA: 0x37ACA18 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37ACA20 Offset: 0x37ACA20 VA: 0x37ACA20 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37ACA28 Offset: 0x37ACA28 VA: 0x37ACA28
	public void Prepare(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle) { }

	// RVA: 0x37ACB9C Offset: 0x37ACB9C VA: 0x37ACB9C
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.Rainbow