public class ProgressItem : MergeItem, IMergeable // TypeDefIndex: 3678
{
	// Fields
	[CompilerGenerated]
	private int <SetID>k__BackingField; // 0x90
	[CompilerGenerated]
	private int <ItemLevel>k__BackingField; // 0x94
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x98

	// Properties
	public int SetID { get; set; }
	public int ItemLevel { get; set; }
	public override int Id { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x410C6C0 Offset: 0x410C6C0 VA: 0x410C6C0 Slot: 19
	public int get_SetID() { }

	[CompilerGenerated]
	// RVA: 0x410C6C8 Offset: 0x410C6C8 VA: 0x410C6C8 Slot: 20
	public void set_SetID(int value) { }

	[CompilerGenerated]
	// RVA: 0x410C6D0 Offset: 0x410C6D0 VA: 0x410C6D0 Slot: 21
	public int get_ItemLevel() { }

	[CompilerGenerated]
	// RVA: 0x410C6D8 Offset: 0x410C6D8 VA: 0x410C6D8 Slot: 22
	public void set_ItemLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x410C6E0 Offset: 0x410C6E0 VA: 0x410C6E0 Slot: 5
	public override int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x410C6E8 Offset: 0x410C6E8 VA: 0x410C6E8 Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x410C6F0 Offset: 0x410C6F0 VA: 0x410C6F0 Slot: 7
	public override void Initialize() { }

	// RVA: 0x410C6F4 Offset: 0x410C6F4 VA: 0x410C6F4 Slot: 15
	public override void Prepare(MergeMiniGameItemViewModel viewModel, Transform parent, Sprite sprite, MergeMiniGameSelectionSystem selectionSystem) { }

	// RVA: 0x410C7A4 Offset: 0x410C7A4 VA: 0x410C7A4 Slot: 9
	public override bool CanMove() { }

	// RVA: 0x410C7AC Offset: 0x410C7AC VA: 0x410C7AC Slot: 10
	public override bool CanMerge() { }

	// RVA: 0x410C7B4 Offset: 0x410C7B4 VA: 0x410C7B4 Slot: 11
	public override void OnMerge() { }

	// RVA: 0x410C7C4 Offset: 0x410C7C4 VA: 0x410C7C4 Slot: 16
	public override void Dispose() { }

	// RVA: 0x410C7E4 Offset: 0x410C7E4 VA: 0x410C7E4 Slot: 23
	public bool CanMergeWith(IMergeable item) { }

	// RVA: 0x410C928 Offset: 0x410C928 VA: 0x410C928 Slot: 24
	public Tween MoveTargetWithScale(Transform target) { }

	// RVA: 0x410CA20 Offset: 0x410CA20 VA: 0x410CA20 Slot: 8
	public override void Recycle() { }

	// RVA: 0x410CB0C Offset: 0x410CB0C VA: 0x410CB0C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board