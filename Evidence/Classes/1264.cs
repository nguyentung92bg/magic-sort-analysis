public class OpenHomePageCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 1264
{
	// Fields
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x10

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowPopup { get; }
	public bool IsShowed { get; set; }

	// Methods

	// RVA: 0x214F870 Offset: 0x214F870 VA: 0x214F870 Slot: 7
	public bool get_ShouldShowForce() { }

	// RVA: 0x214F878 Offset: 0x214F878 VA: 0x214F878 Slot: 9
	public bool get_IsShowPopup() { }

	[CompilerGenerated]
	// RVA: 0x214F880 Offset: 0x214F880 VA: 0x214F880 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x214F888 Offset: 0x214F888 VA: 0x214F888
	private void set_IsShowed(bool value) { }

	// RVA: 0x214F894 Offset: 0x214F894 VA: 0x214F894 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	// RVA: 0x214F89C Offset: 0x214F89C VA: 0x214F89C Slot: 11
	public void Dispose() { }

	// RVA: 0x214F8A0 Offset: 0x214F8A0 VA: 0x214F8A0 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x214F8A8 Offset: 0x214F8A8 VA: 0x214F8A8 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	[AsyncStateMachine(typeof(OpenHomePageCommand.<ExecuteAsync>d__12))]
	// RVA: 0x214F8B0 Offset: 0x214F8B0 VA: 0x214F8B0 Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(OpenHomePageCommand.<OpenHomePage>d__13))]
	// RVA: 0x214F99C Offset: 0x214F99C VA: 0x214F99C
	private Task OpenHomePage() { }

	// RVA: 0x214FA88 Offset: 0x214FA88 VA: 0x214FA88
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]