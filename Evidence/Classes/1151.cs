public interface ISelectionAnimationHandler // TypeDefIndex: 1151
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void OnSelectAsOrigin(Selection selection);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void OnSelectAsTarget(BottleItem targetBottle, Selection selection);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void OnDeselect(Selection selection);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract Tween ReverseSelection(Selection selection, BottleItem originBottle, BottleItem targetBottle, SelectionResult selectionResult);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void ApplySelection(Selection selection);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void OnSelectionCompleted();
}

// Namespace: 
[CompilerGenerated]
[Serializable]