public class TryShowRateUsCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1297
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F069A8 Offset: 0x1F069A8 VA: 0x1F069A8 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F069B0 Offset: 0x1F069B0 VA: 0x1F069B0 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F069B8 Offset: 0x1F069B8 VA: 0x1F069B8 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F069C0 Offset: 0x1F069C0 VA: 0x1F069C0
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F069CC Offset: 0x1F069CC VA: 0x1F069CC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F069D4 Offset: 0x1F069D4 VA: 0x1F069D4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1F06A5C Offset: 0x1F06A5C VA: 0x1F06A5C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowRateUsCommand.<ExecuteAsync>d__11))]
	// RVA: 0x1F06A64 Offset: 0x1F06A64 VA: 0x1F06A64 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryShowRateUsCommand.<TryShowRateUsPopup>d__12))]
	// RVA: 0x1F06B50 Offset: 0x1F06B50 VA: 0x1F06B50
	private Task TryShowRateUsPopup() { }

	// RVA: 0x1F06C3C Offset: 0x1F06C3C VA: 0x1F06C3C Slot: 11
	public void Dispose() { }

	// RVA: 0x1F06C40 Offset: 0x1F06C40 VA: 0x1F06C40
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]