public class EditorFireworkView : EditorAItemView // TypeDefIndex: 270
{
	// Fields
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private Canvas _canvas; // 0x28
	[SerializeField]
	private TMP_InputField _textMeshPro; // 0x30
	[CompilerGenerated]
	private Action<int> <OnFireworkCountChanged>k__BackingField; // 0x38

	// Properties
	public Action<int> OnFireworkCountChanged { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x37ADE7C Offset: 0x37ADE7C VA: 0x37ADE7C
	public Action<int> get_OnFireworkCountChanged() { }

	[CompilerGenerated]
	// RVA: 0x37ADE84 Offset: 0x37ADE84 VA: 0x37ADE84
	public void set_OnFireworkCountChanged(Action<int> value) { }

	// RVA: 0x37ADE8C Offset: 0x37ADE8C VA: 0x37ADE8C Slot: 4
	public override void Initialize() { }

	// RVA: 0x37ADEC8 Offset: 0x37ADEC8 VA: 0x37ADEC8 Slot: 5
	public override void Spawn() { }

	// RVA: 0x37ADECC Offset: 0x37ADECC VA: 0x37ADECC Slot: 6
	public override void Recycle() { }

	// RVA: 0x37ADF14 Offset: 0x37ADF14 VA: 0x37ADF14 Slot: 7
	public override void Show() { }

	// RVA: 0x37ADF38 Offset: 0x37ADF38 VA: 0x37ADF38 Slot: 8
	public override void Hide() { }

	// RVA: 0x37ADE38 Offset: 0x37ADE38 VA: 0x37ADE38
	public void ShowCanvas() { }

	// RVA: 0x37ADDBC Offset: 0x37ADDBC VA: 0x37ADDBC
	public void Prepare(Sorting sorting, int fireworkCount) { }

	// RVA: 0x37ADF5C Offset: 0x37ADF5C VA: 0x37ADF5C
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x37ADF78 Offset: 0x37ADF78 VA: 0x37ADF78
	public void OnSetTextFromEditor() { }

	// RVA: 0x37ADFD0 Offset: 0x37ADFD0 VA: 0x37ADFD0
	public void .ctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems