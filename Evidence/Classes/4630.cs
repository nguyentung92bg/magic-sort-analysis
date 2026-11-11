public class ChampionsLeagueConfigModel : IRemoteConfigValidatable // TypeDefIndex: 4630
{
	// Fields
	[CompilerGenerated]
	private bool <IsEnabled>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <FirstLevelToShow>k__BackingField; // 0x14
	[CompilerGenerated]
	private Dictionary<int, List<RewardModel>> <ChampionsLeagueRewardsByLeague>k__BackingField; // 0x18
	[CompilerGenerated]
	private Dictionary<int, List<RewardModel>> <ChampionsLeagueRewardsWithCollectionByLeague>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <TournamentType>k__BackingField; // 0x28
	[CompilerGenerated]
	private int <PreJoinTargetScore>k__BackingField; // 0x2C

	// Properties
	public bool IsEnabled { get; set; }
	public int FirstLevelToShow { get; set; }
	public Dictionary<int, List<RewardModel>> ChampionsLeagueRewardsByLeague { get; set; }
	public Dictionary<int, List<RewardModel>> ChampionsLeagueRewardsWithCollectionByLeague { get; set; }
	public int TournamentType { get; set; }
	public int PreJoinTargetScore { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3A71248 Offset: 0x3A71248 VA: 0x3A71248
	public bool get_IsEnabled() { }

	[CompilerGenerated]
	// RVA: 0x3A71250 Offset: 0x3A71250 VA: 0x3A71250
	public void set_IsEnabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3A7125C Offset: 0x3A7125C VA: 0x3A7125C
	public int get_FirstLevelToShow() { }

	[CompilerGenerated]
	// RVA: 0x3A71264 Offset: 0x3A71264 VA: 0x3A71264
	public void set_FirstLevelToShow(int value) { }

	[CompilerGenerated]
	// RVA: 0x3A7126C Offset: 0x3A7126C VA: 0x3A7126C
	public Dictionary<int, List<RewardModel>> get_ChampionsLeagueRewardsByLeague() { }

	[CompilerGenerated]
	// RVA: 0x3A71274 Offset: 0x3A71274 VA: 0x3A71274
	public void set_ChampionsLeagueRewardsByLeague(Dictionary<int, List<RewardModel>> value) { }

	[CompilerGenerated]
	// RVA: 0x3A7127C Offset: 0x3A7127C VA: 0x3A7127C
	public Dictionary<int, List<RewardModel>> get_ChampionsLeagueRewardsWithCollectionByLeague() { }

	[CompilerGenerated]
	// RVA: 0x3A71284 Offset: 0x3A71284 VA: 0x3A71284
	public void set_ChampionsLeagueRewardsWithCollectionByLeague(Dictionary<int, List<RewardModel>> value) { }

	[CompilerGenerated]
	// RVA: 0x3A7128C Offset: 0x3A7128C VA: 0x3A7128C
	public int get_TournamentType() { }

	[CompilerGenerated]
	// RVA: 0x3A71294 Offset: 0x3A71294 VA: 0x3A71294
	public void set_TournamentType(int value) { }

	[CompilerGenerated]
	// RVA: 0x3A7129C Offset: 0x3A7129C VA: 0x3A7129C
	public int get_PreJoinTargetScore() { }

	[CompilerGenerated]
	// RVA: 0x3A712A4 Offset: 0x3A712A4 VA: 0x3A712A4
	public void set_PreJoinTargetScore(int value) { }

	// RVA: 0x3A712AC Offset: 0x3A712AC VA: 0x3A712AC Slot: 4
	public bool IsValid() { }

	// RVA: 0x3A714F8 Offset: 0x3A714F8 VA: 0x3A714F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague