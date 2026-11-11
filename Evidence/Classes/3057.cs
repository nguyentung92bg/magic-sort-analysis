public class TryShowWelcomeBackReturnToHomeCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 3057
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10
	private WelcomeBackService _welcomeBackService; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x3160864 Offset: 0x3160864 VA: 0x3160864 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x316086C Offset: 0x316086C VA: 0x316086C Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x3160874 Offset: 0x3160874 VA: 0x3160874 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x316087C Offset: 0x316087C VA: 0x316087C
	private void set_IsShowed(bool value) { }

	// RVA: 0x3160888 Offset: 0x3160888 VA: 0x3160888 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x3160914 Offset: 0x3160914 VA: 0x3160914 Slot: 11
	public void Dispose() { }

	[AsyncStateMachine(typeof(TryShowWelcomeBackReturnToHomeCommand.<ExecuteAsync>d__11))]
	// RVA: 0x3160918 Offset: 0x3160918 VA: 0x3160918 Slot: 10
	public Task ExecuteAsync() { }

	// RVA: 0x3160A04 Offset: 0x3160A04 VA: 0x3160A04 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3160A30 Offset: 0x3160A30 VA: 0x3160A30 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3160A38 Offset: 0x3160A38 VA: 0x3160A38
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.WebShop.Scripts