public class KeySortSuperChargerStrategy : ISuperChargerStrategy // TypeDefIndex: 1199
{
	// Fields
	private const float PendingSortLockReleaseDelay = 0.15;
	private const float SortTrailLeadTime = 0.1;
	private SuperChargerStrategyContext _context; // 0x10
	private KeySortTargetPicker _targetPicker; // 0x18
	private BestSortTargetFinder _targetFinder; // 0x20
	private BestSortSolver _solver; // 0x28
	private KeySortTarget _pickedTarget; // 0x30
	private readonly List<SortKeyItem> _pendingKeys; // 0x38
	private int _bestSortCounter; // 0x40
	private int _currentBestSortCounter; // 0x44
	private bool _isUseInProgress; // 0x48
	private bool _isCenterOccupied; // 0x49
	private bool _stuckAfterUse; // 0x4A
	private bool _addedBottleForStuck; // 0x4B
	private bool _isDisposed; // 0x4C

	// Methods

	// RVA: 0x20EF664 Offset: 0x20EF664 VA: 0x20EF664 Slot: 4
	public void Initialize(SuperChargerStrategyContext context) { }

	// RVA: 0x20EF80C Offset: 0x20EF80C VA: 0x20EF80C Slot: 7
	public bool CanIncreaseProgress() { }

	// RVA: 0x20EF814 Offset: 0x20EF814 VA: 0x20EF814 Slot: 8
	public bool ShouldRetryUseWhenCharged() { }

	// RVA: 0x20EF81C Offset: 0x20EF81C VA: 0x20EF81C Slot: 5
	public void Use(Transform source) { }

	// RVA: 0x20EFAA8 Offset: 0x20EFAA8 VA: 0x20EFAA8
	private bool TryPickTarget() { }

	// RVA: 0x20EFB80 Offset: 0x20EFB80 VA: 0x20EFB80
	private List<Vector3> GetTrailTargetPositions() { }

	// RVA: 0x20EFC80 Offset: 0x20EFC80 VA: 0x20EFC80
	private void FinishUse() { }

	// RVA: 0x20EFD74 Offset: 0x20EFD74 VA: 0x20EFD74
	private void SendSuperChargerUsedEvent(int colorFilled, bool isTriggeredByMove, bool isMergedKey) { }

	// RVA: 0x20EFE78 Offset: 0x20EFE78 VA: 0x20EFE78
	public void OnSortKeyRevealStarted(SortKeyItem sortKeyItem) { }

	// RVA: 0x20EFF58 Offset: 0x20EFF58 VA: 0x20EFF58
	public void OnSortKeyRevealed(SortKeyItem sortKeyItem) { }

	// RVA: 0x20EFF5C Offset: 0x20EFF5C VA: 0x20EFF5C
	private void TryAdvanceQueue() { }

	// RVA: 0x20F0948 Offset: 0x20F0948 VA: 0x20F0948
	private void OnChargeArrivedAtCenter(List<SortKeyItem> mergingKeys) { }

	// RVA: 0x20F0D38 Offset: 0x20F0D38 VA: 0x20F0D38
	private void ReleaseCenter() { }

	// RVA: 0x20F05B8 Offset: 0x20F05B8 VA: 0x20F05B8
	private List<SortKeyItem> GetKeysToMerge() { }

	// RVA: 0x20F0800 Offset: 0x20F0800 VA: 0x20F0800
	private static bool AreAllKeysReady(List<SortKeyItem> keys) { }

	// RVA: 0x20F02A0 Offset: 0x20F02A0 VA: 0x20F02A0
	private void UnlockKeys(List<SortKeyItem> keys) { }

	// RVA: 0x20F0434 Offset: 0x20F0434 VA: 0x20F0434
	private void DisappearAllPendingKeys() { }

	// RVA: 0x20F0BEC Offset: 0x20F0BEC VA: 0x20F0BEC
	private static void DisappearKeys(List<SortKeyItem> keys) { }

	// RVA: 0x20F0E34 Offset: 0x20F0E34 VA: 0x20F0E34
	private static void HoldStuckCheckUntilSortLocks(BottleItem bottle, SortKeyItem key) { }

	// RVA: 0x20F0F5C Offset: 0x20F0F5C VA: 0x20F0F5C
	private void PlayKeyDisappearAnimation(SortKeyItem key) { }

	// RVA: 0x20F0D40 Offset: 0x20F0D40 VA: 0x20F0D40
	private bool TrySort(Transform source, int mergedKeyCount, bool isTriggeredByMove, bool isMergedKey) { }

	// RVA: 0x20F111C Offset: 0x20F111C VA: 0x20F111C
	private void PlaySuperChargerSequence(BestSortSolution solution, Transform source, bool isTriggeredByMove, bool isMergedKey) { }

	// RVA: 0x20F1494 Offset: 0x20F1494 VA: 0x20F1494
	private void UnlockCompletedBottles(BestSortSolution solution) { }

	// RVA: 0x20F1624 Offset: 0x20F1624 VA: 0x20F1624
	private void PrepareChargeAnimation(List<BottleSolution> bottleSolutions) { }

	// RVA: 0x20F1790 Offset: 0x20F1790 VA: 0x20F1790
	private void PlayTrailAnimation(List<BottleSolution> bottleSolutions, Transform source) { }

	// RVA: 0x20F1A18 Offset: 0x20F1A18 VA: 0x20F1A18
	private void StartChargeAnimation(List<BottleSolution> bottleSolutions) { }

	// RVA: 0x20F1B84 Offset: 0x20F1B84 VA: 0x20F1B84
	private void ApplySolutions(List<BottleSolution> solutions) { }

	// RVA: 0x20F1E98 Offset: 0x20F1E98 VA: 0x20F1E98
	private void FinishCharge(BestSortSolution solution, bool isTriggeredByMove, bool isMergedKey) { }

	// RVA: 0x20F20D4 Offset: 0x20F20D4 VA: 0x20F20D4
	private void TryRescueFromStuck(BestSortSolution solution, bool canCoverExtraBottle) { }

	// RVA: 0x20F3008 Offset: 0x20F3008 VA: 0x20F3008
	private bool TryEmptyBottleWithExtraCover(BestSortSolution solution) { }

	// RVA: 0x20F2C14 Offset: 0x20F2C14 VA: 0x20F2C14
	private bool TryEmptyBottle(BestSortSolution solution) { }

	// RVA: 0x20F3C18 Offset: 0x20F3C18 VA: 0x20F3C18
	private BottleSolution FindTransferTarget(BestSortSolution solution, BottleSolution bottleToEmpty, int waterHeight) { }

	// RVA: 0x20F2BC4 Offset: 0x20F2BC4 VA: 0x20F2BC4
	private bool IsBoardStuck() { }

	// RVA: 0x20F1CC0 Offset: 0x20F1CC0 VA: 0x20F1CC0
	private void ApplySolution(BottleSolution solution) { }

	// RVA: 0x20F3FE4 Offset: 0x20F3FE4 VA: 0x20F3FE4
	private void CompleteOverBoardItemsOnEmptiedCells(BottleSolution solution) { }

	// RVA: 0x20F3E30 Offset: 0x20F3E30 VA: 0x20F3E30
	private List<WaterAndColor> BuildWatersBottomToTop(List<ColorId> colorsTopToBottom) { }

	// RVA: 0x20F4258 Offset: 0x20F4258 VA: 0x20F4258 Slot: 6
	public void Dispose() { }

	// RVA: 0x20E98A8 Offset: 0x20E98A8 VA: 0x20E98A8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.Strategies.KeySort