public class MergeItemInputReceiver : UITouchableElement, IDraggable // TypeDefIndex: 3686
{
	// Fields
	[SerializeField]
	private Vector2 _defaulInputSize; // 0x28
	[SerializeField]
	private Vector2 _draggingInputSize; // 0x30
	private MergeMiniGameSelectionSystem _selectionSystem; // 0x38
	private MergeItem _item; // 0x40
	private bool _isDragging; // 0x48

	// Methods

	// RVA: 0x410A810 Offset: 0x410A810 VA: 0x410A810
	public void Initialize(MergeMiniGameSelectionSystem selectionSystem, MergeItem item) { }

	// RVA: 0x41123F4 Offset: 0x41123F4 VA: 0x41123F4 Slot: 11
	public override void OnTouchDown(Vector2 position) { }

	// RVA: 0x4112580 Offset: 0x4112580 VA: 0x4112580 Slot: 12
	public override void OnTouchUp(Vector2 position) { }

	// RVA: 0x4112B2C Offset: 0x4112B2C VA: 0x4112B2C Slot: 13
	public override void OnTouchCancel(Vector2 position) { }

	// RVA: 0x4112E04 Offset: 0x4112E04 VA: 0x4112E04 Slot: 14
	public void OnDragStart(Vector2 position) { }

	// RVA: 0x4113200 Offset: 0x4113200 VA: 0x4113200 Slot: 15
	public void OnDrag(Vector2 position) { }

	// RVA: 0x411344C Offset: 0x411344C VA: 0x411344C Slot: 16
	public bool IsDragging() { }

	// RVA: 0x4113454 Offset: 0x4113454 VA: 0x4113454
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x41134B8 Offset: 0x41134B8 VA: 0x41134B8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board