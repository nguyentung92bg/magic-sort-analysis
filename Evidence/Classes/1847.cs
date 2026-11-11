public class TryShowWindQuestPopupCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1847
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private WindQuestService _windQuestService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x2DA0870 Offset: 0x2DA0870 VA: 0x2DA0870 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2DA0890 Offset: 0x2DA0890 VA: 0x2DA0890 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2DA0898 Offset: 0x2DA0898 VA: 0x2DA0898
	private void set_IsShowed(bool value) { }

	// RVA: 0x2DA08A4 Offset: 0x2DA08A4 VA: 0x2DA08A4 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x2DA08AC Offset: 0x2DA08AC VA: 0x2DA08AC Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowWindQuestPopupCommand.<ExecuteAsync>d__10))]
	// RVA: 0x2DA0934 Offset: 0x2DA0934 VA: 0x2DA0934 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2DA0A20 Offset: 0x2DA0A20 VA: 0x2DA0A20 Slot: 11
	public void Dispose() { }

	// RVA: 0x2DA0A24 Offset: 0x2DA0A24 VA: 0x2DA0A24 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2DA0A3C Offset: 0x2DA0A3C VA: 0x2DA0A3C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2DA0A44 Offset: 0x2DA0A44 VA: 0x2DA0A44
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune
[Serializable]