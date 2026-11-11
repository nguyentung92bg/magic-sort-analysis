public class ItemPartFactory : IService, IInitializable, IDisposable // TypeDefIndex: 1543
{
	// Fields
	private readonly ItemPartPairs _itemPartPairs; // 0x10
	private Dictionary<ItemPartType, IPool<AItemPart>> _itemPartPools; // 0x18
	private BasicGameObject _itemPartPoolsParent; // 0x20

	// Methods

	// RVA: 0x2300A04 Offset: 0x2300A04 VA: 0x2300A04
	public void .ctor(ItemPartPairs itemPartPairs) { }

	// RVA: 0x2300A34 Offset: 0x2300A34 VA: 0x2300A34 Slot: 4
	public void Initialize() { }

	// RVA: 0x2300EEC Offset: 0x2300EEC VA: 0x2300EEC
	public ShadowItemPart GetShadowItem() { }

	// RVA: 0x23010D0 Offset: 0x23010D0 VA: 0x23010D0
	public FrogPathItem GetFrogPathItem(FrogType frogType) { }

	// RVA: 0x2301174 Offset: 0x2301174 VA: 0x2301174
	public WaterLineItemPart GetWaterLineItemPart(Color color) { }

	// RVA: 0x2301258 Offset: 0x2301258 VA: 0x2301258
	public BlobItemPart GetBlobItemPart(int sortOrder) { }

	// RVA: 0x2300F88 Offset: 0x2300F88 VA: 0x2300F88
	private AItemPart GetItemPart(ItemPartType itemPartType) { }

	// RVA: 0x23012FC Offset: 0x23012FC VA: 0x23012FC
	private void ReturnItemPart(AItemPart itemPart) { }

	// RVA: 0x2301490 Offset: 0x2301490 VA: 0x2301490 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation