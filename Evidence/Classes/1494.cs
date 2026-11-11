public class CurtainItem : ABlockerItem // TypeDefIndex: 1494
{
	// Fields
	private CurtainView _curtainView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private ColorAndColorId _colorAndColorId; // 0x58
	private Tween _animationLockTween; // 0x60

	// Properties
	public override bool IsOverlay { get; }
	public override bool HidesWaterColors { get; }

	// Methods

	// RVA: 0x24904C4 Offset: 0x24904C4 VA: 0x24904C4 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x24904CC Offset: 0x24904CC VA: 0x24904CC Slot: 23
	public override bool get_HidesWaterColors() { }

	// RVA: 0x24904D4 Offset: 0x24904D4 VA: 0x24904D4 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2490580 Offset: 0x2490580 VA: 0x2490580 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2490588 Offset: 0x2490588 VA: 0x2490588
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, ColorAndColorId colorAndColorId, int blockerVariant) { }

	// RVA: 0x24906DC Offset: 0x24906DC VA: 0x24906DC Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x249075C Offset: 0x249075C VA: 0x249075C Slot: 20
	public override void Show() { }

	// RVA: 0x249077C Offset: 0x249077C VA: 0x249077C Slot: 21
	public override void Hide() { }

	// RVA: 0x249079C Offset: 0x249079C VA: 0x249079C Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x24907A4 Offset: 0x24907A4 VA: 0x24907A4 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x24907AC Offset: 0x24907AC VA: 0x24907AC Slot: 26
	public override void OnAnyBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x24907FC Offset: 0x24907FC VA: 0x24907FC
	private void Complete(bool withAnimation, float revealDelay = 0.2) { }

	// RVA: 0x24908EC Offset: 0x24908EC VA: 0x24908EC
	private void PlayCompleteAnimation(bool withAnimation, float revealDelay = 0.2) { }

	// RVA: 0x2490A78 Offset: 0x2490A78 VA: 0x2490A78
	public ColorAndColorId GetColorAndColorId() { }

	// RVA: 0x2490A80 Offset: 0x2490A80 VA: 0x2490A80
	public ColorId GetColorId() { }

	// RVA: 0x2490A9C Offset: 0x2490A9C VA: 0x2490A9C Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2490AA4 Offset: 0x2490AA4 VA: 0x2490AA4 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x2490AB4 Offset: 0x2490AB4 VA: 0x2490AB4 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x2490ACC Offset: 0x2490ACC VA: 0x2490ACC Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x2490B0C Offset: 0x2490B0C VA: 0x2490B0C Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2490B14 Offset: 0x2490B14 VA: 0x2490B14 Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x2490B1C Offset: 0x2490B1C VA: 0x2490B1C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2490B24 Offset: 0x2490B24 VA: 0x2490B24
	private void <PlayCompleteAnimation>b__18_0() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Curtain