public class PlasterItem : ABlockerItem // TypeDefIndex: 1481
{
	// Fields
	private PlasterView _plasterView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private bool _isNewParticleEnabled; // 0x58

	// Properties
	public override bool IsOverlay { get; }
	public override bool HidesWaterColors { get; }

	// Methods

	// RVA: 0x248D6EC Offset: 0x248D6EC VA: 0x248D6EC Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x248D6F4 Offset: 0x248D6F4 VA: 0x248D6F4 Slot: 23
	public override bool get_HidesWaterColors() { }

	// RVA: 0x248D6FC Offset: 0x248D6FC VA: 0x248D6FC Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x248D7A8 Offset: 0x248D7A8 VA: 0x248D7A8 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x248D7B0 Offset: 0x248D7B0 VA: 0x248D7B0
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottleItem, int blockerVariant, bool isNewParticleEnabled) { }

	// RVA: 0x248D880 Offset: 0x248D880 VA: 0x248D880 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x248D8F8 Offset: 0x248D8F8 VA: 0x248D8F8 Slot: 20
	public override void Show() { }

	// RVA: 0x248D918 Offset: 0x248D918 VA: 0x248D918 Slot: 21
	public override void Hide() { }

	// RVA: 0x248D938 Offset: 0x248D938 VA: 0x248D938 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x248D940 Offset: 0x248D940 VA: 0x248D940 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x248D948 Offset: 0x248D948 VA: 0x248D948 Slot: 18
	public override void OnNeighbourBottleCompleted() { }

	// RVA: 0x248DA20 Offset: 0x248DA20 VA: 0x248DA20
	private void Complete(bool isDelayed) { }

	// RVA: 0x248DBF4 Offset: 0x248DBF4 VA: 0x248DBF4
	private void PlayCompleteAnimation(float delay) { }

	// RVA: 0x248DD88 Offset: 0x248DD88 VA: 0x248DD88 Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x248DD90 Offset: 0x248DD90 VA: 0x248DD90 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x248DDC4 Offset: 0x248DDC4 VA: 0x248DDC4 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x248DDF8 Offset: 0x248DDF8 VA: 0x248DDF8 Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x248DE38 Offset: 0x248DE38 VA: 0x248DE38 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x248DE40 Offset: 0x248DE40 VA: 0x248DE40 Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x248DE48 Offset: 0x248DE48 VA: 0x248DE48
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x248DE50 Offset: 0x248DE50 VA: 0x248DE50
	private void <PlayCompleteAnimation>b__17_0() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Plaster
[Serializable]