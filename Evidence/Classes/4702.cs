public class TryShowChampionsLeagueLeaderboardPopupClaimHomeWelcomingCommand : IHomeWelcomingSequenceCommand, ICommand // TypeDefIndex: 4702
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

	// RVA: 0x3B2471C Offset: 0x3B2471C VA: 0x3B2471C Slot: 4
	public void Initialize(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueLeaderboardPopupClaimHomeWelcomingCommand.<ExecuteAsync>d__2))]
	// RVA: 0x3B247A0 Offset: 0x3B247A0 VA: 0x3B247A0 Slot: 9
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(TryShowChampionsLeagueLeaderboardPopupClaimHomeWelcomingCommand.<Open>d__3))]
	// RVA: 0x3B2488C Offset: 0x3B2488C VA: 0x3B2488C
	private Task Open() { }

	// RVA: 0x3B2497C Offset: 0x3B2497C VA: 0x3B2497C Slot: 10
	public void Dispose() { }

	// RVA: 0x3B24980 Offset: 0x3B24980 VA: 0x3B24980 Slot: 5
	public bool IsSkippable() { }

	// RVA: 0x3B24988 Offset: 0x3B24988 VA: 0x3B24988 Slot: 6
	public bool ShouldTerminateTheFlow() { }

	// RVA: 0x3B24990 Offset: 0x3B24990 VA: 0x3B24990 Slot: 7
	public bool get_ShouldShowForce() { }

	[CompilerGenerated]
	// RVA: 0x3B24998 Offset: 0x3B24998 VA: 0x3B24998 Slot: 8
	public bool get_IsShowed() { }

	[CompilerGenerated]
	// RVA: 0x3B249A0 Offset: 0x3B249A0 VA: 0x3B249A0
	private void set_IsShowed(bool value) { }

	// RVA: 0x3B249AC Offset: 0x3B249AC VA: 0x3B249AC
	public bool get_IsShowPopup() { }

	// RVA: 0x3B249B4 Offset: 0x3B249B4 VA: 0x3B249B4
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]