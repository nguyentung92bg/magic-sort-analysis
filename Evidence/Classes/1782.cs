public class BottleCollection // TypeDefIndex: 1782
{
	// Fields
	[CompilerGenerated]
	private OptimizedGameObject <BoardParent>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly List<List<BottleItem>> <board>k__BackingField; // 0x18
	private readonly List<ABlockerItem> _blockers; // 0x20
	private readonly ItemFactory _itemFactory; // 0x28
	private readonly ItemPartFactory _itemPartFactory; // 0x30
	private readonly ColorService _colorService; // 0x38
	private readonly GameplayConfigService _gamePlayConfigService; // 0x40
	private readonly RootLevelConfigModel _rootLevelConfigModel; // 0x48
	private readonly SortingService _sortingService; // 0x50
	private readonly bool _isDaily; // 0x58
	private readonly bool _isFirstLevels; // 0x59
	private readonly int _defaultBottleHeight; // 0x5C
	private readonly int _distanceBetweenRowsAsUnit; // 0x60
	private int _maxBottleCount; // 0x64
	private BottleItem _superChargerMagicBottle; // 0x68
	private List<ColorId> _colorsInLevel; // 0x70
	private Dictionary<ColorId, int> _colorCounts; // 0x78
	private List<SnitchSpawnInfo> _snitchSpawnInfos; // 0x80
	private SnitchInGameManager _snitchInGameManager; // 0x88
	private SuperChargerInGameManager _superChargerInGameManager; // 0x90
	private List<ShelfItem> _shelves; // 0x98

	// Properties
	public int BottleRowCount { get; }
	public OptimizedGameObject BoardParent { get; set; }
	public List<List<BottleItem>> board { get; }
	public BottleItem SuperChargerMagicBottle { get; }

	// Methods

	// RVA: 0x2F61050 Offset: 0x2F61050 VA: 0x2F61050
	public int get_BottleRowCount() { }

	[CompilerGenerated]
	// RVA: 0x2F61098 Offset: 0x2F61098 VA: 0x2F61098
	public OptimizedGameObject get_BoardParent() { }

	[CompilerGenerated]
	// RVA: 0x2F610A0 Offset: 0x2F610A0 VA: 0x2F610A0
	private void set_BoardParent(OptimizedGameObject value) { }

	[CompilerGenerated]
	// RVA: 0x2F610A8 Offset: 0x2F610A8 VA: 0x2F610A8
	public List<List<BottleItem>> get_board() { }

	// RVA: 0x2F610B0 Offset: 0x2F610B0 VA: 0x2F610B0
	public BottleItem get_SuperChargerMagicBottle() { }

	// RVA: 0x2F54EF0 Offset: 0x2F54EF0 VA: 0x2F54EF0
	public void .ctor(bool isFirstLevels, bool isDaily) { }

	// RVA: 0x2F610B8 Offset: 0x2F610B8 VA: 0x2F610B8
	private BottleCollectionCameraConfig GetBottleCollectionCameraConfig(bool is3Row, bool isFirstLevels, bool isDaily) { }

	// RVA: 0x2F610E0 Offset: 0x2F610E0 VA: 0x2F610E0
	private List<List<BottleItemModel>> SortBottleModels(List<BottleItemModel> bottleModels) { }

	// RVA: 0x2F616BC Offset: 0x2F616BC VA: 0x2F616BC
	private int FindMaxBottleHeight(List<List<BottleItemModel>> bottleModelRows) { }

	// RVA: 0x2F617DC Offset: 0x2F617DC VA: 0x2F617DC
	private int GetWaterHeight(BottleItemModel bottleItemModel, int i, ColorId currentColorId, bool isQuestionMark) { }

	// RVA: 0x2F61944 Offset: 0x2F61944 VA: 0x2F61944
	public Dictionary<ColorId, int> GetColorAmountsInLevel(List<BottleItemModel> bottleModels) { }

	// RVA: 0x2F62054 Offset: 0x2F62054 VA: 0x2F62054
	public List<ColorId> GetColorsInLevel(List<BottleItemModel> bottleModels) { }

	// RVA: 0x2F6277C Offset: 0x2F6277C VA: 0x2F6277C
	private Dictionary<ColorId, int> GetColorCountsInLevel(List<BottleItemModel> bottlesModels) { }

	// RVA: 0x2F62E2C Offset: 0x2F62E2C VA: 0x2F62E2C
	public Dictionary<ColorId, int> GetNonHiddenColorAmountsInLevel(List<BottleItemModel> bottleModels) { }

	// RVA: 0x2F62DBC Offset: 0x2F62DBC VA: 0x2F62DBC
	private ColorAndColorId GetColorAndColorId(ColorId colorId) { }

	// RVA: 0x2F6346C Offset: 0x2F6346C VA: 0x2F6346C
	private List<ColorId> ConvertColorIds(List<ColorId> colorIds) { }

	// RVA: 0x2F63688 Offset: 0x2F63688 VA: 0x2F63688
	public void GenerateBottles(List<BottleItemModel> bottlesModels, bool remapColors, LevelDifficultyType levelDifficultyType) { }

	// RVA: 0x2F68DE4 Offset: 0x2F68DE4 VA: 0x2F68DE4
	private void AddShelvesIfNeeded(LevelDifficultyType levelDifficultyType) { }

	// RVA: 0x2F69174 Offset: 0x2F69174 VA: 0x2F69174
	public void AddWaterItem(BottleItem bottle, int height, ColorId colorId, int variant, bool isVisible, int index, bool isRainbow) { }

	// RVA: 0x2F69328 Offset: 0x2F69328 VA: 0x2F69328
	public void InsertWaterItem(BottleItem bottle, int height, ColorId colorId, int variant, bool isVisible, int index) { }

	// RVA: 0x2F661C8 Offset: 0x2F661C8 VA: 0x2F661C8
	public void AddQuestionMarkItem(BottleItem bottle, int index, bool isDaily) { }

	// RVA: 0x2F6671C Offset: 0x2F6671C VA: 0x2F6671C
	private void AddCurtainItem(BottleItem bottle, CurtainItemModel curtainItemModel, int blockerVariant) { }

	// RVA: 0x2F66888 Offset: 0x2F66888 VA: 0x2F66888
	private void AddPlasterItem(BottleItem bottle, int blockerVariant) { }

	// RVA: 0x2F66A40 Offset: 0x2F66A40 VA: 0x2F66A40
	private void AddClayItem(BottleItem bottle, int blockerVariant) { }

	// RVA: 0x2F66BF8 Offset: 0x2F66BF8 VA: 0x2F66BF8
	private void AddFireworkItem(BottleItem bottle, int fireworkCount) { }

	// RVA: 0x2F66D44 Offset: 0x2F66D44 VA: 0x2F66D44
	private void AddRainbowItem(BottleItem bottle) { }

	// RVA: 0x2F66E80 Offset: 0x2F66E80 VA: 0x2F66E80
	private void AddTagItem(BottleItem bottle, TagItemModel tagItemModel) { }

	// RVA: 0x2F66FDC Offset: 0x2F66FDC VA: 0x2F66FDC
	private void AddGeneratorItem(BottleItem bottle, GeneratorItemModel generatorItemModel) { }

	// RVA: 0x2F678A4 Offset: 0x2F678A4 VA: 0x2F678A4
	private void AddIceItem(int id, List<BottleItem> bottles) { }

	// RVA: 0x2F67AF8 Offset: 0x2F67AF8 VA: 0x2F67AF8
	private void AddWoodboxKeyItem(WoodboxKeyType woodboxKeyType, WoodboxKeyPair pair, int blockerVariant) { }

	// RVA: 0x2F67EAC Offset: 0x2F67EAC VA: 0x2F67EAC
	private void AddCarpetItem(int id, List<BottleItem> bottles, int blockerVariant) { }

	// RVA: 0x2F6889C Offset: 0x2F6889C VA: 0x2F6889C
	public void AddSnitchItem(SnitchSpawnInfo spawnInfo) { }

	// RVA: 0x2F6963C Offset: 0x2F6963C VA: 0x2F6963C
	public void AddSortKeyItem(BottleItem bottle, Cell cell, WaterItem water, KeySortSuperChargerStrategy keySortStrategy) { }

	// RVA: 0x2F67228 Offset: 0x2F67228 VA: 0x2F67228
	private void AddToggleItem(BottleItem bottle, bool isOn) { }

	// RVA: 0x2F67348 Offset: 0x2F67348 VA: 0x2F67348
	private void AddIvyItem(BottleItem bottle, ColorId colorId) { }

	// RVA: 0x2F674A0 Offset: 0x2F674A0 VA: 0x2F674A0
	private void AddBagItem(BottleItem bottle, int requiredAmount) { }

	// RVA: 0x2F675E8 Offset: 0x2F675E8 VA: 0x2F675E8
	private void AddFrogItem(List<BottleItem> bottles, FrogType frogType) { }

	// RVA: 0x2F663DC Offset: 0x2F663DC VA: 0x2F663DC
	private void AddMagicSealItem(BottleItem bottle, int index) { }

	// RVA: 0x2F66568 Offset: 0x2F66568 VA: 0x2F66568
	private void AddIcicleItem(BottleItem bottle, int index) { }

	// RVA: 0x2F68108 Offset: 0x2F68108 VA: 0x2F68108
	private void AddDuckAndDuckHouseItem(DuckType duckType, DuckHouseKeyPair duckHouseKeyPair) { }

	// RVA: 0x2F68498 Offset: 0x2F68498 VA: 0x2F68498
	private void AddSafeItem(SafeType safeType, SafePair safePair) { }

	// RVA: 0x2F68670 Offset: 0x2F68670 VA: 0x2F68670
	private void AddMosaicItem(MosaicType mosaicType, MosaicPair mosaicPair) { }

	// RVA: 0x2F697F4 Offset: 0x2F697F4 VA: 0x2F697F4
	private void AddChargeableBottleItem(BottleItem bottle, bool hasInitialCharge) { }

	// RVA: 0x2F69998 Offset: 0x2F69998 VA: 0x2F69998
	public BottleItem AddBottleAsMagicBottle() { }

	// RVA: 0x2F6A0A0 Offset: 0x2F6A0A0 VA: 0x2F6A0A0
	public void AddExtraBottle(float delay) { }

	// RVA: 0x2F6AA58 Offset: 0x2F6AA58 VA: 0x2F6AA58
	public void AddBottleWithCustomHeight(float delay, int height) { }

	// RVA: 0x2F6A814 Offset: 0x2F6A814 VA: 0x2F6A814
	private bool HasRowLongBottle(int rowIndex) { }

	// RVA: 0x2F6A380 Offset: 0x2F6A380 VA: 0x2F6A380
	private ValueTuple<int, int> GetExtraBottleIndex() { }

	// RVA: 0x2F69BDC Offset: 0x2F69BDC VA: 0x2F69BDC
	private BottleItem AddBottle(int x, int y, int bottleHeight) { }

	// RVA: 0x2F694C8 Offset: 0x2F694C8 VA: 0x2F694C8
	private void AddBlocker(ABlockerItem item) { }

	// RVA: 0x2F6AE18 Offset: 0x2F6AE18 VA: 0x2F6AE18
	public void OnBottleCompleted(BottleItem completedBottle, ColorId waterColorId) { }

	// RVA: 0x2F6AF38 Offset: 0x2F6AF38 VA: 0x2F6AF38
	public void OnAnyMoveStarted(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x2F6B064 Offset: 0x2F6B064 VA: 0x2F6B064
	public void OnAnyMoveFinished() { }

	// RVA: 0x2F6B100 Offset: 0x2F6B100 VA: 0x2F6B100
	public void OnReverseSelection(BottleItem originBottle, BottleItem targetBottle, ColorId waterColorId) { }

	// RVA: 0x2F6B1C4 Offset: 0x2F6B1C4 VA: 0x2F6B1C4
	public bool GetIntersectedBottle(Vector2 worldPosition, InputMode inputMode, out BottleItem intersectedBottle) { }

	// RVA: 0x2F6A9AC Offset: 0x2F6A9AC VA: 0x2F6A9AC
	private int GetMaxBottleCountInRow() { }

	// RVA: 0x2F6AD44 Offset: 0x2F6AD44 VA: 0x2F6AD44
	private int GetRowIndexWithLeastBottle() { }

	// RVA: 0x2F68C3C Offset: 0x2F68C3C VA: 0x2F68C3C
	public Bounds GetBounds() { }

	// RVA: 0x2F6B3D0 Offset: 0x2F6B3D0 VA: 0x2F6B3D0
	public int GetQuestionMarkCount() { }

	// RVA: 0x2F6B4D0 Offset: 0x2F6B4D0 VA: 0x2F6B4D0
	public int GetBlockerCount(ItemType itemType) { }

	// RVA: 0x2F68A70 Offset: 0x2F68A70 VA: 0x2F68A70
	public int GetBottleCount() { }

	// RVA: 0x2F6B574 Offset: 0x2F6B574 VA: 0x2F6B574
	public int GetHighestBottleCountInOneRow() { }

	// RVA: 0x2F6B5B8 Offset: 0x2F6B5B8 VA: 0x2F6B5B8
	public int GetEmptyBottleCount() { }

	// RVA: 0x2F6B6BC Offset: 0x2F6B6BC VA: 0x2F6B6BC
	public int GetCompletedBottleCount() { }

	// RVA: 0x2F6B7B8 Offset: 0x2F6B7B8 VA: 0x2F6B7B8
	public bool IsBottlesCountReachedMax() { }

	// RVA: 0x2F6B7D8 Offset: 0x2F6B7D8 VA: 0x2F6B7D8
	public bool HasDifferentBottleWithClayAndSameColor(BottleItem originBottle, BottleItem targetBottle) { }

	// RVA: 0x2F6B940 Offset: 0x2F6B940 VA: 0x2F6B940
	public bool HasDifferentBottleWithIceAndSameColor(BottleItem originBottle, BottleItem targetBottle) { }

	// RVA: 0x2F66088 Offset: 0x2F66088 VA: 0x2F66088
	public int GetBottleAndWaterVariant() { }

	// RVA: 0x2F695B0 Offset: 0x2F695B0 VA: 0x2F695B0
	public bool GetIsNewParticlesEnabled() { }

	// RVA: 0x2F66128 Offset: 0x2F66128 VA: 0x2F66128
	private int GetBlockerVariant() { }

	// RVA: 0x2F6B358 Offset: 0x2F6B358 VA: 0x2F6B358
	public BottleItem GetBottomLeftBottle() { }

	// RVA: 0x2F6BAC0 Offset: 0x2F6BAC0 VA: 0x2F6BAC0
	public BottleItem GetBottomSecondLeftBottle() { }

	// RVA: 0x2F6BB38 Offset: 0x2F6BB38 VA: 0x2F6BB38
	public ValueTuple<int, int> GetBottleIndex(BottleItem bottleItem) { }

	// RVA: 0x2F6BC7C Offset: 0x2F6BC7C VA: 0x2F6BC7C
	public int GetBottleLinearIndex(BottleItem bottleItem) { }

	// RVA: 0x2F6BD9C Offset: 0x2F6BD9C VA: 0x2F6BD9C
	public int GetBottleLinearIndexFromTopLeftToRightDown(BottleItem bottleItem) { }

	// RVA: 0x2F6BEBC Offset: 0x2F6BEBC VA: 0x2F6BEBC
	public void Deinitialize() { }

	// RVA: 0x2F6C1CC Offset: 0x2F6C1CC VA: 0x2F6C1CC
	public List<ABlockerItem> GetBlockers() { }

	// RVA: 0x2F6C1D4 Offset: 0x2F6C1D4 VA: 0x2F6C1D4
	public List<SnitchSpawnInfo> GetSnitchSpawnInfos() { }

	// RVA: 0x2F6A540 Offset: 0x2F6A540 VA: 0x2F6A540
	public bool HasBoardLongBottles() { }

	// RVA: 0x2F6C1DC Offset: 0x2F6C1DC VA: 0x2F6C1DC
	public int GetColorCount(ColorId colorId) { }

	// RVA: 0x2F6C238 Offset: 0x2F6C238 VA: 0x2F6C238
	public bool AreBottlesWithoutBlockersSingleColored() { }

	// RVA: 0x2F6C370 Offset: 0x2F6C370 VA: 0x2F6C370
	public bool AreBottlesWithoutBlockersSorted() { }

	// RVA: 0x2F68B18 Offset: 0x2F68B18 VA: 0x2F68B18
	private void AddSuperChargerBottle() { }

	// RVA: 0x2F6C59C Offset: 0x2F6C59C VA: 0x2F6C59C
	private void AddChargeableBottle() { }

	// RVA: 0x2F6C66C Offset: 0x2F6C66C VA: 0x2F6C66C
	private void AddMagicBottle() { }

	// RVA: 0x2F6C6C4 Offset: 0x2F6C6C4 VA: 0x2F6C6C4
	private void AddSingleUseBottle() { }

	// RVA: 0x2F6C71C Offset: 0x2F6C71C VA: 0x2F6C71C
	private void AdjustBoardForSuperChargerBottle(ValueTuple<int, int> insertPos) { }
}

// Namespace: Modules.Contexts.GamePlay.Board.Common.Scripts