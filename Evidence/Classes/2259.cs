public class TryShowTeamsCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 2259
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool IsShowPopup { get; }
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x2F0DA1C Offset: 0x2F0DA1C VA: 0x2F0DA1C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x2F0DA24 Offset: 0x2F0DA24 VA: 0x2F0DA24 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x2F0DA2C Offset: 0x2F0DA2C VA: 0x2F0DA2C Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2F0DA34 Offset: 0x2F0DA34 VA: 0x2F0DA34 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2F0DA3C Offset: 0x2F0DA3C VA: 0x2F0DA3C
	private void set_IsShowed(bool value) { }

	// RVA: 0x2F0DA48 Offset: 0x2F0DA48 VA: 0x2F0DA48 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x2F0DCA0 Offset: 0x2F0DCA0 VA: 0x2F0DCA0 Slot: 11
	public void Dispose() { }

	// RVA: 0x2F0DCA4 Offset: 0x2F0DCA4 VA: 0x2F0DCA4 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x2F0DCAC Offset: 0x2F0DCAC VA: 0x2F0DCAC Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2F0DCB4 Offset: 0x2F0DCB4 VA: 0x2F0DCB4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]