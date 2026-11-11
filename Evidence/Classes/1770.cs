public class BagTrail : AItemView // TypeDefIndex: 1770
{
	// Fields
	[SerializeField]
	private ParticleSystem _trailParticle; // 0x20
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x28
	private bool _isInUse; // 0x30

	// Methods

	// RVA: 0x2F5F598 Offset: 0x2F5F598 VA: 0x2F5F598 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2F5F5A0 Offset: 0x2F5F5A0 VA: 0x2F5F5A0 Slot: 6
	public override void Spawn() { }

	// RVA: 0x2F5F6A8 Offset: 0x2F5F6A8 VA: 0x2F5F6A8 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2F5F6AC Offset: 0x2F5F6AC VA: 0x2F5F6AC Slot: 8
	public override void Show() { }

	// RVA: 0x2F5F6D0 Offset: 0x2F5F6D0 VA: 0x2F5F6D0 Slot: 9
	public override void Hide() { }

	// RVA: 0x2F5F6F4 Offset: 0x2F5F6F4 VA: 0x2F5F6F4
	public void SetInUse(bool inUse) { }

	// RVA: 0x2F5F730 Offset: 0x2F5F730 VA: 0x2F5F730
	public bool IsInUse() { }

	// RVA: 0x2F5F738 Offset: 0x2F5F738 VA: 0x2F5F738
	public Sequence PlayMoveFrom(Vector3 fromPosition, Transform toTransform, BagAnimationConfig config, bool sameX = False, bool fromLeft = False, bool sameY = False) { }

	// RVA: 0x2F5F9A4 Offset: 0x2F5F9A4 VA: 0x2F5F9A4
	public void SetVfxSorting(Sorting sorting) { }

	// RVA: 0x2F5FA00 Offset: 0x2F5FA00 VA: 0x2F5FA00
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]