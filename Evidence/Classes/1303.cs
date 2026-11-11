public class ShowHomePlayButtonAnimationCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1303
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private CancellationToken _cancellationToken; // 0x18
	private Sequence _sequence; // 0x20
	private TryPlayMagicStreakGaeProgressBarAnimationOnLobbyReturnCommand _gaeAnimationsCommand; // 0x28

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x1F08014 Offset: 0x1F08014 VA: 0x1F08014 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x1F0801C Offset: 0x1F0801C VA: 0x1F0801C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x1F08024 Offset: 0x1F08024 VA: 0x1F08024 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x1F0802C Offset: 0x1F0802C VA: 0x1F0802C
	private void set_IsShowed(bool value) { }

	// RVA: 0x1F08038 Offset: 0x1F08038 VA: 0x1F08038
	public void .ctor(TryPlayMagicStreakGaeProgressBarAnimationOnLobbyReturnCommand tryPlayMagicStreakGaeProgressBarAnimationOnLobbyReturnCommand) { }

	// RVA: 0x1F08068 Offset: 0x1F08068 VA: 0x1F08068 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x1F0808C Offset: 0x1F0808C VA: 0x1F0808C Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x1F08094 Offset: 0x1F08094 VA: 0x1F08094 Slot: 5
	public bool IsSkippable() { }

	[AsyncStateMachine(typeof(ShowHomePlayButtonAnimationCommand.<ExecuteAsync>d__15))]
	// RVA: 0x1F0809C Offset: 0x1F0809C VA: 0x1F0809C Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x1F08188 Offset: 0x1F08188 VA: 0x1F08188 Slot: 11
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]