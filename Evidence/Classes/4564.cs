public class CollectionStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 4564
{
	// Fields
	private CollectionStateType _lastState; // 0x10
	private IPlayerService _playerService; // 0x18
	private RemoteConfigs _remoteConfigs; // 0x20
	private CollectionService _service; // 0x28
	private CollectionDataService _dataService; // 0x30

	// Methods

	// RVA: 0x3774F94 Offset: 0x3774F94 VA: 0x3774F94
	public void .ctor(IPlayerService playerService, RemoteConfigs remoteConfigs, CollectionService service, CollectionDataService dataService) { }

	// RVA: 0x3775008 Offset: 0x3775008 VA: 0x3775008 Slot: 4
	public void Initialize() { }

	// RVA: 0x377508C Offset: 0x377508C VA: 0x377508C Slot: 5
	public void Dispose() { }

	// RVA: 0x3775090 Offset: 0x3775090 VA: 0x3775090
	private CollectionStateType GetEventState() { }

	// RVA: 0x3775298 Offset: 0x3775298 VA: 0x3775298
	private CollectionConfigModel GetConfig() { }

	// RVA: 0x376C30C Offset: 0x376C30C VA: 0x376C30C
	public bool ShouldFetchCurrentEvent() { }

	// RVA: 0x376C604 Offset: 0x376C604 VA: 0x376C604
	public bool IsInProgress() { }

	// RVA: 0x376C738 Offset: 0x376C738 VA: 0x376C738
	public bool IsNotIntroduced() { }

	// RVA: 0x376C780 Offset: 0x376C780 VA: 0x376C780
	public bool IsTimeUp() { }

	// RVA: 0x376C634 Offset: 0x376C634 VA: 0x376C634
	public bool IsEligible() { }

	// RVA: 0x376C6F8 Offset: 0x376C6F8 VA: 0x376C6F8
	public bool IsEventEnabled() { }

	// RVA: 0x376FB3C Offset: 0x376FB3C VA: 0x376FB3C
	public bool IsClaimed() { }

	// RVA: 0x3773EE0 Offset: 0x3773EE0 VA: 0x3773EE0
	public bool IsAvailableForWheelOfFortune() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI
[CreateAssetMenu(fileName = "CollectionAnimationConfig", menuName = "Configs/Collection Animation Config")]