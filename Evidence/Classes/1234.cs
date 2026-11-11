public class SnitchTargetFinder // TypeDefIndex: 1234
{
	// Fields
	private BottleCollections _bottleCollections; // 0x10
	private List<ItemType> _selectedBlockerTypes; // 0x18
	private List<AItem> _lockedSnitchTargets; // 0x20

	// Methods

	// RVA: 0x2140320 Offset: 0x2140320 VA: 0x2140320
	public void .ctor(BottleCollections bottleCollections) { }

	// RVA: 0x2141910 Offset: 0x2141910 VA: 0x2141910
	public SnitchTarget GetNormalSnitchTarget(SnitchItem normalSnitch) { }

	// RVA: 0x2141878 Offset: 0x2141878 VA: 0x2141878
	public SnitchTarget GetExternalNormalSnitchTarget(ExternalSnitchObject normalSnitch) { }

	// RVA: 0x214387C Offset: 0x214387C VA: 0x214387C
	private SnitchTarget GetFixedNormalSnitchTarget(List<int> fixedTargetBottles, List<int> targetCellIndices) { }

	// RVA: 0x2143B08 Offset: 0x2143B08 VA: 0x2143B08
	private SnitchTarget GetRandomNormalSnitchTarget(SnitchItem snitchItem) { }

	// RVA: 0x2144128 Offset: 0x2144128 VA: 0x2144128
	private SnitchTarget GetDummyNormalSnitchTarget(ExternalSnitchObject normalSnitch) { }

	// RVA: 0x2140A84 Offset: 0x2140A84 VA: 0x2140A84
	public AItem GetRedSnitchTargetItem(SnitchItem redSnitch) { }

	// RVA: 0x214098C Offset: 0x214098C VA: 0x214098C
	public AItem GetExternalRedSnitchTargetItem(ExternalSnitchObject redSnitch) { }

	// RVA: 0x2145584 Offset: 0x2145584 VA: 0x2145584
	private List<ABlockerItem> GetRedSnitchTargetBlockers(bool forceTarget) { }

	// RVA: 0x2144B08 Offset: 0x2144B08 VA: 0x2144B08
	private List<ABlockerItem> GetRedSnitchTargetBlockersByBottleIndices(IEnumerable<int> bottleIndices, bool onlyVisibleBlockers, bool forceTarget) { }

	// RVA: 0x21466BC Offset: 0x21466BC VA: 0x21466BC
	private List<ABlockerItem> GetRedSnitchTargetBlockersByBottle(BottleItem bottleItem, bool onlyVisibleBlockers = True) { }

	// RVA: 0x2145EEC Offset: 0x2145EEC VA: 0x2145EEC
	private List<ABlockerItem> GetRedSnitchTargetOverlayBlockers(ExternalSnitchObject redSnitch) { }

	// RVA: 0x2146E50 Offset: 0x2146E50 VA: 0x2146E50
	private void SortBlockers(List<ABlockerItem> blockers, bool forceTarget) { }

	// RVA: 0x21472C4 Offset: 0x21472C4 VA: 0x21472C4
	private int GetBlockerPriorityScore(ABlockerItem blocker, bool forceTarget) { }

	// RVA: 0x2145A40 Offset: 0x2145A40 VA: 0x2145A40
	private BottleItem GetMaxQuestionMarkBottle() { }

	// RVA: 0x2145054 Offset: 0x2145054 VA: 0x2145054
	private BottleItem GetMaxQuestionMarkBottle(IEnumerable<int> bottleIndices) { }

	// RVA: 0x2144970 Offset: 0x2144970 VA: 0x2144970
	private BottleItem GetBottleFromIndex(int index) { }

	// RVA: 0x2144AA0 Offset: 0x2144AA0 VA: 0x2144AA0
	private bool IsBottleUnderBlocker(BottleItem bottleItem) { }

	// RVA: 0x214289C Offset: 0x214289C VA: 0x214289C
	public void LockItem(AItem item) { }

	// RVA: 0x214294C Offset: 0x214294C VA: 0x214294C
	public void UnlockItem(AItem item) { }

	// RVA: 0x21429A4 Offset: 0x21429A4 VA: 0x21429A4
	public void AddSelectedBlockerType(ItemType type) { }

	// RVA: 0x2140B84 Offset: 0x2140B84 VA: 0x2140B84
	public ValueTuple<Cell, BottleItem> GetRandomFallbackSnitchSpawnTarget(bool includeQuestionMarkCells) { }
}

// Namespace: Modules.Contexts.GamePlay.PlayOn.Scripts