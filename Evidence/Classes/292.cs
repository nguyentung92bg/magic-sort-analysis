public class EditorSafeView : EditorAItemView // TypeDefIndex: 292
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x20
	[SerializeField]
	private Transform _bottomPivot; // 0x28
	[SerializeField]
	private TMP_InputField _textMeshPro; // 0x30
	[SerializeField]
	private GameObject _canvas; // 0x38
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x40
	[CompilerGenerated]
	private Action<int> OnAmountTextChanged; // 0x48

	// Methods

	[CompilerGenerated]
	// RVA: 0x37B3054 Offset: 0x37B3054 VA: 0x37B3054
	public void add_OnAmountTextChanged(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x37B33F8 Offset: 0x37B33F8 VA: 0x37B33F8
	public void remove_OnAmountTextChanged(Action<int> value) { }

	// RVA: 0x37B3510 Offset: 0x37B3510 VA: 0x37B3510 Slot: 4
	public override void Initialize() { }

	// RVA: 0x37B3530 Offset: 0x37B3530 VA: 0x37B3530 Slot: 5
	public override void Spawn() { }

	// RVA: 0x37B3104 Offset: 0x37B3104 VA: 0x37B3104
	public void ShowCanvas() { }

	// RVA: 0x37B35A4 Offset: 0x37B35A4 VA: 0x37B35A4
	public void OnSetTextFromEditor() { }

	// RVA: 0x37B2EDC Offset: 0x37B2EDC VA: 0x37B2EDC
	public void Prepare(Sorting sorting, int requiredAmount, SafeType safeType) { }

	// RVA: 0x37B3640 Offset: 0x37B3640 VA: 0x37B3640
	public void SetType(SafeType safeType) { }

	// RVA: 0x37B315C Offset: 0x37B315C VA: 0x37B315C
	public void SetRequiredAmount(int requiredAmount) { }

	// RVA: 0x37B3758 Offset: 0x37B3758 VA: 0x37B3758 Slot: 6
	public override void Recycle() { }

	// RVA: 0x37B3778 Offset: 0x37B3778 VA: 0x37B3778 Slot: 7
	public override void Show() { }

	// RVA: 0x37B379C Offset: 0x37B379C VA: 0x37B379C Slot: 8
	public override void Hide() { }

	// RVA: 0x37B35FC Offset: 0x37B35FC VA: 0x37B35FC
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x37B37C0 Offset: 0x37B37C0 VA: 0x37B37C0
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.QuestionMark