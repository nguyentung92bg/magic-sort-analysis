public struct GetUserSegmentResponse : IFlatbufferObject // TypeDefIndex: 5632
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string Segment { get; }
	public bool IsAdsDisabled { get; }

	// Methods

	// RVA: 0x173EFB4 Offset: 0x173EFB4 VA: 0x173EFB4 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173EFBC Offset: 0x173EFBC VA: 0x173EFBC
	public static void ValidateVersion() { }

	// RVA: 0x173EFC4 Offset: 0x173EFC4 VA: 0x173EFC4
	public static GetUserSegmentResponse GetRootAsGetUserSegmentResponse(ByteBuffer _bb) { }

	// RVA: 0x173EFD0 Offset: 0x173EFD0 VA: 0x173EFD0
	public static GetUserSegmentResponse GetRootAsGetUserSegmentResponse(ByteBuffer _bb, GetUserSegmentResponse obj) { }

	// RVA: 0x173F054 Offset: 0x173F054 VA: 0x173F054 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173F014 Offset: 0x173F014 VA: 0x173F014
	public GetUserSegmentResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173F090 Offset: 0x173F090 VA: 0x173F090
	public string get_Segment() { }

	// RVA: 0x173F0CC Offset: 0x173F0CC VA: 0x173F0CC
	public Nullable<ArraySegment<byte>> GetSegmentBytes() { }

	// RVA: 0x173F104 Offset: 0x173F104 VA: 0x173F104
	public byte[] GetSegmentArray() { }

	// RVA: 0x173F150 Offset: 0x173F150 VA: 0x173F150
	public bool get_IsAdsDisabled() { }

	// RVA: 0x173F198 Offset: 0x173F198 VA: 0x173F198
	public static Offset<GetUserSegmentResponse> CreateGetUserSegmentResponse(FlatBufferBuilder builder, StringOffset segmentOffset, bool is_ads_disabled = False) { }

	// RVA: 0x173F280 Offset: 0x173F280 VA: 0x173F280
	public static void StartGetUserSegmentResponse(FlatBufferBuilder builder) { }

	// RVA: 0x173F1F0 Offset: 0x173F1F0 VA: 0x173F1F0
	public static void AddSegment(FlatBufferBuilder builder, StringOffset segmentOffset) { }

	// RVA: 0x173F210 Offset: 0x173F210 VA: 0x173F210
	public static void AddIsAdsDisabled(FlatBufferBuilder builder, bool isAdsDisabled) { }

	// RVA: 0x173F230 Offset: 0x173F230 VA: 0x173F230
	public static Offset<GetUserSegmentResponse> EndGetUserSegmentResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.generics