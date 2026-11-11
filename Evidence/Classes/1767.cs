public class BagItem : ABlockerItem // TypeDefIndex: 1767
{
	// Fields
	private BagView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private int _remainingBottleCompletions; // 0x58
	private List<ColorId> _completedColors; // 0x60

	// Properties
	public override bool IsOverlay { get; }
	public override bool HidesWaterColors { get; }

	// Methods

	// RVA: 0x2F5E0A8 Offset: 0x2F5E0A8 VA: 0x2F5E0A8 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2F5E0B0 Offset: 0x2F5E0B0 VA: 0x2F5E0B0 Slot: 23
	public override bool get_HidesWaterColors() { }

	// RVA: 0x2F5E0B8 Offset: 0x2F5E0B8 VA: 0x2F5E0B8 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2F5E1BC Offset: 0x2F5E1BC VA: 0x2F5E1BC Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2F5E1C4 Offset: 0x2F5E1C4 VA: 0x2F5E1C4
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, int requiredAmount) { }

	// RVA: 0x2F5E44C Offset: 0x2F5E44C VA: 0x2F5E44C Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2F5E54C Offset: 0x2F5E54C VA: 0x2F5E54C Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2F5E554 Offset: 0x2F5E554 VA: 0x2F5E554 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x2F5E55C Offset: 0x2F5E55C VA: 0x2F5E55C Slot: 20
	public override void Show() { }

	// RVA: 0x2F5E57C Offset: 0x2F5E57C VA: 0x2F5E57C Slot: 21
	public override void Hide() { }

	// RVA: 0x2F5E59C Offset: 0x2F5E59C VA: 0x2F5E59C Slot: 26
	public override void OnAnyBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x2F5E79C Offset: 0x2F5E79C VA: 0x2F5E79C
	private void TryComplete(BottleItem completedBottle) { }

	// RVA: 0x2F5F540 Offset: 0x2F5F540 VA: 0x2F5F540 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2F5F548 Offset: 0x2F5F548 VA: 0x2F5F548 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2F5F550 Offset: 0x2F5F550 VA: 0x2F5F550
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F5F558 Offset: 0x2F5F558 VA: 0x2F5F558
	private void <TryComplete>b__17_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Bag
[Serializable]