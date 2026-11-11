public struct TeamSummary : IFlatbufferObject // TypeDefIndex: 5563
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
	public bool HasPendingRequestExist { get; }
	public string TeamID { get; }
	public long MemberCount { get; }
	public long ActivityType { get; }
	public bool IsOpenTeam { get; }

	// Methods

	// RVA: 0x143E268 Offset: 0x143E268 VA: 0x143E268 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x143E270 Offset: 0x143E270 VA: 0x143E270
	public static void ValidateVersion() { }

	// RVA: 0x143E278 Offset: 0x143E278 VA: 0x143E278
	public static TeamSummary GetRootAsTeamSummary(ByteBuffer _bb) { }

	// RVA: 0x143E284 Offset: 0x143E284 VA: 0x143E284
	public static TeamSummary GetRootAsTeamSummary(ByteBuffer _bb, TeamSummary obj) { }

	// RVA: 0x143E2C8 Offset: 0x143E2C8 VA: 0x143E2C8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1436154 Offset: 0x1436154 VA: 0x1436154
	public TeamSummary __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x143E304 Offset: 0x143E304 VA: 0x143E304
	public string get_Name() { }

	// RVA: 0x143E340 Offset: 0x143E340 VA: 0x143E340
	public Nullable<ArraySegment<byte>> GetNameBytes() { }

	// RVA: 0x143E378 Offset: 0x143E378 VA: 0x143E378
	public byte[] GetNameArray() { }

	// RVA: 0x143E3C4 Offset: 0x143E3C4 VA: 0x143E3C4
	public long get_Badge() { }

	// RVA: 0x143E40C Offset: 0x143E40C VA: 0x143E40C
	public string get_Description() { }

	// RVA: 0x143E448 Offset: 0x143E448 VA: 0x143E448
	public Nullable<ArraySegment<byte>> GetDescriptionBytes() { }

	// RVA: 0x143E480 Offset: 0x143E480 VA: 0x143E480
	public byte[] GetDescriptionArray() { }

	// RVA: 0x143E4CC Offset: 0x143E4CC VA: 0x143E4CC
	public long get_LevelRequirement() { }

	// RVA: 0x143E514 Offset: 0x143E514 VA: 0x143E514
	public string get_CountryCode() { }

	// RVA: 0x143E550 Offset: 0x143E550 VA: 0x143E550
	public Nullable<ArraySegment<byte>> GetCountryCodeBytes() { }

	// RVA: 0x143E588 Offset: 0x143E588 VA: 0x143E588
	public byte[] GetCountryCodeArray() { }

	// RVA: 0x143E5D4 Offset: 0x143E5D4 VA: 0x143E5D4
	public bool get_HasPendingRequestExist() { }

	// RVA: 0x143E61C Offset: 0x143E61C VA: 0x143E61C
	public string get_TeamID() { }

	// RVA: 0x143E658 Offset: 0x143E658 VA: 0x143E658
	public Nullable<ArraySegment<byte>> GetTeamIDBytes() { }

	// RVA: 0x143E690 Offset: 0x143E690 VA: 0x143E690
	public byte[] GetTeamIDArray() { }

	// RVA: 0x143E6DC Offset: 0x143E6DC VA: 0x143E6DC
	public long get_MemberCount() { }

	// RVA: 0x143E724 Offset: 0x143E724 VA: 0x143E724
	public long get_ActivityType() { }

	// RVA: 0x143E76C Offset: 0x143E76C VA: 0x143E76C
	public bool get_IsOpenTeam() { }

	// RVA: 0x143E7B4 Offset: 0x143E7B4 VA: 0x143E7B4
	public static Offset<TeamSummary> CreateTeamSummary(FlatBufferBuilder builder, StringOffset nameOffset, long badge = 0, StringOffset descriptionOffset, long levelRequirement = 0, StringOffset countryCodeOffset, bool hasPendingRequestExist = False, StringOffset teamIDOffset, long memberCount = 0, long activityType = 0, bool isOpenTeam = False) { }

	// RVA: 0x143EA38 Offset: 0x143EA38 VA: 0x143EA38
	public static void StartTeamSummary(FlatBufferBuilder builder) { }

	// RVA: 0x143E988 Offset: 0x143E988 VA: 0x143E988
	public static void AddName(FlatBufferBuilder builder, StringOffset nameOffset) { }

	// RVA: 0x143E908 Offset: 0x143E908 VA: 0x143E908
	public static void AddBadge(FlatBufferBuilder builder, long badge) { }

	// RVA: 0x143E968 Offset: 0x143E968 VA: 0x143E968
	public static void AddDescription(FlatBufferBuilder builder, StringOffset descriptionOffset) { }

	// RVA: 0x143E8E8 Offset: 0x143E8E8 VA: 0x143E8E8
	public static void AddLevelRequirement(FlatBufferBuilder builder, long levelRequirement) { }

	// RVA: 0x143E948 Offset: 0x143E948 VA: 0x143E948
	public static void AddCountryCode(FlatBufferBuilder builder, StringOffset countryCodeOffset) { }

	// RVA: 0x143E9C8 Offset: 0x143E9C8 VA: 0x143E9C8
	public static void AddHasPendingRequestExist(FlatBufferBuilder builder, bool hasPendingRequestExist) { }

	// RVA: 0x143E928 Offset: 0x143E928 VA: 0x143E928
	public static void AddTeamID(FlatBufferBuilder builder, StringOffset teamIDOffset) { }

	// RVA: 0x143E8C8 Offset: 0x143E8C8 VA: 0x143E8C8
	public static void AddMemberCount(FlatBufferBuilder builder, long memberCount) { }

	// RVA: 0x143E8A8 Offset: 0x143E8A8 VA: 0x143E8A8
	public static void AddActivityType(FlatBufferBuilder builder, long activityType) { }

	// RVA: 0x143E9A8 Offset: 0x143E9A8 VA: 0x143E9A8
	public static void AddIsOpenTeam(FlatBufferBuilder builder, bool isOpenTeam) { }

	// RVA: 0x143E9E8 Offset: 0x143E9E8 VA: 0x143E9E8
	public static Offset<TeamSummary> EndTeamSummary(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.team