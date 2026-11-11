public class TryShowChampionsLeagueJoinPopupCommand : IReturnToHomeSequenceCommand, ICommand // TypeDefIndex: 4708
{
	// Fields
	private ChampionsLeagueService _championsLeagueService; // 0x10
	[CompilerGenerated]
	private bool <IsShowed>k__BackingField; // 0x18

	// Properties
	public bool ShouldShowForce { get; }
	public bool IsShowed { get; set; }
	public bool IsShowPopup { get; }

	// Methods

	// RVA: 0x3B260B8 Offset: 0x3B260B8 VA: 0x3B260B8 Slot: 4
	public void Initialize(CancellationToken cancellationToken, LevelAndLevelConfigModel lastWinLevelAndLevelConfigModel) { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueJoinPopupCommand.<ExecuteAsync>d__2))]
	// RVA: 0x3B2613C Offset: 0x3B2613C VA: 0x3B2613C Slot: 10
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueJoinPopupCommand.<Open>d__3))]
	// RVA: 0x3B26228 Offset: 0x3B26228 VA: 0x3B26228
	private Task Open() { }

	// RVA: 0x3B26318 Offset: 0x3B26318 VA: 0x3B26318
	private bool CanShowPopup() { }

	// RVA: 0x3B26368 Offset: 0x3B26368 VA: 0x3B26368 Slot: 11
	public void Dispose() { }

	// RVA: 0x3B2636C Offset: 0x3B2636C VA: 0x3B2636C Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3B26384 Offset: 0x3B26384 VA: 0x3B26384 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3B2638C Offset: 0x3B2638C VA: 0x3B2638C Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3B26394 Offset: 0x3B26394 VA: 0x3B26394 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3B2639C Offset: 0x3B2639C VA: 0x3B2639C
	private void set_IsShowed(bool value) { }

	// RVA: 0x3B263A8 Offset: 0x3B263A8 VA: 0x3B263A8 Slot: 9
	public bool get_IsShowPopup() { }

	// RVA: 0x3B263B0 Offset: 0x3B263B0 VA: 0x3B263B0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.Services