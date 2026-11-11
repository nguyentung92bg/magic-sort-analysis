public struct GetAdConfigResponse : IFlatbufferObject // TypeDefIndex: 5674
{
	// Fields
	private Table __p; // 0x0

	// Properties
	public ByteBuffer ByteBuffer { get; }
	public bool IsMaxSdkEnabled { get; }
	public bool IsInterEnabled { get; }
	public int FirstLevelToShowInter { get; }
	public int InterShowFrequencyInSeconds { get; }
	public bool IsBannerEnabled { get; }
	public long FirstLevelToShowBanner { get; }
	public bool Is2xRewardedEnabled { get; }
	public long FirstLevelToShow2xRewarded { get; }
	public bool IsLifeRewardedEnabled { get; }
	public bool Is2xEnabledForRegularLevels { get; }
	public bool Is2xEnabledForHardLevels { get; }
	public bool IsNew2xRewardedEnabled { get; }
	public long FirstLevelToShowNew2xRewarded { get; }
	public long CoinAmountNew2xRewardedForRegular { get; }
	public long CoinAmountNew2xRewardedForHard { get; }
	public long CoinAmountNew2xRewardedForSuperHard { get; }
	public bool IsWatchAndWinEnabled { get; }

	// Methods

	// RVA: 0x1601188 Offset: 0x1601188 VA: 0x1601188 Slot: 5
	public ByteBuffer get_ByteBuffer() { }

	// RVA: 0x1601190 Offset: 0x1601190 VA: 0x1601190
	public static void ValidateVersion() { }

	// RVA: 0x1601198 Offset: 0x1601198 VA: 0x1601198
	public static GetAdConfigResponse GetRootAsGetAdConfigResponse(ByteBuffer _bb) { }

	// RVA: 0x16011A4 Offset: 0x16011A4 VA: 0x16011A4
	public static GetAdConfigResponse GetRootAsGetAdConfigResponse(ByteBuffer _bb, GetAdConfigResponse obj) { }

	// RVA: 0x1601228 Offset: 0x1601228 VA: 0x1601228
	public static bool VerifyGetAdConfigResponse(ByteBuffer _bb) { }

	// RVA: 0x16012FC Offset: 0x16012FC VA: 0x16012FC Slot: 4
	public void __init(int _i, ByteBuffer _bb) { }

	// RVA: 0x16011E8 Offset: 0x16011E8 VA: 0x16011E8
	public GetAdConfigResponse __assign(int _i, ByteBuffer _bb) { }

	// RVA: 0x1601338 Offset: 0x1601338 VA: 0x1601338
	public bool get_IsMaxSdkEnabled() { }

	// RVA: 0x1601380 Offset: 0x1601380 VA: 0x1601380
	public bool get_IsInterEnabled() { }

	// RVA: 0x16013C8 Offset: 0x16013C8 VA: 0x16013C8
	public int get_FirstLevelToShowInter() { }

	// RVA: 0x160140C Offset: 0x160140C VA: 0x160140C
	public int get_InterShowFrequencyInSeconds() { }

	// RVA: 0x1601450 Offset: 0x1601450 VA: 0x1601450
	public bool get_IsBannerEnabled() { }

	// RVA: 0x1601498 Offset: 0x1601498 VA: 0x1601498
	public long get_FirstLevelToShowBanner() { }

	// RVA: 0x16014E0 Offset: 0x16014E0 VA: 0x16014E0
	public bool get_Is2xRewardedEnabled() { }

	// RVA: 0x1601528 Offset: 0x1601528 VA: 0x1601528
	public long get_FirstLevelToShow2xRewarded() { }

	// RVA: 0x1601570 Offset: 0x1601570 VA: 0x1601570
	public bool get_IsLifeRewardedEnabled() { }

	// RVA: 0x16015B8 Offset: 0x16015B8 VA: 0x16015B8
	public bool get_Is2xEnabledForRegularLevels() { }

	// RVA: 0x1601600 Offset: 0x1601600 VA: 0x1601600
	public bool get_Is2xEnabledForHardLevels() { }

	// RVA: 0x1601648 Offset: 0x1601648 VA: 0x1601648
	public bool get_IsNew2xRewardedEnabled() { }

	// RVA: 0x1601690 Offset: 0x1601690 VA: 0x1601690
	public long get_FirstLevelToShowNew2xRewarded() { }

	// RVA: 0x16016D8 Offset: 0x16016D8 VA: 0x16016D8
	public long get_CoinAmountNew2xRewardedForRegular() { }

	// RVA: 0x1601720 Offset: 0x1601720 VA: 0x1601720
	public long get_CoinAmountNew2xRewardedForHard() { }

	// RVA: 0x1601768 Offset: 0x1601768 VA: 0x1601768
	public long get_CoinAmountNew2xRewardedForSuperHard() { }

	// RVA: 0x16017B0 Offset: 0x16017B0 VA: 0x16017B0
	public bool get_IsWatchAndWinEnabled() { }

	// RVA: 0x16017F8 Offset: 0x16017F8 VA: 0x16017F8
	public static Offset<GetAdConfigResponse> CreateGetAdConfigResponse(FlatBufferBuilder builder, bool IsMaxSdkEnabled = False, bool IsInterEnabled = False, int FirstLevelToShowInter = 0, int InterShowFrequencyInSeconds = 0, bool IsBannerEnabled = False, long FirstLevelToShowBanner = 0, bool Is2xRewardedEnabled = False, long FirstLevelToShow2xRewarded = 0, bool IsLifeRewardedEnabled = False, bool Is2xEnabledForRegularLevels = False, bool Is2xEnabledForHardLevels = False, bool IsNew2xRewardedEnabled = False, long FirstLevelToShowNew2xRewarded = 0, long CoinAmountNew2xRewardedForRegular = 0, long CoinAmountNew2xRewardedForHard = 0, long CoinAmountNew2xRewardedForSuperHard = 0, bool IsWatchAndWinEnabled = False) { }

	// RVA: 0x1601BE8 Offset: 0x1601BE8 VA: 0x1601BE8
	public static void StartGetAdConfigResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1601B78 Offset: 0x1601B78 VA: 0x1601B78
	public static void AddIsMaxSdkEnabled(FlatBufferBuilder builder, bool isMaxSdkEnabled) { }

	// RVA: 0x1601B58 Offset: 0x1601B58 VA: 0x1601B58
	public static void AddIsInterEnabled(FlatBufferBuilder builder, bool isInterEnabled) { }

	// RVA: 0x1601A58 Offset: 0x1601A58 VA: 0x1601A58
	public static void AddFirstLevelToShowInter(FlatBufferBuilder builder, int firstLevelToShowInter) { }

	// RVA: 0x1601A38 Offset: 0x1601A38 VA: 0x1601A38
	public static void AddInterShowFrequencyInSeconds(FlatBufferBuilder builder, int interShowFrequencyInSeconds) { }

	// RVA: 0x1601B38 Offset: 0x1601B38 VA: 0x1601B38
	public static void AddIsBannerEnabled(FlatBufferBuilder builder, bool isBannerEnabled) { }

	// RVA: 0x1601A18 Offset: 0x1601A18 VA: 0x1601A18
	public static void AddFirstLevelToShowBanner(FlatBufferBuilder builder, long firstLevelToShowBanner) { }

	// RVA: 0x1601B18 Offset: 0x1601B18 VA: 0x1601B18
	public static void AddIs2xRewardedEnabled(FlatBufferBuilder builder, bool is2xRewardedEnabled) { }

	// RVA: 0x16019F8 Offset: 0x16019F8 VA: 0x16019F8
	public static void AddFirstLevelToShow2xRewarded(FlatBufferBuilder builder, long firstLevelToShow2xRewarded) { }

	// RVA: 0x1601AF8 Offset: 0x1601AF8 VA: 0x1601AF8
	public static void AddIsLifeRewardedEnabled(FlatBufferBuilder builder, bool isLifeRewardedEnabled) { }

	// RVA: 0x1601AD8 Offset: 0x1601AD8 VA: 0x1601AD8
	public static void AddIs2xEnabledForRegularLevels(FlatBufferBuilder builder, bool is2xEnabledForRegularLevels) { }

	// RVA: 0x1601AB8 Offset: 0x1601AB8 VA: 0x1601AB8
	public static void AddIs2xEnabledForHardLevels(FlatBufferBuilder builder, bool is2xEnabledForHardLevels) { }

	// RVA: 0x1601A98 Offset: 0x1601A98 VA: 0x1601A98
	public static void AddIsNew2xRewardedEnabled(FlatBufferBuilder builder, bool isNew2xRewardedEnabled) { }

	// RVA: 0x16019D8 Offset: 0x16019D8 VA: 0x16019D8
	public static void AddFirstLevelToShowNew2xRewarded(FlatBufferBuilder builder, long firstLevelToShowNew2xRewarded) { }

	// RVA: 0x16019B8 Offset: 0x16019B8 VA: 0x16019B8
	public static void AddCoinAmountNew2xRewardedForRegular(FlatBufferBuilder builder, long coinAmountNew2xRewardedForRegular) { }

	// RVA: 0x1601998 Offset: 0x1601998 VA: 0x1601998
	public static void AddCoinAmountNew2xRewardedForHard(FlatBufferBuilder builder, long coinAmountNew2xRewardedForHard) { }

	// RVA: 0x1601978 Offset: 0x1601978 VA: 0x1601978
	public static void AddCoinAmountNew2xRewardedForSuperHard(FlatBufferBuilder builder, long coinAmountNew2xRewardedForSuperHard) { }

	// RVA: 0x1601A78 Offset: 0x1601A78 VA: 0x1601A78
	public static void AddIsWatchAndWinEnabled(FlatBufferBuilder builder, bool isWatchAndWinEnabled) { }

	// RVA: 0x1601B98 Offset: 0x1601B98 VA: 0x1601B98
	public static Offset<GetAdConfigResponse> EndGetAdConfigResponse(FlatBufferBuilder builder) { }

	// RVA: 0x1601C00 Offset: 0x1601C00 VA: 0x1601C00
	public static void FinishGetAdConfigResponseBuffer(FlatBufferBuilder builder, Offset<GetAdConfigResponse> offset) { }

	// RVA: 0x1601C14 Offset: 0x1601C14 VA: 0x1601C14
	public static void FinishSizePrefixedGetAdConfigResponseBuffer(FlatBufferBuilder builder, Offset<GetAdConfigResponse> offset) { }
}

// Namespace: magicsort.schemas.v1.config.ads