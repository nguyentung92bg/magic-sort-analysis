public class InitializeReturnToHomeWinDailyCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1261
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x214F650 Offset: 0x214F650 VA: 0x214F650 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x214F658 Offset: 0x214F658 VA: 0x214F658 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x214F660 Offset: 0x214F660 VA: 0x214F660 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x214F668 Offset: 0x214F668 VA: 0x214F668
	private void set_IsShowed(bool value) { }

	// RVA: 0x214F674 Offset: 0x214F674 VA: 0x214F674 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x214F67C Offset: 0x214F67C VA: 0x214F67C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x214F684 Offset: 0x214F684 VA: 0x214F684 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x214F68C Offset: 0x214F68C VA: 0x214F68C Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x214F720 Offset: 0x214F720 VA: 0x214F720
	private void PrepareHomeUi() { }

	// RVA: 0x214F864 Offset: 0x214F864 VA: 0x214F864 Slot: 11
	public void Dispose() { }

	// RVA: 0x214F868 Offset: 0x214F868 VA: 0x214F868
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]