public struct WeeklyLeaderboardPlayer : IFlatbufferObject // TypeDefIndex: 5591
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

	// RVA: 0x1444A40 Offset: 0x1444A40 VA: 0x1444A40 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1444A48 Offset: 0x1444A48 VA: 0x1444A48
	public static void ValidateVersion() { }

	// RVA: 0x1444A50 Offset: 0x1444A50 VA: 0x1444A50
	public static WeeklyLeaderboardPlayer GetRootAsWeeklyLeaderboardPlayer(ByteBuffer _bb) { }

	// RVA: 0x1444A5C Offset: 0x1444A5C VA: 0x1444A5C
	public static WeeklyLeaderboardPlayer GetRootAsWeeklyLeaderboardPlayer(ByteBuffer _bb, WeeklyLeaderboardPlayer obj) { }

	// RVA: 0x1444AA0 Offset: 0x1444AA0 VA: 0x1444AA0 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1444290 Offset: 0x1444290 VA: 0x1444290
	public WeeklyLeaderboardPlayer __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1444ADC Offset: 0x1444ADC VA: 0x1444ADC
	public string get_PublicID() { }

	// RVA: 0x1444B18 Offset: 0x1444B18 VA: 0x1444B18
	public Nullable<ArraySegment<byte>> GetPublicIDBytes() { }

	// RVA: 0x1444B50 Offset: 0x1444B50 VA: 0x1444B50
	public byte[] GetPublicIDArray() { }

	// RVA: 0x1444B9C Offset: 0x1444B9C VA: 0x1444B9C
	public string get_Nickname() { }

	// RVA: 0x1444BD8 Offset: 0x1444BD8 VA: 0x1444BD8
	public Nullable<ArraySegment<byte>> GetNicknameBytes() { }

	// RVA: 0x1444C10 Offset: 0x1444C10 VA: 0x1444C10
	public byte[] GetNicknameArray() { }

	// RVA: 0x1444C5C Offset: 0x1444C5C VA: 0x1444C5C
	public long get_Score() { }

	// RVA: 0x1444CA4 Offset: 0x1444CA4 VA: 0x1444CA4
	public long get_Rank() { }

	// RVA: 0x1444CEC Offset: 0x1444CEC VA: 0x1444CEC
	public bool get_IsBot() { }

	// RVA: 0x1444D34 Offset: 0x1444D34 VA: 0x1444D34
	public bool get_IsMe() { }

	// RVA: 0x1444D7C Offset: 0x1444D7C VA: 0x1444D7C
	public string get_ImageUrl() { }

	// RVA: 0x1444DB8 Offset: 0x1444DB8 VA: 0x1444DB8
	public Nullable<ArraySegment<byte>> GetImageUrlBytes() { }

	// RVA: 0x1444DF0 Offset: 0x1444DF0 VA: 0x1444DF0
	public byte[] GetImageUrlArray() { }

	// RVA: 0x1444E3C Offset: 0x1444E3C VA: 0x1444E3C
	public string get_ImageID() { }

	// RVA: 0x1444E78 Offset: 0x1444E78 VA: 0x1444E78
	public Nullable<ArraySegment<byte>> GetImageIDBytes() { }

	// RVA: 0x1444EB0 Offset: 0x1444EB0 VA: 0x1444EB0
	public byte[] GetImageIDArray() { }

	// RVA: 0x1444EFC Offset: 0x1444EFC VA: 0x1444EFC
	public static Offset<WeeklyLeaderboardPlayer> CreateWeeklyLeaderboardPlayer(FlatBufferBuilder builder, StringOffset PublicIDOffset, StringOffset NicknameOffset, long Score = 0, long Rank = 0, bool IsBot = False, bool IsMe = False, StringOffset ImageUrlOffset, StringOffset ImageIDOffset) { }

	// RVA: 0x144511C Offset: 0x144511C VA: 0x144511C
	public static void StartWeeklyLeaderboardPlayer(FlatBufferBuilder builder) { }

	// RVA: 0x144506C Offset: 0x144506C VA: 0x144506C
	public static void AddPublicID(FlatBufferBuilder builder, StringOffset publicIDOffset) { }

	// RVA: 0x144504C Offset: 0x144504C VA: 0x144504C
	public static void AddNickname(FlatBufferBuilder builder, StringOffset nicknameOffset) { }

	// RVA: 0x1444FEC Offset: 0x1444FEC VA: 0x1444FEC
	public static void AddScore(FlatBufferBuilder builder, long score) { }

	// RVA: 0x1444FCC Offset: 0x1444FCC VA: 0x1444FCC
	public static void AddRank(FlatBufferBuilder builder, long rank) { }

	// RVA: 0x14450AC Offset: 0x14450AC VA: 0x14450AC
	public static void AddIsBot(FlatBufferBuilder builder, bool isBot) { }

	// RVA: 0x144508C Offset: 0x144508C VA: 0x144508C
	public static void AddIsMe(FlatBufferBuilder builder, bool isMe) { }

	// RVA: 0x144502C Offset: 0x144502C VA: 0x144502C
	public static void AddImageUrl(FlatBufferBuilder builder, StringOffset imageUrlOffset) { }

	// RVA: 0x144500C Offset: 0x144500C VA: 0x144500C
	public static void AddImageID(FlatBufferBuilder builder, StringOffset imageIDOffset) { }

	// RVA: 0x14450CC Offset: 0x14450CC VA: 0x14450CC
	public static Offset<WeeklyLeaderboardPlayer> EndWeeklyLeaderboardPlayer(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.weekly_leaderboard