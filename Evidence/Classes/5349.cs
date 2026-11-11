public interface IAdAdapter // TypeDefIndex: 5349
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void Initialize();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool IsReady();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract Task<bool> Show(AdRequestSource adRequestSource);
}

// Namespace: Modules.Contexts.Application.Ads.Scripts