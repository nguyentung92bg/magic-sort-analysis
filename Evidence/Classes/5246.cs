public class GameEconomyModel : IRemoteConfigValidatable // TypeDefIndex: 5246
{
	// Fields
	[CompilerGenerated]
	private int <RefillPrice>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <PlayOnPrice>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <SecondPlayOnPrice>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <ThirdSecondPlayOnPrice>k__BackingField; // 0x1C
	[CompilerGenerated]
	private int <RefillDurationAsMinutes>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <MaxLifeAmount>k__BackingField; // 0x24
	[CompilerGenerated]
	private int <InitialCoin>k__BackingField; // 0x28
	[CompilerGenerated]
	private int <InitialUndoAmount>k__BackingField; // 0x2C
	[CompilerGenerated]
	private int <InitialShuffleAmount>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <InitialExtraBottleAmount>k__BackingField; // 0x34
	[CompilerGenerated]
	private int <InitialFourthBoosterAmount>k__BackingField; // 0x38
	[CompilerGenerated]
	private int <UndoUnlockAtLevel>k__BackingField; // 0x3C
	[CompilerGenerated]
	private int <ShuffleUnlockAtLevel>k__BackingField; // 0x40
	[CompilerGenerated]
	private int <ExtraBottleUnlockAtLevel>k__BackingField; // 0x44
	[CompilerGenerated]
	private int <UndoPrice>k__BackingField; // 0x48
	[CompilerGenerated]
	private int <ShufflePrice>k__BackingField; // 0x4C
	[CompilerGenerated]
	private int <ExtraBottlePrice>k__BackingField; // 0x50
	[CompilerGenerated]
	private int <MegaShufflePrice>k__BackingField; // 0x54
	[CompilerGenerated]
	private int <RevealPrice>k__BackingField; // 0x58
	[CompilerGenerated]
	private List<PlayOnConfigModel> <PlayOnConfigModels>k__BackingField; // 0x60
	[CompilerGenerated]
	private bool <IsFirstPlayOnFree>k__BackingField; // 0x68
	[CompilerGenerated]
	private long <Hierarchy>k__BackingField; // 0x70

	// Properties
	public int RefillPrice { get; set; }
	public int PlayOnPrice { get; set; }
	public int SecondPlayOnPrice { get; set; }
	public int ThirdSecondPlayOnPrice { get; set; }
	public int RefillDurationAsMinutes { get; set; }
	public int MaxLifeAmount { get; set; }
	public int InitialCoin { get; set; }
	public int InitialUndoAmount { get; set; }
	public int InitialShuffleAmount { get; set; }
	public int InitialExtraBottleAmount { get; set; }
	public int InitialFourthBoosterAmount { get; set; }
	public int UndoUnlockAtLevel { get; set; }
	public int ShuffleUnlockAtLevel { get; set; }
	public int ExtraBottleUnlockAtLevel { get; set; }
	public int UndoPrice { get; set; }
	public int ShufflePrice { get; set; }
	public int ExtraBottlePrice { get; set; }
	public int MegaShufflePrice { get; set; }
	public int RevealPrice { get; set; }
	public List<PlayOnConfigModel> PlayOnConfigModels { get; set; }
	public bool IsFirstPlayOnFree { get; set; }
	public long Hierarchy { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1CC48FC Offset: 0x1CC48FC VA: 0x1CC48FC
	public int get_RefillPrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC4904 Offset: 0x1CC4904 VA: 0x1CC4904
	public void set_RefillPrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC490C Offset: 0x1CC490C VA: 0x1CC490C
	public int get_PlayOnPrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC4914 Offset: 0x1CC4914 VA: 0x1CC4914
	public void set_PlayOnPrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC491C Offset: 0x1CC491C VA: 0x1CC491C
	public int get_SecondPlayOnPrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC4924 Offset: 0x1CC4924 VA: 0x1CC4924
	public void set_SecondPlayOnPrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC492C Offset: 0x1CC492C VA: 0x1CC492C
	public int get_ThirdSecondPlayOnPrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC4934 Offset: 0x1CC4934 VA: 0x1CC4934
	public void set_ThirdSecondPlayOnPrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC493C Offset: 0x1CC493C VA: 0x1CC493C
	public int get_RefillDurationAsMinutes() { }

	[CompilerGenerated]
	// RVA: 0x1CC4944 Offset: 0x1CC4944 VA: 0x1CC4944
	public void set_RefillDurationAsMinutes(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC494C Offset: 0x1CC494C VA: 0x1CC494C
	public int get_MaxLifeAmount() { }

	[CompilerGenerated]
	// RVA: 0x1CC4954 Offset: 0x1CC4954 VA: 0x1CC4954
	public void set_MaxLifeAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC495C Offset: 0x1CC495C VA: 0x1CC495C
	public int get_InitialCoin() { }

	[CompilerGenerated]
	// RVA: 0x1CC4964 Offset: 0x1CC4964 VA: 0x1CC4964
	public void set_InitialCoin(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC496C Offset: 0x1CC496C VA: 0x1CC496C
	public int get_InitialUndoAmount() { }

	[CompilerGenerated]
	// RVA: 0x1CC4974 Offset: 0x1CC4974 VA: 0x1CC4974
	public void set_InitialUndoAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC497C Offset: 0x1CC497C VA: 0x1CC497C
	public int get_InitialShuffleAmount() { }

	[CompilerGenerated]
	// RVA: 0x1CC4984 Offset: 0x1CC4984 VA: 0x1CC4984
	public void set_InitialShuffleAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC498C Offset: 0x1CC498C VA: 0x1CC498C
	public int get_InitialExtraBottleAmount() { }

	[CompilerGenerated]
	// RVA: 0x1CC4994 Offset: 0x1CC4994 VA: 0x1CC4994
	public void set_InitialExtraBottleAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC499C Offset: 0x1CC499C VA: 0x1CC499C
	public int get_InitialFourthBoosterAmount() { }

	[CompilerGenerated]
	// RVA: 0x1CC49A4 Offset: 0x1CC49A4 VA: 0x1CC49A4
	public void set_InitialFourthBoosterAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC49AC Offset: 0x1CC49AC VA: 0x1CC49AC
	public int get_UndoUnlockAtLevel() { }

	[CompilerGenerated]
	// RVA: 0x1CC49B4 Offset: 0x1CC49B4 VA: 0x1CC49B4
	public void set_UndoUnlockAtLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC49BC Offset: 0x1CC49BC VA: 0x1CC49BC
	public int get_ShuffleUnlockAtLevel() { }

	[CompilerGenerated]
	// RVA: 0x1CC49C4 Offset: 0x1CC49C4 VA: 0x1CC49C4
	public void set_ShuffleUnlockAtLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC49CC Offset: 0x1CC49CC VA: 0x1CC49CC
	public int get_ExtraBottleUnlockAtLevel() { }

	[CompilerGenerated]
	// RVA: 0x1CC49D4 Offset: 0x1CC49D4 VA: 0x1CC49D4
	public void set_ExtraBottleUnlockAtLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC49DC Offset: 0x1CC49DC VA: 0x1CC49DC
	public int get_UndoPrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC49E4 Offset: 0x1CC49E4 VA: 0x1CC49E4
	public void set_UndoPrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC49EC Offset: 0x1CC49EC VA: 0x1CC49EC
	public int get_ShufflePrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC49F4 Offset: 0x1CC49F4 VA: 0x1CC49F4
	public void set_ShufflePrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC49FC Offset: 0x1CC49FC VA: 0x1CC49FC
	public int get_ExtraBottlePrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC4A04 Offset: 0x1CC4A04 VA: 0x1CC4A04
	public void set_ExtraBottlePrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC4A0C Offset: 0x1CC4A0C VA: 0x1CC4A0C
	public int get_MegaShufflePrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC4A14 Offset: 0x1CC4A14 VA: 0x1CC4A14
	public void set_MegaShufflePrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC4A1C Offset: 0x1CC4A1C VA: 0x1CC4A1C
	public int get_RevealPrice() { }

	[CompilerGenerated]
	// RVA: 0x1CC4A24 Offset: 0x1CC4A24 VA: 0x1CC4A24
	public void set_RevealPrice(int value) { }

	[CompilerGenerated]
	// RVA: 0x1CC4A2C Offset: 0x1CC4A2C VA: 0x1CC4A2C
	public List<PlayOnConfigModel> get_PlayOnConfigModels() { }

	[CompilerGenerated]
	// RVA: 0x1CC4A34 Offset: 0x1CC4A34 VA: 0x1CC4A34
	public void set_PlayOnConfigModels(List<PlayOnConfigModel> value) { }

	[CompilerGenerated]
	// RVA: 0x1CC4A3C Offset: 0x1CC4A3C VA: 0x1CC4A3C
	public bool get_IsFirstPlayOnFree() { }

	[CompilerGenerated]
	// RVA: 0x1CC4A44 Offset: 0x1CC4A44 VA: 0x1CC4A44
	public void set_IsFirstPlayOnFree(bool value) { }

	[CompilerGenerated]
	// RVA: 0x1CC4A50 Offset: 0x1CC4A50 VA: 0x1CC4A50
	public long get_Hierarchy() { }

	[CompilerGenerated]
	// RVA: 0x1CC4A58 Offset: 0x1CC4A58 VA: 0x1CC4A58
	public void set_Hierarchy(long value) { }

	// RVA: 0x1CC4A60 Offset: 0x1CC4A60 VA: 0x1CC4A60 Slot: 4
	public bool IsValid() { }

	// RVA: 0x1CC4AB4 Offset: 0x1CC4AB4 VA: 0x1CC4AB4
	public int GetPriceByCurrency(CurrencyType currencyType) { }

	// RVA: 0x1CC13E0 Offset: 0x1CC13E0 VA: 0x1CC13E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Application.RemoteConfig.Scripts