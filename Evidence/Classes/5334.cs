public class TryShowBannedCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 5334
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private BanService _banService; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1B5DABC Offset: 0x1B5DABC VA: 0x1B5DABC Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x1B5DAC4 Offset: 0x1B5DAC4 VA: 0x1B5DAC4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1B5DACC Offset: 0x1B5DACC VA: 0x1B5DACC
	private void set_IsShowed(bool value) { }

	// RVA: 0x1B5DAD8 Offset: 0x1B5DAD8 VA: 0x1B5DAD8 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowBannedCommand.<ExecuteAsync>d__9))]
	// RVA: 0x1B5DBA0 Offset: 0x1B5DBA0 VA: 0x1B5DBA0 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x1B5DC8C Offset: 0x1B5DC8C VA: 0x1B5DC8C Slot: 10
	public void Dispose() { }

	// RVA: 0x1B5DC90 Offset: 0x1B5DC90 VA: 0x1B5DC90 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x1B5DC98 Offset: 0x1B5DC98 VA: 0x1B5DC98 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1B5DCA0 Offset: 0x1B5DCA0 VA: 0x1B5DCA0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.Ads.Scripts
[Serializable]