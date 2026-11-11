public class TryShowSoftUpdateCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4947
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private UpdateService _updateService; // 0x18
	private IPopUpService _popUpService; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3E25848 Offset: 0x3E25848 VA: 0x3E25848 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3E25850 Offset: 0x3E25850 VA: 0x3E25850 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3E25858 Offset: 0x3E25858 VA: 0x3E25858 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3E25860 Offset: 0x3E25860 VA: 0x3E25860
	private void set_IsShowed(bool value) { }

	// RVA: 0x3E2586C Offset: 0x3E2586C VA: 0x3E2586C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowSoftUpdateCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3E25934 Offset: 0x3E25934 VA: 0x3E25934 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3E25A20 Offset: 0x3E25A20 VA: 0x3E25A20 Slot: 11
	public void Dispose() { }

	// RVA: 0x3E25A24 Offset: 0x3E25A24 VA: 0x3E25A24 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3E25A94 Offset: 0x3E25A94 VA: 0x3E25A94 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3E25A9C Offset: 0x3E25A9C VA: 0x3E25A9C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application