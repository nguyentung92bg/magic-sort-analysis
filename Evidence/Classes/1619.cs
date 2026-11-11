public class SortKeyItem : ABlockerItem // TypeDefIndex: 1619
{
	// Fields
	private const float BottleExitHeightOffset = 1.2;
	[CompilerGenerated]
	private bool <IsReadyToSort>k__BackingField; // 0x41
	[CompilerGenerated]
	private int <RevealGroup>k__BackingField; // 0x44
	[CompilerGenerated]
	private bool <IsChainRevealed>k__BackingField; // 0x48
	private SortKeyView _sortKeyView; // 0x50
	private Cell _belongingCell; // 0x58
	private BottleItem _belongingBottle; // 0x60
	private KeySortSuperChargerStrategy _keySortStrategy; // 0x68
	private readonly Quaternion _initialRotation; // 0x70
	private Vector3 _viewOffset; // 0x80

	// Properties
	public override bool IsOverlay { get; }
	public bool IsReadyToSort { get; set; }
	public int RevealGroup { get; set; }
	public bool IsChainRevealed { get; set; }

	// Methods

	// RVA: 0x260C13C Offset: 0x260C13C VA: 0x260C13C Slot: 22
	public override bool get_IsOverlay() { }

	[CompilerGenerated]
	// RVA: 0x260C144 Offset: 0x260C144 VA: 0x260C144
	public bool get_IsReadyToSort() { }

	[CompilerGenerated]
	// RVA: 0x260C14C Offset: 0x260C14C VA: 0x260C14C
	private void set_IsReadyToSort(bool value) { }

	[CompilerGenerated]
	// RVA: 0x260C158 Offset: 0x260C158 VA: 0x260C158
	public int get_RevealGroup() { }

	[CompilerGenerated]
	// RVA: 0x260C160 Offset: 0x260C160 VA: 0x260C160
	private void set_RevealGroup(int value) { }

	[CompilerGenerated]
	// RVA: 0x260C168 Offset: 0x260C168 VA: 0x260C168
	public bool get_IsChainRevealed() { }

	[CompilerGenerated]
	// RVA: 0x260C170 Offset: 0x260C170 VA: 0x260C170
	private void set_IsChainRevealed(bool value) { }

	// RVA: 0x260C17C Offset: 0x260C17C VA: 0x260C17C Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x260C228 Offset: 0x260C228 VA: 0x260C228 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x260C254 Offset: 0x260C254 VA: 0x260C254
	public void SetRevealGroup(int revealGroup, bool isChainRevealed) { }

	// RVA: 0x260C264 Offset: 0x260C264 VA: 0x260C264
	public void Prepare(Vector3 viewOffset, Sorting sorting, Cell belongingCell, BottleItem belongingBottle, KeySortSuperChargerStrategy keySortStrategy) { }

	// RVA: 0x260C4A8 Offset: 0x260C4A8 VA: 0x260C4A8 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x260C5E4 Offset: 0x260C5E4 VA: 0x260C5E4 Slot: 29
	public override void OnWaterRotate(float rotation, Vector3 rotationRelatedWorldPosition, int index) { }

	// RVA: 0x260C7D4 Offset: 0x260C7D4 VA: 0x260C7D4 Slot: 14
	public override void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x260C800 Offset: 0x260C800 VA: 0x260C800
	private void Complete() { }

	// RVA: 0x260CD68 Offset: 0x260CD68 VA: 0x260CD68
	private void NotifyRevealed() { }

	// RVA: 0x260CD88 Offset: 0x260CD88 VA: 0x260CD88
	public void PlayAppearAnimation() { }

	// RVA: 0x260CF0C Offset: 0x260CF0C VA: 0x260CF0C
	public void PlayMoveToCenterAnimation(TweenCallback onArrived) { }

	// RVA: 0x260D1E8 Offset: 0x260D1E8 VA: 0x260D1E8
	public Transform GetTrailSourceTransform() { }

	// RVA: 0x260D2F8 Offset: 0x260D2F8 VA: 0x260D2F8
	public void PlayDisappearAnimation() { }

	// RVA: 0x260D470 Offset: 0x260D470 VA: 0x260D470 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x260D478 Offset: 0x260D478 VA: 0x260D478 Slot: 20
	public override void Show() { }

	// RVA: 0x260D498 Offset: 0x260D498 VA: 0x260D498 Slot: 21
	public override void Hide() { }

	// RVA: 0x260D4B8 Offset: 0x260D4B8 VA: 0x260D4B8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.SortKey