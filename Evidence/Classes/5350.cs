public interface IInterstitialAdAdapter : IAdAdapter // TypeDefIndex: 5350
{
	// Properties
	public abstract DateTime LastInterstitialShownTime { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract DateTime get_LastInterstitialShownTime();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void ResetLastInterstitialShownTime();
}

// Namespace: Modules.Contexts.Application.Ads.Scripts