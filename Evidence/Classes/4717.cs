public class GetChampionsLeagueLeaderboardResponse // TypeDefIndex: 4717
{
	// Fields
	[CompilerGenerated]
	private string <TournamentID>k__BackingField; // 0x10
	[CompilerGenerated]
	private List<ChampionsLeagueLeaderboardPlayer> <Players>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <StartTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <FinishTime>k__BackingField; // 0x28
	[CompilerGenerated]
	private long <JoinWindowEndEpoch>k__BackingField; // 0x30
	[CompilerGenerated]
	private Status <State>k__BackingField; // 0x38
	[CompilerGenerated]
	private int <Elo>k__BackingField; // 0x3C
	[CompilerGenerated]
	private int <Capacity>k__BackingField; // 0x40
	[CompilerGenerated]
	private Dictionary<int, int> <EloPromotedUserCountMap>k__BackingField; // 0x48
	[CompilerGenerated]
	private Dictionary<int, int> <EloDemotedUserCountMap>k__BackingField; // 0x50

	// Properties
	public string TournamentID { get; set; }
	public List<ChampionsLeagueLeaderboardPlayer> Players { get; set; }
	public long StartTime { get; set; }
	public long FinishTime { get; set; }
	public long JoinWindowEndEpoch { get; set; }
	public Status State { get; set; }
	public int Elo { get; set; }
	public int Capacity { get; set; }
	public Dictionary<int, int> EloPromotedUserCountMap { get; set; }
	public Dictionary<int, int> EloDemotedUserCountMap { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3B28A4C Offset: 0x3B28A4C VA: 0x3B28A4C
	public string get_TournamentID() { }

	[CompilerGenerated]
	// RVA: 0x3B28A54 Offset: 0x3B28A54 VA: 0x3B28A54
	public void set_TournamentID(string value) { }

	[CompilerGenerated]
	// RVA: 0x3B28A5C Offset: 0x3B28A5C VA: 0x3B28A5C
	public List<ChampionsLeagueLeaderboardPlayer> get_Players() { }

	[CompilerGenerated]
	// RVA: 0x3B28A64 Offset: 0x3B28A64 VA: 0x3B28A64
	public void set_Players(List<ChampionsLeagueLeaderboardPlayer> value) { }

	[CompilerGenerated]
	// RVA: 0x3B28A6C Offset: 0x3B28A6C VA: 0x3B28A6C
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x3B28A74 Offset: 0x3B28A74 VA: 0x3B28A74
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3B28A7C Offset: 0x3B28A7C VA: 0x3B28A7C
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x3B28A84 Offset: 0x3B28A84 VA: 0x3B28A84
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3B28A8C Offset: 0x3B28A8C VA: 0x3B28A8C
	public long get_JoinWindowEndEpoch() { }

	[CompilerGenerated]
	// RVA: 0x3B28A94 Offset: 0x3B28A94 VA: 0x3B28A94
	public void set_JoinWindowEndEpoch(long value) { }

	[CompilerGenerated]
	// RVA: 0x3B28A9C Offset: 0x3B28A9C VA: 0x3B28A9C
	public Status get_State() { }

	[CompilerGenerated]
	// RVA: 0x3B28AA4 Offset: 0x3B28AA4 VA: 0x3B28AA4
	public void set_State(Status value) { }

	[CompilerGenerated]
	// RVA: 0x3B28AAC Offset: 0x3B28AAC VA: 0x3B28AAC
	public int get_Elo() { }

	[CompilerGenerated]
	// RVA: 0x3B28AB4 Offset: 0x3B28AB4 VA: 0x3B28AB4
	public void set_Elo(int value) { }

	[CompilerGenerated]
	// RVA: 0x3B28ABC Offset: 0x3B28ABC VA: 0x3B28ABC
	public int get_Capacity() { }

	[CompilerGenerated]
	// RVA: 0x3B28AC4 Offset: 0x3B28AC4 VA: 0x3B28AC4
	public void set_Capacity(int value) { }

	[CompilerGenerated]
	// RVA: 0x3B28ACC Offset: 0x3B28ACC VA: 0x3B28ACC
	public Dictionary<int, int> get_EloPromotedUserCountMap() { }

	[CompilerGenerated]
	// RVA: 0x3B28AD4 Offset: 0x3B28AD4 VA: 0x3B28AD4
	public void set_EloPromotedUserCountMap(Dictionary<int, int> value) { }

	[CompilerGenerated]
	// RVA: 0x3B28ADC Offset: 0x3B28ADC VA: 0x3B28ADC
	public Dictionary<int, int> get_EloDemotedUserCountMap() { }

	[CompilerGenerated]
	// RVA: 0x3B28AE4 Offset: 0x3B28AE4 VA: 0x3B28AE4
	public void set_EloDemotedUserCountMap(Dictionary<int, int> value) { }

	// RVA: 0x3B28AEC Offset: 0x3B28AEC VA: 0x3B28AEC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.Services