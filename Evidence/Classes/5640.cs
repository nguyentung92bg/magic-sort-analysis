public struct ClaimCompensationResponse : IFlatbufferObject // TypeDefIndex: 5640
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string CompensationId { get; }

	// Methods

	// RVA: 0x17409B0 Offset: 0x17409B0 VA: 0x17409B0 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x17409B8 Offset: 0x17409B8 VA: 0x17409B8
	public static void ValidateVersion() { }

	// RVA: 0x17409C0 Offset: 0x17409C0 VA: 0x17409C0
	public static ClaimCompensationResponse GetRootAsClaimCompensationResponse(ByteBuffer _bb) { }

	// RVA: 0x17409CC Offset: 0x17409CC VA: 0x17409CC
	public static ClaimCompensationResponse GetRootAsClaimCompensationResponse(ByteBuffer _bb, ClaimCompensationResponse obj) { }

	// RVA: 0x1740A50 Offset: 0x1740A50 VA: 0x1740A50 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1740A10 Offset: 0x1740A10 VA: 0x1740A10
	public ClaimCompensationResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1740A8C Offset: 0x1740A8C VA: 0x1740A8C
	public string get_CompensationId() { }

	// RVA: 0x1740AC8 Offset: 0x1740AC8 VA: 0x1740AC8
	public Nullable<ArraySegment<byte>> GetCompensationIdBytes() { }

	// RVA: 0x1740B00 Offset: 0x1740B00 VA: 0x1740B00
	public byte[] GetCompensationIdArray() { }

	// RVA: 0x1740B4C Offset: 0x1740B4C VA: 0x1740B4C
	public static Offset<ClaimCompensationResponse> CreateClaimCompensationResponse(FlatBufferBuilder builder, StringOffset compensation_idOffset) { }

	// RVA: 0x1740C04 Offset: 0x1740C04 VA: 0x1740C04
	public static void StartClaimCompensationResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1740B94 Offset: 0x1740B94 VA: 0x1740B94
	public static void AddCompensationId(FlatBufferBuilder builder, StringOffset compensationIdOffset) { }

	// RVA: 0x1740BB4 Offset: 0x1740BB4 VA: 0x1740BB4
	public static Offset<ClaimCompensationResponse> EndClaimCompensationResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.compensation