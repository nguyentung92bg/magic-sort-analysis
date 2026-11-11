public struct GetGAEEventResponse : IFlatbufferObject // TypeDefIndex: 5634
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string EventID { get; }
	public long EventType { get; }
	public long StartTime { get; }
	public long FinishTime { get; }
	public string Segment { get; }

	// Methods

	// RVA: 0x173F324 Offset: 0x173F324 VA: 0x173F324 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173F32C Offset: 0x173F32C VA: 0x173F32C
	public static void ValidateVersion() { }

	// RVA: 0x173F334 Offset: 0x173F334 VA: 0x173F334
	public static GetGAEEventResponse GetRootAsGetGAEEventResponse(ByteBuffer _bb) { }

	// RVA: 0x173F340 Offset: 0x173F340 VA: 0x173F340
	public static GetGAEEventResponse GetRootAsGetGAEEventResponse(ByteBuffer _bb, GetGAEEventResponse obj) { }

	// RVA: 0x173F3C4 Offset: 0x173F3C4 VA: 0x173F3C4
	public static bool VerifyGetGAEEventResponse(ByteBuffer _bb) { }

	// RVA: 0x173F498 Offset: 0x173F498 VA: 0x173F498 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173F384 Offset: 0x173F384 VA: 0x173F384
	public GetGAEEventResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173F4D4 Offset: 0x173F4D4 VA: 0x173F4D4
	public string get_EventID() { }

	// RVA: 0x173F510 Offset: 0x173F510 VA: 0x173F510
	public Nullable<ArraySegment<byte>> GetEventIDBytes() { }

	// RVA: 0x173F548 Offset: 0x173F548 VA: 0x173F548
	public byte[] GetEventIDArray() { }

	// RVA: 0x173F594 Offset: 0x173F594 VA: 0x173F594
	public long get_EventType() { }

	// RVA: 0x173F5DC Offset: 0x173F5DC VA: 0x173F5DC
	public long get_StartTime() { }

	// RVA: 0x173F624 Offset: 0x173F624 VA: 0x173F624
	public long get_FinishTime() { }

	// RVA: 0x173F66C Offset: 0x173F66C VA: 0x173F66C
	public string get_Segment() { }

	// RVA: 0x173F6A8 Offset: 0x173F6A8 VA: 0x173F6A8
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x173F6E0 Offset: 0x173F6E0 VA: 0x173F6E0
	public byte[] GetSegmentArray() { }

	// RVA: 0x173F72C Offset: 0x173F72C VA: 0x173F72C
	public static Offset<GetGAEEventResponse> CreateGetGAEEventResponse(FlatBufferBuilder builder, StringOffset eventIDOffset, long eventType = 0, long startTime = 0, long finishTime = 0, StringOffset segmentOffset) { }

	// RVA: 0x173F8B4 Offset: 0x173F8B4 VA: 0x173F8B4
	public static void StartGetGAEEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173F844 Offset: 0x173F844 VA: 0x173F844
	public static void AddEventID(FlatBufferBuilder builder, StringOffset eventIDOffset) { }

	// RVA: 0x173F804 Offset: 0x173F804 VA: 0x173F804
	public static void AddEventType(FlatBufferBuilder builder, long eventType) { }

	// RVA: 0x173F7E4 Offset: 0x173F7E4 VA: 0x173F7E4
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x173F7C4 Offset: 0x173F7C4 VA: 0x173F7C4
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x173F824 Offset: 0x173F824 VA: 0x173F824
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x173F864 Offset: 0x173F864 VA: 0x173F864
	public static Offset<GetGAEEventResponse> EndGetGAEEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173F8CC Offset: 0x173F8CC VA: 0x173F8CC
	public static void FinishGetGAEEventResponseBuffer(FlatBufferBuilder builder, Offset<GetGAEEventResponse> offset) { }

	// RVA: 0x173F8E0 Offset: 0x173F8E0 VA: 0x173F8E0
	public static void FinishSizePrefixedGetGAEEventResponseBuffer(FlatBufferBuilder builder, Offset<GetGAEEventResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.gae