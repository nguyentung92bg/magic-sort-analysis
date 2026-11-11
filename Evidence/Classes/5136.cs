public class InventoryModel // TypeDefIndex: 5136
{
	// Fields
	public Dictionary<int, int> CurrencyAmountByType; // 0x10
	public Dictionary<int, DateTime> TimedCurrencyEndDateByType; // 0x18
	public Dictionary<int, DateTime> LimitlessCurrencyEndDateByType; // 0x20
	public Dictionary<int, int> PendingCurrencyAmountByType; // 0x28
	public Dictionary<int, TimeSpan> PendingTimedCurrencyByType; // 0x30
	public Dictionary<int, TimeSpan> PendingLimitlessCurrencyByType; // 0x38
	public DateTime LifeFillDate; // 0x40
	[CompilerGenerated]
	private bool <UsedPlayOnForFree>k__BackingField; // 0x48
	public Dictionary<int, int> PendingCollectionPackAmountByType; // 0x50
	public int SpendCoin; // 0x58
	public bool SpendEventSent; // 0x5C

	// Properties
	public bool UsedPlayOnForFree { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x137D008 Offset: 0x137D008 VA: 0x137D008
	public bool get_UsedPlayOnForFree() { }

	[CompilerGenerated]
	// RVA: 0x137D010 Offset: 0x137D010 VA: 0x137D010
	public void set_UsedPlayOnForFree(bool value) { }

	// RVA: 0x137D01C Offset: 0x137D01C VA: 0x137D01C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Inventory.Scripts