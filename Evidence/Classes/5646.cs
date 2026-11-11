public struct ChampionsLeagueLeaderboardPlayer : IFlatbufferObject // TypeDefIndex: 5646
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string UserPublicId { get; }
	public string UserPublicIdClient { get; }
	public string Nickname { get; }
	public long Score { get; }
	public long Rank { get; }
	public bool IsBot { get; }
	public bool IsMe { get; }
	public bool IsInDemote { get; }
	public bool IsInPromote { get; }
	public string ImageUrl { get; }
	public string ImageId { get; }

	// Methods

	// RVA: 0x1742308 Offset: 0x1742308 VA: 0x1742308 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1742310 Offset: 0x1742310 VA: 0x1742310
	public static void ValidateVersion() { }

	// RVA: 0x1742318 Offset: 0x1742318 VA: 0x1742318
	public static ChampionsLeagueLeaderboardPlayer GetRootAsChampionsLeagueLeaderboardPlayer(ByteBuffer _bb) { }

	// RVA: 0x1742324 Offset: 0x1742324 VA: 0x1742324
	public static ChampionsLeagueLeaderboardPlayer GetRootAsChampionsLeagueLeaderboardPlayer(ByteBuffer _bb, ChampionsLeagueLeaderboardPlayer obj) { }

	// RVA: 0x17423A8 Offset: 0x17423A8 VA: 0x17423A8 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x1742368 Offset: 0x1742368 VA: 0x1742368
	public ChampionsLeagueLeaderboardPlayer __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x17423E4 Offset: 0x17423E4 VA: 0x17423E4
	public string get_UserPublicId() { }

	// RVA: 0x1742420 Offset: 0x1742420 VA: 0x1742420
	public Nullable<ArraySegment<byte>> GetUserPublicIdBytes() { }

	// RVA: 0x1742458 Offset: 0x1742458 VA: 0x1742458
	public byte[] GetUserPublicIdArray() { }

	// RVA: 0x17424A4 Offset: 0x17424A4 VA: 0x17424A4
	public string get_UserPublicIdClient() { }

	// RVA: 0x17424E0 Offset: 0x17424E0 VA: 0x17424E0
	public Nullable<ArraySegment<byte>> GetUserPublicIdClientBytes() { }

	// RVA: 0x1742518 Offset: 0x1742518 VA: 0x1742518
	public byte[] GetUserPublicIdClientArray() { }

	// RVA: 0x1742564 Offset: 0x1742564 VA: 0x1742564
	public string get_Nickname() { }

	// RVA: 0x17425A0 Offset: 0x17425A0 VA: 0x17425A0
	public Nullable<ArraySegment<byte>> GetNicknameBytes() { }

	// RVA: 0x17425D8 Offset: 0x17425D8 VA: 0x17425D8
	public byte[] GetNicknameArray() { }

	// RVA: 0x1742624 Offset: 0x1742624 VA: 0x1742624
	public long get_Score() { }

	// RVA: 0x174266C Offset: 0x174266C VA: 0x174266C
	public long get_Rank() { }

	// RVA: 0x17426B4 Offset: 0x17426B4 VA: 0x17426B4
	public bool get_IsBot() { }

	// RVA: 0x17426FC Offset: 0x17426FC VA: 0x17426FC
	public bool get_IsMe() { }

	// RVA: 0x1742744 Offset: 0x1742744 VA: 0x1742744
	public bool get_IsInDemote() { }

	// RVA: 0x174278C Offset: 0x174278C VA: 0x174278C
	public bool get_IsInPromote() { }

	// RVA: 0x17427D4 Offset: 0x17427D4 VA: 0x17427D4
	public string get_ImageUrl() { }

	// RVA: 0x1742810 Offset: 0x1742810 VA: 0x1742810
	public Nullable<ArraySegment<byte>> GetImageUrlBytes() { }

	// RVA: 0x1742848 Offset: 0x1742848 VA: 0x1742848
	public byte[] GetImageUrlArray() { }

	// RVA: 0x1742894 Offset: 0x1742894 VA: 0x1742894
	public string get_ImageId() { }

	// RVA: 0x17428D0 Offset: 0x17428D0 VA: 0x17428D0
	public Nullable<ArraySegment<byte>> GetImageIdBytes() { }

	// RVA: 0x1742908 Offset: 0x1742908 VA: 0x1742908
	public byte[] GetImageIdArray() { }

	// RVA: 0x1742954 Offset: 0x1742954 VA: 0x1742954
	public static Offset<ChampionsLeagueLeaderboardPlayer> CreateChampionsLeagueLeaderboardPlayer(FlatBufferBuilder builder, StringOffset user_public_idOffset, StringOffset user_public_id_clientOffset, StringOffset nicknameOffset, long score = 0, long rank = 0, bool is_bot = False, bool is_me = False, bool is_in_demote = False, bool is_in_promote = False, StringOffset image_urlOffset, StringOffset image_idOffset) { }

	// RVA: 0x1742C14 Offset: 0x1742C14 VA: 0x1742C14
	public static void StartChampionsLeagueLeaderboardPlayer(FlatBufferBuilder builder) { }

	// RVA: 0x1742B24 Offset: 0x1742B24 VA: 0x1742B24
	public static void AddUserPublicId(FlatBufferBuilder builder, StringOffset userPublicIdOffset) { }

	// RVA: 0x1742B04 Offset: 0x1742B04 VA: 0x1742B04
	public static void AddUserPublicIdClient(FlatBufferBuilder builder, StringOffset userPublicIdClientOffset) { }

	// RVA: 0x1742AE4 Offset: 0x1742AE4 VA: 0x1742AE4
	public static void AddNickname(FlatBufferBuilder builder, StringOffset nicknameOffset) { }

	// RVA: 0x1742A84 Offset: 0x1742A84 VA: 0x1742A84
	public static void AddScore(FlatBufferBuilder builder, long score) { }

	// RVA: 0x1742A64 Offset: 0x1742A64 VA: 0x1742A64
	public static void AddRank(FlatBufferBuilder builder, long rank) { }

	// RVA: 0x1742BA4 Offset: 0x1742BA4 VA: 0x1742BA4
	public static void AddIsBot(FlatBufferBuilder builder, bool isBot) { }

	// RVA: 0x1742B84 Offset: 0x1742B84 VA: 0x1742B84
	public static void AddIsMe(FlatBufferBuilder builder, bool isMe) { }

	// RVA: 0x1742B64 Offset: 0x1742B64 VA: 0x1742B64
	public static void AddIsInDemote(FlatBufferBuilder builder, bool isInDemote) { }

	// RVA: 0x1742B44 Offset: 0x1742B44 VA: 0x1742B44
	public static void AddIsInPromote(FlatBufferBuilder builder, bool isInPromote) { }

	// RVA: 0x1742AC4 Offset: 0x1742AC4 VA: 0x1742AC4
	public static void AddImageUrl(FlatBufferBuilder builder, StringOffset imageUrlOffset) { }

	// RVA: 0x1742AA4 Offset: 0x1742AA4 VA: 0x1742AA4
	public static void AddImageId(FlatBufferBuilder builder, StringOffset imageIdOffset) { }

	// RVA: 0x1742BC4 Offset: 0x1742BC4 VA: 0x1742BC4
	public static Offset<ChampionsLeagueLeaderboardPlayer> EndChampionsLeagueLeaderboardPlayer(FlatBufferBuilder builder) { }
}

// Namespace: magicsort.schemas.v1.liveops.champions_league