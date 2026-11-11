public class HomeWelcomingSequenceCommand : ICommand, IHomeIdleInterrupter // TypeDefIndex: 1254
{
	// Fields
	private bool _isExecutionInProgress; // 0x10
	private readonly RemoteConfigs _remoteConfigs; // 0x18
	private readonly List<IHomeWelcomingSequenceCommand> _sequenceCommands; // 0x20
	private CancellationTokenSource _cancellationTokenSource; // 0x28

	// Properties
	private bool IsPopupLimitAbEnabled { get; }

	// Methods

	// RVA: 0x214CB74 Offset: 0x214CB74 VA: 0x214CB74
	private bool get_IsPopupLimitAbEnabled() { }

	// RVA: 0x214CBA0 Offset: 0x214CBA0 VA: 0x214CBA0
	public void .ctor() { }

	[AsyncStateMachine(typeof(HomeWelcomingSequenceCommand.<ExecuteAsync>d__7))]
	// RVA: 0x214DC40 Offset: 0x214DC40 VA: 0x214DC40 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x214DD30 Offset: 0x214DD30 VA: 0x214DD30
	private bool AreRemainingCommandsSkippable(int startIndex) { }

	// RVA: 0x214DE40 Offset: 0x214DE40 VA: 0x214DE40
	private void CancelSequence() { }

	// RVA: 0x214DF28 Offset: 0x214DF28 VA: 0x214DF28
	private void DisposeCommands() { }

	// RVA: 0x214E0DC Offset: 0x214E0DC VA: 0x214E0DC Slot: 5
	public void Dispose() { }

	// RVA: 0x214E0E0 Offset: 0x214E0E0 VA: 0x214E0E0 Slot: 6
	public bool IsInterrupting() { }
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts