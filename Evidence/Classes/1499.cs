public class ClayItem : ABlockerItem // TypeDefIndex: 1499
{
	// Fields
	private ClayView _clayView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private bool _isNewParticleEnabled; // 0x58

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2491494 Offset: 0x2491494 VA: 0x2491494 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x249149C Offset: 0x249149C VA: 0x249149C Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2491548 Offset: 0x2491548 VA: 0x2491548 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2491550 Offset: 0x2491550 VA: 0x2491550
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, int blockerVariant, bool isNewParticleEnabled) { }

	// RVA: 0x2491620 Offset: 0x2491620 VA: 0x2491620 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2491688 Offset: 0x2491688 VA: 0x2491688 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2491690 Offset: 0x2491690 VA: 0x2491690 Slot: 20
	public override void Show() { }

	// RVA: 0x24916B0 Offset: 0x24916B0 VA: 0x24916B0 Slot: 21
	public override void Hide() { }

	// RVA: 0x24916D0 Offset: 0x24916D0 VA: 0x24916D0 Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x24916D8 Offset: 0x24916D8 VA: 0x24916D8
	private void Complete(bool isDelayed) { }

	// RVA: 0x24917B8 Offset: 0x24917B8 VA: 0x24917B8
	private void PlayCompleteAnimation(float delay) { }

	// RVA: 0x249194C Offset: 0x249194C VA: 0x249194C Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2491954 Offset: 0x2491954 VA: 0x2491954 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x2491964 Offset: 0x2491964 VA: 0x2491964 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x2491978 Offset: 0x2491978 VA: 0x2491978 Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x24919B8 Offset: 0x24919B8 VA: 0x24919B8 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x24919C0 Offset: 0x24919C0 VA: 0x24919C0 Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x24919C8 Offset: 0x24919C8 VA: 0x24919C8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x24919D0 Offset: 0x24919D0 VA: 0x24919D0
	private void <PlayCompleteAnimation>b__14_0() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Clay
[Serializable]