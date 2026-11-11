public class EditorWaterItem : EditorAItem // TypeDefIndex: 285
{
	// Fields
	[CompilerGenerated]
	private int <Height>k__BackingField; // 0x28
	private EditorWaterView _waterView; // 0x30
	private int _waterOrderFromTheTop; // 0x38
	private bool _isVisible; // 0x3C
	private ColorAndColorId _colorAndColorId; // 0x40
	private List<EditorABlockerItem> _blockers; // 0x48
	private List<EditorAItem> _overItemsToRecycle; // 0x50
	private int _targetHeight; // 0x58
	private int _watersHeightBelow; // 0x5C

	// Properties
	public int Height { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37B1E18 Offset: 0x37B1E18 VA: 0x37B1E18
	public int get_Height() { }

	[CompilerGenerated]
	// RVA: 0x37B1E20 Offset: 0x37B1E20 VA: 0x37B1E20
	private void set_Height(int value) { }

	// RVA: 0x37B1E28 Offset: 0x37B1E28 VA: 0x37B1E28 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B1F7C Offset: 0x37B1F7C VA: 0x37B1F7C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B1F84 Offset: 0x37B1F84 VA: 0x37B1F84
	public void Prepare(int height, int index, ColorAndColorId colorAndColorId, Sorting sorting) { }

	// RVA: 0x37B2068 Offset: 0x37B2068 VA: 0x37B2068
	public void SetTargetHeight(int targetHeight, int watersHeightBelow) { }

	// RVA: 0x37B2228 Offset: 0x37B2228 VA: 0x37B2228 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B2380 Offset: 0x37B2380 VA: 0x37B2380 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B23A0 Offset: 0x37B23A0 VA: 0x37B23A0 Slot: 8
	public override void Show() { }

	// RVA: 0x37B23C0 Offset: 0x37B23C0 VA: 0x37B23C0
	public int GetEllipseSortOrder() { }

	// RVA: 0x37B2400 Offset: 0x37B2400 VA: 0x37B2400
	public void SetWaterOrder(int order) { }

	// RVA: 0x37B2408 Offset: 0x37B2408 VA: 0x37B2408
	public int GetWaterOrder() { }

	// RVA: 0x37B2060 Offset: 0x37B2060 VA: 0x37B2060
	public void SetHeight(int height) { }

	// RVA: 0x37B2410 Offset: 0x37B2410 VA: 0x37B2410
	public bool IsVisible() { }

	// RVA: 0x37B2418 Offset: 0x37B2418 VA: 0x37B2418
	public void SetVisible(bool isVisible) { }

	// RVA: 0x37B02A8 Offset: 0x37B02A8 VA: 0x37B02A8
	public void SetColor(ColorAndColorId colorAndColorId) { }

	// RVA: 0x37B2474 Offset: 0x37B2474 VA: 0x37B2474
	public ColorAndColorId GetColorAndColorId() { }

	// RVA: 0x37AAFA4 Offset: 0x37AAFA4 VA: 0x37AAFA4
	public ColorId GetColorId() { }

	// RVA: 0x37B247C Offset: 0x37B247C VA: 0x37B247C
	public List<EditorABlockerItem> GetBlockers() { }

	// RVA: 0x37B2484 Offset: 0x37B2484 VA: 0x37B2484
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Water