public class PawTouchOfferStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3415
{
	// Fields
	private const int MaxCoinAmountToShow = 2000;
	[CompilerGenerated]
	private readonly PawTouchOfferService <Service>k__BackingField; // 0x10
	private readonly IPlayerService _playerService; // 0x18
	private readonly InventoryService _inventoryService; // 0x20
	private PawTouchOfferStateService.PawTouchOfferState _lastState; // 0x28

	// Properties
	private PawTouchOfferService Service { get; }
	private PawTouchOfferDataService DataService { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3474320 Offset: 0x3474320 VA: 0x3474320
	private PawTouchOfferService get_Service() { }

	// RVA: 0x3474328 Offset: 0x3474328 VA: 0x3474328
	private PawTouchOfferDataService get_DataService() { }

	// RVA: 0x3474344 Offset: 0x3474344 VA: 0x3474344
	public void .ctor(PawTouchOfferService service, IPlayerService playerService, InventoryService inventoryService) { }

	// RVA: 0x34743A4 Offset: 0x34743A4 VA: 0x34743A4 Slot: 4
	public void Initialize() { }

	// RVA: 0x34743A8 Offset: 0x34743A8 VA: 0x34743A8 Slot: 5
	public void Dispose() { }

	// RVA: 0x3472E18 Offset: 0x3472E18 VA: 0x3472E18
	public void UpdateState() { }

	// RVA: 0x34743AC Offset: 0x34743AC VA: 0x34743AC
	private PawTouchOfferStateService.PawTouchOfferState GetState() { }

	// RVA: 0x3474554 Offset: 0x3474554 VA: 0x3474554
	private PawTouchOfferStateService.PawTouchOfferContainerState GetContainerState() { }

	// RVA: 0x347429C Offset: 0x347429C VA: 0x347429C
	public bool ShouldSendGetRequest() { }

	// RVA: 0x34745A8 Offset: 0x34745A8 VA: 0x34745A8
	public bool ShouldShowPlayOnContainer() { }

	// RVA: 0x34737B8 Offset: 0x34737B8 VA: 0x34737B8
	public bool CanPurchaseOffer() { }

	// RVA: 0x3473DEC Offset: 0x3473DEC VA: 0x3473DEC
	public bool ShouldSendClaimRequest() { }
}

// Namespace: 
[CompilerGenerated]