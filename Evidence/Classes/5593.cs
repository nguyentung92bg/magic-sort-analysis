public struct GetTaskStationEventResponse : IFlatbufferObject // TypeDefIndex: 5593
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
	public int StagesLength { get; }

	// Methods

	// RVA: 0x1445280 Offset: 0x1445280 VA: 0x1445280 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1445288 Offset: 0x1445288 VA: 0x1445288
	public static void ValidateVersion() { }

	// RVA: 0x1445290 Offset: 0x1445290 VA: 0x1445290
	public static GetTaskStationEventResponse GetRootAsGetTaskStationEventResponse(ByteBuffer _bb) { }

	// RVA: 0x144529C Offset: 0x144529C VA: 0x144529C
	public static GetTaskStationEventResponse GetRootAsGetTaskStationEventResponse(ByteBuffer _bb, GetTaskStationEventResponse obj) { }

	// RVA: 0x1445320 Offset: 0x1445320 VA: 0x1445320
	public static bool VerifyGetTaskStationEventResponse(ByteBuffer _bb) { }

	// RVA: 0x14453F4 Offset: 0x14453F4 VA: 0x14453F4 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x14452E0 Offset: 0x14452E0 VA: 0x14452E0
	public GetTaskStationEventResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1445430 Offset: 0x1445430 VA: 0x1445430
	public string get_EventId() { }

	// RVA: 0x144546C Offset: 0x144546C VA: 0x144546C
	public Nullable<ArraySegment<byte>> GetEventIdBytes() { }

	// RVA: 0x14454A4 Offset: 0x14454A4 VA: 0x14454A4
	public byte[] GetEventIdArray() { }

	// RVA: 0x14454F0 Offset: 0x14454F0 VA: 0x14454F0
	public long get_EventType() { }

	// RVA: 0x1445538 Offset: 0x1445538 VA: 0x1445538
	public long get_StartTime() { }

	// RVA: 0x1445580 Offset: 0x1445580 VA: 0x1445580
	public long get_FinishTime() { }

	// RVA: 0x14455C8 Offset: 0x14455C8 VA: 0x14455C8
	public string get_Segment() { }

	// RVA: 0x1445604 Offset: 0x1445604 VA: 0x1445604
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x144563C Offset: 0x144563C VA: 0x144563C
	public byte[] GetSegmentArray() { }

	// RVA: 0x1445688 Offset: 0x1445688 VA: 0x1445688
	public Nullable<TaskStationPlayerStage> Stages(int j) { }

	// RVA: 0x144579C Offset: 0x144579C VA: 0x144579C
	public int get_StagesLength() { }

	// RVA: 0x14457D0 Offset: 0x14457D0 VA: 0x14457D0
	public static Offset<GetTaskStationEventResponse> CreateGetTaskStationEventResponse(FlatBufferBuilder builder, StringOffset event_idOffset, long event_type = 0, long start_time = 0, long finish_time = 0, StringOffset segmentOffset, VectorOffset stagesOffset) { }

	// RVA: 0x1445988 Offset: 0x1445988 VA: 0x1445988
	public static void StartGetTaskStationEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1445918 Offset: 0x1445918 VA: 0x1445918
	public static void AddEventId(FlatBufferBuilder builder, StringOffset eventIdOffset) { }

	// RVA: 0x14458B8 Offset: 0x14458B8 VA: 0x14458B8
	public static void AddEventType(FlatBufferBuilder builder, long eventType) { }

	// RVA: 0x1445898 Offset: 0x1445898 VA: 0x1445898
	public static void AddStartTime(FlatBufferBuilder builder, long startTime) { }

	// RVA: 0x1445878 Offset: 0x1445878 VA: 0x1445878
	public static void AddFinishTime(FlatBufferBuilder builder, long finishTime) { }

	// RVA: 0x14458F8 Offset: 0x14458F8 VA: 0x14458F8
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x14458D8 Offset: 0x14458D8 VA: 0x14458D8
	public static void AddStages(FlatBufferBuilder builder, VectorOffset stagesOffset) { }

	// RVA: 0x14459A0 Offset: 0x14459A0 VA: 0x14459A0
	public static VectorOffset CreateStagesVector(FlatBufferBuilder builder, Offset<TaskStationPlayerStage>[] data) { }

	// RVA: 0x1445A48 Offset: 0x1445A48 VA: 0x1445A48
	public static VectorOffset CreateStagesVectorBlock(FlatBufferBuilder builder, Offset<TaskStationPlayerStage>[] data) { }

	// RVA: 0x1445AD0 Offset: 0x1445AD0 VA: 0x1445AD0
	public static VectorOffset CreateStagesVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<TaskStationPlayerStage>> data) { }

	// RVA: 0x1445B94 Offset: 0x1445B94 VA: 0x1445B94
	public static VectorOffset CreateStagesVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1445C28 Offset: 0x1445C28 VA: 0x1445C28
	public static void StartStagesVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1445938 Offset: 0x1445938 VA: 0x1445938
	public static Offset<GetTaskStationEventResponse> EndGetTaskStationEventResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1445C48 Offset: 0x1445C48 VA: 0x1445C48
	public static void FinishGetTaskStationEventResponseBuffer(FlatBufferBuilder builder, Offset<GetTaskStationEventResponse> offset) { }

	// RVA: 0x1445C5C Offset: 0x1445C5C VA: 0x1445C5C
	public static void FinishSizePrefixedGetTaskStationEventResponseBuffer(FlatBufferBuilder builder, Offset<GetTaskStationEventResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.task_station