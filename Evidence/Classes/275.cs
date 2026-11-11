public class EditorBottleCollection // TypeDefIndex: 275
{
	// Fields
	public static readonly int DefaultBottleHeight; // 0x0
	[CompilerGenerated]
	private OptimizedGameObject <BoardParent>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly List<List<EditorBottleItem>> <board>k__BackingField; // 0x18
	private readonly List<EditorABlockerItem> _blockers; // 0x20
	private readonly EditorItemFactory _itemFactory; // 0x28
	private readonly ColorService _colorService; // 0x30
	private readonly GameplayConfigService _gamePlayConfigService; // 0x38
	private readonly SortingService _sortingService; // 0x40
	private int _maxBottleCount; // 0x48
	private List<ColorId> _colorsInLevel; // 0x50

	// Properties
	public int BottleRowCount { get; }
	public OptimizedGameObject BoardParent { get; set; }
	public List<List<EditorBottleItem>> board { get; }

	// Methods

	// RVA: 0x37AE3F4 Offset: 0x37AE3F4 VA: 0x37AE3F4
	public int get_BottleRowCount() { }

	[CompilerGenerated]
	// RVA: 0x37AE43C Offset: 0x37AE43C VA: 0x37AE43C
	public OptimizedGameObject get_BoardParent() { }

	[CompilerGenerated]
	// RVA: 0x37AE444 Offset: 0x37AE444 VA: 0x37AE444
	private void set_BoardParent(OptimizedGameObject value) { }

	[CompilerGenerated]
	// RVA: 0x37AE44C Offset: 0x37AE44C VA: 0x37AE44C
	public List<List<EditorBottleItem>> get_board() { }

	// RVA: 0x37A6B70 Offset: 0x37A6B70 VA: 0x37A6B70
	public void .ctor() { }

	// RVA: 0x37AE454 Offset: 0x37AE454 VA: 0x37AE454
	private List<List<BottleItemModel>> SortBottleModels(List<BottleItemModel> bottleModels) { }

	// RVA: 0x37AEA30 Offset: 0x37AEA30 VA: 0x37AEA30
	private int FindMaxBottleHeight(List<List<BottleItemModel>> bottleModelRows) { }

	// RVA: 0x37AEB50 Offset: 0x37AEB50 VA: 0x37AEB50
	private List<ColorId> GetColorsInLevel(List<BottleItemModel> bottleModels) { }

	// RVA: 0x37A8E98 Offset: 0x37A8E98 VA: 0x37A8E98
	public void GenerateBottles(List<BottleItemModel> bottlesModels, bool remapColors) { }

	// RVA: 0x37A7738 Offset: 0x37A7738 VA: 0x37A7738
	public void AddWaterItem(EditorBottleItem bottle, int height, int index, ColorId colorId) { }

	// RVA: 0x37A77EC Offset: 0x37A77EC VA: 0x37A77EC
	public void AddQuestionMarkItem(EditorBottleItem bottle, int index) { }

	// RVA: 0x37AF500 Offset: 0x37AF500 VA: 0x37AF500
	private void AddCurtainItem(EditorBottleItem bottle, ColorAndColorId colorId) { }

	// RVA: 0x37AF5DC Offset: 0x37AF5DC VA: 0x37AF5DC
	private void AddPlasterItem(EditorBottleItem bottle) { }

	// RVA: 0x37AF6A8 Offset: 0x37AF6A8 VA: 0x37AF6A8
	private void AddClayItem(EditorBottleItem bottle) { }

	// RVA: 0x37AF92C Offset: 0x37AF92C VA: 0x37AF92C
	private void AddTagItem(EditorBottleItem bottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37AF9BC Offset: 0x37AF9BC VA: 0x37AF9BC
	private void AddGeneratorItem(EditorBottleItem bottle, GeneratorItemModel generatorItemModel) { }

	// RVA: 0x37AFAF4 Offset: 0x37AFAF4 VA: 0x37AFAF4
	private void AddIceItem(EditorBottleItem bottle, int id) { }

	// RVA: 0x37AFE68 Offset: 0x37AFE68 VA: 0x37AFE68
	private void AddWoodboxItem(EditorBottleItem bottle, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x37AF278 Offset: 0x37AF278 VA: 0x37AF278
	private void AddWoodboxKeyItem(EditorBottleItem bottle, int index, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x37AFEF4 Offset: 0x37AFEF4 VA: 0x37AFEF4
	private void AddCarpetItem(EditorBottleItem bottle, int id) { }

	// RVA: 0x37AFBD0 Offset: 0x37AFBD0 VA: 0x37AFBD0
	private void AddToggleItem(EditorBottleItem bottle, bool isOn) { }

	// RVA: 0x37AFC60 Offset: 0x37AFC60 VA: 0x37AFC60
	private void AddIvyItem(EditorBottleItem bottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37AFD3C Offset: 0x37AFD3C VA: 0x37AFD3C
	private void AddFrogItem(EditorBottleItem bottle, int id) { }

	// RVA: 0x37AF324 Offset: 0x37AF324 VA: 0x37AF324
	private void AddMagicSealItem(EditorBottleItem bottle, int index) { }

	// RVA: 0x37AF3BC Offset: 0x37AF3BC VA: 0x37AF3BC
	private void AddIcicleItem(EditorBottleItem bottle, int index) { }

	// RVA: 0x37AF454 Offset: 0x37AF454 VA: 0x37AF454
	private void AddDuckItem(EditorBottleItem bottle, int index, DuckType duckType) { }

	// RVA: 0x37AFFE0 Offset: 0x37AFFE0 VA: 0x37AFFE0
	private void AddDuckHouseItem(EditorBottleItem bottle, DuckType duckType) { }

	// RVA: 0x37B0080 Offset: 0x37B0080 VA: 0x37B0080
	private void AddSafeItem(EditorBottleItem bottle, int requiredAmount, SafeType safeType) { }

	// RVA: 0x37AFDCC Offset: 0x37AFDCC VA: 0x37AFDCC
	private void AddBagItem(EditorBottleItem bottle, int requiredAmount) { }

	// RVA: 0x37B0140 Offset: 0x37B0140 VA: 0x37B0140
	private void AddMosaicItem(EditorBottleItem bottle, List<ColorId> colorIds, MosaicType mosaicType) { }

	// RVA: 0x37AF774 Offset: 0x37AF774 VA: 0x37AF774
	private void AddFireworkItem(EditorBottleItem bottle, int fireworkCount) { }

	// RVA: 0x37AF860 Offset: 0x37AF860 VA: 0x37AF860
	private void AddRainbowItem(EditorBottleItem bottle) { }

	// RVA: 0x37A7514 Offset: 0x37A7514 VA: 0x37A7514
	public EditorBottleItem AddBottle(Vector3 position, int bottleHeight) { }

	// RVA: 0x37B02C0 Offset: 0x37B02C0 VA: 0x37B02C0
	private void AddBlocker(EditorABlockerItem item) { }

	// RVA: 0x37B03D8 Offset: 0x37B03D8 VA: 0x37B03D8
	public bool GetIntersectedBottle(Vector2 worldPosition, out EditorBottleItem intersectedBottle) { }

	// RVA: 0x37B0200 Offset: 0x37B0200 VA: 0x37B0200
	public int GetBottleCount() { }

	// RVA: 0x37A8CF0 Offset: 0x37A8CF0 VA: 0x37A8CF0
	public void Deinitialize() { }

	// RVA: 0x37A6F80 Offset: 0x37A6F80 VA: 0x37A6F80
	public int GetWaterCount() { }

	// RVA: 0x37A8B5C Offset: 0x37A8B5C VA: 0x37A8B5C
	public void RemoveBoardItem(Vector2 position) { }

	// RVA: 0x37A7898 Offset: 0x37A7898 VA: 0x37A7898
	public void RemoveBottle(Vector3 position) { }

	// RVA: 0x37A7AB0 Offset: 0x37A7AB0 VA: 0x37A7AB0
	public void AddWaterForEditor(Vector3 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A7C3C Offset: 0x37A7C3C VA: 0x37A7C3C
	public void AddQuestionMarkFromEditor(Vector2 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A7D80 Offset: 0x37A7D80 VA: 0x37A7D80
	public void AddCurtain(Vector2 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A7DE4 Offset: 0x37A7DE4 VA: 0x37A7DE4
	public void AddPlaster(Vector2 position) { }

	// RVA: 0x37A7E40 Offset: 0x37A7E40 VA: 0x37A7E40
	public void AddClay(Vector2 position) { }

	// RVA: 0x37A7E9C Offset: 0x37A7E9C VA: 0x37A7E9C
	public void AddTag(Vector2 position, ColorAndColorId colorId) { }

	// RVA: 0x37A7F00 Offset: 0x37A7F00 VA: 0x37A7F00
	public void AddIce(Vector2 position, int id) { }

	// RVA: 0x37A7F64 Offset: 0x37A7F64 VA: 0x37A7F64
	public void AddGeneratorItem(Vector2 position) { }

	// RVA: 0x37A7FC4 Offset: 0x37A7FC4 VA: 0x37A7FC4
	public void AddWoodbox(Vector2 position, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x37A8028 Offset: 0x37A8028 VA: 0x37A8028
	public void AddWoodboxKey(Vector2 position, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x37A817C Offset: 0x37A817C VA: 0x37A817C
	public void AddCarpet(Vector2 position, int id) { }

	// RVA: 0x37A81E0 Offset: 0x37A81E0 VA: 0x37A81E0
	public void AddToggle(Vector2 position) { }

	// RVA: 0x37A83F8 Offset: 0x37A83F8 VA: 0x37A83F8
	public void AddIvy(Vector2 position, ColorAndColorId colorAndColorId) { }

	// RVA: 0x37A845C Offset: 0x37A845C VA: 0x37A845C
	public void AddFrog(Vector2 position, int id) { }

	// RVA: 0x37A84C0 Offset: 0x37A84C0 VA: 0x37A84C0
	public void AddMagicSeal(Vector2 position) { }

	// RVA: 0x37A8A18 Offset: 0x37A8A18 VA: 0x37A8A18
	public void AddIcicle(Vector2 position) { }

	// RVA: 0x37A8604 Offset: 0x37A8604 VA: 0x37A8604
	public void AddDuck(Vector2 position, DuckType duckType) { }

	// RVA: 0x37A8758 Offset: 0x37A8758 VA: 0x37A8758
	public void AddDuckHouse(Vector2 position, DuckType duckType) { }

	// RVA: 0x37A87BC Offset: 0x37A87BC VA: 0x37A87BC
	public void AddSafe(Vector2 position, SafeType safeType) { }

	// RVA: 0x37A88A8 Offset: 0x37A88A8 VA: 0x37A88A8
	public void AddMosaic(Vector2 position, ColorAndColorId selectedColor, MosaicType mosaicType) { }

	// RVA: 0x37B0528 Offset: 0x37B0528 VA: 0x37B0528
	private EditorMosaicItem GetMosaicOnBottle(EditorBottleItem bottle) { }

	// RVA: 0x37B0BE8 Offset: 0x37B0BE8 VA: 0x37B0BE8
	private List<ColorId> GetColorIdsByMosaicType(MosaicType mosaicType) { }

	// RVA: 0x37A895C Offset: 0x37A895C VA: 0x37A895C
	public void AddFirework(Vector2 position) { }

	// RVA: 0x37A89BC Offset: 0x37A89BC VA: 0x37A89BC
	public void AddRainbow(Vector2 position) { }

	// RVA: 0x37A883C Offset: 0x37A883C VA: 0x37A883C
	public void AddBag(Vector2 position) { }

	// RVA: 0x37B0F20 Offset: 0x37B0F20 VA: 0x37B0F20
	private int GetExistingBagRequiredAmount() { }

	// RVA: 0x37B0818 Offset: 0x37B0818 VA: 0x37B0818
	private int GetRequiredAmountBySafeType(SafeType safeType) { }

	// RVA: 0x37B1184 Offset: 0x37B1184 VA: 0x37B1184
	private static void .cctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]