public struct Profile : IFlatbufferObject // TypeDefIndex: 5682
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string UserPublicID { get; }
	public string UserName { get; }
	public long Level { get; }
	public long FirstTryWinCount { get; }
	public long WeeklyWinCount { get; }
	public long MagicStreakWinCount { get; }
	public long BroomMaxWinStreak { get; }
	public long JetpackWinCount { get; }
	public long SkyJumpWinCount { get; }
	public long ChampionsBronzeWins { get; }
	public long ChampionsSilverWins { get; }
	public long ChampionsGoldWins { get; }
	public long ChampionsEmeraldWins { get; }
	public long ChampionsDiamondWins { get; }
	public string ImageID { get; }
	public string ImageUrl { get; }
	public string CurrentTeamID { get; }
	public string CurrentTeamName { get; }
	public long CurrentTeamBadge { get; }
	public string TokenID { get; }
	public string FrameID { get; }
	public string NameStyle { get; }
	public long CollectionsFinished { get; }
	public long DuckFestivalWins { get; }
	public long ChampionsLeagueTopThreeFinishes { get; }
	public long HelpsMade { get; }
	public long LastChampionsLeagueElo { get; }
	public long WeeklyHelpsMade { get; }
	public long BoatRushWins { get; }

	// Methods

	// RVA: 0x1602E64 Offset: 0x1602E64 VA: 0x1602E64 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1602E6C Offset: 0x1602E6C VA: 0x1602E6C
	public static void ValidateVersion() { }

	// RVA: 0x1602E74 Offset: 0x1602E74 VA: 0x1602E74
	public static Profile GetRootAsProfile(ByteBuffer _bb) { }

	// RVA: 0x1602E80 Offset: 0x1602E80 VA: 0x1602E80
	public static Profile GetRootAsProfile(ByteBuffer _bb, Profile obj) { }

	// RVA: 0x1602F04 Offset: 0x1602F04 VA: 0x1602F04 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1602EC4 Offset: 0x1602EC4 VA: 0x1602EC4
	public Profile __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1602F40 Offset: 0x1602F40 VA: 0x1602F40
	public string get_UserPublicID() { }

	// RVA: 0x1602F7C Offset: 0x1602F7C VA: 0x1602F7C
	public Nullable<ArraySegment<byte>> GetUserPublicIDBytes() { }

	// RVA: 0x1602FB4 Offset: 0x1602FB4 VA: 0x1602FB4
	public byte[] GetUserPublicIDArray() { }

	// RVA: 0x1603000 Offset: 0x1603000 VA: 0x1603000
	public string get_UserName() { }

	// RVA: 0x160303C Offset: 0x160303C VA: 0x160303C
	public Nullable<ArraySegment<byte>> GetUserNameBytes() { }

	// RVA: 0x1603074 Offset: 0x1603074 VA: 0x1603074
	public byte[] GetUserNameArray() { }

	// RVA: 0x16030C0 Offset: 0x16030C0 VA: 0x16030C0
	public long get_Level() { }

	// RVA: 0x1603108 Offset: 0x1603108 VA: 0x1603108
	public long get_FirstTryWinCount() { }

	// RVA: 0x1603150 Offset: 0x1603150 VA: 0x1603150
	public long get_WeeklyWinCount() { }

	// RVA: 0x1603198 Offset: 0x1603198 VA: 0x1603198
	public long get_MagicStreakWinCount() { }

	// RVA: 0x16031E0 Offset: 0x16031E0 VA: 0x16031E0
	public long get_BroomMaxWinStreak() { }

	// RVA: 0x1603228 Offset: 0x1603228 VA: 0x1603228
	public long get_JetpackWinCount() { }

	// RVA: 0x1603270 Offset: 0x1603270 VA: 0x1603270
	public long get_SkyJumpWinCount() { }

	// RVA: 0x16032B8 Offset: 0x16032B8 VA: 0x16032B8
	public long get_ChampionsBronzeWins() { }

	// RVA: 0x1603300 Offset: 0x1603300 VA: 0x1603300
	public long get_ChampionsSilverWins() { }

	// RVA: 0x1603348 Offset: 0x1603348 VA: 0x1603348
	public long get_ChampionsGoldWins() { }

	// RVA: 0x1603390 Offset: 0x1603390 VA: 0x1603390
	public long get_ChampionsEmeraldWins() { }

	// RVA: 0x16033D8 Offset: 0x16033D8 VA: 0x16033D8
	public long get_ChampionsDiamondWins() { }

	// RVA: 0x1603420 Offset: 0x1603420 VA: 0x1603420
	public string get_ImageID() { }

	// RVA: 0x160345C Offset: 0x160345C VA: 0x160345C
	public Nullable<ArraySegment<byte>> GetImageIDBytes() { }

	// RVA: 0x1603494 Offset: 0x1603494 VA: 0x1603494
	public byte[] GetImageIDArray() { }

	// RVA: 0x16034E0 Offset: 0x16034E0 VA: 0x16034E0
	public string get_ImageUrl() { }

	// RVA: 0x160351C Offset: 0x160351C VA: 0x160351C
	public Nullable<ArraySegment<byte>> GetImageUrlBytes() { }

	// RVA: 0x1603554 Offset: 0x1603554 VA: 0x1603554
	public byte[] GetImageUrlArray() { }

	// RVA: 0x16035A0 Offset: 0x16035A0 VA: 0x16035A0
	public string get_CurrentTeamID() { }

	// RVA: 0x16035DC Offset: 0x16035DC VA: 0x16035DC
	public Nullable<ArraySegment<byte>> GetCurrentTeamIDBytes() { }

	// RVA: 0x1603614 Offset: 0x1603614 VA: 0x1603614
	public byte[] GetCurrentTeamIDArray() { }

	// RVA: 0x1603660 Offset: 0x1603660 VA: 0x1603660
	public string get_CurrentTeamName() { }

	// RVA: 0x160369C Offset: 0x160369C VA: 0x160369C
	public Nullable<ArraySegment<byte>> GetCurrentTeamNameBytes() { }

	// RVA: 0x16036D4 Offset: 0x16036D4 VA: 0x16036D4
	public byte[] GetCurrentTeamNameArray() { }

	// RVA: 0x1603720 Offset: 0x1603720 VA: 0x1603720
	public long get_CurrentTeamBadge() { }

	// RVA: 0x1603768 Offset: 0x1603768 VA: 0x1603768
	public string get_TokenID() { }

	// RVA: 0x16037A4 Offset: 0x16037A4 VA: 0x16037A4
	public Nullable<ArraySegment<byte>> GetTokenIDBytes() { }

	// RVA: 0x16037DC Offset: 0x16037DC VA: 0x16037DC
	public byte[] GetTokenIDArray() { }

	// RVA: 0x1603828 Offset: 0x1603828 VA: 0x1603828
	public string get_FrameID() { }

	// RVA: 0x1603864 Offset: 0x1603864 VA: 0x1603864
	public Nullable<ArraySegment<byte>> GetFrameIDBytes() { }

	// RVA: 0x160389C Offset: 0x160389C VA: 0x160389C
	public byte[] GetFrameIDArray() { }

	// RVA: 0x16038E8 Offset: 0x16038E8 VA: 0x16038E8
	public string get_NameStyle() { }

	// RVA: 0x1603924 Offset: 0x1603924 VA: 0x1603924
	public Nullable<ArraySegment<byte>> GetNameStyleBytes() { }

	// RVA: 0x160395C Offset: 0x160395C VA: 0x160395C
	public byte[] GetNameStyleArray() { }

	// RVA: 0x16039A8 Offset: 0x16039A8 VA: 0x16039A8
	public long get_CollectionsFinished() { }

	// RVA: 0x16039F0 Offset: 0x16039F0 VA: 0x16039F0
	public long get_DuckFestivalWins() { }

	// RVA: 0x1603A38 Offset: 0x1603A38 VA: 0x1603A38
	public long get_ChampionsLeagueTopThreeFinishes() { }

	// RVA: 0x1603A80 Offset: 0x1603A80 VA: 0x1603A80
	public long get_HelpsMade() { }

	// RVA: 0x1603AC8 Offset: 0x1603AC8 VA: 0x1603AC8
	public long get_LastChampionsLeagueElo() { }

	// RVA: 0x1603B10 Offset: 0x1603B10 VA: 0x1603B10
	public long get_WeeklyHelpsMade() { }

	// RVA: 0x1603B58 Offset: 0x1603B58 VA: 0x1603B58
	public long get_BoatRushWins() { }

	// RVA: 0x1603BA0 Offset: 0x1603BA0 VA: 0x1603BA0
	public static Offset<Profile> CreateProfile(FlatBufferBuilder builder, StringOffset userPublicIDOffset, StringOffset userNameOffset, long level = 0, long firstTryWinCount = 0, long weeklyWinCount = 0, long magicStreakWinCount = 0, long broomMaxWinStreak = 0, long jetpackWinCount = 0, long skyJumpWinCount = 0, long championsBronzeWins = 0, long championsSilverWins = 0, long championsGoldWins = 0, long championsEmeraldWins = 0, long championsDiamondWins = 0, StringOffset imageIDOffset, StringOffset imageUrlOffset, StringOffset currentTeamIDOffset, StringOffset currentTeamNameOffset, long currentTeamBadge = 0, StringOffset tokenIDOffset, StringOffset frameIDOffset, StringOffset nameStyleOffset, long collectionsFinished = 0, long duckFestivalWins = 0, long championsLeagueTopThreeFinishes = 0, long helpsMade = 0, long lastChampionsLeagueElo = 0, long weeklyHelpsMade = 0, long boatRushWins = 0) { }

	// RVA: 0x16041F4 Offset: 0x16041F4 VA: 0x16041F4
	public static void StartProfile(FlatBufferBuilder builder) { }

	// RVA: 0x1604184 Offset: 0x1604184 VA: 0x1604184
	public static void AddUserPublicID(FlatBufferBuilder builder, StringOffset userPublicIDOffset) { }

	// RVA: 0x1604164 Offset: 0x1604164 VA: 0x1604164
	public static void AddUserName(FlatBufferBuilder builder, StringOffset userNameOffset) { }

	// RVA: 0x1604064 Offset: 0x1604064 VA: 0x1604064
	public static void AddLevel(FlatBufferBuilder builder, long level) { }

	// RVA: 0x1604044 Offset: 0x1604044 VA: 0x1604044
	public static void AddFirstTryWinCount(FlatBufferBuilder builder, long firstTryWinCount) { }

	// RVA: 0x1604024 Offset: 0x1604024 VA: 0x1604024
	public static void AddWeeklyWinCount(FlatBufferBuilder builder, long weeklyWinCount) { }

	// RVA: 0x1604004 Offset: 0x1604004 VA: 0x1604004
	public static void AddMagicStreakWinCount(FlatBufferBuilder builder, long magicStreakWinCount) { }

	// RVA: 0x1603FE4 Offset: 0x1603FE4 VA: 0x1603FE4
	public static void AddBroomMaxWinStreak(FlatBufferBuilder builder, long broomMaxWinStreak) { }

	// RVA: 0x1603FC4 Offset: 0x1603FC4 VA: 0x1603FC4
	public static void AddJetpackWinCount(FlatBufferBuilder builder, long jetpackWinCount) { }

	// RVA: 0x1603FA4 Offset: 0x1603FA4 VA: 0x1603FA4
	public static void AddSkyJumpWinCount(FlatBufferBuilder builder, long skyJumpWinCount) { }

	// RVA: 0x1603F84 Offset: 0x1603F84 VA: 0x1603F84
	public static void AddChampionsBronzeWins(FlatBufferBuilder builder, long championsBronzeWins) { }

	// RVA: 0x1603F64 Offset: 0x1603F64 VA: 0x1603F64
	public static void AddChampionsSilverWins(FlatBufferBuilder builder, long championsSilverWins) { }

	// RVA: 0x1603F44 Offset: 0x1603F44 VA: 0x1603F44
	public static void AddChampionsGoldWins(FlatBufferBuilder builder, long championsGoldWins) { }

	// RVA: 0x1603F24 Offset: 0x1603F24 VA: 0x1603F24
	public static void AddChampionsEmeraldWins(FlatBufferBuilder builder, long championsEmeraldWins) { }

	// RVA: 0x1603F04 Offset: 0x1603F04 VA: 0x1603F04
	public static void AddChampionsDiamondWins(FlatBufferBuilder builder, long championsDiamondWins) { }

	// RVA: 0x1604144 Offset: 0x1604144 VA: 0x1604144
	public static void AddImageID(FlatBufferBuilder builder, StringOffset imageIDOffset) { }

	// RVA: 0x1604124 Offset: 0x1604124 VA: 0x1604124
	public static void AddImageUrl(FlatBufferBuilder builder, StringOffset imageUrlOffset) { }

	// RVA: 0x1604104 Offset: 0x1604104 VA: 0x1604104
	public static void AddCurrentTeamID(FlatBufferBuilder builder, StringOffset currentTeamIDOffset) { }

	// RVA: 0x16040E4 Offset: 0x16040E4 VA: 0x16040E4
	public static void AddCurrentTeamName(FlatBufferBuilder builder, StringOffset currentTeamNameOffset) { }

	// RVA: 0x1603EE4 Offset: 0x1603EE4 VA: 0x1603EE4
	public static void AddCurrentTeamBadge(FlatBufferBuilder builder, long currentTeamBadge) { }

	// RVA: 0x16040C4 Offset: 0x16040C4 VA: 0x16040C4
	public static void AddTokenID(FlatBufferBuilder builder, StringOffset tokenIDOffset) { }

	// RVA: 0x16040A4 Offset: 0x16040A4 VA: 0x16040A4
	public static void AddFrameID(FlatBufferBuilder builder, StringOffset frameIDOffset) { }

	// RVA: 0x1604084 Offset: 0x1604084 VA: 0x1604084
	public static void AddNameStyle(FlatBufferBuilder builder, StringOffset nameStyleOffset) { }

	// RVA: 0x1603EC4 Offset: 0x1603EC4 VA: 0x1603EC4
	public static void AddCollectionsFinished(FlatBufferBuilder builder, long collectionsFinished) { }

	// RVA: 0x1603EA4 Offset: 0x1603EA4 VA: 0x1603EA4
	public static void AddDuckFestivalWins(FlatBufferBuilder builder, long duckFestivalWins) { }

	// RVA: 0x1603E84 Offset: 0x1603E84 VA: 0x1603E84
	public static void AddChampionsLeagueTopThreeFinishes(FlatBufferBuilder builder, long championsLeagueTopThreeFinishes) { }

	// RVA: 0x1603E64 Offset: 0x1603E64 VA: 0x1603E64
	public static void AddHelpsMade(FlatBufferBuilder builder, long helpsMade) { }

	// RVA: 0x1603E44 Offset: 0x1603E44 VA: 0x1603E44
	public static void AddLastChampionsLeagueElo(FlatBufferBuilder builder, long lastChampionsLeagueElo) { }

	// RVA: 0x1603E24 Offset: 0x1603E24 VA: 0x1603E24
	public static void AddWeeklyHelpsMade(FlatBufferBuilder builder, long weeklyHelpsMade) { }

	// RVA: 0x1603E04 Offset: 0x1603E04 VA: 0x1603E04
	public static void AddBoatRushWins(FlatBufferBuilder builder, long boatRushWins) { }

	// RVA: 0x16041A4 Offset: 0x16041A4 VA: 0x16041A4
	public static Offset<Profile> EndProfile(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common