public struct PawTouchOfferResponse : IFlatbufferObject // TypeDefIndex: 5612
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string EventId { get; }
	public long EventType { get; }
	public long EndTime { get; }
	public string Segment { get; }
	public Nullable<SegmentedOfferPackage> SegmentedOfferPackage { get; }

	// Methods

	// RVA: 0x17391D8 Offset: 0x17391D8 VA: 0x17391D8 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x17391E0 Offset: 0x17391E0 VA: 0x17391E0
	public static void ValidateVersion() { }

	// RVA: 0x17391E8 Offset: 0x17391E8 VA: 0x17391E8
	public static PawTouchOfferResponse GetRootAsPawTouchOfferResponse(ByteBuffer _bb) { }

	// RVA: 0x17391F4 Offset: 0x17391F4 VA: 0x17391F4
	public static PawTouchOfferResponse GetRootAsPawTouchOfferResponse(ByteBuffer _bb, PawTouchOfferResponse obj) { }

	// RVA: 0x1739278 Offset: 0x1739278 VA: 0x1739278
	public static bool VerifyPawTouchOfferResponse(ByteBuffer _bb) { }

	// RVA: 0x173934C Offset: 0x173934C VA: 0x173934C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1739238 Offset: 0x1739238 VA: 0x1739238
	public PawTouchOfferResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1739388 Offset: 0x1739388 VA: 0x1739388
	public string get_EventId() { }

	// RVA: 0x17393C4 Offset: 0x17393C4 VA: 0x17393C4
	public Nullable<ArraySegment<byte>> GetEventIdBytes() { }

	// RVA: 0x17393FC Offset: 0x17393FC VA: 0x17393FC
	public byte[] GetEventIdArray() { }

	// RVA: 0x1739448 Offset: 0x1739448 VA: 0x1739448
	public long get_EventType() { }

	// RVA: 0x1739490 Offset: 0x1739490 VA: 0x1739490
	public long get_EndTime() { }

	// RVA: 0x17394D8 Offset: 0x17394D8 VA: 0x17394D8
	public string get_Segment() { }

	// RVA: 0x1739514 Offset: 0x1739514 VA: 0x1739514
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x173954C Offset: 0x173954C VA: 0x173954C
	public byte[] GetSegmentArray() { }

	// RVA: 0x1739598 Offset: 0x1739598 VA: 0x1739598
	public Nullable<SegmentedOfferPackage> get_SegmentedOfferPackage() { }

	// RVA: 0x1739658 Offset: 0x1739658 VA: 0x1739658
	public static Offset<PawTouchOfferResponse> CreatePawTouchOfferResponse(FlatBufferBuilder builder, StringOffset event_idOffset, long event_type = 0, long end_time = 0, StringOffset segmentOffset, Offset<SegmentedOfferPackage> segmented_offer_packageOffset) { }

	// RVA: 0x17397E0 Offset: 0x17397E0 VA: 0x17397E0
	public static void StartPawTouchOfferResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1739770 Offset: 0x1739770 VA: 0x1739770
	public static void AddEventId(FlatBufferBuilder builder, StringOffset eventIdOffset) { }

	// RVA: 0x1739710 Offset: 0x1739710 VA: 0x1739710
	public static void AddEventType(FlatBufferBuilder builder, long eventType) { }

	// RVA: 0x17396F0 Offset: 0x17396F0 VA: 0x17396F0
	public static void AddEndTime(FlatBufferBuilder builder, long endTime) { }

	// RVA: 0x1739750 Offset: 0x1739750 VA: 0x1739750
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x1739730 Offset: 0x1739730 VA: 0x1739730
	public static void AddSegmentedOfferPackage(FlatBufferBuilder builder, Offset<SegmentedOfferPackage> segmentedOfferPackageOffset) { }

	// RVA: 0x1739790 Offset: 0x1739790 VA: 0x1739790
	public static Offset<PawTouchOfferResponse> EndPawTouchOfferResponse(FlatBufferBuilder builder) { }

	// RVA: 0x17397F8 Offset: 0x17397F8 VA: 0x17397F8
	public static void FinishPawTouchOfferResponseBuffer(FlatBufferBuilder builder, Offset<PawTouchOfferResponse> offset) { }

	// RVA: 0x173980C Offset: 0x173980C VA: 0x173980C
	public static void FinishSizePrefixedPawTouchOfferResponseBuffer(FlatBufferBuilder builder, Offset<PawTouchOfferResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.paw_touch_offer