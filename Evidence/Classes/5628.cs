public struct GlobalLeaderboardPlayer : IFlatbufferObject // TypeDefIndex: 5628
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string UserPublicID { get; }
	public string NickName { get; }
	public long Score { get; }
	public long Rank { get; }
	public bool IsMe { get; }
	public string ImageUrl { get; }
	public string ImageID { get; }

	// Methods

	// RVA: 0x173E5AC Offset: 0x173E5AC VA: 0x173E5AC Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x173E5B4 Offset: 0x173E5B4 VA: 0x173E5B4
	public static void ValidateVersion() { }

	// RVA: 0x173E5BC Offset: 0x173E5BC VA: 0x173E5BC
	public static GlobalLeaderboardPlayer GetRootAsGlobalLeaderboardPlayer(ByteBuffer _bb) { }

	// RVA: 0x173E5C8 Offset: 0x173E5C8 VA: 0x173E5C8
	public static GlobalLeaderboardPlayer GetRootAsGlobalLeaderboardPlayer(ByteBuffer _bb, GlobalLeaderboardPlayer obj) { }

	// RVA: 0x173E60C Offset: 0x173E60C VA: 0x173E60C Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x173DB88 Offset: 0x173DB88 VA: 0x173DB88
	public GlobalLeaderboardPlayer __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x173E648 Offset: 0x173E648 VA: 0x173E648
	public string get_UserPublicID() { }

	// RVA: 0x173E684 Offset: 0x173E684 VA: 0x173E684
	public Nullable<ArraySegment<byte>> GetUserPublicIDBytes() { }

	// RVA: 0x173E6BC Offset: 0x173E6BC VA: 0x173E6BC
	public byte[] GetUserPublicIDArray() { }

	// RVA: 0x173E708 Offset: 0x173E708 VA: 0x173E708
	public string get_NickName() { }

	// RVA: 0x173E744 Offset: 0x173E744 VA: 0x173E744
	public Nullable<ArraySegment<byte>> GetNickNameBytes() { }

	// RVA: 0x173E77C Offset: 0x173E77C VA: 0x173E77C
	public byte[] GetNickNameArray() { }

	// RVA: 0x173E7C8 Offset: 0x173E7C8 VA: 0x173E7C8
	public long get_Score() { }

	// RVA: 0x173E810 Offset: 0x173E810 VA: 0x173E810
	public long get_Rank() { }

	// RVA: 0x173E858 Offset: 0x173E858 VA: 0x173E858
	public bool get_IsMe() { }

	// RVA: 0x173E8A0 Offset: 0x173E8A0 VA: 0x173E8A0
	public string get_ImageUrl() { }

	// RVA: 0x173E8DC Offset: 0x173E8DC VA: 0x173E8DC
	public Nullable<ArraySegment<byte>> GetImageUrlBytes() { }

	// RVA: 0x173E914 Offset: 0x173E914 VA: 0x173E914
	public byte[] GetImageUrlArray() { }

	// RVA: 0x173E960 Offset: 0x173E960 VA: 0x173E960
	public string get_ImageID() { }

	// RVA: 0x173E99C Offset: 0x173E99C VA: 0x173E99C
	public Nullable<ArraySegment<byte>> GetImageIDBytes() { }

	// RVA: 0x173E9D4 Offset: 0x173E9D4 VA: 0x173E9D4
	public byte[] GetImageIDArray() { }

	// RVA: 0x173EA20 Offset: 0x173EA20 VA: 0x173EA20
	public static Offset<GlobalLeaderboardPlayer> CreateGlobalLeaderboardPlayer(FlatBufferBuilder builder, StringOffset userPublicIDOffset, StringOffset nickNameOffset, long score = 0, long rank = 0, bool isMe = False, StringOffset imageUrlOffset, StringOffset imageIDOffset) { }

	// RVA: 0x173EC10 Offset: 0x173EC10 VA: 0x173EC10
	public static void StartGlobalLeaderboardPlayer(FlatBufferBuilder builder) { }

	// RVA: 0x173EB80 Offset: 0x173EB80 VA: 0x173EB80
	public static void AddUserPublicID(FlatBufferBuilder builder, StringOffset userPublicIDOffset) { }

	// RVA: 0x173EB60 Offset: 0x173EB60 VA: 0x173EB60
	public static void AddNickName(FlatBufferBuilder builder, StringOffset nickNameOffset) { }

	// RVA: 0x173EB00 Offset: 0x173EB00 VA: 0x173EB00
	public static void AddScore(FlatBufferBuilder builder, long score) { }

	// RVA: 0x173EAE0 Offset: 0x173EAE0 VA: 0x173EAE0
	public static void AddRank(FlatBufferBuilder builder, long rank) { }

	// RVA: 0x173EBA0 Offset: 0x173EBA0 VA: 0x173EBA0
	public static void AddIsMe(FlatBufferBuilder builder, bool isMe) { }

	// RVA: 0x173EB40 Offset: 0x173EB40 VA: 0x173EB40
	public static void AddImageUrl(FlatBufferBuilder builder, StringOffset imageUrlOffset) { }

	// RVA: 0x173EB20 Offset: 0x173EB20 VA: 0x173EB20
	public static void AddImageID(FlatBufferBuilder builder, StringOffset imageIDOffset) { }

	// RVA: 0x173EBC0 Offset: 0x173EBC0 VA: 0x173EBC0
	public static Offset<GlobalLeaderboardPlayer> EndGlobalLeaderboardPlayer(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.global_leaderboard