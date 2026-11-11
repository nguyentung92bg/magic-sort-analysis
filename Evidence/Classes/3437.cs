public class CompensationStateService : IRestartableService, IService, IInitializable, IDisposable // TypeDefIndex: 3437
{
	// Fields
	[CompilerGenerated]
	private readonly CompensationService <Service>k__BackingField; // 0x10
	private CompensationStateService.CompensationState _lastState; // 0x18

	// Properties
	private CompensationService Service { get; }
	private CompensationDataService DataService { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x20AAB88 Offset: 0x20AAB88 VA: 0x20AAB88
	private CompensationService get_Service() { }

	// RVA: 0x20AAB90 Offset: 0x20AAB90 VA: 0x20AAB90
	private CompensationDataService get_DataService() { }

	// RVA: 0x20AABAC Offset: 0x20AABAC VA: 0x20AABAC
	public void .ctor(CompensationService service) { }

	// RVA: 0x20AABDC Offset: 0x20AABDC VA: 0x20AABDC Slot: 4
	public void Initialize() { }

	// RVA: 0x20AABE0 Offset: 0x20AABE0 VA: 0x20AABE0 Slot: 5
	public void Dispose() { }

	// RVA: 0x20A9CC4 Offset: 0x20A9CC4 VA: 0x20A9CC4
	public void UpdateState() { }

	// RVA: 0x20AABE4 Offset: 0x20AABE4 VA: 0x20AABE4
	private CompensationStateService.CompensationState GetState() { }

	// RVA: 0x20A9CAC Offset: 0x20A9CAC VA: 0x20A9CAC
	public bool CanClaimReward() { }

	// RVA: 0x20AAC14 Offset: 0x20AAC14 VA: 0x20AAC14
	public bool ShouldShowPopup() { }
}

// Namespace: 
[CompilerGenerated]