public struct TeamLeaderboardSummary : IFlatbufferObject // TypeDefIndex: 5557
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string Name { get; }
	public long Badge { get; }
	public string Description { get; }
	public long LevelRequirement { get; }
	public long TotalScore { get; }
	public string CountryCode { get; }
	public bool HasPendingRequestExist { get; }
	public string TeamID { get; }
	public long MemberCount { get; }
	public long ActivityType { get; }
	public bool IsOpenTeam { get; }

	// Methods

	// RVA: 0x143BFA8 Offset: 0x143BFA8 VA: 0x143BFA8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143BFB0 Offset: 0x143BFB0 VA: 0x143BFB0
	public static void ValidateVersion() { }

	// RVA: 0x143BFB8 Offset: 0x143BFB8 VA: 0x143BFB8
	public static TeamLeaderboardSummary GetRootAsTeamLeaderboardSummary(ByteBuffer _bb) { }

	// RVA: 0x143BFC4 Offset: 0x143BFC4 VA: 0x143BFC4
	public static TeamLeaderboardSummary GetRootAsTeamLeaderboardSummary(ByteBuffer _bb, TeamLeaderboardSummary obj) { }

	// RVA: 0x143C008 Offset: 0x143C008 VA: 0x143C008 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1438198 Offset: 0x1438198 VA: 0x1438198
	public TeamLeaderboardSummary __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143C044 Offset: 0x143C044 VA: 0x143C044
	public string get_Name() { }

	// RVA: 0x143C080 Offset: 0x143C080 VA: 0x143C080
	public Nullable<ArraySegment<byte>> GetNameBytes() { }

	// RVA: 0x143C0B8 Offset: 0x143C0B8 VA: 0x143C0B8
	public byte[] GetNameArray() { }

	// RVA: 0x143C104 Offset: 0x143C104 VA: 0x143C104
	public long get_Badge() { }

	// RVA: 0x143C14C Offset: 0x143C14C VA: 0x143C14C
	public string get_Description() { }

	// RVA: 0x143C188 Offset: 0x143C188 VA: 0x143C188
	public Nullable<ArraySegment<byte>> GetDescriptionBytes() { }

	// RVA: 0x143C1C0 Offset: 0x143C1C0 VA: 0x143C1C0
	public byte[] GetDescriptionArray() { }

	// RVA: 0x143C20C Offset: 0x143C20C VA: 0x143C20C
	public long get_LevelRequirement() { }

	// RVA: 0x143C254 Offset: 0x143C254 VA: 0x143C254
	public long get_TotalScore() { }

	// RVA: 0x143C29C Offset: 0x143C29C VA: 0x143C29C
	public string get_CountryCode() { }

	// RVA: 0x143C2D8 Offset: 0x143C2D8 VA: 0x143C2D8
	public Nullable<ArraySegment<byte>> GetCountryCodeBytes() { }

	// RVA: 0x143C310 Offset: 0x143C310 VA: 0x143C310
	public byte[] GetCountryCodeArray() { }

	// RVA: 0x143C35C Offset: 0x143C35C VA: 0x143C35C
	public bool get_HasPendingRequestExist() { }

	// RVA: 0x143C3A4 Offset: 0x143C3A4 VA: 0x143C3A4
	public string get_TeamID() { }

	// RVA: 0x143C3E0 Offset: 0x143C3E0 VA: 0x143C3E0
	public Nullable<ArraySegment<byte>> GetTeamIDBytes() { }

	// RVA: 0x143C418 Offset: 0x143C418 VA: 0x143C418
	public byte[] GetTeamIDArray() { }

	// RVA: 0x143C464 Offset: 0x143C464 VA: 0x143C464
	public long get_MemberCount() { }

	// RVA: 0x143C4AC Offset: 0x143C4AC VA: 0x143C4AC
	public long get_ActivityType() { }

	// RVA: 0x143C4F4 Offset: 0x143C4F4 VA: 0x143C4F4
	public bool get_IsOpenTeam() { }

	// RVA: 0x143C53C Offset: 0x143C53C VA: 0x143C53C
	public static Offset<TeamLeaderboardSummary> CreateTeamLeaderboardSummary(FlatBufferBuilder builder, StringOffset nameOffset, long badge = 0, StringOffset descriptionOffset, long levelRequirement = 0, long totalScore = 0, StringOffset countryCodeOffset, bool hasPendingRequestExist = False, StringOffset teamIDOffset, long memberCount = 0, long activityType = 0, bool isOpenTeam = False) { }

	// RVA: 0x143C7FC Offset: 0x143C7FC VA: 0x143C7FC
	public static void StartTeamLeaderboardSummary(FlatBufferBuilder builder) { }

	// RVA: 0x143C74C Offset: 0x143C74C VA: 0x143C74C
	public static void AddName(FlatBufferBuilder builder, StringOffset nameOffset) { }

	// RVA: 0x143C6CC Offset: 0x143C6CC VA: 0x143C6CC
	public static void AddBadge(FlatBufferBuilder builder, long badge) { }

	// RVA: 0x143C72C Offset: 0x143C72C VA: 0x143C72C
	public static void AddDescription(FlatBufferBuilder builder, StringOffset descriptionOffset) { }

	// RVA: 0x143C6AC Offset: 0x143C6AC VA: 0x143C6AC
	public static void AddLevelRequirement(FlatBufferBuilder builder, long levelRequirement) { }

	// RVA: 0x143C68C Offset: 0x143C68C VA: 0x143C68C
	public static void AddTotalScore(FlatBufferBuilder builder, long totalScore) { }

	// RVA: 0x143C70C Offset: 0x143C70C VA: 0x143C70C
	public static void AddCountryCode(FlatBufferBuilder builder, StringOffset countryCodeOffset) { }

	// RVA: 0x143C78C Offset: 0x143C78C VA: 0x143C78C
	public static void AddHasPendingRequestExist(FlatBufferBuilder builder, bool hasPendingRequestExist) { }

	// RVA: 0x143C6EC Offset: 0x143C6EC VA: 0x143C6EC
	public static void AddTeamID(FlatBufferBuilder builder, StringOffset teamIDOffset) { }

	// RVA: 0x143C66C Offset: 0x143C66C VA: 0x143C66C
	public static void AddMemberCount(FlatBufferBuilder builder, long memberCount) { }

	// RVA: 0x143C64C Offset: 0x143C64C VA: 0x143C64C
	public static void AddActivityType(FlatBufferBuilder builder, long activityType) { }

	// RVA: 0x143C76C Offset: 0x143C76C VA: 0x143C76C
	public static void AddIsOpenTeam(FlatBufferBuilder builder, bool isOpenTeam) { }

	// RVA: 0x143C7AC Offset: 0x143C7AC VA: 0x143C7AC
	public static Offset<TeamLeaderboardSummary> EndTeamLeaderboardSummary(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team