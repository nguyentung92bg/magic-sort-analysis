public struct GetDailyRewardEventResponse : IFlatbufferObject // TypeDefIndex: 5638
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string EventId { get; }
	public long EventType { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public string Segment { get; }

	// Methods

	// RVA: 0x17402F0 Offset: 0x17402F0 VA: 0x17402F0 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x17402F8 Offset: 0x17402F8 VA: 0x17402F8
	public static void ValidateVersion() { }

	// RVA: 0x1740300 Offset: 0x1740300 VA: 0x1740300
	public static GetDailyRewardEventResponse GetRootAsGetDailyRewardEventResponse(ByteBuffer _bb) { }

	// RVA: 0x174030C Offset: 0x174030C VA: 0x174030C
	public static GetDailyRewardEventResponse GetRootAsGetDailyRewardEventResponse(ByteBuffer _bb, GetDailyRewardEventResponse obj) { }

	// RVA: 0x1740390 Offset: 0x1740390 VA: 0x1740390
	public static bool VerifyGetDailyRewardEventResponse(ByteBuffer _bb) { }

	// RVA: 0x1740464 Offset: 0x1740464 VA: 0x1740464 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1740350 Offset: 0x1740350 VA: 0x1740350
	public GetDailyRewardEventResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x17404A0 Offset: 0x17404A0 VA: 0x17404A0
	public string get_EventId() { }

	// RVA: 0x17404DC Offset: 0x17404DC VA: 0x17404DC
	public Nullable<ArraySegment<byte>> GetEventIdBytes() { }

	// RVA: 0x1740514 Offset: 0x1740514 VA: 0x1740514
	public byte[] GetEventIdArray() { }

	// RVA: 0x1740560 Offset: 0x1740560 VA: 0x1740560
	public long get_EventType() { }

	// RVA: 0x17405A8 Offset: 0x17405A8 VA: 0x17405A8
	public long get_StartTime() { }

	// RVA: 0x17405F0 Offset: 0x17405F0 VA: 0x17405F0
	public long get_FinishTime() { }

	// RVA: 0x1740638 Offset: 0x1740638 VA: 0x1740638
	public string get_Segment() { }

	// RVA: 0x1740674 Offset: 0x1740674 VA: 0x1740674
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x17406AC Offset: 0x17406AC VA: 0x17406AC
	public byte[] GetSegmentArray() { }

	// RVA: 0x17406F8 Offset: 0x17406F8 VA: 0x17406F8
	public static Offset<GetDailyRewardEventResponse> CreateGetDailyRewardEventResponse(FlatBufferBuilder builder, StringOffset event_idOffset, long event_type = 0, long start_time = 0, long finish_time = 0, StringOffset segmentOffset) { }

	// RVA: 0x1740880 Offset: 0x1740880 VA: 0x1740880
	public static void StartGetDailyRewardEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1740810 Offset: 0x1740810 VA: 0x1740810
	public static void AddEventId(FlatBufferBuilder builder, StringOffset eventIdOffset) { }

	// RVA: 0x17407D0 Offset: 0x17407D0 VA: 0x17407D0
	public static void AddEventType(FlatBufferBuilder builder, long eventType) { }

	// RVA: 0x17407B0 Offset: 0x17407B0 VA: 0x17407B0
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x1740790 Offset: 0x1740790 VA: 0x1740790
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x17407F0 Offset: 0x17407F0 VA: 0x17407F0
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x1740830 Offset: 0x1740830 VA: 0x1740830
	public static Offset<GetDailyRewardEventResponse> EndGetDailyRewardEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1740898 Offset: 0x1740898 VA: 0x1740898
	public static void FinishGetDailyRewardEventResponseBuffer(FlatBufferBuilder builder, Offset<GetDailyRewardEventResponse> offset) { }

	// RVA: 0x17408AC Offset: 0x17408AC VA: 0x17408AC
	public static void FinishSizePrefixedGetDailyRewardEventResponseBuffer(FlatBufferBuilder builder, Offset<GetDailyRewardEventResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.daily_reward