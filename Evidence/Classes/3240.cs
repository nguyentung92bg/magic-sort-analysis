public class TryShowTreasureDrillCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3240
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private TreasureDrillService _treasureDrillService; // 0x18
	private bool _isSkippable; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3589AD0 Offset: 0x3589AD0 VA: 0x3589AD0 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3589AD8 Offset: 0x3589AD8 VA: 0x3589AD8 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3589AE0 Offset: 0x3589AE0 VA: 0x3589AE0 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3589AE8 Offset: 0x3589AE8 VA: 0x3589AE8
	private void set_IsShowed(bool value) { }

	// RVA: 0x3589AF4 Offset: 0x3589AF4 VA: 0x3589AF4 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowTreasureDrillCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3589BBC Offset: 0x3589BBC VA: 0x3589BBC Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3589BA0 Offset: 0x3589BA0 VA: 0x3589BA0
	private bool ShouldShow() { }

	// RVA: 0x3589CA8 Offset: 0x3589CA8 VA: 0x3589CA8 Slot: 11
	public void Dispose() { }

	// RVA: 0x3589CAC Offset: 0x3589CAC VA: 0x3589CAC Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3589CB4 Offset: 0x3589CB4 VA: 0x3589CB4 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3589CBC Offset: 0x3589CBC VA: 0x3589CBC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.OnePlusFreeOffer.Scripts
[Serializable]