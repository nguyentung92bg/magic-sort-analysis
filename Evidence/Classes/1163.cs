public class DailySelectionAnimationHandler : ISelectionAnimationHandler // TypeDefIndex: 1163
{
	// Fields
	[CompilerGenerated]
	private Tween <OriginBottleUpTween>k__BackingField; // 0x10
	private BlobItemPart _blobItemPart; // 0x18
	private BlobItemPart _dividedBlobComponent; // 0x20

	// Properties
	public Tween OriginBottleUpTween { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1615914 Offset: 0x1615914 VA: 0x1615914
	public Tween get_OriginBottleUpTween() { }

	[CompilerGenerated]
	// RVA: 0x161591C Offset: 0x161591C VA: 0x161591C
	public void set_OriginBottleUpTween(Tween value) { }

	// RVA: 0x1615924 Offset: 0x1615924 VA: 0x1615924 Slot: 4
	public void OnSelectAsOrigin(Selection selection) { }

	// RVA: 0x1615D90 Offset: 0x1615D90 VA: 0x1615D90 Slot: 5
	public void OnSelectAsTarget(BottleItem targetBottle, Selection selection) { }

	// RVA: 0x1615E28 Offset: 0x1615E28 VA: 0x1615E28 Slot: 6
	public void OnDeselect(Selection selection) { }

	// RVA: 0x161627C Offset: 0x161627C VA: 0x161627C Slot: 7
	public Tween ReverseSelection(Selection selection, BottleItem originBottle, BottleItem targetBottle, SelectionResult selectionResult) { }

	// RVA: 0x161631C Offset: 0x161631C VA: 0x161631C Slot: 8
	public void ApplySelection(Selection selection) { }

	// RVA: 0x16171A8 Offset: 0x16171A8 VA: 0x16171A8 Slot: 9
	public void OnSelectionCompleted() { }

	// RVA: 0x16127B8 Offset: 0x16127B8 VA: 0x16127B8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger