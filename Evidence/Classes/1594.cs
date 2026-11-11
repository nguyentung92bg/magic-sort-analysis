public class WoodboxItem : ABlockerItem // TypeDefIndex: 1594
{
	// Fields
	private WoodboxKeyType _woodboxKeyType; // 0x44
	private WoodboxView _woodboxView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private List<BottleItem> _belongingBottles; // 0x58
	private WoodboxKeyItem _woodboxKeyItem; // 0x60
	private SortingService _sortingService; // 0x68

	// Properties
	public override bool IsOverlay { get; }

	// Methods

	// RVA: 0x230A78C Offset: 0x230A78C VA: 0x230A78C Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x230A794 Offset: 0x230A794 VA: 0x230A794 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x230A8F0 Offset: 0x230A8F0 VA: 0x230A8F0 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2302DF4 Offset: 0x2302DF4 VA: 0x2302DF4
	public void Prepare(Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, WoodboxKeyType woodboxKeyType, int blockerVariant) { }

	// RVA: 0x230A8F8 Offset: 0x230A8F8 VA: 0x230A8F8
	public void HideInnerItems() { }

	// RVA: 0x230ABF4 Offset: 0x230ABF4 VA: 0x230ABF4 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x230ACC0 Offset: 0x230ACC0 VA: 0x230ACC0
	public WoodboxKeyType GetWoodboxKeyType() { }

	// RVA: 0x230ACC8 Offset: 0x230ACC8 VA: 0x230ACC8 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x230ACD0 Offset: 0x230ACD0 VA: 0x230ACD0 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem bottleItem, ColorId waterColorId) { }

	// RVA: 0x230ACD8 Offset: 0x230ACD8 VA: 0x230ACD8 Slot: 20
	public override void Show() { }

	// RVA: 0x230ACF8 Offset: 0x230ACF8 VA: 0x230ACF8 Slot: 21
	public override void Hide() { }

	// RVA: 0x230AD18 Offset: 0x230AD18 VA: 0x230AD18
	public Vector3 GetKeyTargetPosition() { }

	// RVA: 0x230AD34 Offset: 0x230AD34 VA: 0x230AD34
	public void Complete(bool isKeyOnQuestionMark, float revealDelay, bool immediate = False) { }

	// RVA: 0x230B1F0 Offset: 0x230B1F0 VA: 0x230B1F0
	private void PlayCompleteAnimation(float keyRevealDelay, bool immediate = False) { }

	// RVA: 0x230BDFC Offset: 0x230BDFC VA: 0x230BDFC Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x230BE04 Offset: 0x230BE04 VA: 0x230BE04
	public int GetBelongingBottleCount() { }

	// RVA: 0x230BE4C Offset: 0x230BE4C VA: 0x230BE4C
	public void SetKeyItem(WoodboxKeyItem keyItem) { }

	// RVA: 0x230BE54 Offset: 0x230BE54 VA: 0x230BE54
	public WoodboxKeyItem GetKeyItem() { }

	// RVA: 0x230BE5C Offset: 0x230BE5C VA: 0x230BE5C Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x230BE78 Offset: 0x230BE78 VA: 0x230BE78 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x230BE80 Offset: 0x230BE80 VA: 0x230BE80 Slot: 39
	public override void OnRevealSelected() { }

	// RVA: 0x230BEF8 Offset: 0x230BEF8 VA: 0x230BEF8 Slot: 40
	public override void OnRevealDeselected() { }

	// RVA: 0x230BFA0 Offset: 0x230BFA0 VA: 0x230BFA0 Slot: 25
	public override bool IsRevealable() { }

	// RVA: 0x230BFA8 Offset: 0x230BFA8 VA: 0x230BFA8 Slot: 49
	public override void OnRevealPerformed() { }

	// RVA: 0x2304C20 Offset: 0x2304C20 VA: 0x2304C20
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox
[Serializable]