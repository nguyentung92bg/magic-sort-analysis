public class EditorFrogItem : EditorABlockerItem // TypeDefIndex: 311
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorFrogView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private bool _isOnQuestionMark; // 0x40
	private int _id; // 0x44

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3DDA5EC Offset: 0x3DDA5EC VA: 0x3DDA5EC Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DDA5F4 Offset: 0x3DDA5F4 VA: 0x3DDA5F4 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DDA5FC Offset: 0x3DDA5FC VA: 0x3DDA5FC Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DDA6A8 Offset: 0x3DDA6A8 VA: 0x3DDA6A8 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DDA6C8 Offset: 0x3DDA6C8 VA: 0x3DDA6C8
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, int id) { }

	// RVA: 0x3DDA774 Offset: 0x3DDA774 VA: 0x3DDA774
	public int GetId() { }

	// RVA: 0x3DDA77C Offset: 0x3DDA77C VA: 0x3DDA77C Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DDA838 Offset: 0x3DDA838 VA: 0x3DDA838 Slot: 8
	public override void Show() { }

	// RVA: 0x3DDA858 Offset: 0x3DDA858 VA: 0x3DDA858 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DDA878 Offset: 0x3DDA878 VA: 0x3DDA878 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DDA880 Offset: 0x3DDA880 VA: 0x3DDA880
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Frog