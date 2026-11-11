public class ChargeableBottleSuperChargerStrategy : ISuperChargerStrategy // TypeDefIndex: 1179
{
	// Fields
	private readonly SuperChargerConfigModel _configModel; // 0x10
	private SuperChargerStrategyContext _context; // 0x18

	// Methods

	// RVA: 0x20E91C4 Offset: 0x20E91C4 VA: 0x20E91C4
	public void .ctor(SuperChargerConfigModel configModel) { }

	// RVA: 0x20E91F4 Offset: 0x20E91F4 VA: 0x20E91F4 Slot: 4
	public void Initialize(SuperChargerStrategyContext context) { }

	// RVA: 0x20E91FC Offset: 0x20E91FC VA: 0x20E91FC Slot: 5
	public void Use(Transform source) { }

	// RVA: 0x20E94B8 Offset: 0x20E94B8 VA: 0x20E94B8
	private ChargeableBottleItem FindChargeableBottleItem() { }

	// RVA: 0x20E9660 Offset: 0x20E9660 VA: 0x20E9660
	public List<Transform> GetTargets() { }

	// RVA: 0x20E96DC Offset: 0x20E96DC VA: 0x20E96DC Slot: 7
	public bool CanIncreaseProgress() { }

	// RVA: 0x20E9720 Offset: 0x20E9720 VA: 0x20E9720 Slot: 6
	public void Dispose() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies