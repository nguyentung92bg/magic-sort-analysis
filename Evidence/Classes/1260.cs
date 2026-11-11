public class InitializeReturnToHomeForLevelQuitCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1260
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x214F0EC Offset: 0x214F0EC VA: 0x214F0EC Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x214F0F4 Offset: 0x214F0F4 VA: 0x214F0F4 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x214F0FC Offset: 0x214F0FC VA: 0x214F0FC Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x214F104 Offset: 0x214F104 VA: 0x214F104
	private void set_IsShowed(bool value) { }

	// RVA: 0x214F110 Offset: 0x214F110 VA: 0x214F110 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x214F118 Offset: 0x214F118 VA: 0x214F118 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(InitializeReturnToHomeForLevelQuitCommand.<ExecuteAsync>d__10))]
	// RVA: 0x214F120 Offset: 0x214F120 VA: 0x214F120 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x214F20C Offset: 0x214F20C VA: 0x214F20C
	private void PrepareHomeUi() { }

	// RVA: 0x214F350 Offset: 0x214F350 VA: 0x214F350 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x214F358 Offset: 0x214F358 VA: 0x214F358 Slot: 11
	public void Dispose() { }

	// RVA: 0x214F35C Offset: 0x214F35C VA: 0x214F35C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts