public class EditorMosaicItem : EditorABlockerItem // TypeDefIndex: 297
{
	// Fields
	public const int MaxColorCount = 5;
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorMosaicView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private MosaicType _mosaicType; // 0x40
	private List<ColorId> _colorIds; // 0x48

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37B3E40 Offset: 0x37B3E40 VA: 0x37B3E40 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B3E48 Offset: 0x37B3E48 VA: 0x37B3E48 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B3E50 Offset: 0x37B3E50 VA: 0x37B3E50 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B3EFC Offset: 0x37B3EFC VA: 0x37B3EFC Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B3F04 Offset: 0x37B3F04 VA: 0x37B3F04
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, List<ColorId> colorIds, MosaicType mosaicType) { }

	// RVA: 0x37B03C0 Offset: 0x37B03C0 VA: 0x37B03C0
	public void ShowCanvas() { }

	// RVA: 0x37B0A9C Offset: 0x37B0A9C VA: 0x37B0A9C
	public void CycleColorCount() { }

	// RVA: 0x37B06D8 Offset: 0x37B06D8 VA: 0x37B06D8
	public void AssignColor(ColorId colorId) { }

	// RVA: 0x37B4524 Offset: 0x37B4524 VA: 0x37B4524
	private void Broadcast() { }

	// RVA: 0x37B4624 Offset: 0x37B4624 VA: 0x37B4624
	private void OnUpdatedColors(MosaicType mosaicType, List<ColorId> colorIds) { }

	// RVA: 0x37AAFDC Offset: 0x37AAFDC VA: 0x37AAFDC
	public List<ColorId> GetColorIds() { }

	// RVA: 0x37B46E0 Offset: 0x37B46E0 VA: 0x37B46E0
	public MosaicType GetMosaicType() { }

	// RVA: 0x37B46E8 Offset: 0x37B46E8 VA: 0x37B46E8 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B4944 Offset: 0x37B4944 VA: 0x37B4944
	private void OnColorCountChanged(int count) { }

	// RVA: 0x37B4AD0 Offset: 0x37B4AD0 VA: 0x37B4AD0 Slot: 8
	public override void Show() { }

	// RVA: 0x37B4AF0 Offset: 0x37B4AF0 VA: 0x37B4AF0 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B4B10 Offset: 0x37B4B10 VA: 0x37B4B10 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37B4B18 Offset: 0x37B4B18 VA: 0x37B4B18 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37B4B20 Offset: 0x37B4B20 VA: 0x37B4B20
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Mosaic