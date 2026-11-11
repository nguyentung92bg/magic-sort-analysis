public class EditorBagItem : EditorABlockerItem // TypeDefIndex: 327
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorBagView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private int _requiredAmount; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3DE00F0 Offset: 0x3DE00F0 VA: 0x3DE00F0 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x3DE00F8 Offset: 0x3DE00F8 VA: 0x3DE00F8 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x3DE0100 Offset: 0x3DE0100 VA: 0x3DE0100 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x3DE01AC Offset: 0x3DE01AC VA: 0x3DE01AC Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x3DDC704 Offset: 0x3DDC704 VA: 0x3DDC704
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, int requiredAmount) { }

	// RVA: 0x3DE03CC Offset: 0x3DE03CC VA: 0x3DE03CC
	public void ShowCanvas() { }

	// RVA: 0x3DE0404 Offset: 0x3DE0404 VA: 0x3DE0404
	private void OnUpdatedRequiredAmount(int amount) { }

	// RVA: 0x3DE0464 Offset: 0x3DE0464 VA: 0x3DE0464
	private void UpdateRequiredAmount(int requiredAmount) { }

	// RVA: 0x3DE046C Offset: 0x3DE046C VA: 0x3DE046C
	public int GetRequiredAmount() { }

	// RVA: 0x3DE0474 Offset: 0x3DE0474 VA: 0x3DE0474 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x3DE0610 Offset: 0x3DE0610 VA: 0x3DE0610 Slot: 8
	public override void Show() { }

	// RVA: 0x3DE0630 Offset: 0x3DE0630 VA: 0x3DE0630 Slot: 9
	public override void Hide() { }

	// RVA: 0x3DE0650 Offset: 0x3DE0650 VA: 0x3DE0650 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x3DE0658 Offset: 0x3DE0658 VA: 0x3DE0658 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x3DDD278 Offset: 0x3DDD278 VA: 0x3DDD278
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Bag