public class BestSortSuperChargerStrategy : ISuperChargerStrategy // TypeDefIndex: 1206
{
	// Fields
	private SuperChargerStrategyContext _context; // 0x10
	private BestSortTargetFinder _targetFinder; // 0x18
	private BestSortSolver _solver; // 0x20
	private bool _stuckAfterUse; // 0x28
	private bool _addedBottleForStuck; // 0x29

	// Methods

	// RVA: 0x20E9898 Offset: 0x20E9898 VA: 0x20E9898
	public void .ctor() { }

	// RVA: 0x20F6F60 Offset: 0x20F6F60 VA: 0x20F6F60 Slot: 4
	public void Initialize(SuperChargerStrategyContext context) { }

	// RVA: 0x20F7038 Offset: 0x20F7038 VA: 0x20F7038 Slot: 5
	public void Use(Transform source) { }

	// RVA: 0x20F749C Offset: 0x20F749C VA: 0x20F749C
	private void SendSuperChargerUsedEvent(int colorFilled) { }

	// RVA: 0x20F711C Offset: 0x20F711C VA: 0x20F711C
	private bool CanUse() { }

	// RVA: 0x20F7140 Offset: 0x20F7140 VA: 0x20F7140
	private void PlaySuperChargerSequence(BestSortSolution solution, Transform source) { }

	// RVA: 0x20F7588 Offset: 0x20F7588 VA: 0x20F7588
	private void UnlockCompletedBottles(BestSortSolution solution) { }

	// RVA: 0x20F7718 Offset: 0x20F7718 VA: 0x20F7718
	private void PrepareChargeAnimation(List<BottleSolution> bottleSolutions) { }

	// RVA: 0x20F78D0 Offset: 0x20F78D0 VA: 0x20F78D0
	private void PlayTrailAnimation(List<BottleSolution> bottleSolutions, Transform source) { }

	// RVA: 0x20F7B58 Offset: 0x20F7B58 VA: 0x20F7B58
	private void StartChargeAnimation(List<BottleSolution> bottleSolutions) { }

	// RVA: 0x20F7CC4 Offset: 0x20F7CC4 VA: 0x20F7CC4
	private void ApplySolutions(List<BottleSolution> solutions) { }

	// RVA: 0x20F7FD8 Offset: 0x20F7FD8 VA: 0x20F7FD8
	private void FinishCharge(BestSortSolution solution) { }

	// RVA: 0x20F824C Offset: 0x20F824C VA: 0x20F824C
	private void TryRescueFromStuck(BestSortSolution solution) { }

	// RVA: 0x20F899C Offset: 0x20F899C VA: 0x20F899C
	private bool TryEmptyBottle(BestSortSolution solution) { }

	// RVA: 0x20F8D90 Offset: 0x20F8D90 VA: 0x20F8D90
	private BottleSolution FindTransferTarget(BestSortSolution solution, BottleSolution bottleToEmpty, int waterHeight) { }

	// RVA: 0x20F894C Offset: 0x20F894C VA: 0x20F894C
	private bool IsBoardStuck() { }

	// RVA: 0x20F7E00 Offset: 0x20F7E00 VA: 0x20F7E00
	private void ApplySolution(BottleSolution solution) { }

	// RVA: 0x20F9154 Offset: 0x20F9154 VA: 0x20F9154
	private void CompleteOverBoardItemsOnEmptiedCells(BottleSolution solution) { }

	// RVA: 0x20F8FA0 Offset: 0x20F8FA0 VA: 0x20F8FA0
	private List<WaterAndColor> BuildWatersBottomToTop(List<ColorId> colorsTopToBottom) { }

	// RVA: 0x20F93C8 Offset: 0x20F93C8 VA: 0x20F93C8 Slot: 6
	public void Dispose() { }
}

// Namespace: 
[Serializable]