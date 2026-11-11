public struct StreakLeaderboardPlayer : IFlatbufferObject // TypeDefIndex: 5688
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string PublicID { get; }
	public string Nickname { get; }
	public long Score { get; }
	public long Rank { get; }
	public bool IsBot { get; }
	public bool IsMe { get; }
	public string ImageUrl { get; }
	public string ImageID { get; }

	// Methods

	// RVA: 0x1605678 Offset: 0x1605678 VA: 0x1605678 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1605680 Offset: 0x1605680 VA: 0x1605680
	public static void ValidateVersion() { }

	// RVA: 0x1605688 Offset: 0x1605688 VA: 0x1605688
	public static StreakLeaderboardPlayer GetRootAsStreakLeaderboardPlayer(ByteBuffer _bb) { }

	// RVA: 0x1605694 Offset: 0x1605694 VA: 0x1605694
	public static StreakLeaderboardPlayer GetRootAsStreakLeaderboardPlayer(ByteBuffer _bb, StreakLeaderboardPlayer obj) { }

	// RVA: 0x1605718 Offset: 0x1605718 VA: 0x1605718 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x16056D8 Offset: 0x16056D8 VA: 0x16056D8
	public StreakLeaderboardPlayer __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1605754 Offset: 0x1605754 VA: 0x1605754
	public string get_PublicID() { }

	// RVA: 0x1605790 Offset: 0x1605790 VA: 0x1605790
	public Nullable<ArraySegment<byte>> GetPublicIDBytes() { }

	// RVA: 0x16057C8 Offset: 0x16057C8 VA: 0x16057C8
	public byte[] GetPublicIDArray() { }

	// RVA: 0x1605814 Offset: 0x1605814 VA: 0x1605814
	public string get_Nickname() { }

	// RVA: 0x1605850 Offset: 0x1605850 VA: 0x1605850
	public Nullable<ArraySegment<byte>> GetNicknameBytes() { }

	// RVA: 0x1605888 Offset: 0x1605888 VA: 0x1605888
	public byte[] GetNicknameArray() { }

	// RVA: 0x16058D4 Offset: 0x16058D4 VA: 0x16058D4
	public long get_Score() { }

	// RVA: 0x160591C Offset: 0x160591C VA: 0x160591C
	public long get_Rank() { }

	// RVA: 0x1605964 Offset: 0x1605964 VA: 0x1605964
	public bool get_IsBot() { }

	// RVA: 0x16059AC Offset: 0x16059AC VA: 0x16059AC
	public bool get_IsMe() { }

	// RVA: 0x16059F4 Offset: 0x16059F4 VA: 0x16059F4
	public string get_ImageUrl() { }

	// RVA: 0x1605A30 Offset: 0x1605A30 VA: 0x1605A30
	public Nullable<ArraySegment<byte>> GetImageUrlBytes() { }

	// RVA: 0x1605A68 Offset: 0x1605A68 VA: 0x1605A68
	public byte[] GetImageUrlArray() { }

	// RVA: 0x1605AB4 Offset: 0x1605AB4 VA: 0x1605AB4
	public string get_ImageID() { }

	// RVA: 0x1605AF0 Offset: 0x1605AF0 VA: 0x1605AF0
	public Nullable<ArraySegment<byte>> GetImageIDBytes() { }

	// RVA: 0x1605B28 Offset: 0x1605B28 VA: 0x1605B28
	public byte[] GetImageIDArray() { }

	// RVA: 0x1605B74 Offset: 0x1605B74 VA: 0x1605B74
	public static Offset<StreakLeaderboardPlayer> CreateStreakLeaderboardPlayer(FlatBufferBuilder builder, StringOffset PublicIDOffset, StringOffset NicknameOffset, long Score = 0, long Rank = 0, bool IsBot = False, bool IsMe = False, StringOffset ImageUrlOffset, StringOffset ImageIDOffset) { }

	// RVA: 0x1605D94 Offset: 0x1605D94 VA: 0x1605D94
	public static void StartStreakLeaderboardPlayer(FlatBufferBuilder builder) { }

	// RVA: 0x1605CE4 Offset: 0x1605CE4 VA: 0x1605CE4
	public static void AddPublicID(FlatBufferBuilder builder, StringOffset publicIDOffset) { }

	// RVA: 0x1605CC4 Offset: 0x1605CC4 VA: 0x1605CC4
	public static void AddNickname(FlatBufferBuilder builder, StringOffset nicknameOffset) { }

	// RVA: 0x1605C64 Offset: 0x1605C64 VA: 0x1605C64
	public static void AddScore(FlatBufferBuilder builder, long score) { }

	// RVA: 0x1605C44 Offset: 0x1605C44 VA: 0x1605C44
	public static void AddRank(FlatBufferBuilder builder, long rank) { }

	// RVA: 0x1605D24 Offset: 0x1605D24 VA: 0x1605D24
	public static void AddIsBot(FlatBufferBuilder builder, bool isBot) { }

	// RVA: 0x1605D04 Offset: 0x1605D04 VA: 0x1605D04
	public static void AddIsMe(FlatBufferBuilder builder, bool isMe) { }

	// RVA: 0x1605CA4 Offset: 0x1605CA4 VA: 0x1605CA4
	public static void AddImageUrl(FlatBufferBuilder builder, StringOffset imageUrlOffset) { }

	// RVA: 0x1605C84 Offset: 0x1605C84 VA: 0x1605C84
	public static void AddImageID(FlatBufferBuilder builder, StringOffset imageIDOffset) { }

	// RVA: 0x1605D44 Offset: 0x1605D44 VA: 0x1605D44
	public static Offset<StreakLeaderboardPlayer> EndStreakLeaderboardPlayer(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.common