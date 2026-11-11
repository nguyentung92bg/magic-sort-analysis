public class TryPlayMagicStreakGaeTutorialCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3890
{
	// Fields
	[CompilerGenerated]
	private readonly bool <IsShowed>k__BackingField; // 0x10
	private MagicStreakGaeService _magicStreakGaeService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; }

	// Methods

	// RVA: 0x3D00400 Offset: 0x3D00400 VA: 0x3D00400 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x3D00408 Offset: 0x3D00408 VA: 0x3D00408 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3D00410 Offset: 0x3D00410 VA: 0x3D00410 Slot: 8
	public bool get_IsShowed() { }

	// RVA: 0x3D00418 Offset: 0x3D00418 VA: 0x3D00418 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x3D0041C Offset: 0x3D0041C VA: 0x3D0041C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3D004E4 Offset: 0x3D004E4 VA: 0x3D004E4 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(TryPlayMagicStreakGaeTutorialCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3D004EC Offset: 0x3D004EC VA: 0x3D004EC Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryPlayMagicStreakGaeTutorialCommand.<TryForceOpenPopUp>d__12))]
	// RVA: 0x3D005D8 Offset: 0x3D005D8 VA: 0x3D005D8
	private Task<bool> TryForceOpenPopUp() { }

	// RVA: 0x3D006F0 Offset: 0x3D006F0 VA: 0x3D006F0 Slot: 11
	public void Dispose() { }

	// RVA: 0x3D006F4 Offset: 0x3D006F4 VA: 0x3D006F4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts
[Serializable]