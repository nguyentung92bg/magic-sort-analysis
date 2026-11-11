public class EditorToggleItem : EditorABlockerItem // TypeDefIndex: 287
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorToggleView _toggleView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private bool _isOn; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37B2588 Offset: 0x37B2588 VA: 0x37B2588 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B2590 Offset: 0x37B2590 VA: 0x37B2590 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B2598 Offset: 0x37B2598 VA: 0x37B2598 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B2644 Offset: 0x37B2644 VA: 0x37B2644 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B264C Offset: 0x37B264C VA: 0x37B264C
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, bool isOn) { }

	// RVA: 0x37B07E8 Offset: 0x37B07E8 VA: 0x37B07E8
	public void Toggle() { }

	// RVA: 0x37B271C Offset: 0x37B271C VA: 0x37B271C
	public bool IsOn() { }

	// RVA: 0x37B2724 Offset: 0x37B2724 VA: 0x37B2724 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B2780 Offset: 0x37B2780 VA: 0x37B2780 Slot: 8
	public override void Show() { }

	// RVA: 0x37B27A0 Offset: 0x37B27A0 VA: 0x37B27A0 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B27C0 Offset: 0x37B27C0 VA: 0x37B27C0 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37B27C8 Offset: 0x37B27C8 VA: 0x37B27C8
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Toggle