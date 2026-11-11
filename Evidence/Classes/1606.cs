public class WoodboxView : AItemView // TypeDefIndex: 1606
{
	// Fields
	[SerializeField]
	private List<WoodboxVariant> _variants; // 0x20
	private WoodboxKeyType _woodboxKeyType; // 0x28
	private WoodboxVariant _woodboxVariant; // 0x30

	// Properties
	public WoodBoxAnimationConfig WoodboxConfig { get; }

	// Methods

	// RVA: 0x2607780 Offset: 0x2607780 VA: 0x2607780
	public WoodBoxAnimationConfig get_WoodboxConfig() { }

	// RVA: 0x260779C Offset: 0x260779C VA: 0x260779C Slot: 5
	public override void Initialize() { }

	// RVA: 0x26077A0 Offset: 0x26077A0 VA: 0x26077A0 Slot: 6
	public override void Spawn() { }

	// RVA: 0x26078A8 Offset: 0x26078A8 VA: 0x26078A8
	private void SetVariant(int blockerVariant) { }

	// RVA: 0x2607A90 Offset: 0x2607A90 VA: 0x2607A90
	public void Prepare(Sorting sorting, int bottlesCount, WoodboxKeyType woodboxKeyType, int blockerVariant) { }

	// RVA: 0x2607F34 Offset: 0x2607F34 VA: 0x2607F34
	private void SetLockType(WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x26080AC Offset: 0x26080AC VA: 0x26080AC
	public Sequence PlayWoodboxCompleteAnimation(List<BottleItem> bottleItems, bool immediate = False) { }

	// RVA: 0x260862C Offset: 0x260862C VA: 0x260862C Slot: 7
	public override void Recycle() { }

	// RVA: 0x2608630 Offset: 0x2608630 VA: 0x2608630
	public Vector3 GetKeyTargetPositionForBox() { }

	// RVA: 0x2608654 Offset: 0x2608654 VA: 0x2608654 Slot: 8
	public override void Show() { }

	// RVA: 0x2608678 Offset: 0x2608678 VA: 0x2608678 Slot: 9
	public override void Hide() { }

	// RVA: 0x2607EE0 Offset: 0x2607EE0 VA: 0x2607EE0
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x260869C Offset: 0x260869C VA: 0x260869C
	public void SetBackSorting(Sorting sorting) { }

	// RVA: 0x26086F0 Offset: 0x26086F0 VA: 0x26086F0
	public Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2608714 Offset: 0x2608714 VA: 0x2608714
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Water