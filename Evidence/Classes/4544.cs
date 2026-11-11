private sealed class CollectionService.<>c // TypeDefIndex: 4544
{
	// Fields
	public static readonly CollectionService.<>c <>9; // 0x0
	public static Func<CollectionCardPackData, int> <>9__31_0; // 0x8
	public static Func<CollectionCardPackData, int> <>9__31_1; // 0x10
	[TupleElementNames(new[] { "StarCount", "IsGoldCard" })]
	public static Func<CollectionCardMultiplierModel, ValueTuple<int, bool>> <>9__31_2; // 0x18
	public static Func<CollectionCardMultiplierModel, int> <>9__31_3; // 0x20
	[TupleElementNames(new[] { "cardId", "starCount", "extraCount" })]
	public static Comparison<ValueTuple<string, int, int>> <>9__62_0; // 0x28
	public static Func<CollectionCardData, bool> <>9__67_2; // 0x30
	public static Func<CollectionCardData, int> <>9__67_4; // 0x38
	public static Func<CollectionCardData, bool> <>9__74_0; // 0x40
	public static Func<CollectionThemeData, string> <>9__112_0; // 0x48
	public static Func<CollectionThemeData, string> <>9__112_1; // 0x50
	public static Func<CollectionThemeData, string> <>9__113_0; // 0x58
	public static Func<CollectionThemeData, string> <>9__113_1; // 0x60
	public static Func<CardHelpDataModel, bool> <>9__143_0; // 0x68

	// Methods

	// RVA: 0x3773FA0 Offset: 0x3773FA0 VA: 0x3773FA0
	private static void .cctor() { }

	// RVA: 0x3774010 Offset: 0x3774010 VA: 0x3774010
	public void .ctor() { }

	// RVA: 0x3774018 Offset: 0x3774018 VA: 0x3774018
	internal int <InitializeCollectionDataMaps>b__31_0(CollectionCardPackData data) { }

	// RVA: 0x3774030 Offset: 0x3774030 VA: 0x3774030
	internal int <InitializeCollectionDataMaps>b__31_1(CollectionCardPackData data) { }

	// RVA: 0x3774048 Offset: 0x3774048 VA: 0x3774048
	internal ValueTuple<int, bool> <InitializeCollectionDataMaps>b__31_2(CollectionCardMultiplierModel model) { }

	// RVA: 0x37740AC Offset: 0x37740AC VA: 0x37740AC
	internal int <InitializeCollectionDataMaps>b__31_3(CollectionCardMultiplierModel model) { }

	// RVA: 0x37740C4 Offset: 0x37740C4 VA: 0x37740C4
	internal int <OpenBonusChest>b__62_0(ValueTuple<string, int, int> a, ValueTuple<string, int, int> b) { }

	// RVA: 0x37740F0 Offset: 0x37740F0 VA: 0x37740F0
	internal bool <OpenPremiumPack>b__67_2(CollectionCardData card) { }

	// RVA: 0x3774108 Offset: 0x3774108 VA: 0x3774108
	internal int <OpenPremiumPack>b__67_4(CollectionCardData card) { }

	// RVA: 0x3774120 Offset: 0x3774120 VA: 0x3774120
	internal bool <Get3PlusStarCardsPool>b__74_0(CollectionCardData card) { }

	// RVA: 0x3774140 Offset: 0x3774140 VA: 0x3774140
	internal string <CreateViewModel>b__112_0(CollectionThemeData theme) { }

	// RVA: 0x3774158 Offset: 0x3774158 VA: 0x3774158
	internal string <CreateViewModel>b__112_1(CollectionThemeData theme) { }

	// RVA: 0x3774170 Offset: 0x3774170 VA: 0x3774170
	internal string <UpdateDynamicViewModelInfos>b__113_0(CollectionThemeData theme) { }

	// RVA: 0x3774188 Offset: 0x3774188 VA: 0x3774188
	internal string <UpdateDynamicViewModelInfos>b__113_1(CollectionThemeData theme) { }

	// RVA: 0x37741A0 Offset: 0x37741A0 VA: 0x37741A0
	internal bool <GetNotClaimedReceivedCards>b__143_0(CardHelpDataModel receivedCard) { }
}

// Namespace: 
[CompilerGenerated]