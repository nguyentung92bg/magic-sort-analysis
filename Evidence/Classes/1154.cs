public class SelectionSystem : IFrameUpdate // TypeDefIndex: 1154
{
	// Fields
	[CompilerGenerated]
	private LevelStats <LevelStats>k__BackingField; // 0x10
	private Selection _currentSelection; // 0x18
	private readonly List<Selection> _selectionsRunning; // 0x20
	private readonly List<Selection> _selectionHistory; // 0x28
	private readonly LevelWinOrStuckSystem _levelWinOrStuckSystem; // 0x30
	private readonly bool _isDaily; // 0x38
	private readonly CustomUpdater _customUpdater; // 0x40
	private bool _isFirstClicked; // 0x48

	// Properties
	public LevelStats LevelStats { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x16130B8 Offset: 0x16130B8 VA: 0x16130B8
	public LevelStats get_LevelStats() { }

	[CompilerGenerated]
	// RVA: 0x16130C0 Offset: 0x16130C0 VA: 0x16130C0
	public void set_LevelStats(LevelStats value) { }

	// RVA: 0x16130C8 Offset: 0x16130C8 VA: 0x16130C8
	public void .ctor(LevelWinOrStuckSystem levelWinOrStuckSystem, bool isDaily) { }

	// RVA: 0x1611AD4 Offset: 0x1611AD4 VA: 0x1611AD4
	public void OnSelectionInput(BottleCollection bottleCollection, BottleItem bottleItem) { }

	// RVA: 0x1613214 Offset: 0x1613214 VA: 0x1613214
	public bool HasSelectionHistory() { }

	// RVA: 0x16106C8 Offset: 0x16106C8 VA: 0x16106C8
	public void ResetSelectionHistory() { }

	// RVA: 0x1613264 Offset: 0x1613264 VA: 0x1613264
	public Tween ReverseLastSelection() { }

	// RVA: 0x1613340 Offset: 0x1613340 VA: 0x1613340 Slot: 4
	public void FrameUpdate(float elapsedSeconds) { }

	// RVA: 0x1612034 Offset: 0x1612034 VA: 0x1612034
	public void TryCancelAllSelections() { }

	// RVA: 0x1613478 Offset: 0x1613478 VA: 0x1613478
	public List<Selection> GetRunningSelections() { }

	// RVA: 0x1613480 Offset: 0x1613480 VA: 0x1613480
	public bool IsSelectionRunning() { }

	// RVA: 0x16134D0 Offset: 0x16134D0 VA: 0x16134D0
	public void Deinitialize() { }
}

// Namespace: 
[CompilerGenerated]