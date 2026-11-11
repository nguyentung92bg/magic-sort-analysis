public struct GetMyTeamResponse : IFlatbufferObject // TypeDefIndex: 5537
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public Nullable<TeamSummary> Team { get; }
	public long CurrentRole { get; }
	public string FbImageURL { get; }
	public long HelpRequestRemainingTime { get; }
	public Nullable<BaseResponse> BaseResponse { get; }
	public long TeamRequestCount { get; }
	public long CardRequestRemainingTime { get; }
	public long SentCardCountForTheDay { get; }
	public long RemainingTimeForEndOfDay { get; }

	// Methods

	// RVA: 0x1435EE8 Offset: 0x1435EE8 VA: 0x1435EE8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1435EF0 Offset: 0x1435EF0 VA: 0x1435EF0
	public static void ValidateVersion() { }

	// RVA: 0x1435EF8 Offset: 0x1435EF8 VA: 0x1435EF8
	public static GetMyTeamResponse GetRootAsGetMyTeamResponse(ByteBuffer _bb) { }

	// RVA: 0x1435F04 Offset: 0x1435F04 VA: 0x1435F04
	public static GetMyTeamResponse GetRootAsGetMyTeamResponse(ByteBuffer _bb, GetMyTeamResponse obj) { }

	// RVA: 0x1435F88 Offset: 0x1435F88 VA: 0x1435F88
	public static bool VerifyGetMyTeamResponse(ByteBuffer _bb) { }

	// RVA: 0x143605C Offset: 0x143605C VA: 0x143605C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1435F48 Offset: 0x1435F48 VA: 0x1435F48
	public GetMyTeamResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1436098 Offset: 0x1436098 VA: 0x1436098
	public Nullable<TeamSummary> get_Team() { }

	// RVA: 0x1436194 Offset: 0x1436194 VA: 0x1436194
	public long get_CurrentRole() { }

	// RVA: 0x14361DC Offset: 0x14361DC VA: 0x14361DC
	public string get_FbImageURL() { }

	// RVA: 0x1436218 Offset: 0x1436218 VA: 0x1436218
	public Nullable<ArraySegment<byte>> GetFbImageURLBytes() { }

	// RVA: 0x1436250 Offset: 0x1436250 VA: 0x1436250
	public byte[] GetFbImageURLArray() { }

	// RVA: 0x143629C Offset: 0x143629C VA: 0x143629C
	public long get_HelpRequestRemainingTime() { }

	// RVA: 0x14362E4 Offset: 0x14362E4 VA: 0x14362E4
	public Nullable<BaseResponse> get_BaseResponse() { }

	// RVA: 0x14363A4 Offset: 0x14363A4 VA: 0x14363A4
	public long get_TeamRequestCount() { }

	// RVA: 0x14363EC Offset: 0x14363EC VA: 0x14363EC
	public long get_CardRequestRemainingTime() { }

	// RVA: 0x1436434 Offset: 0x1436434 VA: 0x1436434
	public long get_SentCardCountForTheDay() { }

	// RVA: 0x143647C Offset: 0x143647C VA: 0x143647C
	public long get_RemainingTimeForEndOfDay() { }

	// RVA: 0x14364C4 Offset: 0x14364C4 VA: 0x14364C4
	public static Offset<GetMyTeamResponse> CreateGetMyTeamResponse(FlatBufferBuilder builder, Offset<TeamSummary> teamOffset, long currentRole = 0, StringOffset fbImageURLOffset, long helpRequestRemainingTime = 0, Offset<BaseResponse> baseResponseOffset, long teamRequestCount = 0, long cardRequestRemainingTime = 0, long sentCardCountForTheDay = 0, long remainingTimeForEndOfDay = 0) { }

	// RVA: 0x1436718 Offset: 0x1436718 VA: 0x1436718
	public static void StartGetMyTeamResponse(FlatBufferBuilder builder) { }

	// RVA: 0x14366A8 Offset: 0x14366A8 VA: 0x14366A8
	public static void AddTeam(FlatBufferBuilder builder, Offset<TeamSummary> teamOffset) { }

	// RVA: 0x1436648 Offset: 0x1436648 VA: 0x1436648
	public static void AddCurrentRole(FlatBufferBuilder builder, long currentRole) { }

	// RVA: 0x1436688 Offset: 0x1436688 VA: 0x1436688
	public static void AddFbImageURL(FlatBufferBuilder builder, StringOffset fbImageURLOffset) { }

	// RVA: 0x1436628 Offset: 0x1436628 VA: 0x1436628
	public static void AddHelpRequestRemainingTime(FlatBufferBuilder builder, long helpRequestRemainingTime) { }

	// RVA: 0x1436668 Offset: 0x1436668 VA: 0x1436668
	public static void AddBaseResponse(FlatBufferBuilder builder, Offset<BaseResponse> baseResponseOffset) { }

	// RVA: 0x1436608 Offset: 0x1436608 VA: 0x1436608
	public static void AddTeamRequestCount(FlatBufferBuilder builder, long teamRequestCount) { }

	// RVA: 0x14365E8 Offset: 0x14365E8 VA: 0x14365E8
	public static void AddCardRequestRemainingTime(FlatBufferBuilder builder, long cardRequestRemainingTime) { }

	// RVA: 0x14365C8 Offset: 0x14365C8 VA: 0x14365C8
	public static void AddSentCardCountForTheDay(FlatBufferBuilder builder, long sentCardCountForTheDay) { }

	// RVA: 0x14365A8 Offset: 0x14365A8 VA: 0x14365A8
	public static void AddRemainingTimeForEndOfDay(FlatBufferBuilder builder, long remainingTimeForEndOfDay) { }

	// RVA: 0x14366C8 Offset: 0x14366C8 VA: 0x14366C8
	public static Offset<GetMyTeamResponse> EndGetMyTeamResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1436730 Offset: 0x1436730 VA: 0x1436730
	public static void FinishGetMyTeamResponseBuffer(FlatBufferBuilder builder, Offset<GetMyTeamResponse> offset) { }

	// RVA: 0x1436744 Offset: 0x1436744 VA: 0x1436744
	public static void FinishSizePrefixedGetMyTeamResponseBuffer(FlatBufferBuilder builder, Offset<GetMyTeamResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.team