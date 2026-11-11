public class FrogItem : ABlockerItem // TypeDefIndex: 1701
{
	// Fields
	private FrogView _view; // 0x48
	private BottleItem _currentBottle; // 0x50
	private int _currentBottleIndex; // 0x58
	private List<BottleItem> _belongingBottles; // 0x60
	private Vector3 _viewOffset; // 0x68
	private bool _isOnQuestionMark; // 0x74
	private FrogType _frogType; // 0x78
	private BottleCollection _bottleCollection; // 0x80
	private int _direction; // 0x88
	private List<FrogPathItem> _frogPathItems; // 0x90

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2751EC8 Offset: 0x2751EC8 VA: 0x2751EC8 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2751ED0 Offset: 0x2751ED0 VA: 0x2751ED0 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2751FD4 Offset: 0x2751FD4 VA: 0x2751FD4 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2751FF8 Offset: 0x2751FF8 VA: 0x2751FF8
	public void Prepare(Vector3 viewOffset, Sorting sorting, List<BottleItem> belongingBottles, FrogType frogType) { }

	// RVA: 0x27521F8 Offset: 0x27521F8 VA: 0x27521F8 Slot: 27
	public override void OnAnyMoveStarted(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x2752340 Offset: 0x2752340 VA: 0x2752340 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2752348 Offset: 0x2752348 VA: 0x2752348 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x2752350 Offset: 0x2752350 VA: 0x2752350
	public void AddFrogPathItemToBottle(BottleItem currentBottle, FrogPathItem frogPathItem) { }

	// RVA: 0x2752474 Offset: 0x2752474 VA: 0x2752474 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x275268C Offset: 0x275268C VA: 0x275268C Slot: 20
	public override void Show() { }

	// RVA: 0x27526AC Offset: 0x27526AC VA: 0x27526AC Slot: 21
	public override void Hide() { }

	// RVA: 0x27526CC Offset: 0x27526CC VA: 0x27526CC
	private void Complete() { }

	// RVA: 0x2752704 Offset: 0x2752704 VA: 0x2752704
	private void RemoveFromCells() { }

	// RVA: 0x275270C Offset: 0x275270C VA: 0x275270C
	private void CompleteBySnitch() { }

	// RVA: 0x2752708 Offset: 0x2752708 VA: 0x2752708
	private void PlayCompleteAnimation() { }

	// RVA: 0x2752744 Offset: 0x2752744 VA: 0x2752744 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x2752754 Offset: 0x2752754 VA: 0x2752754 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x2752764 Offset: 0x2752764 VA: 0x2752764 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x275276C Offset: 0x275276C VA: 0x275276C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog
[Serializable]