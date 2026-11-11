public class QuestionMarkItem : ABlockerItem // TypeDefIndex: 1651
{
	// Fields
	private ColorAndColorId _colorAndColorId; // 0x48
	private QuestionMarkView _questionMarkView; // 0x50

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x2745858 Offset: 0x2745858 VA: 0x2745858 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2745860 Offset: 0x2745860 VA: 0x2745860 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x274590C Offset: 0x274590C VA: 0x274590C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2745914 Offset: 0x2745914 VA: 0x2745914
	public void Prepare(Vector3 viewOffset, int sortOrder, ColorAndColorId colorAndColorId) { }

	// RVA: 0x2745A18 Offset: 0x2745A18 VA: 0x2745A18 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2745A1C Offset: 0x2745A1C VA: 0x2745A1C
	public void SetSortOrder(int sortOrder) { }

	// RVA: 0x2745A5C Offset: 0x2745A5C VA: 0x2745A5C
	public void HideQuestionMark() { }

	// RVA: 0x2745AA0 Offset: 0x2745AA0 VA: 0x2745AA0
	public void ShowQuestionMark() { }

	// RVA: 0x2745AE4 Offset: 0x2745AE4 VA: 0x2745AE4
	public void Complete() { }

	// RVA: 0x2745C60 Offset: 0x2745C60 VA: 0x2745C60
	public ColorId GetColorId() { }

	// RVA: 0x2745C7C Offset: 0x2745C7C VA: 0x2745C7C
	public bool IsVisible() { }

	// RVA: 0x2745C84 Offset: 0x2745C84 VA: 0x2745C84 Slot: 20
	public override void Show() { }

	// RVA: 0x2745CA4 Offset: 0x2745CA4 VA: 0x2745CA4 Slot: 21
	public override void Hide() { }

	// RVA: 0x2745CC4 Offset: 0x2745CC4 VA: 0x2745CC4 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x2745CD4 Offset: 0x2745CD4 VA: 0x2745CD4 Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x27459A8 Offset: 0x27459A8 VA: 0x27459A8
	public void ResetViewRotation() { }

	// RVA: 0x2745D14 Offset: 0x2745D14 VA: 0x2745D14
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.QuestionMark