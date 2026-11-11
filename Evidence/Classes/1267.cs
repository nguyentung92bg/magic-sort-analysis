public class PlayJourneyAnimationsCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1267
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private LevelAndLevelConfigModel _lastWinLevelAndLevelConfigModel; // 0x18
	private CancellationToken _cancellationToken; // 0x20
	private JourneyService _journeyService; // 0x28
	private IPlayerService _playerService; // 0x30

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x214FEC8 Offset: 0x214FEC8 VA: 0x214FEC8 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x214FED0 Offset: 0x214FED0 VA: 0x214FED0 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x214FED8 Offset: 0x214FED8 VA: 0x214FED8 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x214FEE0 Offset: 0x214FEE0 VA: 0x214FEE0
	private void set_IsShowed(bool value) { }

	// RVA: 0x214FEEC Offset: 0x214FEEC VA: 0x214FEEC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x214FFEC Offset: 0x214FFEC VA: 0x214FFEC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x214FFF4 Offset: 0x214FFF4 VA: 0x214FFF4 Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(PlayJourneyAnimationsCommand.<ExecuteAsync>d__15))]
	// RVA: 0x21500E4 Offset: 0x21500E4 VA: 0x21500E4 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(PlayJourneyAnimationsCommand.<PlayJourneyRewards>d__16))]
	// RVA: 0x21501D0 Offset: 0x21501D0 VA: 0x21501D0
	private Task PlayJourneyRewards() { }

	// RVA: 0x21502BC Offset: 0x21502BC VA: 0x21502BC Slot: 11
	public void Dispose() { }

	// RVA: 0x21502C0 Offset: 0x21502C0 VA: 0x21502C0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]