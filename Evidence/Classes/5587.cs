public struct GetWelcomeBackResponse : IFlatbufferObject // TypeDefIndex: 5587
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public string WelcomeBackId { get; }
	public int RewardsLength { get; }
	public bool IsClaimed { get; }

	// Methods

	// RVA: 0x1443670 Offset: 0x1443670 VA: 0x1443670 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1443678 Offset: 0x1443678 VA: 0x1443678
	public static void ValidateVersion() { }

	// RVA: 0x1443680 Offset: 0x1443680 VA: 0x1443680
	public static GetWelcomeBackResponse GetRootAsGetWelcomeBackResponse(ByteBuffer _bb) { }

	// RVA: 0x144368C Offset: 0x144368C VA: 0x144368C
	public static GetWelcomeBackResponse GetRootAsGetWelcomeBackResponse(ByteBuffer _bb, GetWelcomeBackResponse obj) { }

	// RVA: 0x1443710 Offset: 0x1443710 VA: 0x1443710
	public static bool VerifyGetWelcomeBackResponse(ByteBuffer _bb) { }

	// RVA: 0x14437E4 Offset: 0x14437E4 VA: 0x14437E4 Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x14436D0 Offset: 0x14436D0 VA: 0x14436D0
	public GetWelcomeBackResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1443820 Offset: 0x1443820 VA: 0x1443820
	public string get_WelcomeBackId() { }

	// RVA: 0x144385C Offset: 0x144385C VA: 0x144385C
	public Nullable<ArraySegment<byte>> GetWelcomeBackIdBytes() { }

	// RVA: 0x1443894 Offset: 0x1443894 VA: 0x1443894
	public byte[] GetWelcomeBackIdArray() { }

	// RVA: 0x14438E0 Offset: 0x14438E0 VA: 0x14438E0
	public Nullable<ClientRewardModel> Rewards(int j) { }

	// RVA: 0x14439B8 Offset: 0x14439B8 VA: 0x14439B8
	public int get_RewardsLength() { }

	// RVA: 0x14439EC Offset: 0x14439EC VA: 0x14439EC
	public bool get_IsClaimed() { }

	// RVA: 0x1443A34 Offset: 0x1443A34 VA: 0x1443A34
	public static Offset<GetWelcomeBackResponse> CreateGetWelcomeBackResponse(FlatBufferBuilder builder, StringOffset welcome_back_idOffset, VectorOffset rewardsOffset, bool is_claimed = False) { }

	// RVA: 0x1443B54 Offset: 0x1443B54 VA: 0x1443B54
	public static void StartGetWelcomeBackResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1443AC4 Offset: 0x1443AC4 VA: 0x1443AC4
	public static void AddWelcomeBackId(FlatBufferBuilder builder, StringOffset welcomeBackIdOffset) { }

	// RVA: 0x1443AA4 Offset: 0x1443AA4 VA: 0x1443AA4
	public static void AddRewards(FlatBufferBuilder builder, VectorOffset rewardsOffset) { }

	// RVA: 0x1443B6C Offset: 0x1443B6C VA: 0x1443B6C
	public static VectorOffset CreateRewardsVector(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x1443C14 Offset: 0x1443C14 VA: 0x1443C14
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, Offset<ClientRewardModel>[] data) { }

	// RVA: 0x1443C9C Offset: 0x1443C9C VA: 0x1443C9C
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, ArraySegment<Offset<ClientRewardModel>> data) { }

	// RVA: 0x1443D60 Offset: 0x1443D60 VA: 0x1443D60
	public static VectorOffset CreateRewardsVectorBlock(FlatBufferBuilder builder, IntPtr dataPtr, int sizeInBytes) { }

	// RVA: 0x1443DF4 Offset: 0x1443DF4 VA: 0x1443DF4
	public static void StartRewardsVector(FlatBufferBuilder builder, int numElems) { }

	// RVA: 0x1443AE4 Offset: 0x1443AE4 VA: 0x1443AE4
	public static void AddIsClaimed(FlatBufferBuilder builder, bool isClaimed) { }

	// RVA: 0x1443B04 Offset: 0x1443B04 VA: 0x1443B04
	public static Offset<GetWelcomeBackResponse> EndGetWelcomeBackResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1443E14 Offset: 0x1443E14 VA: 0x1443E14
	public static void FinishGetWelcomeBackResponseBuffer(FlatBufferBuilder builder, Offset<GetWelcomeBackResponse> offset) { }

	// RVA: 0x1443E28 Offset: 0x1443E28 VA: 0x1443E28
	public static void FinishSizePrefixedGetWelcomeBackResponseBuffer(FlatBufferBuilder builder, Offset<GetWelcomeBackResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.liveops.welcome_back