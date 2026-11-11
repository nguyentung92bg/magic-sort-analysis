public class RegularSelectionAnimationHandler : ISelectionAnimationHandler // TypeDefIndex: 1156
{
	// Fields
	private Vector3 _originBottleInitialPosition; // 0x10
	[CompilerGenerated]
	private Tween <OriginBottleUpTween>k__BackingField; // 0x20

	// Properties
	private Tween OriginBottleUpTween { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1613574 Offset: 0x1613574 VA: 0x1613574
	private Tween get_OriginBottleUpTween() { }

	[CompilerGenerated]
	// RVA: 0x161357C Offset: 0x161357C VA: 0x161357C
	private void set_OriginBottleUpTween(Tween value) { }

	// RVA: 0x1613584 Offset: 0x1613584 VA: 0x1613584 Slot: 4
	public void OnSelectAsOrigin(Selection selection) { }

	// RVA: 0x161380C Offset: 0x161380C VA: 0x161380C Slot: 5
	public void OnSelectAsTarget(BottleItem targetBottle, Selection selection) { }

	// RVA: 0x16138A4 Offset: 0x16138A4 VA: 0x16138A4 Slot: 6
	public void OnDeselect(Selection selection) { }

	// RVA: 0x16139C0 Offset: 0x16139C0 VA: 0x16139C0 Slot: 8
	public void ApplySelection(Selection selection) { }

	// RVA: 0x16144A0 Offset: 0x16144A0 VA: 0x16144A0 Slot: 9
	public void OnSelectionCompleted() { }

	// RVA: 0x16144A4 Offset: 0x16144A4 VA: 0x16144A4 Slot: 7
	public Tween ReverseSelection(Selection selection, BottleItem originBottle, BottleItem targetBottle, SelectionResult selectionResult) { }

	// RVA: 0x16127C0 Offset: 0x16127C0 VA: 0x16127C0
	public void .ctor() { }
}

// Namespace: 