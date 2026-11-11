public class MosaicItem : ABlockerItem // TypeDefIndex: 1658
{
	// Fields
	private MosaicView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private List<BottleItem> _belongingBottles; // 0x58
	private int _remainingColors; // 0x60
	private List<ColorId> _requiredColors; // 0x68
	private List<ColorId> _completedColors; // 0x70

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2746468 Offset: 0x2746468 VA: 0x2746468 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2746470 Offset: 0x2746470 VA: 0x2746470 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x27465F4 Offset: 0x27465F4 VA: 0x27465F4 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x27465FC Offset: 0x27465FC VA: 0x27465FC
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, List<ColorId> requiredColors) { }

	// RVA: 0x2746CEC Offset: 0x2746CEC VA: 0x2746CEC Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2746E30 Offset: 0x2746E30 VA: 0x2746E30 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2746E38 Offset: 0x2746E38 VA: 0x2746E38 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x2746E40 Offset: 0x2746E40 VA: 0x2746E40 Slot: 20
	public override void Show() { }

	// RVA: 0x2746E60 Offset: 0x2746E60 VA: 0x2746E60 Slot: 21
	public override void Hide() { }

	// RVA: 0x2746E80 Offset: 0x2746E80 VA: 0x2746E80 Slot: 26
	public override void OnAnyBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x2746FB0 Offset: 0x2746FB0 VA: 0x2746FB0
	private void TryComplete(ColorId waterColorId, BottleItem completedBottle) { }

	// RVA: 0x2747910 Offset: 0x2747910 VA: 0x2747910
	private void UnlockAnimationLocks() { }

	// RVA: 0x2747A70 Offset: 0x2747A70 VA: 0x2747A70
	private void OnRevealed() { }

	// RVA: 0x2747CEC Offset: 0x2747CEC VA: 0x2747CEC Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2747CF4 Offset: 0x2747CF4 VA: 0x2747CF4
	public int GetBelongingBottleCount() { }

	// RVA: 0x2747D3C Offset: 0x2747D3C VA: 0x2747D3C Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2747D7C Offset: 0x2747D7C VA: 0x2747D7C Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2747D84 Offset: 0x2747D84 VA: 0x2747D84
	public void HideInnerItems() { }

	// RVA: 0x274803C Offset: 0x274803C VA: 0x274803C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Mosaic