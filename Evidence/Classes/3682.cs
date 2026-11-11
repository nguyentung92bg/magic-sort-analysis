public class MergeDragSelection // TypeDefIndex: 3682
{
	// Fields
	[CompilerGenerated]
	private MergeBoardCell <OriginCell>k__BackingField; // 0x10
	[CompilerGenerated]
	private MergeBoardCell <TargetCell>k__BackingField; // 0x18
	private MergeBoard _board; // 0x20

	// Properties
	public MergeBoardCell OriginCell { get; set; }
	public MergeBoardCell TargetCell { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x4110864 Offset: 0x4110864 VA: 0x4110864
	public MergeBoardCell get_OriginCell() { }

	[CompilerGenerated]
	// RVA: 0x411086C Offset: 0x411086C VA: 0x411086C
	public void set_OriginCell(MergeBoardCell value) { }

	[CompilerGenerated]
	// RVA: 0x4110874 Offset: 0x4110874 VA: 0x4110874
	public MergeBoardCell get_TargetCell() { }

	[CompilerGenerated]
	// RVA: 0x411087C Offset: 0x411087C VA: 0x411087C
	public void set_TargetCell(MergeBoardCell value) { }

	// RVA: 0x4110884 Offset: 0x4110884 VA: 0x4110884
	public void .ctor(MergeBoard board) { }

	// RVA: 0x41108B4 Offset: 0x41108B4 VA: 0x41108B4
	public bool CanMerge() { }

	// RVA: 0x4110A34 Offset: 0x4110A34 VA: 0x4110A34
	public void SelectAsOrigin(MergeBoardCell originCell) { }

	// RVA: 0x4110A3C Offset: 0x4110A3C VA: 0x4110A3C
	public void SelectAsTarget(MergeBoardCell targetCell) { }

	// RVA: 0x4110A44 Offset: 0x4110A44 VA: 0x4110A44
	public bool IsTargetCellIsEmpty() { }

	// RVA: 0x4110A5C Offset: 0x4110A5C VA: 0x4110A5C
	public bool IsTargetOutsideOfTheBoard(Vector2 worldPos) { }

	// RVA: 0x4110A88 Offset: 0x4110A88 VA: 0x4110A88
	public bool IsTargetMovable() { }

	// RVA: 0x4110C48 Offset: 0x4110C48 VA: 0x4110C48
	public void DeselectTarget() { }

	// RVA: 0x4110CD8 Offset: 0x4110CD8 VA: 0x4110CD8
	public bool CanSelectAsTarget(MergeBoardCell target) { }

	// RVA: 0x4110D6C Offset: 0x4110D6C VA: 0x4110D6C
	public bool CanSelectAsOrigin(MergeBoardCell cell) { }
}

// Namespace: 
[IsReadOnly]