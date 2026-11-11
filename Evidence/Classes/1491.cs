public class KeyItem : AItem // TypeDefIndex: 1491
{
	// Fields
	private KeyLockType _keyLockType; // 0x40
	private KeyView _keyView; // 0x48
	private LockItem _belongingLockItem; // 0x50
	private BottleItem _belongingBottleItem; // 0x58

	// Methods

	// RVA: 0x248F688 Offset: 0x248F688 VA: 0x248F688 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x248F734 Offset: 0x248F734 VA: 0x248F734 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x248F738 Offset: 0x248F738 VA: 0x248F738
	public void Prepare(Vector3 localPosition, Sorting sorting, BottleItem belongingBottleItem, KeyLockType keyLockType) { }

	// RVA: 0x248F8AC Offset: 0x248F8AC VA: 0x248F8AC Slot: 20
	public override void Show() { }

	// RVA: 0x248F8CC Offset: 0x248F8CC VA: 0x248F8CC Slot: 21
	public override void Hide() { }

	// RVA: 0x248F8EC Offset: 0x248F8EC VA: 0x248F8EC Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x248F954 Offset: 0x248F954 VA: 0x248F954
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]