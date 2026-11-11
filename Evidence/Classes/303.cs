public class EditorIvyItem : EditorABlockerItem // TypeDefIndex: 303
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorIvyView _ivyView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private bool _isOnQuestionMark; // 0x40
	private int _height; // 0x44
	private ColorId _colorId; // 0x48

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3DD9060 Offset: 0x3DD9060 VA: 0x3DD9060 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DD9068 Offset: 0x3DD9068 VA: 0x3DD9068 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DD9070 Offset: 0x3DD9070 VA: 0x3DD9070 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DD911C Offset: 0x3DD911C VA: 0x3DD911C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DD913C Offset: 0x3DD913C VA: 0x3DD913C
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x3DD91F8 Offset: 0x3DD91F8 VA: 0x3DD91F8
	public ColorId GetColorId() { }

	// RVA: 0x3DD9200 Offset: 0x3DD9200 VA: 0x3DD9200 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DD92BC Offset: 0x3DD92BC VA: 0x3DD92BC Slot: 8
	public override void Show() { }

	// RVA: 0x3DD92DC Offset: 0x3DD92DC VA: 0x3DD92DC Slot: 9
	public override void Hide() { }

	// RVA: 0x3DD92FC Offset: 0x3DD92FC VA: 0x3DD92FC Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DD9304 Offset: 0x3DD9304 VA: 0x3DD9304
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Ivy