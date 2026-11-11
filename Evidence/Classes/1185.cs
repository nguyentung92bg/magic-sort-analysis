public class BestSortTargetFinder // TypeDefIndex: 1185
{
	// Fields
	private const int CompleteFillCount = 4;
	private const int DefaultBestSortBottleCap = 4;
	private BottleCollections _bottleCollections; // 0x10
	private SuperChargerService _superChargerService; // 0x18

	// Methods

	// RVA: 0x20E9930 Offset: 0x20E9930 VA: 0x20E9930
	public void .ctor(BottleCollections bottleCollection) { }

	// RVA: 0x20E99DC Offset: 0x20E99DC VA: 0x20E99DC
	public List<BottleItem> FindSuitableTargets(int mergedKeyCount = 1) { }

	// RVA: 0x20E9F38 Offset: 0x20E9F38 VA: 0x20E9F38
	public HashSet<ColorId> GetLongBottleColors() { }

	// RVA: 0x20E9AB0 Offset: 0x20E9AB0 VA: 0x20E9AB0
	private List<BottleItem> FindCandidateBottles() { }

	// RVA: 0x20EA35C Offset: 0x20EA35C VA: 0x20EA35C
	private List<BottleItem> SelectBestBottles(List<BottleItem> candidateBottles, HashSet<ColorId> blockedColors, int maxBottleLimit) { }

	// RVA: 0x20EB158 Offset: 0x20EB158 VA: 0x20EB158
	private ColorId GetCheapestFittingColor(List<ColorId> remainingColors, Dictionary<ColorId, List<BottleItem>> bottlesByColor, List<BottleItem> selectedBottles, int remainingSlots) { }

	// RVA: 0x20EB314 Offset: 0x20EB314 VA: 0x20EB314
	private int CountNewBottles(List<BottleItem> colorBottles, List<BottleItem> selectedBottles) { }

	// RVA: 0x20EA9DC Offset: 0x20EA9DC VA: 0x20EA9DC
	private List<ColorId> GetCompletableColors(List<BottleItem> candidateBottles, HashSet<ColorId> blockedColors) { }

	// RVA: 0x20EAC44 Offset: 0x20EAC44 VA: 0x20EAC44
	private Dictionary<ColorId, List<BottleItem>> GetBottlesOccupiedByColors(List<ColorId> colors, List<BottleItem> candidateBottles) { }

	// RVA: 0x20EA68C Offset: 0x20EA68C VA: 0x20EA68C
	private void FillWithRandomBottles(List<BottleItem> selectedBottles, List<BottleItem> candidateBottles, int cap) { }

	// RVA: 0x20EB4A0 Offset: 0x20EB4A0 VA: 0x20EB4A0
	private Dictionary<ColorId, int> GetColorPool(List<BottleItem> bottles) { }

	// RVA: 0x20EB808 Offset: 0x20EB808 VA: 0x20EB808
	public HashSet<ColorId> GetValidMoveColors() { }

	// RVA: 0x20EBF14 Offset: 0x20EBF14 VA: 0x20EBF14
	public BottleItem FindRescueReserveBottle(List<BottleItem> excludedBottles, int neededSpace) { }

	// RVA: 0x20EC11C Offset: 0x20EC11C VA: 0x20EC11C
	private bool IsReserveEligible(BottleItem bottleItem) { }

	// RVA: 0x20E9D3C Offset: 0x20E9D3C VA: 0x20E9D3C
	private int GetBestSortBottleLimit(int candidateCount) { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.Strategies.Rainbow