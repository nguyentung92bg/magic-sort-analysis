public class EditorItemFactory : IService, IInitializable, IDisposable // TypeDefIndex: 313
{
	// Fields
	public static readonly Vector3 FarPosition; // 0x0
	private readonly EditorItemPairs _itemPairs; // 0x10
	private Dictionary<ItemType, IPool<EditorAItem>> _itemPools; // 0x18
	private BasicGameObject _itemPoolsParent; // 0x20

	// Methods

	// RVA: 0x3DDA9B8 Offset: 0x3DDA9B8 VA: 0x3DDA9B8
	public void .ctor(EditorItemPairs itemPairs) { }

	// RVA: 0x3DDA9E8 Offset: 0x3DDA9E8 VA: 0x3DDA9E8 Slot: 4
	public void Initialize() { }

	// RVA: 0x3DDAE50 Offset: 0x3DDAE50 VA: 0x3DDAE50
	public EditorBottleItem GetBottleItem(ITransform parent, Vector3 localPosition, int height, EditorBottleCollection bottleCollection) { }

	// RVA: 0x3DDB278 Offset: 0x3DDB278 VA: 0x3DDB278
	public EditorWaterItem GetWaterItem(ITransform parent, int height, int index, ColorAndColorId colorAndColorId, Sorting sorting) { }

	// RVA: 0x3DDB368 Offset: 0x3DDB368 VA: 0x3DDB368
	public EditorQuestionMarkItem GetQuestionMarkItem(ITransform parent, Vector3 localPosition, ColorAndColorId colorAndColorId) { }

	// RVA: 0x3DDB450 Offset: 0x3DDB450 VA: 0x3DDB450
	public EditorCurtainItem GetCurtainItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x3DDB5F8 Offset: 0x3DDB5F8 VA: 0x3DDB5F8
	public EditorPlasterItem GetPlasterItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle) { }

	// RVA: 0x3DDB6F8 Offset: 0x3DDB6F8 VA: 0x3DDB6F8
	public EditorClayItem GetClayItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle) { }

	// RVA: 0x3DDB878 Offset: 0x3DDB878 VA: 0x3DDB878
	public EditorTagItem GetTagItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x3DDB980 Offset: 0x3DDB980 VA: 0x3DDB980
	public EditorIceItem GetIceItem(ITransform parent, Vector3 localPosition, EditorBottleItem belongingBottle, Sorting sorting, int id) { }

	// RVA: 0x3DDBA84 Offset: 0x3DDBA84 VA: 0x3DDBA84
	public EditorGeneratorItem GetGeneratorItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, List<ColorId> colorIds) { }

	// RVA: 0x3DDBB70 Offset: 0x3DDBB70 VA: 0x3DDBB70
	public EditorWoodboxItem GetWoodboxItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x3DDBC60 Offset: 0x3DDBC60 VA: 0x3DDBC60
	public EditorWoodboxKeyItem GetWoodboxKeyItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorCell belongingCell, EditorBottleItem belongingBottle, WoodboxKeyType woodboxKeyType) { }

	// RVA: 0x3DDBD60 Offset: 0x3DDBD60 VA: 0x3DDBD60
	public EditorCarpetItem GetCarpetItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, int id) { }

	// RVA: 0x3DDBEB8 Offset: 0x3DDBEB8 VA: 0x3DDBEB8
	public EditorToggleItem GetToggleItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, bool isOn) { }

	// RVA: 0x3DDBFB4 Offset: 0x3DDBFB4 VA: 0x3DDBFB4
	public EditorIvyItem GetIvyItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, ColorAndColorId colorAndColorId) { }

	// RVA: 0x3DDC0AC Offset: 0x3DDC0AC VA: 0x3DDC0AC
	public EditorFrogItem GetFrogItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, int id) { }

	// RVA: 0x3DDC1A4 Offset: 0x3DDC1A4 VA: 0x3DDC1A4
	public EditorMagicSealItem GetMagicSeal(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, EditorCell belongingCell) { }

	// RVA: 0x3DDC294 Offset: 0x3DDC294 VA: 0x3DDC294
	public EditorDuckItem GetDuckItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, EditorCell belongingCell, DuckType duckType) { }

	// RVA: 0x3DDC404 Offset: 0x3DDC404 VA: 0x3DDC404
	public EditorDuckHouseItem GetDuckHouseItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, DuckType duckType) { }

	// RVA: 0x3DDC500 Offset: 0x3DDC500 VA: 0x3DDC500
	public EditorSafeItem GetSafeItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, int requiredAmount, SafeType safeType) { }

	// RVA: 0x3DDC60C Offset: 0x3DDC60C VA: 0x3DDC60C
	public EditorBagItem GetBagItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, int requiredAmount) { }

	// RVA: 0x3DDC7DC Offset: 0x3DDC7DC VA: 0x3DDC7DC
	public EditorMosaicItem GetMosaicItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, List<ColorId> colorIds, MosaicType mosaicType) { }

	// RVA: 0x3DDC8E8 Offset: 0x3DDC8E8 VA: 0x3DDC8E8
	public EditorFireworkItem GetFireworkItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, int fireworkCount) { }

	// RVA: 0x3DDC9F4 Offset: 0x3DDC9F4 VA: 0x3DDC9F4
	public EditorRainbowItem GetRainbowItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle) { }

	// RVA: 0x3DDCAF8 Offset: 0x3DDCAF8 VA: 0x3DDCAF8
	public EditorIcicleItem GetIcicleItem(ITransform parent, Vector3 localPosition, Sorting sorting, EditorBottleItem belongingBottle, EditorCell belongingCell) { }

	// RVA: 0x3DDAF34 Offset: 0x3DDAF34 VA: 0x3DDAF34
	private EditorAItem GetItem(ItemType itemType, ITransform parent, Vector3 localPosition) { }

	// RVA: 0x3DDCBF0 Offset: 0x3DDCBF0 VA: 0x3DDCBF0
	private void ReturnItem(EditorAItem item) { }

	// RVA: 0x3DDCD84 Offset: 0x3DDCD84 VA: 0x3DDCD84 Slot: 5
	public void Dispose() { }

	// RVA: 0x3DDCD88 Offset: 0x3DDCD88 VA: 0x3DDCD88
	private static void .cctor() { }
}

// Namespace: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories
[CreateAssetMenu(fileName = "EditorItemPairs", menuName = "Factory/EditorItemPairs")]