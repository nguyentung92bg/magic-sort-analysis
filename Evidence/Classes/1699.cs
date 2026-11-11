public class GeneratorView : AItemView // TypeDefIndex: 1699
{
	// Fields
	[SerializeField]
	private SortingGroup _sortingGroupFront; // 0x20
	[SerializeField]
	private SortingGroup _sortingGroupBack; // 0x28
	[SerializeField]
	private TextMeshPro _textFront; // 0x30
	[SerializeField]
	private TextMeshPro _textHidden; // 0x38
	[SerializeField]
	private Transform _textPivot; // 0x40
	[SerializeField]
	private Animation _animation; // 0x48
	[SerializeField]
	private GameObject _mask; // 0x50
	[SerializeField]
	private GameObject _frontView; // 0x58
	[SerializeField]
	private GameObject _backView; // 0x60

	// Methods

	// RVA: 0x2751C5C Offset: 0x2751C5C VA: 0x2751C5C Slot: 5
	public override void Initialize() { }

	// RVA: 0x2751C60 Offset: 0x2751C60 VA: 0x2751C60 Slot: 6
	public override void Spawn() { }

	// RVA: 0x274F79C Offset: 0x274F79C VA: 0x274F79C
	public void Prepare(Sorting frontSorting, Sorting backSorting, string countText) { }

	// RVA: 0x2751E58 Offset: 0x2751E58 VA: 0x2751E58 Slot: 7
	public override void Recycle() { }

	// RVA: 0x2750B88 Offset: 0x2750B88 VA: 0x2750B88
	public void SetFrontText(string text) { }

	// RVA: 0x275102C Offset: 0x275102C VA: 0x275102C
	public void SetHiddenText(string text) { }

	// RVA: 0x2751DF0 Offset: 0x2751DF0 VA: 0x2751DF0
	private void ShowStaticView() { }

	// RVA: 0x2751E28 Offset: 0x2751E28 VA: 0x2751E28
	public void SetSorting(Sorting frontSorting, Sorting backSorting) { }

	// RVA: 0x2751DD0 Offset: 0x2751DD0 VA: 0x2751DD0
	private void SetActiveMask(bool isActive) { }

	// RVA: 0x274F920 Offset: 0x274F920 VA: 0x274F920
	public void SetFrontSorting(Sorting sorting) { }

	// RVA: 0x274F964 Offset: 0x274F964 VA: 0x274F964
	public void SetBackSorting(Sorting sorting) { }

	// RVA: 0x2751494 Offset: 0x2751494 VA: 0x2751494
	public void PlayFillAnimation() { }

	// RVA: 0x27517A4 Offset: 0x27517A4 VA: 0x27517A4
	public void PlayExplosionAnimation() { }

	// RVA: 0x2750A8C Offset: 0x2750A8C VA: 0x2750A8C
	public void PlayShuffleAnimation() { }

	// RVA: 0x2751E78 Offset: 0x2751E78 VA: 0x2751E78 Slot: 8
	public override void Show() { }

	// RVA: 0x2751E9C Offset: 0x2751E9C VA: 0x2751E9C Slot: 9
	public override void Hide() { }

	// RVA: 0x2751EC0 Offset: 0x2751EC0 VA: 0x2751EC0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Frog