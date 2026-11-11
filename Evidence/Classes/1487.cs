public class LockItem : AItem // TypeDefIndex: 1487
{
	// Fields
	private LockView _lockView; // 0x40
	private BottleItem _belongingBottleItem; // 0x48
	private BottleItem _otherBottleItem; // 0x50
	private KeyItem _belongingKeyItem; // 0x58
	private Tween _animationLockDelayedCall; // 0x60

	// Methods

	// RVA: 0x248E67C Offset: 0x248E67C VA: 0x248E67C Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x248E728 Offset: 0x248E728 VA: 0x248E728 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x248E758 Offset: 0x248E758 VA: 0x248E758
	public void Prepare(BottleItem rightBottleItem, BottleItem leftBottleItem, KeyLockType keyLockType, bool isDouble) { }

	// RVA: 0x248E98C Offset: 0x248E98C VA: 0x248E98C Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x248E9F8 Offset: 0x248E9F8 VA: 0x248E9F8
	public Sequence ArrangeViewWithAnimation(float duration) { }

	// RVA: 0x248E7D0 Offset: 0x248E7D0 VA: 0x248E7D0
	private Vector3 CalculateInBottlePosition() { }

	// RVA: 0x248EAE8 Offset: 0x248EAE8 VA: 0x248EAE8
	private Tween MoveToLocalPosition(Vector3 localPosition, float duration) { }

	// RVA: 0x248EB34 Offset: 0x248EB34 VA: 0x248EB34
	public void Unlock(float delay) { }

	// RVA: 0x248EE0C Offset: 0x248EE0C VA: 0x248EE0C
	public Vector3 GetTargetPositionForKey(int bottleHeight) { }

	// RVA: 0x248EE50 Offset: 0x248EE50 VA: 0x248EE50
	public Vector3 GetBottlePosition() { }

	// RVA: 0x248EF00 Offset: 0x248EF00 VA: 0x248EF00 Slot: 20
	public override void Show() { }

	// RVA: 0x248EF20 Offset: 0x248EF20 VA: 0x248EF20 Slot: 21
	public override void Hide() { }

	// RVA: 0x248EF40 Offset: 0x248EF40 VA: 0x248EF40
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x248EF48 Offset: 0x248EF48 VA: 0x248EF48
	private void <Unlock>b__12_0() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock