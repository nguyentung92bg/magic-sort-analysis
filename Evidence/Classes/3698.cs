public class MergeStuckChecker // TypeDefIndex: 3698
{
	// Fields
	private readonly MergeBoard _board; // 0x10

	// Methods

	// RVA: 0x4113E48 Offset: 0x4113E48 VA: 0x4113E48
	public void .ctor(MergeBoard board) { }

	// RVA: 0x4115D44 Offset: 0x4115D44 VA: 0x4115D44
	public bool SolveStuckIfNeeded(List<MergeMiniGameItemModel> incomingItems, int targetCellIndex, out List<MergeMiniGameItemModel> rescueItems) { }

	// RVA: 0x4118640 Offset: 0x4118640 VA: 0x4118640
	private bool TrySolve(List<MergeMiniGameItemModel> incomingItems, int targetCellIndex, out List<MergeMiniGameItemModel> rescueItems) { }

	// RVA: 0x4118CD0 Offset: 0x4118CD0 VA: 0x4118CD0
	private bool IncomingIsCollectible(List<MergeMiniGameItemModel> incomingItems) { }

	// RVA: 0x41188A0 Offset: 0x41188A0 VA: 0x41188A0
	private bool HasBoardHaveCollectibleItem() { }

	// RVA: 0x4119434 Offset: 0x4119434 VA: 0x4119434
	private static bool IsCollectibleRescueCell(MergeBoardCell cell) { }

	// RVA: 0x4118924 Offset: 0x4118924 VA: 0x4118924
	private List<MergeStuckChecker.MergeUnit> CollectUnits(int excludeCellIndex) { }

	// RVA: 0x4118A94 Offset: 0x4118A94 VA: 0x4118A94
	private static MergeStuckChecker.MergeUnit BuildIncomingUnit(List<MergeMiniGameItemModel> models, MergeBoardCell targetCell) { }

	// RVA: 0x4119A68 Offset: 0x4119A68 VA: 0x4119A68
	private static MergeStuckChecker.MergeUnit BuildUnitFromModels(List<MergeMiniGameItemModel> models) { }

	// RVA: 0x4119664 Offset: 0x4119664 VA: 0x4119664
	private static MergeStuckChecker.MergeUnit BuildUnitFromItems(IReadOnlyList<MergeItem> items) { }

	// RVA: 0x4118B5C Offset: 0x4118B5C VA: 0x4118B5C
	private static bool IncomingCreatesMerge(MergeStuckChecker.MergeUnit incoming, List<MergeStuckChecker.MergeUnit> units) { }

	// RVA: 0x4118E30 Offset: 0x4118E30 VA: 0x4118E30
	private static bool HasInternalMerge(List<MergeStuckChecker.MergeUnit> units) { }

	// RVA: 0x4118F1C Offset: 0x4118F1C VA: 0x4118F1C
	private static MergeMiniGameItemModel BuildRescueItem(List<MergeStuckChecker.MergeUnit> units) { }

	// RVA: 0x4119DC8 Offset: 0x4119DC8 VA: 0x4119DC8
	private static bool CanMerge(MergeStuckChecker.MergeUnit a, MergeStuckChecker.MergeUnit b) { }

	// RVA: 0x4119D10 Offset: 0x4119D10 VA: 0x4119D10
	private static bool IsMergeableType(MergeMiniGameItemType type) { }

	// RVA: 0x4119D60 Offset: 0x4119D60 VA: 0x4119D60
	private static bool CanTypeMove(MergeMiniGameItemType type) { }

	// RVA: 0x4119D48 Offset: 0x4119D48 VA: 0x4119D48
	private static bool CanTypeMerge(MergeMiniGameItemType type) { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.Items