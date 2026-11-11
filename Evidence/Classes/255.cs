public class EditorInputSystem : IInitializable, IDisposable, IInputSystem, ITouchable, IMouseMove // TypeDefIndex: 255
{
	// Fields
	public EditorManager _editorManager; // 0x10
	private EditorItemFactory _itemFactory; // 0x18
	private Vector3 _firstTouchPosition; // 0x20
	public EditorInputType EditorInputType; // 0x2C
	public BottlePresetType BottlePresetType; // 0x30
	public ColorAndColorId SelectedColorAndColorId; // 0x38
	public int SelectedBottleHeight; // 0x40
	public ItemType SelectedBoardItemId; // 0x44
	public WoodboxKeyType SelectedKeyLockType; // 0x48
	[CompilerGenerated]
	private int <SelectedId>k__BackingField; // 0x4C
	private EditorAItem _willMoveBottleItem; // 0x50
	private EditorAItem _itemForDrawing; // 0x58
	private EventSystem _unityEventSystem; // 0x60
	private InputService _inputService; // 0x68
	private SortingService _sortingService; // 0x70
	private ColorService _colorService; // 0x78

	// Properties
	public int SelectedId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37A38EC Offset: 0x37A38EC VA: 0x37A38EC
	public int get_SelectedId() { }

	[CompilerGenerated]
	// RVA: 0x37A38F4 Offset: 0x37A38F4 VA: 0x37A38F4
	public void set_SelectedId(int value) { }

	// RVA: 0x37A38FC Offset: 0x37A38FC VA: 0x37A38FC
	public void .ctor(EditorManager editorManager, EditorItemFactory itemFactory, SortingService sortingService, ColorService colorService) { }

	// RVA: 0x37A3970 Offset: 0x37A3970 VA: 0x37A3970 Slot: 4
	public void Initialize() { }

	// RVA: 0x37A3FC0 Offset: 0x37A3FC0 VA: 0x37A3FC0
	private void OnEditorGeneratorItemChanged() { }

	// RVA: 0x37A494C Offset: 0x37A494C VA: 0x37A494C
	public void Refresh() { }

	// RVA: 0x37A4A04 Offset: 0x37A4A04 VA: 0x37A4A04
	private void OnRemoveBoardItemInputEvent() { }

	// RVA: 0x37A4A20 Offset: 0x37A4A20 VA: 0x37A4A20
	private void OnColorIsChangedEvent(ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A5604 Offset: 0x37A5604 VA: 0x37A5604
	private void OnDrawBottleInputEvent(int height) { }

	// RVA: 0x37A5668 Offset: 0x37A5668 VA: 0x37A5668
	private void OnDrawPresetInputEvent(BottlePresetType bottlePresetType, int height) { }

	// RVA: 0x37A56DC Offset: 0x37A56DC VA: 0x37A56DC
	private void OnRemoveBottleInputEvent() { }

	// RVA: 0x37A56F8 Offset: 0x37A56F8 VA: 0x37A56F8
	private void OnSelectedKeyLockTypeInputSignal(WoodboxKeyType keyLockType) { }

	// RVA: 0x37A5700 Offset: 0x37A5700 VA: 0x37A5700
	private void OnSelectedIdSignal(int id) { }

	// RVA: 0x37A4A40 Offset: 0x37A4A40 VA: 0x37A4A40
	private void OnDrawBoardItemInputEvent(ItemType itemType) { }

	// RVA: 0x37A5708 Offset: 0x37A5708 VA: 0x37A5708
	private void OnChangeBottlePositionInputEvent() { }

	// RVA: 0x37A49DC Offset: 0x37A49DC VA: 0x37A49DC
	private void RecycleBoardItems() { }

	// RVA: 0x37A5724 Offset: 0x37A5724 VA: 0x37A5724 Slot: 8
	public void OnTouchDown(Vector2 position) { }

	// RVA: 0x37A5A88 Offset: 0x37A5A88 VA: 0x37A5A88
	private bool IsPointerOverUIGameObject() { }

	// RVA: 0x37A6300 Offset: 0x37A6300 VA: 0x37A6300 Slot: 9
	public void OnTouchUp(Vector2 position) { }

	// RVA: 0x37A630C Offset: 0x37A630C VA: 0x37A630C Slot: 10
	public void OnTouchCancel(Vector2 position) { }

	// RVA: 0x37A6310 Offset: 0x37A6310 VA: 0x37A6310 Slot: 6
	public void Activate() { }

	// RVA: 0x37A639C Offset: 0x37A639C VA: 0x37A639C Slot: 7
	public void Deactivate() { }

	// RVA: 0x37A63D0 Offset: 0x37A63D0 VA: 0x37A63D0 Slot: 11
	public void MouseMove(Vector2 position) { }

	// RVA: 0x37A3FC4 Offset: 0x37A3FC4 VA: 0x37A3FC4
	private void UpdateColorAmounts() { }

	// RVA: 0x37A6570 Offset: 0x37A6570 VA: 0x37A6570 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts