public class EditorSafeItem : EditorABlockerItem // TypeDefIndex: 291
{
	// Fields
	[CompilerGenerated]
	private readonly bool <BottleVisibilityBlocker>k__BackingField; // 0x29
	private EditorSafeView _view; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private int _requiredAmount; // 0x40
	private SafeType _safeType; // 0x44

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37B2C80 Offset: 0x37B2C80 VA: 0x37B2C80 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B2C88 Offset: 0x37B2C88 VA: 0x37B2C88 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B2C90 Offset: 0x37B2C90 VA: 0x37B2C90 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B2D3C Offset: 0x37B2D3C VA: 0x37B2D3C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B2D44 Offset: 0x37B2D44 VA: 0x37B2D44
	public void Prepare(Sorting sorting, EditorBottleItem belongingBottle, int requiredAmount, SafeType safeType) { }

	// RVA: 0x37B03A8 Offset: 0x37B03A8 VA: 0x37B03A8
	public void ShowCanvas() { }

	// RVA: 0x37B3124 Offset: 0x37B3124 VA: 0x37B3124
	private void OnUpdatedRequiredAmount(SafeType safeType, int amount) { }

	// RVA: 0x37B319C Offset: 0x37B319C VA: 0x37B319C
	private void UpdateRequiredAmount(int requiredAmount) { }

	// RVA: 0x37B324C Offset: 0x37B324C VA: 0x37B324C
	public int GetRequiredAmount() { }

	// RVA: 0x37B3254 Offset: 0x37B3254 VA: 0x37B3254 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B34A8 Offset: 0x37B34A8 VA: 0x37B34A8 Slot: 8
	public override void Show() { }

	// RVA: 0x37B34C8 Offset: 0x37B34C8 VA: 0x37B34C8 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B34E8 Offset: 0x37B34E8 VA: 0x37B34E8 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37B34F0 Offset: 0x37B34F0 VA: 0x37B34F0 Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37B34F8 Offset: 0x37B34F8 VA: 0x37B34F8
	public SafeType GetSafeType() { }

	// RVA: 0x37B3500 Offset: 0x37B3500 VA: 0x37B3500
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Safe