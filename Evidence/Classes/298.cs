public class EditorMosaicView : EditorAItemView // TypeDefIndex: 298
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
	[SerializeField]
	private List<SpriteRenderer> _spriteRenderers; // 0x48
	private List<ColorId> _colorIds; // 0x50
	private MosaicType _mosaicType; // 0x58
	[CompilerGenerated]
	private Action<int> OnAmountTextChanged; // 0x60

	// Methods

	[CompilerGenerated]
	// RVA: 0x37B43F0 Offset: 0x37B43F0 VA: 0x37B43F0
	public void add_OnAmountTextChanged(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x37B4894 Offset: 0x37B4894 VA: 0x37B4894
	public void remove_OnAmountTextChanged(Action<int> value) { }

	// RVA: 0x37B4BB0 Offset: 0x37B4BB0 VA: 0x37B4BB0 Slot: 4
	public override void Initialize() { }

	// RVA: 0x37B4BD0 Offset: 0x37B4BD0 VA: 0x37B4BD0 Slot: 5
	public override void Spawn() { }

	// RVA: 0x37B44A0 Offset: 0x37B44A0 VA: 0x37B44A0
	public void ShowCanvas() { }

	// RVA: 0x37B4C44 Offset: 0x37B4C44 VA: 0x37B4C44
	public void OnSetTextFromEditor() { }

	// RVA: 0x37B41A8 Offset: 0x37B41A8 VA: 0x37B41A8
	public void Prepare(Sorting sorting, MosaicType mosaicType, List<ColorId> colorIds) { }

	// RVA: 0x37B4DF8 Offset: 0x37B4DF8 VA: 0x37B4DF8
	private void OnMosaicItemSpawned(MosaicType type, List<ColorId> colorIds) { }

	// RVA: 0x37B44C0 Offset: 0x37B44C0 VA: 0x37B44C0
	public void SetColorIds(List<ColorId> colorIds) { }

	// RVA: 0x37B4E10 Offset: 0x37B4E10 VA: 0x37B4E10
	public void SetCount(int colorCount) { }

	// RVA: 0x37B4E50 Offset: 0x37B4E50 VA: 0x37B4E50
	private void SetColors() { }

	// RVA: 0x37B50B4 Offset: 0x37B50B4 VA: 0x37B50B4
	public Color GetColorByColorId(ColorId colorId) { }

	// RVA: 0x37B5148 Offset: 0x37B5148 VA: 0x37B5148 Slot: 6
	public override void Recycle() { }

	// RVA: 0x37B5240 Offset: 0x37B5240 VA: 0x37B5240 Slot: 7
	public override void Show() { }

	// RVA: 0x37B5264 Offset: 0x37B5264 VA: 0x37B5264 Slot: 8
	public override void Hide() { }

	// RVA: 0x37B4C9C Offset: 0x37B4C9C VA: 0x37B4C9C
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x37B4CE0 Offset: 0x37B4CE0 VA: 0x37B4CE0
	private void SetType(MosaicType type) { }

	// RVA: 0x37B5288 Offset: 0x37B5288 VA: 0x37B5288
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.MagicSeal