public struct TeamWithMembers : IFlatbufferObject // TypeDefIndex: 5565
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string Name { get; }
	public long Badge { get; }
	public string Description { get; }
	public long LevelRequirement { get; }
	public string CountryCode { get; }
	public string TeamID { get; }
	public long MemberCount { get; }
	public long TotalScore { get; }
	public bool HasPendingRequestExist { get; }
	public long WeeklyHelp { get; }
	public long ActivityType { get; }
	public bool IsOpenTeam { get; }
	public int MemberListLength { get; }

	// Methods

	// RVA: 0x143EBE4 Offset: 0x143EBE4 VA: 0x143EBE4 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143EBEC Offset: 0x143EBEC VA: 0x143EBEC
	public static void ValidateVersion() { }

	// RVA: 0x143EBF4 Offset: 0x143EBF4 VA: 0x143EBF4
	public static TeamWithMembers GetRootAsTeamWithMembers(ByteBuffer _bb) { }

	// RVA: 0x143EC00 Offset: 0x143EC00 VA: 0x143EC00
	public static TeamWithMembers GetRootAsTeamWithMembers(ByteBuffer _bb, TeamWithMembers obj) { }

	// RVA: 0x143EC44 Offset: 0x143EC44 VA: 0x143EC44 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x143A524 Offset: 0x143A524 VA: 0x143A524
	public TeamWithMembers __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143EC80 Offset: 0x143EC80 VA: 0x143EC80
	public string get_Name() { }

	// RVA: 0x143ECBC Offset: 0x143ECBC VA: 0x143ECBC
	public Nullable<ArraySegment<byte>> GetNameBytes() { }

	// RVA: 0x143ECF4 Offset: 0x143ECF4 VA: 0x143ECF4
	public byte[] GetNameArray() { }

	// RVA: 0x143ED40 Offset: 0x143ED40 VA: 0x143ED40
	public long get_Badge() { }

	// RVA: 0x143ED88 Offset: 0x143ED88 VA: 0x143ED88
	public string get_Description() { }

	// RVA: 0x143EDC4 Offset: 0x143EDC4 VA: 0x143EDC4
	public Nullable<ArraySegment<byte>> GetDescriptionBytes() { }

	// RVA: 0x143EDFC Offset: 0x143EDFC VA: 0x143EDFC
	public byte[] GetDescriptionArray() { }

	// RVA: 0x143EE48 Offset: 0x143EE48 VA: 0x143EE48
	public long get_LevelRequirement() { }

	// RVA: 0x143EE90 Offset: 0x143EE90 VA: 0x143EE90
	public string get_CountryCode() { }

	// RVA: 0x143EECC Offset: 0x143EECC VA: 0x143EECC
	public Nullable<ArraySegment<byte>> GetCountryCodeBytes() { }

	// RVA: 0x143EF04 Offset: 0x143EF04 VA: 0x143EF04
	public byte[] GetCountryCodeArray() { }

	// RVA: 0x143EF50 Offset: 0x143EF50 VA: 0x143EF50
	public string get_TeamID() { }

	// RVA: 0x143EF8C Offset: 0x143EF8C VA: 0x143EF8C
	public Nullable<ArraySegment<byte>> GetTeamIDBytes() { }

	// RVA: 0x143EFC4 Offset: 0x143EFC4 VA: 0x143EFC4
	public byte[] GetTeamIDArray() { }

	// RVA: 0x143F010 Offset: 0x143F010 VA: 0x143F010
	public long get_MemberCount() { }

	// RVA: 0x143F058 Offset: 0x143F058 VA: 0x143F058
	public long get_TotalScore() { }

	// RVA: 0x143F0A0 Offset: 0x143F0A0 VA: 0x143F0A0
	public bool get_HasPendingRequestExist() { }

	// RVA: 0x143F0E8 Offset: 0x143F0E8 VA: 0x143F0E8
	public long get_WeeklyHelp() { }

	// RVA: 0x143F130 Offset: 0x143F130 VA: 0x143F130
	public long get_ActivityType() { }

	// RVA: 0x143F178 Offset: 0x143F178 VA: 0x143F178
	public bool get_IsOpenTeam() { }

	// RVA: 0x143F1C0 Offset: 0x143F1C0 VA: 0x143F1C0
	public Nullable<TeamMemberSummary> MemberList(int j) { }

	// RVA: 0x143F294 Offset: 0x143F294 VA: 0x143F294
	public int get_MemberListLength() { }

	// RVA: 0x143F2C8 Offset: 0x143F2C8 VA: 0x143F2C8
	public static Offset<TeamWithMembers> CreateTeamWithMembers(FlatBufferBuilder builder, StringOffset nameOffset, long badge = 0, StringOffset descriptionOffset, long levelRequirement = 0, StringOffset countryCodeOffset, StringOffset teamIDOffset, long memberCount = 0, long totalScore = 0, bool hasPendingRequestExist = False, long weeklyHelp = 0, long activityType = 0, bool isOpenTeam = False, VectorOffset memberListOffset) { }

	// RVA: 0x143F5F8 Offset: 0x143F5F8 VA: 0x143F5F8
	public static void StartTeamWithMembers(FlatBufferBuilder builder) { }

	// RVA: 0x143F548 Offset: 0x143F548 VA: 0x143F548
	public static void AddName(FlatBufferBuilder builder, StringOffset nameOffset) { }

	// RVA: 0x143F4A8 Offset: 0x143F4A8 VA: 0x143F4A8
	public static void AddBadge(FlatBufferBuilder builder, long badge) { }

	// RVA: 0x143F528 Offset: 0x143F528 VA: 0x143F528
	public static void AddDescription(FlatBufferBuilder builder, StringOffset descriptionOffset) { }

	// RVA: 0x143F488 Offset: 0x143F488 VA: 0x143F488
	public static void AddLevelRequirement(FlatBufferBuilder builder, long levelRequirement) { }

	// RVA: 0x143F508 Offset: 0x143F508 VA: 0x143F508
	public static void AddCountryCode(FlatBufferBuilder builder, StringOffset countryCodeOffset) { }

	// RVA: 0x143F4E8 Offset: 0x143F4E8 VA: 0x143F4E8
	public static void AddTeamID(FlatBufferBuilder builder, StringOffset teamIDOffset) { }

	// RVA: 0x143F468 Offset: 0x143F468 VA: 0x143F468
	public static void AddMemberCount(FlatBufferBuilder builder, long memberCount) { }

	// RVA: 0x143F448 Offset: 0x143F448 VA: 0x143F448
	public static void AddTotalScore(FlatBufferBuilder builder, long totalScore) { }

	// RVA: 0x143F588 Offset: 0x143F588 VA: 0x143F588
	public static void AddHasPendingRequestExist(FlatBufferBuilder builder, bool hasPendingRequestExist) { }

	// RVA: 0x143F428 Offset: 0x143F428 VA: 0x143F428
	public static void AddWeeklyHelp(FlatBufferBuilder builder, long weeklyHelp) { }

	// RVA: 0x143F408 Offset: 0x143F408 VA: 0x143F408
	public static void AddActivityType(FlatBufferBuilder builder, long activityType) { }

	// RVA: 0x143F568 Offset: 0x143F568 VA: 0x143F568
	public static void AddIsOpenTeam(FlatBufferBuilder builder, bool isOpenTeam) { }

	// RVA: 0x143F4C8 Offset: 0x143F4C8 VA: 0x143F4C8
	public static void AddMemberList(FlatBufferBuilder builder, VectorOffset memberListOffset) { }

	// RVA: 0x143F610 Offset: 0x143F610 VA: 0x143F610
	public static VectorOffset CreateMemberListVector(FlatBufferBuilder builder, Offset<TeamMemberSummary>[] data) { }

	// RVA: 0x143F6B8 Offset: 0x143F6B8 VA: 0x143F6B8
	public static VectorOffset CreateMemberListVectorBlock(FlatBufferBuilder builder, Offset<TeamMemberSummary>[] data) { }

	// RVA: 0x143F740 Offset: 0x143F740 VA: 0x143F740
	public static VectorOffset CreateMemberListVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TeamMemberSummary>> data) { }

	// RVA: 0x143F804 Offset: 0x143F804 VA: 0x143F804
	public static VectorOffset CreateMemberListVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x143F898 Offset: 0x143F898 VA: 0x143F898
	public static void StartMemberListVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x143F5A8 Offset: 0x143F5A8 VA: 0x143F5A8
	public static Offset<TeamWithMembers> EndTeamWithMembers(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team