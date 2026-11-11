public struct GetEndlessEventResponse : IFlatbufferObject // TypeDefIndex: 5636
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string EventId { get; }
	public long EventType { get; }
	public long EventStartTime { get; }
	public long EventEndTime { get; }
	public bool IsFinished { get; }
	public bool IsClaimed { get; }
	public string Segment { get; }
	public string Steps { get; }

	// Methods

	// RVA: 0x173F9E4 Offset: 0x173F9E4 VA: 0x173F9E4 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173F9EC Offset: 0x173F9EC VA: 0x173F9EC
	public static void ValidateVersion() { }

	// RVA: 0x173F9F4 Offset: 0x173F9F4 VA: 0x173F9F4
	public static GetEndlessEventResponse GetRootAsGetEndlessEventResponse(ByteBuffer _bb) { }

	// RVA: 0x173FA00 Offset: 0x173FA00 VA: 0x173FA00
	public static GetEndlessEventResponse GetRootAsGetEndlessEventResponse(ByteBuffer _bb, GetEndlessEventResponse obj) { }

	// RVA: 0x173FA84 Offset: 0x173FA84 VA: 0x173FA84
	public static bool VerifyGetEndlessEventResponse(ByteBuffer _bb) { }

	// RVA: 0x173FB58 Offset: 0x173FB58 VA: 0x173FB58 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173FA44 Offset: 0x173FA44 VA: 0x173FA44
	public GetEndlessEventResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173FB94 Offset: 0x173FB94 VA: 0x173FB94
	public string get_EventId() { }

	// RVA: 0x173FBD0 Offset: 0x173FBD0 VA: 0x173FBD0
	public Nullable<ArraySegment<byte>> GetEventIdBytes() { }

	// RVA: 0x173FC08 Offset: 0x173FC08 VA: 0x173FC08
	public byte[] GetEventIdArray() { }

	// RVA: 0x173FC54 Offset: 0x173FC54 VA: 0x173FC54
	public long get_EventType() { }

	// RVA: 0x173FC9C Offset: 0x173FC9C VA: 0x173FC9C
	public long get_EventStartTime() { }

	// RVA: 0x173FCE4 Offset: 0x173FCE4 VA: 0x173FCE4
	public long get_EventEndTime() { }

	// RVA: 0x173FD2C Offset: 0x173FD2C VA: 0x173FD2C
	public bool get_IsFinished() { }

	// RVA: 0x173FD74 Offset: 0x173FD74 VA: 0x173FD74
	public bool get_IsClaimed() { }

	// RVA: 0x173FDBC Offset: 0x173FDBC VA: 0x173FDBC
	public string get_Segment() { }

	// RVA: 0x173FDF8 Offset: 0x173FDF8 VA: 0x173FDF8
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x173FE30 Offset: 0x173FE30 VA: 0x173FE30
	public byte[] GetSegmentArray() { }

	// RVA: 0x173FE7C Offset: 0x173FE7C VA: 0x173FE7C
	public string get_Steps() { }

	// RVA: 0x173FEB8 Offset: 0x173FEB8 VA: 0x173FEB8
	public Nullable<ArraySegment<byte>> GetStepsBytes() { }

	// RVA: 0x173FEF0 Offset: 0x173FEF0 VA: 0x173FEF0
	public byte[] GetStepsArray() { }

	// RVA: 0x173FF3C Offset: 0x173FF3C VA: 0x173FF3C
	public static Offset<GetEndlessEventResponse> CreateGetEndlessEventResponse(FlatBufferBuilder builder, StringOffset event_idOffset, long event_type = 0, long event_start_time = 0, long event_end_time = 0, bool is_finished = False, bool is_claimed = False, StringOffset segmentOffset, StringOffset stepsOffset) { }

	// RVA: 0x174015C Offset: 0x174015C VA: 0x174015C
	public static void StartGetEndlessEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17400AC Offset: 0x17400AC VA: 0x17400AC
	public static void AddEventId(FlatBufferBuilder builder, StringOffset eventIdOffset) { }

	// RVA: 0x174004C Offset: 0x174004C VA: 0x174004C
	public static void AddEventType(FlatBufferBuilder builder, long eventType) { }

	// RVA: 0x174002C Offset: 0x174002C VA: 0x174002C
	public static void AddEventStartTime(FlatBufferBuilder builder, long eventStartTime) { }

	// RVA: 0x174000C Offset: 0x174000C VA: 0x174000C
	public static void AddEventEndTime(FlatBufferBuilder builder, long eventEndTime) { }

	// RVA: 0x17400EC Offset: 0x17400EC VA: 0x17400EC
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x17400CC Offset: 0x17400CC VA: 0x17400CC
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x174008C Offset: 0x174008C VA: 0x174008C
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x174006C Offset: 0x174006C VA: 0x174006C
	public static void AddSteps(FlatBufferBuilder builder, StringOffset stepsOffset) { }

	// RVA: 0x174010C Offset: 0x174010C VA: 0x174010C
	public static Offset<GetEndlessEventResponse> EndGetEndlessEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1740174 Offset: 0x1740174 VA: 0x1740174
	public static void FinishGetEndlessEventResponseBuffer(FlatBufferBuilder builder, Offset<GetEndlessEventResponse> offset) { }

	// RVA: 0x1740188 Offset: 0x1740188 VA: 0x1740188
	public static void FinishSizePrefixedGetEndlessEventResponseBuffer(FlatBufferBuilder builder, Offset<GetEndlessEventResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.endless_event