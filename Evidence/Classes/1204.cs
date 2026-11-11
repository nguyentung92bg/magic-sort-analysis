public class BestSortSolver // TypeDefIndex: 1204
{
	// Fields
	private const int CompleteFillCount = 4;

	// Methods

	// RVA: 0x20F1030 Offset: 0x20F1030 VA: 0x20F1030
	public BestSortSolution Solve(List<BottleItem> bottles, HashSet<ColorId> blockedColors, HashSet<ColorId> validMoveColors) { }

	// RVA: 0x20F4FB4 Offset: 0x20F4FB4 VA: 0x20F4FB4
	private List<BottleSolution> BuildSolutions(List<BottleItem> bottles) { }

	// RVA: 0x20F5408 Offset: 0x20F5408 VA: 0x20F5408
	private Dictionary<ColorId, int> BuildPool(List<BottleSolution> solutions) { }

	// RVA: 0x20F5750 Offset: 0x20F5750 VA: 0x20F5750
	private void ExecuteTagBottomPhase(List<BottleSolution> bottleSolutions, Dictionary<ColorId, int> pool) { }

	// RVA: 0x20F5BC4 Offset: 0x20F5BC4 VA: 0x20F5BC4
	private void ExecuteCompleteFillPhase(List<BottleSolution> solutions, Dictionary<ColorId, int> pool, HashSet<ColorId> blockedColors) { }

	// RVA: 0x20F5E0C Offset: 0x20F5E0C VA: 0x20F5E0C
	private void ExecuteTopColorPhase(List<BottleSolution> solutions, Dictionary<ColorId, int> pool, HashSet<ColorId> validMoveColors) { }

	// RVA: 0x20F6228 Offset: 0x20F6228 VA: 0x20F6228
	private void ExecuteBestFitPhase(List<BottleSolution> solutions, Dictionary<ColorId, int> pool) { }

	// RVA: 0x20F638C Offset: 0x20F638C VA: 0x20F638C
	private void ExecuteRandomReversePhase(List<BottleSolution> solutions) { }

	// RVA: 0x20F2820 Offset: 0x20F2820 VA: 0x20F2820
	public void ExecuteSealCompletePhase(List<BottleSolution> solutions) { }

	// RVA: 0x20F6EBC Offset: 0x20F6EBC VA: 0x20F6EBC
	private bool IsSealColorRepeatedAbove(BottleSolution solution, int sealCellIndex) { }

	// RVA: 0x20F655C Offset: 0x20F655C VA: 0x20F655C
	private List<ColorId> GetFillableColors(Dictionary<ColorId, int> pool, HashSet<ColorId> blockedColors) { }

	// RVA: 0x20F67B4 Offset: 0x20F67B4 VA: 0x20F67B4
	private BottleSolution FindCompleteFillTarget(ColorId color, List<BottleSolution> solutions) { }

	// RVA: 0x20F6B3C Offset: 0x20F6B3C VA: 0x20F6B3C
	private bool TryGetColorWithHighestCount(Dictionary<ColorId, int> pool, out ColorId color, out int count) { }

	// RVA: 0x20F6CB4 Offset: 0x20F6CB4 VA: 0x20F6CB4
	private BottleSolution FindBestFitTarget(List<BottleSolution> solutions, int count) { }

	// RVA: 0x20EF804 Offset: 0x20EF804 VA: 0x20EF804
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]