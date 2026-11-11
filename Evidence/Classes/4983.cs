public class ApplovinStatSender : IService, IInitializable, IDisposable // TypeDefIndex: 4983
{
	// Fields
	private AdService _adService; // 0x10

	// Methods

	// RVA: 0x3E2A004 Offset: 0x3E2A004 VA: 0x3E2A004
	public void .ctor(AdService adService) { }

	// RVA: 0x3E2A034 Offset: 0x3E2A034 VA: 0x3E2A034 Slot: 4
	public void Initialize() { }

	// RVA: 0x3E2A038 Offset: 0x3E2A038 VA: 0x3E2A038
	public void SendLevelStartEvent(int level) { }

	// RVA: 0x3E2A160 Offset: 0x3E2A160 VA: 0x3E2A160
	public void SendLevelCompleteEvent(int level) { }

	// RVA: 0x3E2A288 Offset: 0x3E2A288 VA: 0x3E2A288
	public void SendUserEarnedCurrencyEvent(int amount) { }

	// RVA: 0x3E2A3B0 Offset: 0x3E2A3B0 VA: 0x3E2A3B0
	public void SendUserSpendCurrencyEvent(int amount) { }

	// RVA: 0x3E2A4C0 Offset: 0x3E2A4C0 VA: 0x3E2A4C0
	public void SendTutorialCompleteEvent() { }

	// RVA: 0x3E2A554 Offset: 0x3E2A554 VA: 0x3E2A554
	public void SendNoMoreLifeEvent() { }

	// RVA: 0x3E2A5E8 Offset: 0x3E2A5E8 VA: 0x3E2A5E8
	public void SendUsedBoostersEvent() { }

	// RVA: 0x3E2A67C Offset: 0x3E2A67C VA: 0x3E2A67C
	public void SendShopOpenedEvent() { }

	// RVA: 0x3E2A710 Offset: 0x3E2A710 VA: 0x3E2A710 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]