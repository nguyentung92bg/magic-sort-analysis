public struct ClaimWelcomeBackResponse : IFlatbufferObject // TypeDefIndex: 5585
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string WelcomeBackId { get; }

	// Methods

	// RVA: 0x144339C Offset: 0x144339C VA: 0x144339C Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x14433A4 Offset: 0x14433A4 VA: 0x14433A4
	public static void ValidateVersion() { }

	// RVA: 0x14433AC Offset: 0x14433AC VA: 0x14433AC
	public static ClaimWelcomeBackResponse GetRootAsClaimWelcomeBackResponse(ByteBuffer _bb) { }

	// RVA: 0x14433B8 Offset: 0x14433B8 VA: 0x14433B8
	public static ClaimWelcomeBackResponse GetRootAsClaimWelcomeBackResponse(ByteBuffer _bb, ClaimWelcomeBackResponse obj) { }

	// RVA: 0x144343C Offset: 0x144343C VA: 0x144343C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x14433FC Offset: 0x14433FC VA: 0x14433FC
	public ClaimWelcomeBackResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1443478 Offset: 0x1443478 VA: 0x1443478
	public string get_WelcomeBackId() { }

	// RVA: 0x14434B4 Offset: 0x14434B4 VA: 0x14434B4
	public Nullable<ArraySegment<byte>> GetWelcomeBackIdBytes() { }

	// RVA: 0x14434EC Offset: 0x14434EC VA: 0x14434EC
	public byte[] GetWelcomeBackIdArray() { }

	// RVA: 0x1443538 Offset: 0x1443538 VA: 0x1443538
	public static Offset<ClaimWelcomeBackResponse> CreateClaimWelcomeBackResponse(FlatBufferBuilder builder, StringOffset welcome_back_idOffset) { }

	// RVA: 0x14435F0 Offset: 0x14435F0 VA: 0x14435F0
	public static void StartClaimWelcomeBackResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1443580 Offset: 0x1443580 VA: 0x1443580
	public static void AddWelcomeBackId(FlatBufferBuilder builder, StringOffset welcomeBackIdOffset) { }

	// RVA: 0x14435A0 Offset: 0x14435A0 VA: 0x14435A0
	public static Offset<ClaimWelcomeBackResponse> EndClaimWelcomeBackResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.welcome_back