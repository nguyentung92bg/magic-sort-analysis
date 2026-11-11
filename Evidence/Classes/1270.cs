public class ReturnToHomeSequenceService : IService, IInitializable, IDisposable, IHomeIdleInterrupter // TypeDefIndex: 1270
{
	// Fields
	private bool _isExecutionInProgress; // 0x10
	private bool _isLevelWin; // 0x11
	private CancellationTokenSource _cancellationTokenSource; // 0x18
	private LevelAndLevelConfigModel _lastLevelAndLevelConfigModel; // 0x20
	private List<IReturnToHomeSequenceCommand> _regularWinSequenceCommands; // 0x28
	private List<IReturnToHomeSequenceCommand> _regularLoseSequenceCommands; // 0x30
	private List<IReturnToHomeSequenceCommand> _dailyWinSequenceCommands; // 0x38
	private List<IReturnToHomeSequenceCommand> _dailyLoseSequenceCommands; // 0x40
	private readonly RemoteConfigs _remoteConfigs; // 0x48
	private JourneyService _journeyService; // 0x50

	// Properties
	public bool IsPopupLimitAbEnabled { get; }

	// Methods

	// RVA: 0x2151204 Offset: 0x2151204 VA: 0x2151204
	public bool get_IsPopupLimitAbEnabled() { }

	// RVA: 0x2151230 Offset: 0x2151230 VA: 0x2151230
	public void .ctor(RemoteConfigs remoteConfigs, JourneyService journeyService) { }

	// RVA: 0x2151274 Offset: 0x2151274 VA: 0x2151274 Slot: 4
	public void Initialize() { }

	// RVA: 0x2154280 Offset: 0x2154280 VA: 0x2154280
	public void LevelWin(LevelAndLevelConfigModel levelAndLevelConfigModel) { }

	// RVA: 0x2154290 Offset: 0x2154290 VA: 0x2154290
	public void LevelLoseOrQuit(LevelAndLevelConfigModel levelAndLevelConfigModel) { }

	// RVA: 0x215429C Offset: 0x215429C VA: 0x215429C
	private void CancelSequence() { }

	// RVA: 0x2154650 Offset: 0x2154650 VA: 0x2154650
	private List<IReturnToHomeSequenceCommand> SelectReturnToHomeSequence() { }

	[AsyncStateMachine(typeof(ReturnToHomeSequenceService.<Execute>d__18))]
	// RVA: 0x215469C Offset: 0x215469C VA: 0x215469C
	public void Execute() { }

	[AsyncStateMachine(typeof(ReturnToHomeSequenceService.<ExecuteAsync>d__19))]
	// RVA: 0x2154754 Offset: 0x2154754 VA: 0x2154754
	private Task ExecuteAsync(List<IReturnToHomeSequenceCommand> sequenceCommands) { }

	// RVA: 0x2154858 Offset: 0x2154858 VA: 0x2154858
	private bool AreRemainingCommandsSkippable(int startIndex, List<IReturnToHomeSequenceCommand> sequenceCommands) { }

	// RVA: 0x2154384 Offset: 0x2154384 VA: 0x2154384
	private void DisposeCommands() { }

	// RVA: 0x215496C Offset: 0x215496C VA: 0x215496C Slot: 5
	public void Dispose() { }

	// RVA: 0x2154970 Offset: 0x2154970 VA: 0x2154970 Slot: 6
	public bool IsInterrupting() { }
}

// Namespace: 
[CompilerGenerated]