public class WoodboxKeyItem : ABlockerItem, IRevealableItem // TypeDefIndex: 1596
{
	// Fields
	private WoodboxKeyView _woodboxKeyView; // 0x48
	private WoodboxItem _belongingWoodbox; // 0x50
	private Cell _belongingCell; // 0x58
	private BottleItem _belongingBottle; // 0x60
	private WoodboxKeyType _woodboxKeyType; // 0x68
	private readonly Quaternion _initialRotation; // 0x6C
	private Vector3 _viewOffset; // 0x7C
	private bool _isOnQuestionMark; // 0x88
	private const float QuestionMarkKeyRevealDelay = 0.4;
	private bool _isBelongingWoodboxTargetedBySnitch; // 0x89
	[CompilerGenerated]
	private bool <IsRevealed>k__BackingField; // 0x8A

	// Properties
	public override bool IsOverlay { get; }
	public bool IsRevealed { get; set; }

	// Methods

	// RVA: 0x230C514 Offset: 0x230C514 VA: 0x230C514 Slot: 22
	public override bool get_IsOverlay() { }

	[CompilerGenerated]
	// RVA: 0x230C51C Offset: 0x230C51C VA: 0x230C51C Slot: 53
	public bool get_IsRevealed() { }

	[CompilerGenerated]
	// RVA: 0x230C524 Offset: 0x230C524 VA: 0x230C524
	private void set_IsRevealed(bool value) { }

	// RVA: 0x230C530 Offset: 0x230C530 VA: 0x230C530 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x230C5DC Offset: 0x230C5DC VA: 0x230C5DC Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x23030BC Offset: 0x23030BC VA: 0x23030BC
	public void Prepare(Vector3 viewOffset, Sorting sorting, Cell belongingCell, WoodboxItem belongingWoodbox, WoodboxKeyType woodboxKeyType, BottleItem belongingBottle, int blockerVariant) { }

	// RVA: 0x230C6CC Offset: 0x230C6CC VA: 0x230C6CC Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x230C78C Offset: 0x230C78C VA: 0x230C78C
	public WoodboxKeyType GetWoodboxKeyType() { }

	// RVA: 0x230C794 Offset: 0x230C794 VA: 0x230C794 Slot: 29
	public override void OnWaterRotate(float rotation, Vector3 rotationRelatedWorldPosition, int index) { }

	// RVA: 0x230C9A0 Offset: 0x230C9A0 VA: 0x230C9A0 Slot: 14
	public override void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x230C9CC Offset: 0x230C9CC VA: 0x230C9CC
	private void Complete() { }

	// RVA: 0x230CD40 Offset: 0x230CD40 VA: 0x230CD40
	private void CompleteBySnitch() { }

	// RVA: 0x230CA20 Offset: 0x230CA20 VA: 0x230CA20
	private void PlayCompleteAnimation() { }

	// RVA: 0x230D390 Offset: 0x230D390 VA: 0x230D390
	private void RevealItem() { }

	// RVA: 0x230D4F4 Offset: 0x230D4F4 VA: 0x230D4F4 Slot: 20
	public override void Show() { }

	// RVA: 0x230D514 Offset: 0x230D514 VA: 0x230D514 Slot: 21
	public override void Hide() { }

	// RVA: 0x230D534 Offset: 0x230D534 VA: 0x230D534 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x230D544 Offset: 0x230D544 VA: 0x230D544 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x230D554 Offset: 0x230D554 VA: 0x230D554
	public int GetBelongingWoodboxSize() { }

	// RVA: 0x230D56C Offset: 0x230D56C VA: 0x230D56C
	public WoodboxItem GetBelongingWoodbox() { }

	// RVA: 0x230D574 Offset: 0x230D574 VA: 0x230D574 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x230D57C Offset: 0x230D57C VA: 0x230D57C
	public void MarkAsBelongingWoodboxLockedBySnitch() { }

	// RVA: 0x230CD90 Offset: 0x230CD90 VA: 0x230CD90
	private void PlayCompletedBySnitch() { }

	// RVA: 0x2304C28 Offset: 0x2304C28 VA: 0x2304C28
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x230D6FC Offset: 0x230D6FC VA: 0x230D6FC
	private void <PlayCompleteAnimation>b__25_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox