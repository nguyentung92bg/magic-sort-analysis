public class MergeMiniGameSelectionSystem // TypeDefIndex: 3695
{
	// Fields
	private readonly MergeMiniGameController _controller; // 0x10
	private readonly MergeBoard _board; // 0x18
	private MergeDragSelection _dragSelection; // 0x20
	private MergeBoardCell _activeCell; // 0x28
	private Vector3 _dragGrabOffset; // 0x30
	private bool _isReselection; // 0x3C

	// Methods

	// RVA: 0x410CBC4 Offset: 0x410CBC4 VA: 0x410CBC4
	public void .ctor(MergeMiniGameController controller) { }

	// RVA: 0x4112434 Offset: 0x4112434 VA: 0x4112434
	public void OnItemTouchDown(MergeBoardCell cell) { }

	// RVA: 0x4118448 Offset: 0x4118448 VA: 0x4118448
	private void SetActiveCell(MergeBoardCell cell) { }

	// RVA: 0x41129E0 Offset: 0x41129E0 VA: 0x41129E0
	public void OnItemTap(MergeItem item) { }

	// RVA: 0x4118578 Offset: 0x4118578 VA: 0x4118578
	private void PlaySelectAnimation(MergeItem item) { }

	// RVA: 0x4112FC8 Offset: 0x4112FC8 VA: 0x4112FC8
	public void OnItemDragStart(MergeBoardCell cell, Vector2 worldPos) { }

	// RVA: 0x4113220 Offset: 0x4113220 VA: 0x4113220
	public void OnItemDrag(MergeItem item, Vector2 worldPos) { }

	// RVA: 0x41125EC Offset: 0x41125EC VA: 0x41125EC
	public void OnItemDragEnd(Vector2 worldPos) { }

	// RVA: 0x4112B6C Offset: 0x4112B6C VA: 0x4112B6C
	public void OnItemDragCancel() { }

	// RVA: 0x411782C Offset: 0x411782C VA: 0x411782C
	public void Dispose() { }
}

// Namespace: 