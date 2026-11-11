public class Selection // TypeDefIndex: 1150
{
	// Fields
	[CompilerGenerated]
	private BottleItem <OriginBottle>k__BackingField; // 0x10
	[CompilerGenerated]
	private BottleItem <TargetBottle>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsStartedToProcess>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly BottleCollection <BottleCollection>k__BackingField; // 0x28
	[CompilerGenerated]
	private SelectionResult <SelectionResult>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <IsSelectionCompleted>k__BackingField; // 0x38
	private readonly ISelectionAnimationHandler _selectionAnimationHandler; // 0x40

	// Properties
	public bool IsItMove { get; }
	public bool IsSelectedOriginBottle { get; }
	public BottleItem OriginBottle { get; set; }
	public BottleItem TargetBottle { get; set; }
	public bool IsStartedToProcess { get; set; }
	public BottleCollection BottleCollection { get; }
	public SelectionResult SelectionResult { get; set; }
	public bool IsSelectionCompleted { get; set; }

	// Methods

	// RVA: 0x1612688 Offset: 0x1612688 VA: 0x1612688
	public bool get_IsItMove() { }

	// RVA: 0x1612698 Offset: 0x1612698 VA: 0x1612698
	public bool get_IsSelectedOriginBottle() { }

	[CompilerGenerated]
	// RVA: 0x16126A8 Offset: 0x16126A8 VA: 0x16126A8
	public BottleItem get_OriginBottle() { }

	[CompilerGenerated]
	// RVA: 0x16126B0 Offset: 0x16126B0 VA: 0x16126B0
	private void set_OriginBottle(BottleItem value) { }

	[CompilerGenerated]
	// RVA: 0x16126B8 Offset: 0x16126B8 VA: 0x16126B8
	public BottleItem get_TargetBottle() { }

	[CompilerGenerated]
	// RVA: 0x16126C0 Offset: 0x16126C0 VA: 0x16126C0
	private void set_TargetBottle(BottleItem value) { }

	[CompilerGenerated]
	// RVA: 0x16126C8 Offset: 0x16126C8 VA: 0x16126C8
	public bool get_IsStartedToProcess() { }

	[CompilerGenerated]
	// RVA: 0x16126D0 Offset: 0x16126D0 VA: 0x16126D0
	private void set_IsStartedToProcess(bool value) { }

	[CompilerGenerated]
	// RVA: 0x16126DC Offset: 0x16126DC VA: 0x16126DC
	public BottleCollection get_BottleCollection() { }

	[CompilerGenerated]
	// RVA: 0x16126E4 Offset: 0x16126E4 VA: 0x16126E4
	public SelectionResult get_SelectionResult() { }

	[CompilerGenerated]
	// RVA: 0x16126EC Offset: 0x16126EC VA: 0x16126EC
	public void set_SelectionResult(SelectionResult value) { }

	[CompilerGenerated]
	// RVA: 0x16126F4 Offset: 0x16126F4 VA: 0x16126F4
	public bool get_IsSelectionCompleted() { }

	[CompilerGenerated]
	// RVA: 0x16126FC Offset: 0x16126FC VA: 0x16126FC
	private void set_IsSelectionCompleted(bool value) { }

	// RVA: 0x1612708 Offset: 0x1612708 VA: 0x1612708
	public void .ctor(BottleCollection bottleCollection, bool isDaily) { }

	// RVA: 0x16127C8 Offset: 0x16127C8 VA: 0x16127C8
	public bool CanSelectAsOrigin(BottleItem originBottle) { }

	// RVA: 0x1612800 Offset: 0x1612800 VA: 0x1612800
	public void SelectAsOrigin(BottleItem bottleItem) { }

	// RVA: 0x160FDB4 Offset: 0x160FDB4 VA: 0x160FDB4
	public bool CanSelectAsTarget(BottleItem targetBottle, BottleItem originBottle) { }

	// RVA: 0x16128BC Offset: 0x16128BC VA: 0x16128BC
	public void SelectAsTarget(BottleItem targetBottle) { }

	// RVA: 0x1612C7C Offset: 0x1612C7C VA: 0x1612C7C
	public void CompleteSelection() { }

	// RVA: 0x1612D38 Offset: 0x1612D38 VA: 0x1612D38
	public void Deselect() { }

	// RVA: 0x1612E74 Offset: 0x1612E74 VA: 0x1612E74
	public void ApplySelection() { }

	// RVA: 0x1612F1C Offset: 0x1612F1C VA: 0x1612F1C
	public Tween ReverseSelection() { }

	// RVA: 0x1612FE0 Offset: 0x1612FE0 VA: 0x1612FE0
	public bool TryCancel() { }
}

// Namespace: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS