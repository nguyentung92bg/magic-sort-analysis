public class ChargeableBottleItem : ABlockerItem // TypeDefIndex: 1749
{
	// Fields
	private ChargeableBottleView _chargeableBottleView; // 0x48
	private BottleItem _belongingBottle; // 0x50
	private int _chargeCount; // 0x58
	private SortingService _sortingService; // 0x60
	private Bounds _bounds; // 0x68

	// Properties
	public override bool IsOverlay { get; }
	public int ChargeCount { get; }

	// Methods

	// RVA: 0x2F580E8 Offset: 0x2F580E8 VA: 0x2F580E8 Slot: 22
	public override bool get_IsOverlay() { }

	// RVA: 0x2F580F0 Offset: 0x2F580F0 VA: 0x2F580F0
	public int get_ChargeCount() { }

	// RVA: 0x2F580F8 Offset: 0x2F580F8 VA: 0x2F580F8 Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2F58204 Offset: 0x2F58204 VA: 0x2F58204 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2F5820C Offset: 0x2F5820C VA: 0x2F5820C
	public void Prepare(Vector3 viewOffset, Sorting frontSorting, Sorting backSorting, BottleItem belongingBottle, bool hasInitialCharge) { }

	// RVA: 0x2F586EC Offset: 0x2F586EC VA: 0x2F586EC Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x2F58768 Offset: 0x2F58768 VA: 0x2F58768
	public bool HasCharge() { }

	// RVA: 0x2F58778 Offset: 0x2F58778 VA: 0x2F58778
	public void PrepareNewBottle() { }

	// RVA: 0x2F588E0 Offset: 0x2F588E0 VA: 0x2F588E0 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2F588F0 Offset: 0x2F588F0 VA: 0x2F588F0 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x2F58900 Offset: 0x2F58900 VA: 0x2F58900 Slot: 33
	public override void OnBottleSelectedAsOrigin() { }

	// RVA: 0x2F58984 Offset: 0x2F58984 VA: 0x2F58984 Slot: 35
	public override void OnBottleDeselectedAsOrigin() { }

	// RVA: 0x2F589C0 Offset: 0x2F589C0 VA: 0x2F589C0 Slot: 16
	public override void OnOriginBottleReturnToInitialPosition(Selection selection) { }

	// RVA: 0x2F58BC8 Offset: 0x2F58BC8 VA: 0x2F58BC8
	private void SendSuperChargerUsedEvent() { }

	// RVA: 0x2F58D08 Offset: 0x2F58D08 VA: 0x2F58D08
	public void PlayBottleSelectedAnimation() { }

	// RVA: 0x2F58E6C Offset: 0x2F58E6C VA: 0x2F58E6C
	public void PlayBottleDeSelectedAnimation() { }

	// RVA: 0x2F58FD0 Offset: 0x2F58FD0 VA: 0x2F58FD0 Slot: 15
	public override void OnBottleMove(int pourableHeight, bool isLeft, float moveDuration) { }

	// RVA: 0x2F59134 Offset: 0x2F59134 VA: 0x2F59134 Slot: 50
	public override BottleItem GetBelongingBottle() { }

	// RVA: 0x2F5913C Offset: 0x2F5913C VA: 0x2F5913C Slot: 24
	public override bool IsAllowShuffle() { }

	// RVA: 0x2F59144 Offset: 0x2F59144 VA: 0x2F59144 Slot: 42
	public override bool IsIntersect(Vector3 worldPosition) { }

	// RVA: 0x2F59150 Offset: 0x2F59150 VA: 0x2F59150 Slot: 43
	public override void UpdateBounds() { }

	// RVA: 0x2F592CC Offset: 0x2F592CC VA: 0x2F592CC Slot: 20
	public override void Show() { }

	// RVA: 0x2F592EC Offset: 0x2F592EC VA: 0x2F592EC Slot: 21
	public override void Hide() { }

	// RVA: 0x2F5930C Offset: 0x2F5930C VA: 0x2F5930C Slot: 46
	public override bool IsParentedToBottle() { }

	// RVA: 0x2F59314 Offset: 0x2F59314 VA: 0x2F59314
	public Transform GetTrailTargetTransform() { }

	// RVA: 0x2F59330 Offset: 0x2F59330 VA: 0x2F59330
	public void OnTrailReachedToBottle() { }

	// RVA: 0x2F59370 Offset: 0x2F59370 VA: 0x2F59370
	public void SetTutorialSorting() { }

	// RVA: 0x2F59428 Offset: 0x2F59428 VA: 0x2F59428
	public void SetDefaultSorting() { }

	// RVA: 0x2F594DC Offset: 0x2F594DC VA: 0x2F594DC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2F594E4 Offset: 0x2F594E4 VA: 0x2F594E4
	private void <PrepareNewBottle>b__14_0() { }

	[CompilerGenerated]
	// RVA: 0x2F59564 Offset: 0x2F59564 VA: 0x2F59564
	private void <PrepareNewBottle>b__14_1() { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle
[Serializable]