public class ChampionsLeagueSyncModel // TypeDefIndex: 4712
{
	// Fields
	[CompilerGenerated]
	private string <TournamentID>k__BackingField; // 0x10
	[CompilerGenerated]
	private long <StartTime>k__BackingField; // 0x18
	[CompilerGenerated]
	private long <FinishTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private long <JoinWindowEpoch>k__BackingField; // 0x28
	[CompilerGenerated]
	private Status <State>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <Elo>k__BackingField; // 0x34
	[CompilerGenerated]
	private int <PreJoinScore>k__BackingField; // 0x38
	[CompilerGenerated]
	private Dictionary<int, int> <EloPromotedUserCountMap>k__BackingField; // 0x40
	[CompilerGenerated]
	private Dictionary<int, int> <EloDemotedUserCountMap>k__BackingField; // 0x48
	[CompilerGenerated]
	private int <Capacity>k__BackingField; // 0x50
	[CompilerGenerated]
	private bool <IsTournamentRewardClaimed>k__BackingField; // 0x54
	[CompilerGenerated]
	private bool <IsPromotionAnimationShown>k__BackingField; // 0x55
	[CompilerGenerated]
	private int <LastElo>k__BackingField; // 0x58
	public ChampionsLeagueProfileData ChampionsLeagueProfileData; // 0x5C
	public int PreviousPromotionInfo; // 0x70

	// Properties
	public string TournamentID { get; set; }
	public long StartTime { get; set; }
	public long FinishTime { get; set; }
	public long JoinWindowEpoch { get; set; }
	public Status State { get; set; }
	public int Elo { get; set; }
	public int PreJoinScore { get; set; }
	public Dictionary<int, int> EloPromotedUserCountMap { get; set; }
	public Dictionary<int, int> EloDemotedUserCountMap { get; set; }
	public int Capacity { get; set; }
	public bool IsTournamentRewardClaimed { get; set; }
	public bool IsPromotionAnimationShown { get; set; }
	public int LastElo { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3B26AB0 Offset: 0x3B26AB0 VA: 0x3B26AB0
	public string get_TournamentID() { }

	[CompilerGenerated]
	// RVA: 0x3B26AB8 Offset: 0x3B26AB8 VA: 0x3B26AB8
	public void set_TournamentID(string value) { }

	[CompilerGenerated]
	// RVA: 0x3B26AC0 Offset: 0x3B26AC0 VA: 0x3B26AC0
	public long get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x3B26AC8 Offset: 0x3B26AC8 VA: 0x3B26AC8
	public void set_StartTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3B26AD0 Offset: 0x3B26AD0 VA: 0x3B26AD0
	public long get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x3B26AD8 Offset: 0x3B26AD8 VA: 0x3B26AD8
	public void set_FinishTime(long value) { }

	[CompilerGenerated]
	// RVA: 0x3B26AE0 Offset: 0x3B26AE0 VA: 0x3B26AE0
	public long get_JoinWindowEpoch() { }

	[CompilerGenerated]
	// RVA: 0x3B26AE8 Offset: 0x3B26AE8 VA: 0x3B26AE8
	public void set_JoinWindowEpoch(long value) { }

	[CompilerGenerated]
	// RVA: 0x3B26AF0 Offset: 0x3B26AF0 VA: 0x3B26AF0
	public Status get_State() { }

	[CompilerGenerated]
	// RVA: 0x3B26AF8 Offset: 0x3B26AF8 VA: 0x3B26AF8
	public void set_State(Status value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B00 Offset: 0x3B26B00 VA: 0x3B26B00
	public int get_Elo() { }

	[CompilerGenerated]
	// RVA: 0x3B26B08 Offset: 0x3B26B08 VA: 0x3B26B08
	public void set_Elo(int value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B10 Offset: 0x3B26B10 VA: 0x3B26B10
	public int get_PreJoinScore() { }

	[CompilerGenerated]
	// RVA: 0x3B26B18 Offset: 0x3B26B18 VA: 0x3B26B18
	public void set_PreJoinScore(int value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B20 Offset: 0x3B26B20 VA: 0x3B26B20
	public Dictionary<int, int> get_EloPromotedUserCountMap() { }

	[CompilerGenerated]
	// RVA: 0x3B26B28 Offset: 0x3B26B28 VA: 0x3B26B28
	public void set_EloPromotedUserCountMap(Dictionary<int, int> value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B30 Offset: 0x3B26B30 VA: 0x3B26B30
	public Dictionary<int, int> get_EloDemotedUserCountMap() { }

	[CompilerGenerated]
	// RVA: 0x3B26B38 Offset: 0x3B26B38 VA: 0x3B26B38
	public void set_EloDemotedUserCountMap(Dictionary<int, int> value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B40 Offset: 0x3B26B40 VA: 0x3B26B40
	public int get_Capacity() { }

	[CompilerGenerated]
	// RVA: 0x3B26B48 Offset: 0x3B26B48 VA: 0x3B26B48
	public void set_Capacity(int value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B50 Offset: 0x3B26B50 VA: 0x3B26B50
	public bool get_IsTournamentRewardClaimed() { }

	[CompilerGenerated]
	// RVA: 0x3B26B58 Offset: 0x3B26B58 VA: 0x3B26B58
	public void set_IsTournamentRewardClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B64 Offset: 0x3B26B64 VA: 0x3B26B64
	public bool get_IsPromotionAnimationShown() { }

	[CompilerGenerated]
	// RVA: 0x3B26B6C Offset: 0x3B26B6C VA: 0x3B26B6C
	public void set_IsPromotionAnimationShown(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3B26B78 Offset: 0x3B26B78 VA: 0x3B26B78
	public int get_LastElo() { }

	[CompilerGenerated]
	// RVA: 0x3B26B80 Offset: 0x3B26B80 VA: 0x3B26B80
	public void set_LastElo(int value) { }

	// RVA: 0x3B26B88 Offset: 0x3B26B88 VA: 0x3B26B88
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.ChampionsLeague.Services