public class MegaShuffleManager // TypeDefIndex: 1443
{
	// Fields
	private int _shuffleRetryCount; // 0x10
	private const bool _megaShuffleUseNewAlgorithm = True;
	private const bool _megaShuffleEmptyOneBottle = True;
	private bool _shouldEmptyOneBottle; // 0x14

	// Methods

	[AsyncStateMachine(typeof(MegaShuffleManager.<TryShuffleBoard>d__4))]
	// RVA: 0x1E95970 Offset: 0x1E95970 VA: 0x1E95970
	public Task<bool> TryShuffleBoard(BottleCollections bottleCollections) { }

	// RVA: 0x1E92818 Offset: 0x1E92818 VA: 0x1E92818
	public bool CanUseMegaShuffle(BottleCollections bottleCollections) { }

	// RVA: 0x1E957F0 Offset: 0x1E957F0 VA: 0x1E957F0
	public ValueTuple<MegaShuffleManager.MegaShuffleBoard, List<BottleItem>> GetInitialColorBlocks(BottleCollections bottleCollections) { }

	// RVA: 0x1E95AA4 Offset: 0x1E95AA4 VA: 0x1E95AA4
	public void ApplyInitialBoard(MegaShuffleManager.MegaShuffleBoard initialBoard, List<BottleItem> availableBottles) { }

	[AsyncStateMachine(typeof(MegaShuffleManager.<ShuffleBoard>d__8))]
	// RVA: 0x1E99644 Offset: 0x1E99644 VA: 0x1E99644
	private Task<bool> ShuffleBoard(List<BottleItem> availableBottles, BottleCollection bottleCollection) { }

	// RVA: 0x1E97C74 Offset: 0x1E97C74 VA: 0x1E97C74
	private List<ValueTuple<int, bool>> GetBottleSizes(List<BottleItem> availableBottles, HashSet<ColorId> movableColors) { }

	// RVA: 0x1E997A4 Offset: 0x1E997A4 VA: 0x1E997A4
	private HashSet<ColorId> GetValidMoveColors(BottleCollection bottleCollection) { }

	// RVA: 0x1E990AC Offset: 0x1E990AC VA: 0x1E990AC
	private void PlaceShuffledBottles(List<BottleItem> candidates, MegaShuffleManager.MegaShuffleBoard finalBoard) { }

	// RVA: 0x1E98C44 Offset: 0x1E98C44 VA: 0x1E98C44
	private void AddExcludedColors(MegaShuffleManager.MegaShuffleBoard board, List<BottleItem> candidates, HashSet<ColorId> duplicatedTopColors) { }

	// RVA: 0x1E97A7C Offset: 0x1E97A7C VA: 0x1E97A7C
	private List<BottleItem> FindAvailableBottleForMegaShuffle(BottleCollection bottleCollection) { }

	// RVA: 0x1E984B4 Offset: 0x1E984B4 VA: 0x1E984B4
	private List<MegaShuffleManager.ColorBlock> GetColorBlocks(List<BottleItem> bottles, HashSet<ColorId> duplicatedTopColors) { }

	// RVA: 0x1E99DD4 Offset: 0x1E99DD4 VA: 0x1E99DD4
	private bool IsColorSameAsTagColor(BottleItem bottleItem, ColorId colorId) { }

	// RVA: 0x1E99F7C Offset: 0x1E99F7C VA: 0x1E99F7C
	private void BuildVirtualBoardFromColorBlocksRandom(MegaShuffleManager.MegaShuffleBoard board, List<MegaShuffleManager.ColorBlock> colorBlocks, List<ValueTuple<int, bool>> bottleSizes) { }

	// RVA: 0x1E9A9D8 Offset: 0x1E9A9D8 VA: 0x1E9A9D8
	private void ShuffleBlocksInBottle(MegaShuffleManager.MegaShuffleBottle bottle) { }

	// RVA: 0x1E9AEBC Offset: 0x1E9AEBC VA: 0x1E9AEBC
	private void ShuffleColorBlocks(List<MegaShuffleManager.ColorBlock> list) { }

	// RVA: 0x1E989D8 Offset: 0x1E989D8 VA: 0x1E989D8
	private void BuildVirtualBoardFromColorBlocks(MegaShuffleManager.MegaShuffleBoard board, List<MegaShuffleManager.ColorBlock> colorBlocks, List<ValueTuple<int, bool>> bottleSizes) { }

	// RVA: 0x1E9A668 Offset: 0x1E9A668 VA: 0x1E9A668
	private static bool MinimizeOneBottle(List<ValueTuple<int, bool>> bottleSizesCopy, int maxCapacity) { }

	// RVA: 0x1E92658 Offset: 0x1E92658 VA: 0x1E92658
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Boosters.Scripts