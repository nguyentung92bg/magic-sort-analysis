public struct LoginResponse : IFlatbufferObject // TypeDefIndex: 5581
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string UserId { get; }
	public string UserPublicId { get; }
	public string UserName { get; }
	public string Token { get; }
	public long Progress { get; }
	public bool ForceFetch { get; }

	// Methods

	// RVA: 0x14425B4 Offset: 0x14425B4 VA: 0x14425B4 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x14425BC Offset: 0x14425BC VA: 0x14425BC
	public static void ValidateVersion() { }

	// RVA: 0x14425C4 Offset: 0x14425C4 VA: 0x14425C4
	public static LoginResponse GetRootAsLoginResponse(ByteBuffer _bb) { }

	// RVA: 0x14425D0 Offset: 0x14425D0 VA: 0x14425D0
	public static LoginResponse GetRootAsLoginResponse(ByteBuffer _bb, LoginResponse obj) { }

	// RVA: 0x1442654 Offset: 0x1442654 VA: 0x1442654
	public static bool VerifyLoginResponse(ByteBuffer _bb) { }

	// RVA: 0x1442728 Offset: 0x1442728 VA: 0x1442728 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1442614 Offset: 0x1442614 VA: 0x1442614
	public LoginResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1442764 Offset: 0x1442764 VA: 0x1442764
	public string get_UserId() { }

	// RVA: 0x14427A0 Offset: 0x14427A0 VA: 0x14427A0
	public Nullable<ArraySegment<byte>> GetUserIdBytes() { }

	// RVA: 0x14427D8 Offset: 0x14427D8 VA: 0x14427D8
	public byte[] GetUserIdArray() { }

	// RVA: 0x1442824 Offset: 0x1442824 VA: 0x1442824
	public string get_UserPublicId() { }

	// RVA: 0x1442860 Offset: 0x1442860 VA: 0x1442860
	public Nullable<ArraySegment<byte>> GetUserPublicIdBytes() { }

	// RVA: 0x1442898 Offset: 0x1442898 VA: 0x1442898
	public byte[] GetUserPublicIdArray() { }

	// RVA: 0x14428E4 Offset: 0x14428E4 VA: 0x14428E4
	public string get_UserName() { }

	// RVA: 0x1442920 Offset: 0x1442920 VA: 0x1442920
	public Nullable<ArraySegment<byte>> GetUserNameBytes() { }

	// RVA: 0x1442958 Offset: 0x1442958 VA: 0x1442958
	public byte[] GetUserNameArray() { }

	// RVA: 0x14429A4 Offset: 0x14429A4 VA: 0x14429A4
	public string get_Token() { }

	// RVA: 0x14429E0 Offset: 0x14429E0 VA: 0x14429E0
	public Nullable<ArraySegment<byte>> GetTokenBytes() { }

	// RVA: 0x1442A18 Offset: 0x1442A18 VA: 0x1442A18
	public byte[] GetTokenArray() { }

	// RVA: 0x1442A64 Offset: 0x1442A64 VA: 0x1442A64
	public long get_Progress() { }

	// RVA: 0x1442AAC Offset: 0x1442AAC VA: 0x1442AAC
	public bool get_ForceFetch() { }

	// RVA: 0x1442AF4 Offset: 0x1442AF4 VA: 0x1442AF4
	public static Offset<LoginResponse> CreateLoginResponse(FlatBufferBuilder builder, StringOffset user_idOffset, StringOffset user_public_idOffset, StringOffset user_nameOffset, StringOffset tokenOffset, long progress = 0, bool force_fetch = False) { }

	// RVA: 0x1442CAC Offset: 0x1442CAC VA: 0x1442CAC
	public static void StartLoginResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1442C1C Offset: 0x1442C1C VA: 0x1442C1C
	public static void AddUserId(FlatBufferBuilder builder, StringOffset userIdOffset) { }

	// RVA: 0x1442BFC Offset: 0x1442BFC VA: 0x1442BFC
	public static void AddUserPublicId(FlatBufferBuilder builder, StringOffset userPublicIdOffset) { }

	// RVA: 0x1442BDC Offset: 0x1442BDC VA: 0x1442BDC
	public static void AddUserName(FlatBufferBuilder builder, StringOffset userNameOffset) { }

	// RVA: 0x1442BBC Offset: 0x1442BBC VA: 0x1442BBC
	public static void AddToken(FlatBufferBuilder builder, StringOffset tokenOffset) { }

	// RVA: 0x1442B9C Offset: 0x1442B9C VA: 0x1442B9C
	public static void AddProgress(FlatBufferBuilder builder, long progress) { }

	// RVA: 0x1442C3C Offset: 0x1442C3C VA: 0x1442C3C
	public static void AddForceFetch(FlatBufferBuilder builder, bool forceFetch) { }

	// RVA: 0x1442C5C Offset: 0x1442C5C VA: 0x1442C5C
	public static Offset<LoginResponse> EndLoginResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1442CC4 Offset: 0x1442CC4 VA: 0x1442CC4
	public static void FinishLoginResponseBuffer(FlatBufferBuilder builder, Offset<LoginResponse> offset) { }

	// RVA: 0x1442CD8 Offset: 0x1442CD8 VA: 0x1442CD8
	public static void FinishSizePrefixedLoginResponseBuffer(FlatBufferBuilder builder, Offset<LoginResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.login