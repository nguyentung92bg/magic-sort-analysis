public class TreasureDrillStepViewModel // TypeDefIndex: 3232
{
	// Fields
	[CompilerGenerated]
	private TreasureDrillTaskType <TreasureDrillTaskType>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <StepIndex>k__BackingField; // 0x14
	[CompilerGenerated]
	private bool <IsLocked>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsClaimed>k__BackingField; // 0x19
	[CompilerGenerated]
	private bool <IsClaimable>k__BackingField; // 0x1A
	[CompilerGenerated]
	private int <RequiredAmount>k__BackingField; // 0x1C
	[CompilerGenerated]
	private int <PreviousAmount>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <CurrentAmount>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <IsClaimableSeen>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <IsLastStep>k__BackingField; // 0x29
	[CompilerGenerated]
	private List<RewardModel> <RewardModels>k__BackingField; // 0x30

	// Properties
	public TreasureDrillTaskType TreasureDrillTaskType { get; set; }
	public int StepIndex { get; set; }
	public bool IsLocked { get; set; }
	public bool IsClaimed { get; set; }
	public bool IsClaimable { get; set; }
	public int RequiredAmount { get; set; }
	public int PreviousAmount { get; set; }
	public int CurrentAmount { get; set; }
	public bool IsClaimableSeen { get; set; }
	public bool IsLastStep { get; set; }
	public List<RewardModel> RewardModels { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3588240 Offset: 0x3588240 VA: 0x3588240
	public TreasureDrillTaskType get_TreasureDrillTaskType() { }

	[CompilerGenerated]
	// RVA: 0x3588248 Offset: 0x3588248 VA: 0x3588248
	public void set_TreasureDrillTaskType(TreasureDrillTaskType value) { }

	[CompilerGenerated]
	// RVA: 0x3588250 Offset: 0x3588250 VA: 0x3588250
	public int get_StepIndex() { }

	[CompilerGenerated]
	// RVA: 0x3588258 Offset: 0x3588258 VA: 0x3588258
	public void set_StepIndex(int value) { }

	[CompilerGenerated]
	// RVA: 0x3588260 Offset: 0x3588260 VA: 0x3588260
	public bool get_IsLocked() { }

	[CompilerGenerated]
	// RVA: 0x3588268 Offset: 0x3588268 VA: 0x3588268
	public void set_IsLocked(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3588274 Offset: 0x3588274 VA: 0x3588274
	public bool get_IsClaimed() { }

	[CompilerGenerated]
	// RVA: 0x358827C Offset: 0x358827C VA: 0x358827C
	public void set_IsClaimed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x3588288 Offset: 0x3588288 VA: 0x3588288
	public bool get_IsClaimable() { }

	[CompilerGenerated]
	// RVA: 0x3588290 Offset: 0x3588290 VA: 0x3588290
	public void set_IsClaimable(bool value) { }

	[CompilerGenerated]
	// RVA: 0x358829C Offset: 0x358829C VA: 0x358829C
	public int get_RequiredAmount() { }

	[CompilerGenerated]
	// RVA: 0x35882A4 Offset: 0x35882A4 VA: 0x35882A4
	public void set_RequiredAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x35882AC Offset: 0x35882AC VA: 0x35882AC
	public int get_PreviousAmount() { }

	[CompilerGenerated]
	// RVA: 0x35882B4 Offset: 0x35882B4 VA: 0x35882B4
	public void set_PreviousAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x35882BC Offset: 0x35882BC VA: 0x35882BC
	public int get_CurrentAmount() { }

	[CompilerGenerated]
	// RVA: 0x35882C4 Offset: 0x35882C4 VA: 0x35882C4
	public void set_CurrentAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x35882CC Offset: 0x35882CC VA: 0x35882CC
	public bool get_IsClaimableSeen() { }

	[CompilerGenerated]
	// RVA: 0x35882D4 Offset: 0x35882D4 VA: 0x35882D4
	public void set_IsClaimableSeen(bool value) { }

	[CompilerGenerated]
	// RVA: 0x35882E0 Offset: 0x35882E0 VA: 0x35882E0
	public bool get_IsLastStep() { }

	[CompilerGenerated]
	// RVA: 0x35882E8 Offset: 0x35882E8 VA: 0x35882E8
	public void set_IsLastStep(bool value) { }

	[CompilerGenerated]
	// RVA: 0x35882F4 Offset: 0x35882F4 VA: 0x35882F4
	public List<RewardModel> get_RewardModels() { }

	[CompilerGenerated]
	// RVA: 0x35882FC Offset: 0x35882FC VA: 0x35882FC
	public void set_RewardModels(List<RewardModel> value) { }

	// RVA: 0x3588304 Offset: 0x3588304 VA: 0x3588304
	public void .ctor(int stepIndex, TreasureDrillTaskType treasureDrillTaskType, List<RewardModel> rewardModels, bool isClaimed, bool isLocked, int previousAmount, int currentAmount, bool isClaimable, bool isClaimableSeen, int requiredAmount, bool isLastStep) { }
}

// Namespace: Modules.Contexts.Home.Monetization.TreasureDrill.Scripts.UI