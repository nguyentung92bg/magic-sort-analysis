public class KeySortTargetPicker // TypeDefIndex: 1201
{
	// Fields
	private readonly BottleCollections _bottleCollections; // 0x10

	// Methods

	// RVA: 0x20EF7D4 Offset: 0x20EF7D4 VA: 0x20EF7D4
	public void .ctor(BottleCollections bottleCollections) { }

	// RVA: 0x20EFAE4 Offset: 0x20EFAE4 VA: 0x20EFAE4
	public KeySortTarget PickBuriedCell() { }

	// RVA: 0x20F4700 Offset: 0x20F4700 VA: 0x20F4700
	private List<KeySortTarget> CollectBuriedCells() { }

	// RVA: 0x20F4C28 Offset: 0x20F4C28 VA: 0x20F4C28
	private static void CollectBuriedCellsOfBottle(BottleItem bottle, List<KeySortTarget> buriedCells) { }

	// RVA: 0x20F4E38 Offset: 0x20F4E38 VA: 0x20F4E38
	private static bool WaterHasOverBoardItem(List<Cell> cells, WaterItem water) { }

	// RVA: 0x20F4868 Offset: 0x20F4868 VA: 0x20F4868
	private static List<KeySortTarget> PreferShallowestCells(List<KeySortTarget> buriedCells) { }

	// RVA: 0x20F4B50 Offset: 0x20F4B50 VA: 0x20F4B50
	private static bool IsBottleCandidate(BottleItem bottle) { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.Strategies.BestSort