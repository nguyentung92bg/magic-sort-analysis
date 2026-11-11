public class WheelOfFortuneTaskModel // TypeDefIndex: 1855
{
	// Fields
	[CompilerGenerated]
	private WheelOfFortuneTaskType <Type>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x14
	[CompilerGenerated]
	private int <RequiredAmount>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <CurrentAmount>k__BackingField; // 0x1C
	[CompilerGenerated]
	private int <LastSeenAmount>k__BackingField; // 0x20
	[CompilerGenerated]
	private bool <ClaimableSeen>k__BackingField; // 0x24
	[CompilerGenerated]
	private int <WheelOfFortuneCurrencyReward>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x2C
	[CompilerGenerated]
	private bool <IsSeen>k__BackingField; // 0x2D
	[CompilerGenerated]
	private WheelOfFortuneBackUpTaskModel <BackUpTask>k__BackingField; // 0x30

	// Properties
	public WheelOfFortuneTaskType Type { get; set; }
	public int Id { get; set; }
	public int RequiredAmount { get; set; }
	public int CurrentAmount { get; set; }
	public int LastSeenAmount { get; set; }
	public bool ClaimableSeen { get; set; }
	public int WheelOfFortuneCurrencyReward { get; set; }
	public bool IsClaimed { get; set; }
	public bool IsSeen { get; set; }
	public WheelOfFortuneBackUpTaskModel BackUpTask { get; set; }
	[JsonIgnore]
	public bool IsClaimable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2DA132C Offset: 0x2DA132C VA: 0x2DA132C
	public WheelOfFortuneTaskType get_Type() { }

	[CompilerGenerated]
	// RVA: 0x2DA1334 Offset: 0x2DA1334 VA: 0x2DA1334
	public void set_Type(WheelOfFortuneTaskType value) { }

	[CompilerGenerated]
	// RVA: 0x2DA133C Offset: 0x2DA133C VA: 0x2DA133C
	public int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2DA1344 Offset: 0x2DA1344 VA: 0x2DA1344
	public void set_Id(int value) { }

	[CompilerGenerated]
	// RVA: 0x2DA134C Offset: 0x2DA134C VA: 0x2DA134C
	public int get_RequiredAmount() { }

	[CompilerGenerated]
	// RVA: 0x2DA1354 Offset: 0x2DA1354 VA: 0x2DA1354
	public void set_RequiredAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2DA135C Offset: 0x2DA135C VA: 0x2DA135C
	public int get_CurrentAmount() { }

	[CompilerGenerated]
	// RVA: 0x2DA1364 Offset: 0x2DA1364 VA: 0x2DA1364
	public void set_CurrentAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2DA136C Offset: 0x2DA136C VA: 0x2DA136C
	public int get_LastSeenAmount() { }

	[CompilerGenerated]
	// RVA: 0x2DA1374 Offset: 0x2DA1374 VA: 0x2DA1374
	public void set_LastSeenAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2DA137C Offset: 0x2DA137C VA: 0x2DA137C
	public bool get_ClaimableSeen() { }

	[CompilerGenerated]
	// RVA: 0x2DA1384 Offset: 0x2DA1384 VA: 0x2DA1384
	public void set_ClaimableSeen(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2DA1390 Offset: 0x2DA1390 VA: 0x2DA1390
	public int get_WheelOfFortuneCurrencyReward() { }

	[CompilerGenerated]
	// RVA: 0x2DA1398 Offset: 0x2DA1398 VA: 0x2DA1398
	public void set_WheelOfFortuneCurrencyReward(int value) { }

	[CompilerGenerated]
	// RVA: 0x2DA13A0 Offset: 0x2DA13A0 VA: 0x2DA13A0
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x2DA13A8 Offset: 0x2DA13A8 VA: 0x2DA13A8
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2DA13B4 Offset: 0x2DA13B4 VA: 0x2DA13B4
	public bool get_IsSeen() { }

	[CompilerGenerated]
	// RVA: 0x2DA13BC Offset: 0x2DA13BC VA: 0x2DA13BC
	public void set_IsSeen(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2DA13C8 Offset: 0x2DA13C8 VA: 0x2DA13C8
	public WheelOfFortuneBackUpTaskModel get_BackUpTask() { }

	[CompilerGenerated]
	// RVA: 0x2DA13D0 Offset: 0x2DA13D0 VA: 0x2DA13D0
	public void set_BackUpTask(WheelOfFortuneBackUpTaskModel value) { }

	// RVA: 0x2DA13D8 Offset: 0x2DA13D8 VA: 0x2DA13D8
	public bool get_IsClaimable() { }

	// RVA: 0x2DA13F8 Offset: 0x2DA13F8 VA: 0x2DA13F8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WheelOfFortune
[Serializable]