public class EditorFireworkItem : EditorABlockerItem // TypeDefIndex: 269
{
	// Fields
	private int _fireworkCount; // 0x2C
	private EditorFireworkView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x37ADA44 Offset: 0x37ADA44 VA: 0x37ADA44 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37ADA4C Offset: 0x37ADA4C VA: 0x37ADA4C Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37ADA54 Offset: 0x37ADA54 VA: 0x37ADA54 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37ADB00 Offset: 0x37ADB00 VA: 0x37ADB00 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37ADB08 Offset: 0x37ADB08 VA: 0x37ADB08 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37ADC24 Offset: 0x37ADC24 VA: 0x37ADC24 Slot: 8
	public override void Show() { }

	// RVA: 0x37ADC44 Offset: 0x37ADC44 VA: 0x37ADC44 Slot: 9
	public override void Hide() { }

	// RVA: 0x37ADC64 Offset: 0x37ADC64 VA: 0x37ADC64 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37ADC6C Offset: 0x37ADC6C VA: 0x37ADC6C Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37ADC74 Offset: 0x37ADC74 VA: 0x37ADC74
	public void Prepare(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, int fireworkCount) { }

	// RVA: 0x37ADE20 Offset: 0x37ADE20 VA: 0x37ADE20
	public void ShowCanvas() { }

	// RVA: 0x37ADE64 Offset: 0x37ADE64 VA: 0x37ADE64
	private void OnFireworkCountChanged(int count) { }

	// RVA: 0x37ADE6C Offset: 0x37ADE6C VA: 0x37ADE6C
	public int GetFireworkCount() { }

	// RVA: 0x37ADE74 Offset: 0x37ADE74 VA: 0x37ADE74
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.Firework