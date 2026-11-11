public interface ISuperChargerStrategy // TypeDefIndex: 1180
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize(SuperChargerStrategyContext context);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Use(Transform source);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Dispose();

	// RVA: 0x20E9798 Offset: 0x20E9798 VA: 0x20E9798 Slot: 3
	public virtual bool CanIncreaseProgress() { }

	// RVA: 0x20E97A0 Offset: 0x20E97A0 VA: 0x20E97A0 Slot: 4
	public virtual bool ShouldRetryUseWhenCharged() { }
}

// Namespace: Modules.Contexts.GamePlay.SuperCharger.Scripts.Strategies