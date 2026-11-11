public class IcicleItem : ABlockerItem // TypeDefIndex: 1683
{
	// Fields
	private IcicleView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private Cell _belongingCell; // 0x58
	private bool _pendingBreak; // 0x60

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x274CC80 Offset: 0x274CC80 VA: 0x274CC80 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x274CC88 Offset: 0x274CC88 VA: 0x274CC88 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x274CD34 Offset: 0x274CD34 VA: 0x274CD34 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x274CD40 Offset: 0x274CD40 VA: 0x274CD40
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, Cell belongingCell) { }

	// RVA: 0x274CDC4 Offset: 0x274CDC4 VA: 0x274CDC4 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x274CE2C Offset: 0x274CE2C VA: 0x274CE2C Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x274CE74 Offset: 0x274CE74 VA: 0x274CE74 Slot: 20
	public override void Show() { }

	// RVA: 0x274CE94 Offset: 0x274CE94 VA: 0x274CE94 Slot: 21
	public override void Hide() { }

	// RVA: 0x274CEB4 Offset: 0x274CEB4 VA: 0x274CEB4 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x274CEBC Offset: 0x274CEBC VA: 0x274CEBC Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x274CEC4 Offset: 0x274CEC4 VA: 0x274CEC4 Slot: 27
	public override void OnAnyMoveStarted(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x274CF24 Offset: 0x274CF24 VA: 0x274CF24 Slot: 28
	public override void OnAnyMoveFinished() { }

	// RVA: 0x274CF40 Offset: 0x274CF40 VA: 0x274CF40
	private void Complete() { }

	// RVA: 0x274D014 Offset: 0x274D014 VA: 0x274D014
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Icicle
[Serializable]