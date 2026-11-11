public class BottleItem : AItem // TypeDefIndex: 1519
{
	// Fields
	[CompilerGenerated]
	private Lock <AnimationLock>k__BackingField; // 0x40
	[CompilerGenerated]
	private int <Height>k__BackingField; // 0x48
	[CompilerGenerated]
	private bool <IsCompleted>k__BackingField; // 0x4C
	private bool _isCompletable; // 0x4D
	private BottleView _bottleView; // 0x50
	private BottleItem _leftBottle; // 0x58
	private BottleItem _rightBottle; // 0x60
	private Bounds _bounds; // 0x68
	private List<Cell> _cells; // 0x80
	private List<ABlockerItem> _blockers; // 0x88
	private List<AItem> _overItemsToRecycle; // 0x90
	private List<AItem> _outItems; // 0x98
	public BottleAnimationConfig _bottleAnimationConfig; // 0xA0
	private int _variant; // 0xA8
	private Lock _involvedSelectionLockAsTarget; // 0xB0
	private Lock _involvedSelectionLockAsOrigin; // 0xB8
	private int _initialSortingOrder; // 0xC0
	private SortingService _sortingService; // 0xC8
	private BottleCollection _bottleCollection; // 0xD0
	private bool _onBottleSelectionRunning; // 0xD8
	private int _bottleRowIndex; // 0xDC
	private ShadowItemPart _bottleShadowItemPart; // 0xE0
	private int _firstUnblockedCellIndex; // 0xE8
	[CompilerGenerated]
	private bool <IsLongBottle>k__BackingField; // 0xEC

	// Properties
	public Lock AnimationLock { get; set; }
	public int Height { get; set; }
	public bool IsCompleted { get; set; }
	public ShadowItemPart BottleShadowItemPart { get; }
	public bool IsBottleSelectionRunning { get; }
	public bool IsLongBottle { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2493354 Offset: 0x2493354 VA: 0x2493354
	public Lock get_AnimationLock() { }

	[CompilerGenerated]
	// RVA: 0x249335C Offset: 0x249335C VA: 0x249335C
	private void set_AnimationLock(Lock value) { }

	[CompilerGenerated]
	// RVA: 0x2493364 Offset: 0x2493364 VA: 0x2493364
	public int get_Height() { }

	[CompilerGenerated]
	// RVA: 0x249336C Offset: 0x249336C VA: 0x249336C
	private void set_Height(int value) { }

	[CompilerGenerated]
	// RVA: 0x2493374 Offset: 0x2493374 VA: 0x2493374
	public bool get_IsCompleted() { }

	[CompilerGenerated]
	// RVA: 0x249337C Offset: 0x249337C VA: 0x249337C
	private void set_IsCompleted(bool value) { }

	// RVA: 0x2493388 Offset: 0x2493388 VA: 0x2493388
	public ShadowItemPart get_BottleShadowItemPart() { }

	// RVA: 0x2493390 Offset: 0x2493390 VA: 0x2493390
	public bool get_IsBottleSelectionRunning() { }

	[CompilerGenerated]
	// RVA: 0x2493398 Offset: 0x2493398 VA: 0x2493398
	public bool get_IsLongBottle() { }

	[CompilerGenerated]
	// RVA: 0x24933A0 Offset: 0x24933A0 VA: 0x24933A0
	private void set_IsLongBottle(bool value) { }

	// RVA: 0x24933AC Offset: 0x24933AC VA: 0x24933AC Slot: 4
	protected override void OnInitialize() { }

	// RVA: 0x2493664 Offset: 0x2493664 VA: 0x2493664 Slot: 5
	protected override void OnSpawn() { }

	// RVA: 0x2493668 Offset: 0x2493668 VA: 0x2493668
	public void Prepare(Vector3 viewOffset, int initialSortingOrder, int height, int bottleAndWaterVariant, int frontSortOrder, int backSortOrder, BottleAnimationConfig bottleAnimationConfig, Sorting sorting, bool isCompletable, BottleCollection bottleCollection, bool isLongBottle) { }

	// RVA: 0x2493D90 Offset: 0x2493D90 VA: 0x2493D90 Slot: 6
	protected override void OnRecycle() { }

	// RVA: 0x24940C8 Offset: 0x24940C8 VA: 0x24940C8 Slot: 20
	public override void Show() { }

	// RVA: 0x2494104 Offset: 0x2494104 VA: 0x2494104 Slot: 10
	public override void SetLocalScale(Vector3 scale) { }

	// RVA: 0x2494160 Offset: 0x2494160 VA: 0x2494160 Slot: 21
	public override void Hide() { }

	// RVA: 0x249388C Offset: 0x249388C VA: 0x249388C
	public void SetSorting(Sorting sorting) { }

	// RVA: 0x249419C Offset: 0x249419C VA: 0x249419C
	public void MoveToOrigin(float duration, float delay) { }

	// RVA: 0x24943A0 Offset: 0x24943A0 VA: 0x24943A0
	public Sequence PlayLevelEntranceAnimation(float duration) { }

	// RVA: 0x24944EC Offset: 0x24944EC VA: 0x24944EC
	public bool IsIntersect(Vector3 position) { }

	// RVA: 0x24945D4 Offset: 0x24945D4 VA: 0x24945D4
	public RotationSteps GetRotationStepsToDropTheWater(bool isLeft) { }

	// RVA: 0x2494C4C Offset: 0x2494C4C VA: 0x2494C4C
	public int GetWaterCountBelowTheTopWater() { }

	// RVA: 0x2494DA4 Offset: 0x2494DA4 VA: 0x2494DA4
	public void RotateWaters(float rotation) { }

	// RVA: 0x2495544 Offset: 0x2495544 VA: 0x2495544
	public ColorId GetTopWaterColorId() { }

	[CanBeNull]
	// RVA: 0x249556C Offset: 0x249556C VA: 0x249556C
	public ColorAndColorId GetTopWaterColorAndColorId() { }

	// RVA: 0x2494C34 Offset: 0x2494C34 VA: 0x2494C34
	public int GetTopWaterHeight() { }

	[CanBeNull]
	// RVA: 0x2495584 Offset: 0x2495584 VA: 0x2495584
	public WaterItem GetTopWater() { }

	// RVA: 0x2495614 Offset: 0x2495614 VA: 0x2495614
	public bool TryGetTopNonEmptyCellIndex(out int result) { }

	// RVA: 0x24956B8 Offset: 0x24956B8 VA: 0x24956B8
	public WaterItem GetSecondTopWater() { }

	// RVA: 0x249591C Offset: 0x249591C VA: 0x249591C
	public int GetBottomSameColorHeight() { }

	// RVA: 0x2495AA8 Offset: 0x2495AA8 VA: 0x2495AA8
	public void OnShuffleSelected() { }

	// RVA: 0x2495B7C Offset: 0x2495B7C VA: 0x2495B7C
	public void OnShuffleDeselected() { }

	// RVA: 0x2495C48 Offset: 0x2495C48 VA: 0x2495C48
	public void OnRevealSelected() { }

	// RVA: 0x2495D1C Offset: 0x2495D1C VA: 0x2495D1C
	public void OnRevealDeselected() { }

	// RVA: 0x2495DE8 Offset: 0x2495DE8 VA: 0x2495DE8
	public void PlayBottleSelectedAnimation() { }

	// RVA: 0x2495F94 Offset: 0x2495F94 VA: 0x2495F94
	private void PlayBottleDeSelectedAnimation() { }

	// RVA: 0x24960BC Offset: 0x24960BC VA: 0x24960BC
	public void PlayLevelStartAnimationForTopWater() { }

	// RVA: 0x24960DC Offset: 0x24960DC VA: 0x24960DC
	public void UpdateBottleWaters() { }

	// RVA: 0x24967C8 Offset: 0x24967C8 VA: 0x24967C8 Slot: 14
	public override void OnBottleWatersUpdated(WaterItem topWaterItem) { }

	// RVA: 0x2496AB4 Offset: 0x2496AB4 VA: 0x2496AB4 Slot: 15
	public override void OnBottleMove(int pourableHeight, bool isLeft, float moveDuration) { }

	// RVA: 0x2496D10 Offset: 0x2496D10 VA: 0x2496D10
	public void OnSelectAsOrigin(Selection selection) { }

	// RVA: 0x24970B8 Offset: 0x24970B8 VA: 0x24970B8
	public void OnSelectAsTarget(Selection selection) { }

	// RVA: 0x2497284 Offset: 0x2497284 VA: 0x2497284
	public bool IsSelected() { }

	// RVA: 0x24972D4 Offset: 0x24972D4 VA: 0x24972D4
	public void OnBeforeReturnToInitialPosition() { }

	// RVA: 0x24972E8 Offset: 0x24972E8 VA: 0x24972E8 Slot: 16
	public override void OnOriginBottleReturnToInitialPosition(Selection selection) { }

	// RVA: 0x249755C Offset: 0x249755C VA: 0x249755C
	public void OnPouringCompletedToTargetBottle(Selection selection) { }

	// RVA: 0x2497ADC Offset: 0x2497ADC VA: 0x2497ADC
	public void OnDeselectAsOrigin(Selection selection) { }

	// RVA: 0x2497F1C Offset: 0x2497F1C VA: 0x2497F1C
	public int GetInitialSortingOrder() { }

	// RVA: 0x2497F24 Offset: 0x2497F24 VA: 0x2497F24 Slot: 11
	public override bool IsSelectableAsOrigin() { }

	// RVA: 0x2497F84 Offset: 0x2497F84 VA: 0x2497F84
	public bool IsSelectableAsOriginExceptAnimation() { }

	// RVA: 0x2498040 Offset: 0x2498040 VA: 0x2498040 Slot: 12
	public override bool IsSelectableAsTarget(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x24980F0 Offset: 0x24980F0 VA: 0x24980F0
	public bool IsSelectableAsTargetExceptAnimation(BottleItem originBottle, ColorId waterColorId) { }

	// RVA: 0x249792C Offset: 0x249792C VA: 0x249792C
	private void Complete() { }

	// RVA: 0x24985D0 Offset: 0x24985D0 VA: 0x24985D0
	private void ConsumeRainbows() { }

	// RVA: 0x24989F4 Offset: 0x24989F4 VA: 0x24989F4 Slot: 17
	public override void OnBottleCompleted() { }

	// RVA: 0x2498E28 Offset: 0x2498E28 VA: 0x2498E28 Slot: 18
	public override void OnNeighbourBottleCompleted() { }

	// RVA: 0x249784C Offset: 0x249784C VA: 0x249784C
	private bool ShouldComplete() { }

	// RVA: 0x2498FF0 Offset: 0x2498FF0 VA: 0x2498FF0
	public void TryComplete() { }

	// RVA: 0x2498EBC Offset: 0x2498EBC VA: 0x2498EBC
	public bool CanComplete() { }

	// RVA: 0x2499014 Offset: 0x2499014 VA: 0x2499014
	public bool IsClear() { }

	// RVA: 0x2499028 Offset: 0x2499028 VA: 0x2499028
	public Tween MoveDown() { }

	// RVA: 0x24990BC Offset: 0x24990BC VA: 0x24990BC
	public void DecreaseWaterHeight(int height) { }

	// RVA: 0x2499350 Offset: 0x2499350 VA: 0x2499350
	public void SetWaterItem(int index, int height, WaterItem waterItem) { }

	// RVA: 0x24993E8 Offset: 0x24993E8 VA: 0x24993E8
	public void InsertWaterItem(int index, int height, WaterItem waterItem) { }

	// RVA: 0x2499510 Offset: 0x2499510 VA: 0x2499510
	private int GetFirstEmptyCellIndexFromTheBottom() { }

	// RVA: 0x24995A4 Offset: 0x24995A4 VA: 0x24995A4
	public void AddOutItem(AItem item) { }

	// RVA: 0x2499654 Offset: 0x2499654 VA: 0x2499654
	public void RemoveOutItem(AItem item) { }

	// RVA: 0x24996AC Offset: 0x24996AC VA: 0x24996AC
	public void AddBlocker(ABlockerItem item) { }

	// RVA: 0x248DB1C Offset: 0x248DB1C VA: 0x248DB1C
	public void RemoveBlocker(ABlockerItem item) { }

	// RVA: 0x249665C Offset: 0x249665C VA: 0x249665C
	public void UpdateWaterOrderComponents() { }

	// RVA: 0x2493AB4 Offset: 0x2493AB4 VA: 0x2493AB4
	public void UpdateSortOrders() { }

	// RVA: 0x249670C Offset: 0x249670C VA: 0x249670C
	public void UpdateFillAmountsWithoutAnimation() { }

	// RVA: 0x2497470 Offset: 0x2497470 VA: 0x2497470
	private void UpdateColorVisibilities() { }

	// RVA: 0x2496144 Offset: 0x2496144 VA: 0x2496144
	private bool TryMergeColors() { }

	// RVA: 0x249975C Offset: 0x249975C VA: 0x249975C
	private int GetWaterHeightBySameVisibilityAndSameColor(int j, ColorId currentColorId) { }

	// RVA: 0x2494700 Offset: 0x2494700 VA: 0x2494700
	public int GetEmptyCellCount() { }

	// RVA: 0x2495814 Offset: 0x2495814 VA: 0x2495814
	private int GetTopFilledCellIndex() { }

	// RVA: 0x249545C Offset: 0x249545C VA: 0x249545C
	public int GetIndexFromTheBottom(AItem baseItem) { }

	// RVA: 0x2499884 Offset: 0x2499884 VA: 0x2499884
	public int GetCellIndexFromTheTop(Cell cell) { }

	// RVA: 0x2499948 Offset: 0x2499948 VA: 0x2499948
	public int GetCellIndexFromTheBottom(Cell cell) { }

	// RVA: 0x249577C Offset: 0x249577C VA: 0x249577C
	public bool IsEmpty() { }

	// RVA: 0x2498400 Offset: 0x2498400 VA: 0x2498400
	private bool IsFull() { }

	// RVA: 0x2499A04 Offset: 0x2499A04 VA: 0x2499A04
	public bool IsAllVisibleSameColorAndNotFull() { }

	// RVA: 0x2499A40 Offset: 0x2499A40 VA: 0x2499A40
	public bool IsAllVisibleSameColor() { }

	// RVA: 0x2499A68 Offset: 0x2499A68 VA: 0x2499A68
	public bool IsAllWatersSameColor() { }

	// RVA: 0x2498EDC Offset: 0x2498EDC VA: 0x2498EDC
	private bool IsAllWatersVisible() { }

	// RVA: 0x2499C48 Offset: 0x2499C48 VA: 0x2499C48
	public int GetFillAmount() { }

	// RVA: 0x2499D4C Offset: 0x2499D4C VA: 0x2499D4C
	public Tween Shuffle(List<WaterAndColor> colorOrders) { }

	// RVA: 0x249A170 Offset: 0x249A170 VA: 0x249A170
	public Tween ShuffleAnimation() { }

	// RVA: 0x249A238 Offset: 0x249A238 VA: 0x249A238
	public Sequence PlayGeneratorFillAnimation(Vector3 toPosition, int previousWaterHeight, int currentWaterHeight, ColorId colorId) { }

	// RVA: 0x249A50C Offset: 0x249A50C VA: 0x249A50C
	public Sequence PlayGeneratorFillAnimationFromBottom(Vector3 toPosition, int previousWaterHeight, int currentWaterHeight, ColorId colorId) { }

	// RVA: 0x249AA2C Offset: 0x249AA2C VA: 0x249AA2C
	public Sequence PlayGeneratorExplosionAnimation(Vector3 toPosition1, Vector3 toPosition2, int previousWaterHeight, int currentWaterHeight, ColorId colorId) { }

	// RVA: 0x249AC04 Offset: 0x249AC04 VA: 0x249AC04
	public Sequence PlayGeneratorExplosionAnimation(Vector3 toPosition1, Vector3 toPosition2, int currentWaterHeight, List<ValueTuple<int, ColorId>> spawnedWaters) { }

	// RVA: 0x249AEFC Offset: 0x249AEFC VA: 0x249AEFC
	public Tween Reveal() { }

	// RVA: 0x249B04C Offset: 0x249B04C VA: 0x249B04C
	private ABlockerItem GetHighestPriorityBlocker() { }

	// RVA: 0x249B204 Offset: 0x249B204 VA: 0x249B204
	private void RevealBottleCells() { }

	// RVA: 0x249B4D8 Offset: 0x249B4D8 VA: 0x249B4D8
	private void ChangeWaterOrders(List<WaterAndColor> colorOrders) { }

	// RVA: 0x249BE04 Offset: 0x249BE04 VA: 0x249BE04
	private ValueTuple<List<WaterAndColor>, List<WaterAndColor>> GetWaterItemsWithSpecificTopColor(WaterAndColor topWaterAndColor) { }

	// RVA: 0x249B6F8 Offset: 0x249B6F8 VA: 0x249B6F8
	private void ShuffleWaterUnitsWithGenerator() { }

	// RVA: 0x249C014 Offset: 0x249C014 VA: 0x249C014
	private ValueTuple<List<WaterAndColor>, List<WaterAndColor>> GetShuffledWaters() { }

	// RVA: 0x2498734 Offset: 0x2498734 VA: 0x2498734
	public List<WaterAndColor> GetWatersInside() { }

	// RVA: 0x249C450 Offset: 0x249C450 VA: 0x249C450
	private List<WaterAndColor> GetWatersOutside() { }

	// RVA: 0x249C78C Offset: 0x249C78C VA: 0x249C78C
	private void SetWaters(List<WaterAndColor> watersInside, List<WaterAndColor> watersOutside, bool revealQuestionMarks = False) { }

	// RVA: 0x249C40C Offset: 0x249C40C VA: 0x249C40C
	public void UpdateBottleData(List<WaterAndColor> watersInside, List<WaterAndColor> watersOutside, bool tryRevealQuestionMarks = False) { }

	// RVA: 0x249D0E4 Offset: 0x249D0E4 VA: 0x249D0E4
	public bool CanShuffle() { }

	// RVA: 0x249D1BC Offset: 0x249D1BC VA: 0x249D1BC
	public bool CanReveal() { }

	// RVA: 0x2498528 Offset: 0x2498528 VA: 0x2498528
	public bool HasBlocker(ItemType itemType) { }

	// RVA: 0x249B6F0 Offset: 0x249B6F0 VA: 0x249B6F0
	private void SetDefaultWaterViewPosition() { }

	// RVA: 0x2496C48 Offset: 0x2496C48 VA: 0x2496C48
	public void SetDirectionOfWaters(bool isLeft) { }

	// RVA: 0x249D014 Offset: 0x249D014 VA: 0x249D014
	private void ToggleTopEllipseInBottle() { }

	// RVA: 0x249D28C Offset: 0x249D28C VA: 0x249D28C
	public int GetTopWaterHeightIfTheSameColorId(ColorId colorId) { }

	// RVA: 0x249CE6C Offset: 0x249CE6C VA: 0x249CE6C
	public void AddWater(int height, ColorId colorId, bool isVisible, bool isRainbow = False, bool consumeRainbows = False) { }

	// RVA: 0x249D2CC Offset: 0x249D2CC VA: 0x249D2CC
	private void ConsumeTopWaterRainbow() { }

	// RVA: 0x249D2F8 Offset: 0x249D2F8 VA: 0x249D2F8
	public void AddWaterFromBottom(int height, ColorId colorId) { }

	// RVA: 0x249CF80 Offset: 0x249CF80 VA: 0x249CF80
	private void AddWaterAccordingVisibility(int height, ColorId colorId, bool isVisible, bool isRainbow = False) { }

	// RVA: 0x249D448 Offset: 0x249D448 VA: 0x249D448
	public void RemoveWater(int height) { }

	// RVA: 0x249D778 Offset: 0x249D778 VA: 0x249D778
	public Tween DailyPlayWaterFillingAnimation(int previousHeight, int newHeight, ColorAndColorId colorAndColorId) { }

	// RVA: 0x249A3B4 Offset: 0x249A3B4 VA: 0x249A3B4
	public Tween PlayRegularWaterFillingAnimation(int previousHeight, int newHeight, ColorId colorId, bool withParticle, bool isForGenerator = False) { }

	// RVA: 0x249A670 Offset: 0x249A670 VA: 0x249A670
	public Tween PlayWaterFillAnimationFromBottom(int insertedHeight, int newHeight, ColorId colorId, bool withParticle, bool isForGenerator = False) { }

	// RVA: 0x249D800 Offset: 0x249D800 VA: 0x249D800
	public void BottleRevealAnimation(float delay) { }

	// RVA: 0x249D824 Offset: 0x249D824 VA: 0x249D824
	public void StopAndClearParticles() { }

	// RVA: 0x249D848 Offset: 0x249D848 VA: 0x249D848
	public Transform GetWaterLineTransformRight() { }

	// RVA: 0x249D864 Offset: 0x249D864 VA: 0x249D864
	public Transform GetWaterLineTransformLeft() { }

	// RVA: 0x249D880 Offset: 0x249D880 VA: 0x249D880
	public WaterLineStartView GetRightWaterLineStartView() { }

	// RVA: 0x249D89C Offset: 0x249D89C VA: 0x249D89C
	public WaterLineStartView GetLeftWaterLineStartView() { }

	// RVA: 0x249D8B8 Offset: 0x249D8B8 VA: 0x249D8B8
	public BottleOutlines GetBottleOutline() { }

	// RVA: 0x249D8D4 Offset: 0x249D8D4 VA: 0x249D8D4
	public void DailyPlay(ColorAndColorId color, WaterItem waterItem, int waterHeightToMove) { }

	// RVA: 0x249D8F8 Offset: 0x249D8F8 VA: 0x249D8F8
	public void HideBottle() { }

	// RVA: 0x249D914 Offset: 0x249D914 VA: 0x249D914
	public void MagicBottleRevealAnimation() { }

	// RVA: 0x249D930 Offset: 0x249D930 VA: 0x249D930
	public void DailyBottleStretchOut() { }

	// RVA: 0x249D94C Offset: 0x249D94C VA: 0x249D94C
	public void DailyBottleStretchIn() { }

	// RVA: 0x249D968 Offset: 0x249D968 VA: 0x249D968
	public Vector3 GetBlobUpPosition() { }

	[CanBeNull]
	// RVA: 0x2495F10 Offset: 0x2495F10 VA: 0x2495F10
	public Cell GetCell(int index) { }

	// RVA: 0x249D984 Offset: 0x249D984 VA: 0x249D984
	public List<Cell> GetCells() { }

	// RVA: 0x249D98C Offset: 0x249D98C VA: 0x249D98C
	public int GetQuestionMarkCount() { }

	// RVA: 0x249DAE8 Offset: 0x249DAE8 VA: 0x249DAE8
	public void ToggleInvisibleWaters() { }

	// RVA: 0x249DB9C Offset: 0x249DB9C VA: 0x249DB9C
	public List<ABlockerItem> GetBlockers() { }

	// RVA: 0x249DBA4 Offset: 0x249DBA4 VA: 0x249DBA4
	public List<AItem> GetOutItems() { }

	// RVA: 0x249DBAC Offset: 0x249DBAC VA: 0x249DBAC Slot: 7
	public override void SetPivotPosition(Vector3 localPosition) { }

	// RVA: 0x249DC7C Offset: 0x249DC7C VA: 0x249DC7C Slot: 9
	public override void SetLocalPositionToOrigin() { }

	// RVA: 0x249DD40 Offset: 0x249DD40 VA: 0x249DD40
	private void ResetPositionAfterMegaShuffle() { }

	// RVA: 0x24938A8 Offset: 0x24938A8 VA: 0x24938A8
	public void UpdateBounds() { }

	// RVA: 0x249DE24 Offset: 0x249DE24 VA: 0x249DE24
	public void SetLeftBottle(BottleItem bottleItem) { }

	// RVA: 0x249DE2C Offset: 0x249DE2C VA: 0x249DE2C
	public void SetRightBottle(BottleItem bottleItem) { }

	// RVA: 0x249DE34 Offset: 0x249DE34 VA: 0x249DE34
	public bool HasLeftBottle() { }

	// RVA: 0x249DE44 Offset: 0x249DE44 VA: 0x249DE44
	public Bounds GetBounds() { }

	// RVA: 0x249DE58 Offset: 0x249DE58 VA: 0x249DE58
	public void UndoLastWaterFill(int waterHeight) { }

	// RVA: 0x249DF5C Offset: 0x249DF5C VA: 0x249DF5C
	public void OnBeforeUndoLastWaterPour(int waterHeight) { }

	// RVA: 0x249E0E8 Offset: 0x249E0E8 VA: 0x249E0E8
	private void RemoveWaterFromBottom(int height) { }

	// RVA: 0x249E238 Offset: 0x249E238 VA: 0x249E238
	public void UndoLastWaterPour(int waterHeight, ColorId topWaterColorId, bool isRainbow = False) { }

	// RVA: 0x248D97C Offset: 0x248D97C VA: 0x248D97C
	public bool HasOverlayBlocker() { }

	// RVA: 0x249E278 Offset: 0x249E278 VA: 0x249E278
	public bool HidesWaterColors() { }

	// RVA: 0x249E31C Offset: 0x249E31C VA: 0x249E31C
	public Vector3 GetBottleReturnOffset() { }

	// RVA: 0x249E41C Offset: 0x249E41C VA: 0x249E41C Slot: 8
	public override Vector3 GetSnitchTargetPosition() { }

	// RVA: 0x249E438 Offset: 0x249E438 VA: 0x249E438
	public Vector3 GetSuperChargerTrailTargetPosition() { }

	// RVA: 0x249E454 Offset: 0x249E454 VA: 0x249E454
	public Tween BottleScale(Vector3 target, float duration, AnimationCurve curve) { }

	// RVA: 0x249E578 Offset: 0x249E578 VA: 0x249E578
	public Tween BottleShakeRotation(float duration, Vector3 target, int vibrato, float randomness) { }

	// RVA: 0x249E680 Offset: 0x249E680 VA: 0x249E680
	public Tween BottleSquash(Vector3 shrinkScale, float shrinkDuration, AnimationCurve shrinkCurve, Vector3 stretchScale, float stretchDuration, AnimationCurve stretchCurve, float returnToNormalScaleDuration, AnimationCurve returnToNormalScaleAnimationCurve, float delayBeforeShrink) { }

	// RVA: 0x249E864 Offset: 0x249E864 VA: 0x249E864
	public Tween BottleDoLocalMoveY(float target, float duration, AnimationCurve curve) { }

	// RVA: 0x249E95C Offset: 0x249E95C VA: 0x249E95C
	public void PlaySnitchHitToBottleFx() { }

	// RVA: 0x249E978 Offset: 0x249E978 VA: 0x249E978
	public void SetBottleRowIndex(int rowIndex) { }

	// RVA: 0x249E980 Offset: 0x249E980 VA: 0x249E980
	public int GetBottleRowIndex() { }

	// RVA: 0x249E988 Offset: 0x249E988 VA: 0x249E988
	public void AddShadow(ShadowItemPart shadowItem) { }

	// RVA: 0x2494804 Offset: 0x2494804 VA: 0x2494804
	public bool TryGetFirstBlockedWaterIndexFromTheBottom(out int index) { }

	// RVA: 0x249E990 Offset: 0x249E990 VA: 0x249E990
	public void OnBottleSelectionSuccess() { }

	// RVA: 0x249E9C8 Offset: 0x249E9C8 VA: 0x249E9C8
	private void CacheBlockedIndexes() { }

	// RVA: 0x249EA00 Offset: 0x249EA00 VA: 0x249EA00
	public int GetWaterBottomCellIndex(WaterItem waterItem) { }

	// RVA: 0x249EAA4 Offset: 0x249EAA4 VA: 0x249EAA4
	public void PlayBottleEmptyAnimation() { }

	// RVA: 0x249EAC0 Offset: 0x249EAC0 VA: 0x249EAC0
	public void PlaySuperChargerAnimation(float speed = 1) { }

	// RVA: 0x249EADC Offset: 0x249EADC VA: 0x249EADC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x249EAE4 Offset: 0x249EAE4 VA: 0x249EAE4
	private void <PlayGeneratorExplosionAnimation>b__122_0() { }

	[CompilerGenerated]
	// RVA: 0x249EB04 Offset: 0x249EB04 VA: 0x249EB04
	private void <PlayGeneratorExplosionAnimation>b__123_0() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle