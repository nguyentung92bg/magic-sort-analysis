public class ToggleItem : ABlockerItem, ISpecialStuckResolver // TypeDefIndex: 1611
{
	// Fields
	private ToggleView _toggleView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private bool _isOn; // 0x58
	private int _pendingToggleRequests; // 0x5C
	private SortingService _sortingService; // 0x60
	private Sequence _toggleSequence; // 0x68
	private bool _waitForOverlayItemToReveal; // 0x70
	private bool _waitForOverboardItemToReveal; // 0x71
	private bool _validMove; // 0x72
	private bool _isOverlayItemRevealed; // 0x73

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2608D08 Offset: 0x2608D08 VA: 0x2608D08 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2608D10 Offset: 0x2608D10 VA: 0x2608D10 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2608E1C Offset: 0x2608E1C VA: 0x2608E1C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2608E24 Offset: 0x2608E24 VA: 0x2608E24
	public void Prepare(Vector3 viewOffset, BottleItem belongingBottle, bool isOn) { }

	// RVA: 0x2608F84 Offset: 0x2608F84 VA: 0x2608F84 Slot: 27
	public override void OnAnyMoveStarted(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x2608FF8 Offset: 0x2608FF8 VA: 0x2608FF8
	private bool ShouldMakeMove(BottleItem originBottle, BottleItem targetBottle) { }

	// RVA: 0x2609054 Offset: 0x2609054 VA: 0x2609054
	private bool ShouldMakeInstantMove() { }

	// RVA: 0x260942C Offset: 0x260942C VA: 0x260942C
	private bool CheckMoveIsRepetitive(BottleItem originBottle, BottleItem targetBottle) { }

	// RVA: 0x2609114 Offset: 0x2609114 VA: 0x2609114
	private bool ShouldWaitBeforeToggleAnimation() { }

	// RVA: 0x2609474 Offset: 0x2609474 VA: 0x2609474
	private bool ShouldWaitForBottleAnimation() { }

	// RVA: 0x2609490 Offset: 0x2609490 VA: 0x2609490
	private bool ShouldWaitForOverlayItemToReveal() { }

	// RVA: 0x2609498 Offset: 0x2609498 VA: 0x2609498
	private bool ShouldWaitOverboardItemToReveal() { }

	// RVA: 0x2609158 Offset: 0x2609158 VA: 0x2609158
	private void IncreasePendingToggleRequests() { }

	// RVA: 0x26094A0 Offset: 0x26094A0 VA: 0x26094A0
	private bool ShouldWaitForOverboardItemToReveal() { }

	// RVA: 0x2609168 Offset: 0x2609168 VA: 0x2609168
	public void TryPlayToggleAnimation() { }

	// RVA: 0x26096D8 Offset: 0x26096D8 VA: 0x26096D8
	private bool ShouldPlayToggleAnimation() { }

	// RVA: 0x2609700 Offset: 0x2609700 VA: 0x2609700
	private void ResetPendingToggleRequests() { }

	// RVA: 0x26098B0 Offset: 0x26098B0 VA: 0x26098B0 Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x2609994 Offset: 0x2609994 VA: 0x2609994 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2609A54 Offset: 0x2609A54 VA: 0x2609A54 Slot: 15
	public override void OnBottleMove(int pourableHeight, bool isLeft, float animationDuration) { }

	// RVA: 0x2609B6C Offset: 0x2609B6C VA: 0x2609B6C Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2609B74 Offset: 0x2609B74 VA: 0x2609B74 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x2609B7C Offset: 0x2609B7C VA: 0x2609B7C Slot: 20
	public override void Show() { }

	// RVA: 0x2609074 Offset: 0x2609074 VA: 0x2609074
	private void MakeInstantMove() { }

	// RVA: 0x2609C7C Offset: 0x2609C7C VA: 0x2609C7C Slot: 21
	public override void Hide() { }

	// RVA: 0x26098E4 Offset: 0x26098E4 VA: 0x26098E4
	private void Complete() { }

	// RVA: 0x2609E4C Offset: 0x2609E4C VA: 0x2609E4C
	private void OpenToggleAndComplete() { }

	// RVA: 0x2609C9C Offset: 0x2609C9C VA: 0x2609C9C
	private void PlayCompleteAnimation() { }

	// RVA: 0x2609FB4 Offset: 0x2609FB4 VA: 0x2609FB4 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2609FBC Offset: 0x2609FBC VA: 0x2609FBC Slot: 32
	public override void UndoBlockerBehavior(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x260A014 Offset: 0x260A014 VA: 0x260A014 Slot: 24
	public override bool IsAllowShuffle() { }

	// RVA: 0x260A01C Offset: 0x260A01C VA: 0x260A01C Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x260A02C Offset: 0x260A02C VA: 0x260A02C Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x260A03C Offset: 0x260A03C VA: 0x260A03C Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x260A10C Offset: 0x260A10C VA: 0x260A10C Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x260A114 Offset: 0x260A114 VA: 0x260A114 Slot: 16
	public override void OnOriginBottleReturnToInitialPosition(Selection selection) { }

	// RVA: 0x260A160 Offset: 0x260A160 VA: 0x260A160 Slot: 14
	public override void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x260A194 Offset: 0x260A194 VA: 0x260A194 Slot: 51
	public override void OnOverlayItemRevealed() { }

	// RVA: 0x260A1C4 Offset: 0x260A1C4 VA: 0x260A1C4 Slot: 52
	public override void OnOverBoardItemRevealed() { }

	// RVA: 0x260A1EC Offset: 0x260A1EC VA: 0x260A1EC Slot: 53
	public void ResolveSpecialStuck() { }

	// RVA: 0x260A1FC Offset: 0x260A1FC VA: 0x260A1FC Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x260A204 Offset: 0x260A204 VA: 0x260A204
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x260A20C Offset: 0x260A20C VA: 0x260A20C
	private void <TryPlayToggleAnimation>b__25_0() { }

	[CompilerGenerated]
	// RVA: 0x260A2DC Offset: 0x260A2DC VA: 0x260A2DC
	private void <TryPlayToggleAnimation>b__25_1() { }

	[CompilerGenerated]
	// RVA: 0x260A304 Offset: 0x260A304 VA: 0x260A304
	private void <TryPlayToggleAnimation>b__25_3() { }

	[CompilerGenerated]
	// RVA: 0x260A398 Offset: 0x260A398 VA: 0x260A398
	private void <PlayCompleteAnimation>b__38_0() { }

	[CompilerGenerated]
	// RVA: 0x260A46C Offset: 0x260A46C VA: 0x260A46C
	private void <PlayCompleteAnimation>b__38_2() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]