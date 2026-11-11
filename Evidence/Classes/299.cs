public class EditorMagicSealItem : EditorABlockerItem // TypeDefIndex: 299
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorMagicSealView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private EditorCell _belongingCell; // 0x40
	private Vector3 _viewOffset; // 0x48
	private bool _isOnQuestionMark; // 0x54

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3DD89B4 Offset: 0x3DD89B4 VA: 0x3DD89B4 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DD89BC Offset: 0x3DD89BC VA: 0x3DD89BC Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DD89C4 Offset: 0x3DD89C4 VA: 0x3DD89C4 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DD8A70 Offset: 0x3DD8A70 VA: 0x3DD8A70 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DD8A90 Offset: 0x3DD8A90 VA: 0x3DD8A90
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, EditorCell belongingCell) { }

	// RVA: 0x3DD8AD8 Offset: 0x3DD8AD8 VA: 0x3DD8AD8 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DD8B94 Offset: 0x3DD8B94 VA: 0x3DD8B94 Slot: 8
	public override void Show() { }

	// RVA: 0x3DD8BB4 Offset: 0x3DD8BB4 VA: 0x3DD8BB4 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DD8BD4 Offset: 0x3DD8BD4 VA: 0x3DD8BD4 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DD8BDC Offset: 0x3DD8BDC VA: 0x3DD8BDC
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal