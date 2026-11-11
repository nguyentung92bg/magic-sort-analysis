public class EditorQuestionMarkItem : EditorABlockerItem // TypeDefIndex: 293
{
	// Fields
	private ColorAndColorId _colorAndColorId; // 0x30
	private EditorQuestionMarkView _questionMarkView; // 0x38

	// Properties
	public override bool BottleVisibilityBlocker { get; }
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x37B37C8 Offset: 0x37B37C8 VA: 0x37B37C8 Slot: 10
	public override bool get_BottleVisibilityBlocker() { }

	// RVA: 0x37B37D0 Offset: 0x37B37D0 VA: 0x37B37D0 Slot: 11
	public override bool get_IsOverlay() { }

	// RVA: 0x37B37D8 Offset: 0x37B37D8 VA: 0x37B37D8 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x37B3884 Offset: 0x37B3884 VA: 0x37B3884 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x37B388C Offset: 0x37B388C VA: 0x37B388C
	public void Prepare(ColorAndColorId colorAndColorId, Vector3 localPosition) { }

	// RVA: 0x37B38D0 Offset: 0x37B38D0 VA: 0x37B38D0 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x37B38D4 Offset: 0x37B38D4 VA: 0x37B38D4
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x37B3914 Offset: 0x37B3914 VA: 0x37B3914
	public void HideQuestionMark() { }

	// RVA: 0x37B3958 Offset: 0x37B3958 VA: 0x37B3958
	public void ShowQuestionMark() { }

	// RVA: 0x37AAFC0 Offset: 0x37AAFC0 VA: 0x37AAFC0
	public ColorId GetColorId() { }

	// RVA: 0x37B399C Offset: 0x37B399C VA: 0x37B399C
	public bool IsVisible() { }

	// RVA: 0x37B39A4 Offset: 0x37B39A4 VA: 0x37B39A4 Slot: 8
	public override void Show() { }

	// RVA: 0x37B39C4 Offset: 0x37B39C4 VA: 0x37B39C4 Slot: 9
	public override void Hide() { }

	// RVA: 0x37B39E4 Offset: 0x37B39E4 VA: 0x37B39E4
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.QuestionMark