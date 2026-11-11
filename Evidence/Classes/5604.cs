public struct SpecialOfferResponse : IFlatbufferObject // TypeDefIndex: 5604
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string EventId { get; }
	public long EventType { get; }
	public long EventStartTime { get; }
	public long UiType { get; }
	public long EventEndTime { get; }
	public bool IsFinished { get; }
	public bool IsClaimed { get; }
	public string Segment { get; }
	public Nullable<SegmentedOfferPackage> SegmentedOfferPackage { get; }

	// Methods

	// RVA: 0x17367FC Offset: 0x17367FC VA: 0x17367FC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1736804 Offset: 0x1736804 VA: 0x1736804
	public static void ValidateVersion() { }

	// RVA: 0x173680C Offset: 0x173680C VA: 0x173680C
	public static SpecialOfferResponse GetRootAsSpecialOfferResponse(ByteBuffer _bb) { }

	// RVA: 0x1736818 Offset: 0x1736818 VA: 0x1736818
	public static SpecialOfferResponse GetRootAsSpecialOfferResponse(ByteBuffer _bb, SpecialOfferResponse obj) { }

	// RVA: 0x173689C Offset: 0x173689C VA: 0x173689C
	public static bool VerifySpecialOfferResponse(ByteBuffer _bb) { }

	// RVA: 0x1736970 Offset: 0x1736970 VA: 0x1736970 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173685C Offset: 0x173685C VA: 0x173685C
	public SpecialOfferResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x17369AC Offset: 0x17369AC VA: 0x17369AC
	public string get_EventId() { }

	// RVA: 0x17369E8 Offset: 0x17369E8 VA: 0x17369E8
	public Nullable<ArraySegment<byte>> GetEventIdBytes() { }

	// RVA: 0x1736A20 Offset: 0x1736A20 VA: 0x1736A20
	public byte[] GetEventIdArray() { }

	// RVA: 0x1736A6C Offset: 0x1736A6C VA: 0x1736A6C
	public long get_EventType() { }

	// RVA: 0x1736AB4 Offset: 0x1736AB4 VA: 0x1736AB4
	public long get_EventStartTime() { }

	// RVA: 0x1736AFC Offset: 0x1736AFC VA: 0x1736AFC
	public long get_UiType() { }

	// RVA: 0x1736B44 Offset: 0x1736B44 VA: 0x1736B44
	public long get_EventEndTime() { }

	// RVA: 0x1736B8C Offset: 0x1736B8C VA: 0x1736B8C
	public bool get_IsFinished() { }

	// RVA: 0x1736BD4 Offset: 0x1736BD4 VA: 0x1736BD4
	public bool get_IsClaimed() { }

	// RVA: 0x1736C1C Offset: 0x1736C1C VA: 0x1736C1C
	public string get_Segment() { }

	// RVA: 0x1736C58 Offset: 0x1736C58 VA: 0x1736C58
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x1736C90 Offset: 0x1736C90 VA: 0x1736C90
	public byte[] GetSegmentArray() { }

	// RVA: 0x1736CDC Offset: 0x1736CDC VA: 0x1736CDC
	public Nullable<SegmentedOfferPackage> get_SegmentedOfferPackage() { }

	// RVA: 0x1736D9C Offset: 0x1736D9C VA: 0x1736D9C
	public static Offset<SpecialOfferResponse> CreateSpecialOfferResponse(FlatBufferBuilder builder, StringOffset event_idOffset, long event_type = 0, long event_start_time = 0, long ui_type = 0, long event_end_time = 0, bool is_finished = False, bool is_claimed = False, StringOffset segmentOffset, Offset<SegmentedOfferPackage> segmented_offer_packageOffset) { }

	// RVA: 0x1736FF0 Offset: 0x1736FF0 VA: 0x1736FF0
	public static void StartSpecialOfferResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1736F40 Offset: 0x1736F40 VA: 0x1736F40
	public static void AddEventId(FlatBufferBuilder builder, StringOffset eventIdOffset) { }

	// RVA: 0x1736EE0 Offset: 0x1736EE0 VA: 0x1736EE0
	public static void AddEventType(FlatBufferBuilder builder, long eventType) { }

	// RVA: 0x1736EC0 Offset: 0x1736EC0 VA: 0x1736EC0
	public static void AddEventStartTime(FlatBufferBuilder builder, long eventStartTime) { }

	// RVA: 0x1736EA0 Offset: 0x1736EA0 VA: 0x1736EA0
	public static void AddUiType(FlatBufferBuilder builder, long uiType) { }

	// RVA: 0x1736E80 Offset: 0x1736E80 VA: 0x1736E80
	public static void AddEventEndTime(FlatBufferBuilder builder, long eventEndTime) { }

	// RVA: 0x1736F80 Offset: 0x1736F80 VA: 0x1736F80
	public static void AddIsFinished(FlatBufferBuilder builder, bool isFinished) { }

	// RVA: 0x1736F60 Offset: 0x1736F60 VA: 0x1736F60
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x1736F20 Offset: 0x1736F20 VA: 0x1736F20
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x1736F00 Offset: 0x1736F00 VA: 0x1736F00
	public static void AddSegmentedOfferPackage(FlatBufferBuilder builder, Offset<SegmentedOfferPackage> segmentedOfferPackageOffset) { }

	// RVA: 0x1736FA0 Offset: 0x1736FA0 VA: 0x1736FA0
	public static Offset<SpecialOfferResponse> EndSpecialOfferResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1737008 Offset: 0x1737008 VA: 0x1737008
	public static void FinishSpecialOfferResponseBuffer(FlatBufferBuilder builder, Offset<SpecialOfferResponse> offset) { }

	// RVA: 0x173701C Offset: 0x173701C VA: 0x173701C
	public static void FinishSizePrefixedSpecialOfferResponseBuffer(FlatBufferBuilder builder, Offset<SpecialOfferResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.special_offer