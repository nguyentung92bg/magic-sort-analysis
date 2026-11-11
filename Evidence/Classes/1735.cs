public class DuckItem : ABlockerItem, IRevealableItem // TypeDefIndex: 1735
{
	// Fields
	private DuckView _view; // 0x48
	private DuckHouseItem _belongingDuckHouseItem; // 0x50
	private Cell _belongingCell; // 0x58
	private BottleItem _belongingBottle; // 0x60
	private readonly Quaternion _initialRotation; // 0x68
	private Vector3 _viewOffset; // 0x78
	private bool _isOnQuestionMark; // 0x84
	private const float QuestionMarkKeyRevealDelay = 0.4;
	private bool _isBelongingWoodboxTargetedBySnitch; // 0x85
	private DuckType _duckType; // 0x88
	[CompilerGenerated]
	private bool <IsRevealed>k__BackingField; // 0x8C

	// Properties
	public override bool IsOverlay { get; }
	public bool IsRevealed { get; set; }

	// Methods

	// RVA: 0x2F52B94 Offset: 0x2F52B94 VA: 0x2F52B94 Slot: 22
	public override bool get_IsOverlay() { }

	[CompilerGenerated]
	// RVA: 0x2F52B9C Offset: 0x2F52B9C VA: 0x2F52B9C Slot: 53
	public bool get_IsRevealed() { }

	[CompilerGenerated]
	// RVA: 0x2F52BA4 Offset: 0x2F52BA4 VA: 0x2F52BA4
	private void set_IsRevealed(bool value) { }

	// RVA: 0x2F52BB0 Offset: 0x2F52BB0 VA: 0x2F52BB0 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2F52C5C Offset: 0x2F52C5C VA: 0x2F52C5C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2F52C84 Offset: 0x2F52C84 VA: 0x2F52C84
	public void Prepare(Vector3 viewOffset, Sorting sorting, DuckHouseItem duckHouseItem, BottleItem belongingBottle, Cell belongingCell, DuckType duckType) { }

	// RVA: 0x2F52F2C Offset: 0x2F52F2C VA: 0x2F52F2C Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2F52FEC Offset: 0x2F52FEC VA: 0x2F52FEC Slot: 29
	public override void OnWaterRotate(float rotation, Vector3 rotationRelatedWorldPosition, int index) { }

	// RVA: 0x2F531F8 Offset: 0x2F531F8 VA: 0x2F531F8 Slot: 14
	public override void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x2F53224 Offset: 0x2F53224 VA: 0x2F53224
	private void Complete() { }

	// RVA: 0x2F535F0 Offset: 0x2F535F0 VA: 0x2F535F0
	private void CompleteBySnitch() { }

	// RVA: 0x2F53280 Offset: 0x2F53280 VA: 0x2F53280
	private void PlayCompleteAnimation() { }

	// RVA: 0x2F53C64 Offset: 0x2F53C64 VA: 0x2F53C64
	private void RevealItem() { }

	// RVA: 0x2F53DC8 Offset: 0x2F53DC8 VA: 0x2F53DC8 Slot: 20
	public override void Show() { }

	// RVA: 0x2F53DE8 Offset: 0x2F53DE8 VA: 0x2F53DE8 Slot: 21
	public override void Hide() { }

	// RVA: 0x2F53E08 Offset: 0x2F53E08 VA: 0x2F53E08 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x2F53E18 Offset: 0x2F53E18 VA: 0x2F53E18 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x2F53E28 Offset: 0x2F53E28 VA: 0x2F53E28 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2F53638 Offset: 0x2F53638 VA: 0x2F53638
	private void PlayCompletedBySnitch() { }

	// RVA: 0x2F53E30 Offset: 0x2F53E30 VA: 0x2F53E30
	public void SetBelongingCell(Cell cell) { }

	// RVA: 0x2F53E38 Offset: 0x2F53E38 VA: 0x2F53E38
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F53E6C Offset: 0x2F53E6C VA: 0x2F53E6C
	private void <PlayCompleteAnimation>b__24_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck
[Serializable]