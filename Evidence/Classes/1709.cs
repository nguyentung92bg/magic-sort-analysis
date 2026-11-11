public class FireworkItem : ABlockerItem // TypeDefIndex: 1709
{
	// Fields
	private FireworkView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private BottleCollection _bottleCollection; // 0x58
	private int _fireworkCount; // 0x60
	private List<FireworkItem.FireworkTarget> _currentTargets; // 0x68
	private FireworkInGameManager _fireworkManager; // 0x70
	private SortingService _sortingService; // 0x78

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2752D80 Offset: 0x2752D80 VA: 0x2752D80 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2752D88 Offset: 0x2752D88 VA: 0x2752D88 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2752ED8 Offset: 0x2752ED8 VA: 0x2752ED8 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2752EE0 Offset: 0x2752EE0 VA: 0x2752EE0
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, BottleCollection bottleCollection, int fireworkCount) { }

	// RVA: 0x2753240 Offset: 0x2753240 VA: 0x2753240 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x275343C Offset: 0x275343C VA: 0x275343C Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2753444 Offset: 0x2753444 VA: 0x2753444 Slot: 20
	public override void Show() { }

	// RVA: 0x2753464 Offset: 0x2753464 VA: 0x2753464 Slot: 21
	public override void Hide() { }

	// RVA: 0x2753484 Offset: 0x2753484 VA: 0x2753484 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x275348C Offset: 0x275348C VA: 0x275348C Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2753494 Offset: 0x2753494 VA: 0x2753494 Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x2753498 Offset: 0x2753498 VA: 0x2753498
	private void Complete() { }

	// RVA: 0x2753548 Offset: 0x2753548 VA: 0x2753548
	private void PlayCompleteAnimation() { }

	// RVA: 0x27537B4 Offset: 0x27537B4 VA: 0x27537B4
	private void InitializeTargets() { }

	// RVA: 0x2754398 Offset: 0x2754398 VA: 0x2754398
	private void LaunchFireworksToTargets() { }

	// RVA: 0x2754F40 Offset: 0x2754F40 VA: 0x2754F40
	private void RevealCell(BottleItem bottle, Cell cell) { }

	// RVA: 0x2754314 Offset: 0x2754314 VA: 0x2754314
	private bool IsBottleUnderBlocker(BottleItem bottleItem) { }

	// RVA: 0x27550C8 Offset: 0x27550C8 VA: 0x27550C8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x27550D0 Offset: 0x27550D0 VA: 0x27550D0
	private void <PlayCompleteAnimation>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x2755118 Offset: 0x2755118 VA: 0x2755118
	private void <PlayCompleteAnimation>b__20_1() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Firework
[Serializable]