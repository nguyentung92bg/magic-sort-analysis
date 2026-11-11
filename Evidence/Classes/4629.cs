public class TryShowCollectionActivationCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4629
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	[CompilerGenerated]
	private readonly bool <IsShowPopup>k__BackingField; // 0x11
	private CollectionService _service; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x3A70A34 Offset: 0x3A70A34 VA: 0x3A70A34 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3A70A3C Offset: 0x3A70A3C VA: 0x3A70A3C Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3A70A44 Offset: 0x3A70A44 VA: 0x3A70A44
	private void set_IsShowed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3A70A50 Offset: 0x3A70A50 VA: 0x3A70A50 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x3A70A58 Offset: 0x3A70A58 VA: 0x3A70A58 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x3A70AE4 Offset: 0x3A70AE4 VA: 0x3A70AE4 Slot: 11
	public void Dispose() { }

	// RVA: 0x3A70AE8 Offset: 0x3A70AE8 VA: 0x3A70AE8 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3A70B10 Offset: 0x3A70B10 VA: 0x3A70B10 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryShowCollectionActivationCommand.<ExecuteAsync>d__14))]
	// RVA: 0x3A70B18 Offset: 0x3A70B18 VA: 0x3A70B18 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3A70C08 Offset: 0x3A70C08 VA: 0x3A70C08
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague