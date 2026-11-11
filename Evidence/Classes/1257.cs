public class InitializeReturnToHomeCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1257
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x214EC3C Offset: 0x214EC3C VA: 0x214EC3C Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x214EC44 Offset: 0x214EC44 VA: 0x214EC44 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x214EC4C Offset: 0x214EC4C VA: 0x214EC4C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x214EC54 Offset: 0x214EC54 VA: 0x214EC54
	private void set_IsShowed(bool value) { }

	// RVA: 0x214EC60 Offset: 0x214EC60 VA: 0x214EC60 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x214EC68 Offset: 0x214EC68 VA: 0x214EC68 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x214EC70 Offset: 0x214EC70 VA: 0x214EC70 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x214ED70 Offset: 0x214ED70 VA: 0x214ED70
	private void PrepareHomeUi() { }

	// RVA: 0x214EEB8 Offset: 0x214EEB8 VA: 0x214EEB8 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x214EEC0 Offset: 0x214EEC0 VA: 0x214EEC0 Slot: 11
	public void Dispose() { }

	// RVA: 0x214EEC4 Offset: 0x214EEC4 VA: 0x214EEC4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts