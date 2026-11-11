public class ChampionsLeagueAreYouSureContainer : AreYouSureContainer // TypeDefIndex: 4637
{
	// Fields
	[SerializeField]
	private ChampionsLeagueAreYouSureView _areYouSureView; // 0x28
	private ChampionsLeagueService _championsLeagueService; // 0x30

	// Methods

	// RVA: 0x3A71748 Offset: 0x3A71748 VA: 0x3A71748 Slot: 5
	public override void Initialize() { }

	// RVA: 0x3A717CC Offset: 0x3A717CC VA: 0x3A717CC Slot: 6
	public override bool ShouldShow() { }

	[AsyncStateMachine(typeof(ChampionsLeagueAreYouSureContainer.<Show>d__4))]
	// RVA: 0x3A717E8 Offset: 0x3A717E8 VA: 0x3A717E8 Slot: 7
	public override Task<bool> Show() { }

	// RVA: 0x3A718FC Offset: 0x3A718FC VA: 0x3A718FC Slot: 8
	public override void Hide() { }

	// RVA: 0x3A71920 Offset: 0x3A71920 VA: 0x3A71920
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.UI