public class TryPlayMagicBottleCongratsCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4062
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private MagicBottleService _magicBottleService; // 0x18
	private LevelAndLevelConfigModel _lastWinLevelAndLevelConfigModel; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3761C00 Offset: 0x3761C00 VA: 0x3761C00 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3761C08 Offset: 0x3761C08 VA: 0x3761C08 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3761C10 Offset: 0x3761C10 VA: 0x3761C10 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3761C18 Offset: 0x3761C18 VA: 0x3761C18
	private void set_IsShowed(bool value) { }

	// RVA: 0x3761C24 Offset: 0x3761C24 VA: 0x3761C24 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x3761CC8 Offset: 0x3761CC8 VA: 0x3761CC8 Slot: 11
	public void Dispose() { }

	// RVA: 0x3761CCC Offset: 0x3761CCC VA: 0x3761CCC
	private bool ShouldOpenCongratsPopup() { }

	[AsyncStateMachine(typeof(TryPlayMagicBottleCongratsCommand.<ExecuteAsync>d__13))]
	// RVA: 0x3761D00 Offset: 0x3761D00 VA: 0x3761D00 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryPlayMagicBottleCongratsCommand.<PlayMagicBottleCongrats>d__14))]
	// RVA: 0x3761DEC Offset: 0x3761DEC VA: 0x3761DEC
	private Task PlayMagicBottleCongrats() { }

	// RVA: 0x3761ED8 Offset: 0x3761ED8 VA: 0x3761ED8 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3761EF0 Offset: 0x3761EF0 VA: 0x3761EF0 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3761EF8 Offset: 0x3761EF8 VA: 0x3761EF8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]