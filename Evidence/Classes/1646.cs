public class RainbowItem : ABlockerItem // TypeDefIndex: 1646
{
	// Fields
	private RainbowView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private BottleCollection _bottleCollection; // 0x58

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x261789C Offset: 0x261789C VA: 0x261789C Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x26178A4 Offset: 0x26178A4 VA: 0x26178A4 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2617950 Offset: 0x2617950 VA: 0x2617950 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2617958 Offset: 0x2617958 VA: 0x2617958
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, BottleCollection bottleCollection) { }

	// RVA: 0x26179DC Offset: 0x26179DC VA: 0x26179DC Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2617A44 Offset: 0x2617A44 VA: 0x2617A44 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2617A4C Offset: 0x2617A4C VA: 0x2617A4C Slot: 20
	public override void Show() { }

	// RVA: 0x2617A6C Offset: 0x2617A6C VA: 0x2617A6C Slot: 21
	public override void Hide() { }

	// RVA: 0x2617A8C Offset: 0x2617A8C VA: 0x2617A8C Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2617A94 Offset: 0x2617A94 VA: 0x2617A94 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2617A9C Offset: 0x2617A9C VA: 0x2617A9C Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x2617AA0 Offset: 0x2617AA0 VA: 0x2617AA0
	private void Complete() { }

	// RVA: 0x2617B50 Offset: 0x2617B50 VA: 0x2617B50
	private void PlayCompleteAnimation() { }

	// RVA: 0x2617C1C Offset: 0x2617C1C VA: 0x2617C1C
	private void MarkRandomTopWater() { }

	// RVA: 0x2617FF8 Offset: 0x2617FF8 VA: 0x2617FF8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2618000 Offset: 0x2618000 VA: 0x2618000
	private void <PlayCompleteAnimation>b__16_0() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Rainbow
[Serializable]