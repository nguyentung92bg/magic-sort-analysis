public class MagicSealItem : ABlockerItem, IWaterBlockerItem // TypeDefIndex: 1676
{
	// Fields
	private MagicSealView _view; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private Cell _belongingCell; // 0x58
	private Vector3 _viewOffset; // 0x60
	private bool _isOnQuestionMark; // 0x6C
	private bool _isOpen; // 0x6D
	private SortingService _sortingService; // 0x70

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x274B3A8 Offset: 0x274B3A8 VA: 0x274B3A8 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x274B3B0 Offset: 0x274B3B0 VA: 0x274B3B0 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x274B45C Offset: 0x274B45C VA: 0x274B45C Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x274B484 Offset: 0x274B484 VA: 0x274B484
	public void Prepare(Vector3 viewOffset, BottleItem belongingBottle, Cell belongingCell, int waterIndex) { }

	// RVA: 0x274B6E4 Offset: 0x274B6E4 VA: 0x274B6E4 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x274B768 Offset: 0x274B768 VA: 0x274B768 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x274B828 Offset: 0x274B828 VA: 0x274B828 Slot: 20
	public override void Show() { }

	// RVA: 0x274B848 Offset: 0x274B848 VA: 0x274B848 Slot: 21
	public override void Hide() { }

	// RVA: 0x274B850 Offset: 0x274B850 VA: 0x274B850
	private void HideInternal(bool updateSorting) { }

	// RVA: 0x274B920 Offset: 0x274B920 VA: 0x274B920
	public void Complete(bool updateDisappearSorting = True) { }

	// RVA: 0x274BA0C Offset: 0x274BA0C VA: 0x274BA0C
	private void RemoveFromCells() { }

	// RVA: 0x274BA2C Offset: 0x274BA2C VA: 0x274BA2C
	private void CompleteBySnitch() { }

	// RVA: 0x274BA6C Offset: 0x274BA6C VA: 0x274BA6C
	private void PlayCompleteAnimation() { }

	// RVA: 0x274BA70 Offset: 0x274BA70 VA: 0x274BA70 Slot: 47
	public override bool IsSelectableAsSnitchTarget() { }

	// RVA: 0x274BA80 Offset: 0x274BA80 VA: 0x274BA80 Slot: 48
	public override void OnSnitchPerformed() { }

	// RVA: 0x274BA90 Offset: 0x274BA90 VA: 0x274BA90 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x274BA98 Offset: 0x274BA98 VA: 0x274BA98 Slot: 34
	public override void OnBottleSelectedAsOrigin(int waterOrder) { }

	// RVA: 0x274BB9C Offset: 0x274BB9C VA: 0x274BB9C Slot: 36
	public override void OnBottleDeselectedAsOrigin(int waterOrder) { }

	// RVA: 0x274BC34 Offset: 0x274BC34 VA: 0x274BC34 Slot: 19
	public override void OnWaterSortOrderChange(int eclipseSortOrder, int backSortOrder, bool isTopCell, bool isBottomCell) { }

	// RVA: 0x274BCD0 Offset: 0x274BCD0 VA: 0x274BCD0 Slot: 15
	public override void OnBottleMove(int pourableHeight, bool isLeft, float animationDuration) { }

	// RVA: 0x274BD44 Offset: 0x274BD44 VA: 0x274BD44 Slot: 14
	public override void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x274BD70 Offset: 0x274BD70 VA: 0x274BD70 Slot: 53
	public List<int> GetBlockedWaterIndexes() { }

	// RVA: 0x274BF50 Offset: 0x274BF50 VA: 0x274BF50
	public float GetWaterInteractionHeightOffset() { }

	// RVA: 0x274BF5C Offset: 0x274BF5C VA: 0x274BF5C Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x274BF7C Offset: 0x274BF7C VA: 0x274BF7C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.MagicSeal
[Serializable]