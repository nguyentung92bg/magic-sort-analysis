public class TryShowDuckFestivalPopUpCommand : IHomeWelcomingSequenceCommand, ICommand, IReturnToHomeSequenceCommand // TypeDefIndex: 4463
{
	// Fields
	private DuckFestivalService _duckFestivalService; // 0x10
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x38CF690 Offset: 0x38CF690 VA: 0x38CF690 Slot: 14
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x38CF6AC Offset: 0x38CF6AC VA: 0x38CF6AC Slot: 15
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x38CF6B4 Offset: 0x38CF6B4 VA: 0x38CF6B4
	private void set_IsShowed(bool value) { }

	// RVA: 0x38CF6C0 Offset: 0x38CF6C0 VA: 0x38CF6C0 Slot: 16
	public bool get_IsShowPopup() { }

	[AsyncStateMachine(typeof(TryShowDuckFestivalPopUpCommand.<ExecuteAsync>d__9))]
	// RVA: 0x38CF6C8 Offset: 0x38CF6C8 VA: 0x38CF6C8 Slot: 9
	public Task ExecuteAsync() { }

	// RVA: 0x38CF7B4 Offset: 0x38CF7B4 VA: 0x38CF7B4 Slot: 10
	public void Dispose() { }

	// RVA: 0x38CF7B8 Offset: 0x38CF7B8 VA: 0x38CF7B8 Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	// RVA: 0x38CF840 Offset: 0x38CF840 VA: 0x38CF840 Slot: 11
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x38CF8C8 Offset: 0x38CF8C8 VA: 0x38CF8C8 Slot: 12
	public bool IsSkippable() { }

	// RVA: 0x38CF8F0 Offset: 0x38CF8F0 VA: 0x38CF8F0 Slot: 13
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x38CF8F8 Offset: 0x38CF8F8 VA: 0x38CF8F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DailyReward.Scripts
[Serializable]