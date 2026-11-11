public class TryShowForceNameChangeCommand : IReturnToHomeSequenceCommand, ICommand, IHomeWelcomingSequenceCommand // TypeDefIndex: 2983
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private SyncService _syncService; // 0x18
	private bool _isSkippable; // 0x20

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x2AE4978 Offset: 0x2AE4978 VA: 0x2AE4978 Slot: 15
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x2AE4980 Offset: 0x2AE4980 VA: 0x2AE4980 Slot: 16
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x2AE4988 Offset: 0x2AE4988 VA: 0x2AE4988
	private void set_IsShowed(bool value) { }

	// RVA: 0x2AE4994 Offset: 0x2AE4994 VA: 0x2AE4994 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x2AE499C Offset: 0x2AE499C VA: 0x2AE499C Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x2AE49A0 Offset: 0x2AE49A0 VA: 0x2AE49A0 Slot: 12
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowForceNameChangeCommand.<ExecuteAsync>d__12))]
	// RVA: 0x2AE4A4C Offset: 0x2AE4A4C VA: 0x2AE4A4C Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryShowForceNameChangeCommand.<Open>d__13))]
	// RVA: 0x2AE4B38 Offset: 0x2AE4B38 VA: 0x2AE4B38
	private Task Open() { }

	// RVA: 0x2AE4C08 Offset: 0x2AE4C08 VA: 0x2AE4C08 Slot: 13
	public bool IsSkippable() { }

	// RVA: 0x2AE4C10 Offset: 0x2AE4C10 VA: 0x2AE4C10 Slot: 14
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x2AE4C18 Offset: 0x2AE4C18 VA: 0x2AE4C18 Slot: 11
	public void Dispose() { }

	// RVA: 0x2AE4C1C Offset: 0x2AE4C1C VA: 0x2AE4C1C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Profile.Scripts