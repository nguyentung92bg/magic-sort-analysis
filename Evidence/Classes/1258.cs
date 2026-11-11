public class InitializeReturnToHomeFailDailyCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1258
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x214EECC Offset: 0x214EECC VA: 0x214EECC Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x214EED4 Offset: 0x214EED4 VA: 0x214EED4 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x214EEDC Offset: 0x214EEDC VA: 0x214EEDC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x214EEE4 Offset: 0x214EEE4 VA: 0x214EEE4
	private void set_IsShowed(bool value) { }

	// RVA: 0x214EEF0 Offset: 0x214EEF0 VA: 0x214EEF0 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x214EEF8 Offset: 0x214EEF8 VA: 0x214EEF8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x214EF00 Offset: 0x214EF00 VA: 0x214EF00 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x214EF08 Offset: 0x214EF08 VA: 0x214EF08 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x214EF9C Offset: 0x214EF9C VA: 0x214EF9C
	private void PrepareHomeUi() { }

	// RVA: 0x214F0E0 Offset: 0x214F0E0 VA: 0x214F0E0 Slot: 11
	public void Dispose() { }

	// RVA: 0x214F0E4 Offset: 0x214F0E4 VA: 0x214F0E4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]