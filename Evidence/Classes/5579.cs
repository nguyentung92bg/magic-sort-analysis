public struct FBLoginResponse : IFlatbufferObject // TypeDefIndex: 5579
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string UserId { get; }
	public string Username { get; }
	public long Progress { get; }

	// Methods

	// RVA: 0x1442130 Offset: 0x1442130 VA: 0x1442130 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1442138 Offset: 0x1442138 VA: 0x1442138
	public static void ValidateVersion() { }

	// RVA: 0x1442140 Offset: 0x1442140 VA: 0x1442140
	public static FBLoginResponse GetRootAsFBLoginResponse(ByteBuffer _bb) { }

	// RVA: 0x144214C Offset: 0x144214C VA: 0x144214C
	public static FBLoginResponse GetRootAsFBLoginResponse(ByteBuffer _bb, FBLoginResponse obj) { }

	// RVA: 0x14421D0 Offset: 0x14421D0 VA: 0x14421D0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1442190 Offset: 0x1442190 VA: 0x1442190
	public FBLoginResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x144220C Offset: 0x144220C VA: 0x144220C
	public string get_UserId() { }

	// RVA: 0x1442248 Offset: 0x1442248 VA: 0x1442248
	public Nullable<ArraySegment<byte>> GetUserIdBytes() { }

	// RVA: 0x1442280 Offset: 0x1442280 VA: 0x1442280
	public byte[] GetUserIdArray() { }

	// RVA: 0x14422CC Offset: 0x14422CC VA: 0x14422CC
	public string get_Username() { }

	// RVA: 0x1442308 Offset: 0x1442308 VA: 0x1442308
	public Nullable<ArraySegment<byte>> GetUsernameBytes() { }

	// RVA: 0x1442340 Offset: 0x1442340 VA: 0x1442340
	public byte[] GetUsernameArray() { }

	// RVA: 0x144238C Offset: 0x144238C VA: 0x144238C
	public long get_Progress() { }

	// RVA: 0x14423D4 Offset: 0x14423D4 VA: 0x14423D4
	public static Offset<FBLoginResponse> CreateFBLoginResponse(FlatBufferBuilder builder, StringOffset user_idOffset, StringOffset usernameOffset, long progress = 0) { }

	// RVA: 0x14424F4 Offset: 0x14424F4 VA: 0x14424F4
	public static void StartFBLoginResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1442484 Offset: 0x1442484 VA: 0x1442484
	public static void AddUserId(FlatBufferBuilder builder, StringOffset userIdOffset) { }

	// RVA: 0x1442464 Offset: 0x1442464 VA: 0x1442464
	public static void AddUsername(FlatBufferBuilder builder, StringOffset usernameOffset) { }

	// RVA: 0x1442444 Offset: 0x1442444 VA: 0x1442444
	public static void AddProgress(FlatBufferBuilder builder, long progress) { }

	// RVA: 0x14424A4 Offset: 0x14424A4 VA: 0x14424A4
	public static Offset<FBLoginResponse> EndFBLoginResponse(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.login