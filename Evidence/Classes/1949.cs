public class TryShowWheelOfFortuneCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1949
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private WheelOfFortuneService _wheelOfFortuneService; // 0x18
	private readonly ReturnToHomeSequenceService _returnHomeService; // 0x20
	private bool _isSkippable; // 0x28

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x31AB39C Offset: 0x31AB39C VA: 0x31AB39C Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x31AB3A4 Offset: 0x31AB3A4 VA: 0x31AB3A4 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x31AB3AC Offset: 0x31AB3AC VA: 0x31AB3AC
	private void set_IsShowed(bool value) { }

	// RVA: 0x31AB3B8 Offset: 0x31AB3B8 VA: 0x31AB3B8 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x31AB3C0 Offset: 0x31AB3C0 VA: 0x31AB3C0
	public void .ctor(ReturnToHomeSequenceService returnHomeService) { }

	[AsyncStateMachine(typeof(TryShowWheelOfFortuneCommand.<ExecuteAsync>d__12))]
	// RVA: 0x31AB3F0 Offset: 0x31AB3F0 VA: 0x31AB3F0 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x31AB4DC Offset: 0x31AB4DC VA: 0x31AB4DC Slot: 11
	public void Dispose() { }

	// RVA: 0x31AB4E0 Offset: 0x31AB4E0 VA: 0x31AB4E0 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x31AB5A8 Offset: 0x31AB5A8 VA: 0x31AB5A8 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x31AB5B0 Offset: 0x31AB5B0 VA: 0x31AB5B0 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x31AB58C Offset: 0x31AB58C VA: 0x31AB58C
	private bool ShouldShow() { }
}

// Namespace: 
[CompilerGenerated]