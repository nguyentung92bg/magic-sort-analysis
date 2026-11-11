public class ItemFactory : IService, IInitializable, IDisposable // TypeDefIndex: 1547
{
	// Fields
	public static readonly Vector3 FarPosition; // 0x0
	private readonly ItemPairs _itemPairs; // 0x10
	private Dictionary<ItemType, IPool<AItem>> _itemPools; // 0x18
	private BasicGameObject _itemPoolsParent; // 0x20

	// Methods

	// RVA: 0x2301730 Offset: 0x2301730 VA: 0x2301730
	public void .ctor(ItemPairs itemPairs) { }

	// RVA: 0x2301760 Offset: 0x2301760 VA: 0x2301760 Slot: 4
	public void Initialize() { }

	// RVA: 0x2301C18 Offset: 0x2301C18 VA: 0x2301C18
	public BottleItem GetBottleItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, int height, int initialSortingOrder, int bottleAndWaterVariant, int frontSortOrder, int backSortOrder, BottleAnimationConfig bottleAnimationConfig, Sorting sorting, bool isCompletable, BottleCollection bottleCollection, bool isLongBottle) { }

	// RVA: 0x2301F28 Offset: 0x2301F28 VA: 0x2301F28
	public WaterItem GetWaterItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, int frontSortOrder, int backSortOrder, int bottleHeight, int height, int index, ColorAndColorId colorAndColorId, bool isVisible, int bottlesAndWaterVariant, BottleOutlines bottleOutlines) { }

	// RVA: 0x2302088 Offset: 0x2302088 VA: 0x2302088
	public QuestionMarkItem GetQuestionMarkItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, int sortOrder, ColorAndColorId colorAndColorId) { }

	// RVA: 0x230219C Offset: 0x230219C VA: 0x230219C
	public CurtainItem GetCurtainItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, ColorAndColorId colorAndColorId, int blockerVariant) { }

	// RVA: 0x23022D8 Offset: 0x23022D8 VA: 0x23022D8
	public PlasterItem GetPlasterItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, int blockerVariant, bool isNewParticleEnabled) { }

	// RVA: 0x2302414 Offset: 0x2302414 VA: 0x2302414
	public ClayItem GetClayItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, int blockerVariant, bool isNewParticleEnabled) { }

	// RVA: 0x2302550 Offset: 0x2302550 VA: 0x2302550
	public FireworkItem GetFireworkItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, BottleCollection bottleCollection, int fireworkCount) { }

	// RVA: 0x230268C Offset: 0x230268C VA: 0x230268C
	public RainbowItem GetRainbowItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, BottleCollection bottleCollection) { }

	// RVA: 0x23027B8 Offset: 0x23027B8 VA: 0x23027B8
	public IcicleItem GetIcicleItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, Cell belongingCell) { }

	// RVA: 0x23028E4 Offset: 0x23028E4 VA: 0x23028E4
	public TagItem GetTagItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x2302A10 Offset: 0x2302A10 VA: 0x2302A10
	public IceItem GetIceItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, int width, int id, BottleItem rootBottle, List<BottleItem> belongingBottles, bool useShadow, bool isNewParticleEnabled) { }

	// RVA: 0x2302B70 Offset: 0x2302B70 VA: 0x2302B70
	public GeneratorItem GetGeneratorItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting frontSorting, Sorting backSorting, BottleItem belongingBottle, Stack<ColorId> colorIds) { }

	// RVA: 0x2302CB4 Offset: 0x2302CB4 VA: 0x2302CB4
	public WoodboxItem GetWoodboxItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, WoodboxKeyType woodboxKeyType, int blockerVariant) { }

	// RVA: 0x2302F5C Offset: 0x2302F5C VA: 0x2302F5C
	public WoodboxKeyItem GetWoodboxKeyItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, Cell belongingCell, WoodboxItem belongingWoodbox, WoodboxKeyType woodboxKeyType, BottleItem bottleOfKey, int blockerVariant) { }

	// RVA: 0x23031E8 Offset: 0x23031E8 VA: 0x23031E8
	public CarpetItem GetCarpetItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, int id, int blockerVariant) { }

	// RVA: 0x230332C Offset: 0x230332C VA: 0x230332C
	public SortKeyItem GetSortKeyItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, Cell belongingCell, BottleItem belongingBottle, KeySortSuperChargerStrategy keySortStrategy) { }

	// RVA: 0x230347C Offset: 0x230347C VA: 0x230347C
	public SnitchItem GetSnitchItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, Cell belongingCell, BottleItem belongingBottle, SnitchSpawnInfo snitchInfo) { }

	// RVA: 0x23035CC Offset: 0x23035CC VA: 0x23035CC
	public ToggleItem GetToggleItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, BottleItem belongingBottle, bool isOn) { }

	// RVA: 0x23036E0 Offset: 0x23036E0 VA: 0x23036E0
	public IvyItem GetIvyItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x230380C Offset: 0x230380C VA: 0x230380C
	public FrogItem GetFrogItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, List<BottleItem> belongingBottles, FrogType frogType) { }

	// RVA: 0x2303938 Offset: 0x2303938 VA: 0x2303938
	public MagicSealItem GetMagicSealItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, BottleItem belongingBottle, Cell belongingCell, int cellIndex) { }

	// RVA: 0x2303A5C Offset: 0x2303A5C VA: 0x2303A5C
	public DuckItem GetDuckItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, DuckHouseItem duckHouseItem, Cell belongingCell, BottleItem belongingBottle, DuckType duckType) { }

	// RVA: 0x2303BB4 Offset: 0x2303BB4 VA: 0x2303BB4
	public DuckHouseItem GetDuckHouseItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, DuckType duckType) { }

	// RVA: 0x2303CF0 Offset: 0x2303CF0 VA: 0x2303CF0
	public SafeItem GetSafeItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, int requiredAmount, SafeType safeType) { }

	// RVA: 0x2303E34 Offset: 0x2303E34 VA: 0x2303E34
	public BagItem GetBagItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, int requiredAmount) { }

	// RVA: 0x2303F60 Offset: 0x2303F60 VA: 0x2303F60
	public MosaicItem GetMosaicItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting sorting, BottleItem belongingBottle, List<BottleItem> belongingBottles, List<ColorId> requiredColors) { }

	// RVA: 0x230409C Offset: 0x230409C VA: 0x230409C
	public ChargeableBottleItem GetChargeableBottleItem(ITransform parent, Vector3 pivotPosition, Vector3 viewOffset, Sorting frontSorting, Sorting backSorting, BottleItem belongingBottle, bool hasInitialCharge) { }

	// RVA: 0x23041E0 Offset: 0x23041E0 VA: 0x23041E0
	public ShelfItem GetShelf(ITransform parent, List<BottleItem> belongingBottles, bool hasBottleLeftSideOfSegment, bool hasBottleRightSideOfSegment, LevelDifficultyType levelDifficultyType) { }

	// RVA: 0x2301D8C Offset: 0x2301D8C VA: 0x2301D8C
	private AItem GetItem(ItemType itemType, ITransform parent, Vector3 pivotPosition) { }

	// RVA: 0x2304318 Offset: 0x2304318 VA: 0x2304318
	private void ReturnItem(AItem item) { }

	// RVA: 0x23044AC Offset: 0x23044AC VA: 0x23044AC Slot: 5
	public void Dispose() { }

	// RVA: 0x23044B0 Offset: 0x23044B0 VA: 0x23044B0
	private static void .cctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation