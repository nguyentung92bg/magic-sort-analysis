public struct ChooseOneOfferResponse : IFlatbufferObject // TypeDefIndex: 5644
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
	public int SegmentedOfferPackagesLength { get; }
	public Nullable<SegmentedOfferPackageWithID> AllSegmentedOfferPackage { get; }

	// Methods

	// RVA: 0x1741560 Offset: 0x1741560 VA: 0x1741560 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1741568 Offset: 0x1741568 VA: 0x1741568
	public static void ValidateVersion() { }

	// RVA: 0x1741570 Offset: 0x1741570 VA: 0x1741570
	public static ChooseOneOfferResponse GetRootAsChooseOneOfferResponse(ByteBuffer _bb) { }

	// RVA: 0x174157C Offset: 0x174157C VA: 0x174157C
	public static ChooseOneOfferResponse GetRootAsChooseOneOfferResponse(ByteBuffer _bb, ChooseOneOfferResponse obj) { }

	// RVA: 0x1741600 Offset: 0x1741600 VA: 0x1741600
	public static bool VerifyChooseOneOfferResponse(ByteBuffer _bb) { }

	// RVA: 0x17416D4 Offset: 0x17416D4 VA: 0x17416D4 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x17415C0 Offset: 0x17415C0 VA: 0x17415C0
	public ChooseOneOfferResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1741710 Offset: 0x1741710 VA: 0x1741710
	public string get_EventId() { }

	// RVA: 0x174174C Offset: 0x174174C VA: 0x174174C
	public Nullable<ArraySegment<byte>> GetEventIdBytes() { }

	// RVA: 0x1741784 Offset: 0x1741784 VA: 0x1741784
	public byte[] GetEventIdArray() { }

	// RVA: 0x17417D0 Offset: 0x17417D0 VA: 0x17417D0
	public long get_EventType() { }

	// RVA: 0x1741818 Offset: 0x1741818 VA: 0x1741818
	public long get_EventStartTime() { }

	// RVA: 0x1741860 Offset: 0x1741860 VA: 0x1741860
	public long get_EventEndTime() { }

	// RVA: 0x17418A8 Offset: 0x17418A8 VA: 0x17418A8
	public bool get_IsFinished() { }

	// RVA: 0x17418F0 Offset: 0x17418F0 VA: 0x17418F0
	public bool get_IsClaimed() { }

	// RVA: 0x1741938 Offset: 0x1741938 VA: 0x1741938
	public string get_Segment() { }

	// RVA: 0x1741974 Offset: 0x1741974 VA: 0x1741974
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x17419AC Offset: 0x17419AC VA: 0x17419AC
	public byte[] GetSegmentArray() { }

	// RVA: 0x17419F8 Offset: 0x17419F8 VA: 0x17419F8
	public Nullable<SegmentedOfferPackageWithID> SegmentedOfferPackages(int j) { }

	// RVA: 0x1741AD0 Offset: 0x1741AD0 VA: 0x1741AD0
	public int get_SegmentedOfferPackagesLength() { }

	// RVA: 0x1741B04 Offset: 0x1741B04 VA: 0x1741B04
	public Nullable<SegmentedOfferPackageWithID> get_AllSegmentedOfferPackage() { }

	// RVA: 0x1741BC4 Offset: 0x1741BC4 VA: 0x1741BC4
	public static Offset<ChooseOneOfferResponse> CreateChooseOneOfferResponse(FlatBufferBuilder builder, StringOffset event_idOffset, long event_type = 0, long event_start_time = 0, long event_end_time = 0, bool is_finished = False, bool is_claimed = False, StringOffset segmentOffset, VectorOffset segmented_offer_packagesOffset, Offset<SegmentedOfferPackageWithID> all_segmented_offer_packageOffset) { }

	// RVA: 0x1741E18 Offset: 0x1741E18 VA: 0x1741E18
	public static void StartChooseOneOfferResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1741D68 Offset: 0x1741D68 VA: 0x1741D68
	public static void AddEventId(FlatBufferBuilder builder, StringOffset eventIdOffset) { }

	// RVA: 0x1741CE8 Offset: 0x1741CE8 VA: 0x1741CE8
	public static void AddEventType(FlatBufferBuilder builder, long eventType) { }

	// RVA: 0x1741CC8 Offset: 0x1741CC8 VA: 0x1741CC8
	public static void AddEventStartTime(FlatBufferBuilder builder, long eventStartTime) { }

	// RVA: 0x1741CA8 Offset: 0x1741CA8 VA: 0x1741CA8
	public static void AddEventEndTime(FlatBufferBuilder builder, long eventEndTime) { }

	// RVA: 0x1741DA8 Offset: 0x1741DA8 VA: 0x1741DA8
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x1741D88 Offset: 0x1741D88 VA: 0x1741D88
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x1741D48 Offset: 0x1741D48 VA: 0x1741D48
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x1741D28 Offset: 0x1741D28 VA: 0x1741D28
	public static void AddSegmentedOfferPackages(FlatBufferBuilder builder, VectorOffset segmentedOfferPackagesOffset) { }

	// RVA: 0x1741E30 Offset: 0x1741E30 VA: 0x1741E30
	public static VectorOffset CreateSegmentedOfferPackagesVector(FlatBufferBuilder builder, Offset<SegmentedOfferPackageWithID>[] data) { }

	// RVA: 0x1741ED8 Offset: 0x1741ED8 VA: 0x1741ED8
	public static VectorOffset CreateSegmentedOfferPackagesVectorBlock(FlatBufferBuilder builder, Offset<SegmentedOfferPackageWithID>[] data) { }

	// RVA: 0x1741F60 Offset: 0x1741F60 VA: 0x1741F60
	public static VectorOffset CreateSegmentedOfferPackagesVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<SegmentedOfferPackageWithID>> data) { }

	// RVA: 0x1742024 Offset: 0x1742024 VA: 0x1742024
	public static VectorOffset CreateSegmentedOfferPackagesVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x17420B8 Offset: 0x17420B8 VA: 0x17420B8
	public static void StartSegmentedOfferPackagesVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1741D08 Offset: 0x1741D08 VA: 0x1741D08
	public static void AddAllSegmentedOfferPackage(FlatBufferBuilder builder, Offset<SegmentedOfferPackageWithID> allSegmentedOfferPackageOffset) { }

	// RVA: 0x1741DC8 Offset: 0x1741DC8 VA: 0x1741DC8
	public static Offset<ChooseOneOfferResponse> EndChooseOneOfferResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17420D8 Offset: 0x17420D8 VA: 0x17420D8
	public static void FinishChooseOneOfferResponseBuffer(FlatBufferBuilder builder, Offset<ChooseOneOfferResponse> offset) { }

	// RVA: 0x17420EC Offset: 0x17420EC VA: 0x17420EC
	public static void FinishSizePrefixedChooseOneOfferResponseBuffer(FlatBufferBuilder builder, Offset<ChooseOneOfferResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.choose_one_offer