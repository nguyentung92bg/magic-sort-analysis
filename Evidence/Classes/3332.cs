public class NoAdsOfferDataService : IService, IInitializable, IDisposable, ILateUpdate, IDeletable // TypeDefIndex: 3332
{
	// Fields
	private readonly ISaveLoad<NoAdsOfferModel> _saveLoad; // 0x10
	private NoAdsOfferModel _model; // 0x18
	private bool _isMarkedForLateUpdate; // 0x20
	private int _sessionPopupShowCount; // 0x24

	// Methods

	// RVA: 0x34628BC Offset: 0x34628BC VA: 0x34628BC
	public void .ctor(ISaveLoad<NoAdsOfferModel> saveLoad) { }

	// RVA: 0x34628EC Offset: 0x34628EC VA: 0x34628EC Slot: 4
	public void Initialize() { }

	// RVA: 0x34629A8 Offset: 0x34629A8 VA: 0x34629A8 Slot: 5
	public void Dispose() { }

	// RVA: 0x34629AC Offset: 0x34629AC VA: 0x34629AC
	private void MarkForLateUpdate() { }

	// RVA: 0x34629B8 Offset: 0x34629B8 VA: 0x34629B8 Slot: 6
	public void LateUpdate() { }

	// RVA: 0x3462A70 Offset: 0x3462A70 VA: 0x3462A70
	public void CacheBackendResponse(NoAdsOfferResponse responseData) { }

	// RVA: 0x3462A9C Offset: 0x3462A9C VA: 0x3462A9C
	public void ClearBackendResponse() { }

	[CanBeNull]
	// RVA: 0x3462ACC Offset: 0x3462ACC VA: 0x3462ACC
	public NoAdsOfferResponse GetCachedResponse() { }

	// RVA: 0x3462AE8 Offset: 0x3462AE8 VA: 0x3462AE8 Slot: 7
	public void DeleteData() { }

	// RVA: 0x3462BB4 Offset: 0x3462BB4 VA: 0x3462BB4
	public void IncreasePopupShownCount() { }

	// RVA: 0x3462BF8 Offset: 0x3462BF8 VA: 0x3462BF8
	public DateTime GetLastUsedTime() { }

	// RVA: 0x3462C14 Offset: 0x3462C14 VA: 0x3462C14
	public void SetLastPopupShownTime(DateTime time) { }

	// RVA: 0x3462C38 Offset: 0x3462C38 VA: 0x3462C38
	public void ResetPopupShownCount(DateTime now) { }

	// RVA: 0x3462C60 Offset: 0x3462C60 VA: 0x3462C60
	public NoAdsOfferModel GetModel() { }

	// RVA: 0x3462C68 Offset: 0x3462C68 VA: 0x3462C68
	public int GetSessionPopupShowCount() { }

	// RVA: 0x3462C70 Offset: 0x3462C70 VA: 0x3462C70
	public int GetLifetimePopupShowCount() { }
}

// Namespace: Modules.Contexts.Home.Monetization.NoAdsOffer.Scripts