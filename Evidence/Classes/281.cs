public class EditorWoodboxItem : EditorABlockerItem // TypeDefIndex: 281
{
	// Fields
	private EditorWoodboxView _woodboxView; // 0x30
	private EditorBottleItem _belongingBottle; // 0x38
	private WoodboxKeyType _keyType; // 0x40

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x37B16B8 Offset: 0x37B16B8 VA: 0x37B16B8 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B16C0 Offset: 0x37B16C0 VA: 0x37B16C0 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B16C8 Offset: 0x37B16C8 VA: 0x37B16C8 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B1774 Offset: 0x37B1774 VA: 0x37B1774 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B177C Offset: 0x37B177C VA: 0x37B177C
	public void Prepare(Vector3 localPosition, EditorBottleItem belongingBottle, WoodboxKeyType keyType) { }

	// RVA: 0x37B17E8 Offset: 0x37B17E8 VA: 0x37B17E8 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B1844 Offset: 0x37B1844 VA: 0x37B1844 Slot: 8
	public override void Show() { }

	// RVA: 0x37B1864 Offset: 0x37B1864 VA: 0x37B1864 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B1884 Offset: 0x37B1884 VA: 0x37B1884 Slot: 17
	public override bool IsParentedToBottle() { }

	// RVA: 0x37B188C Offset: 0x37B188C VA: 0x37B188C Slot: 18
	public override EditorBottleItem GetBelongingBottle() { }

	// RVA: 0x37B1894 Offset: 0x37B1894 VA: 0x37B1894
	public WoodboxKeyType GetWoodboxKeyType() { }

	// RVA: 0x37B189C Offset: 0x37B189C VA: 0x37B189C
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Woodbox