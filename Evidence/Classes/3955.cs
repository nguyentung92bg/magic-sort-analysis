public class MagicPassViewModel // TypeDefIndex: 3955
{
	// Fields
	[CompilerGenerated]
	private List<MagicPassStepModel> <Steps>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <CurrentStep>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <CurrentStepProgress>k__BackingField; // 0x1C
	[CompilerGenerated]
	private int <CurrentStepMaxProgress>k__BackingField; // 0x20
	[CompilerGenerated]
	private MagicPassStepModel <CurrentStepModel>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <AllDefaultStepsCompleted>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <LastSeenStep>k__BackingField; // 0x34
	[CompilerGenerated]
	private int <LastSeenStepProgress>k__BackingField; // 0x38
	[CompilerGenerated]
	private int <LastSeenStepMaxProgress>k__BackingField; // 0x3C
	[CompilerGenerated]
	private MagicPassStepModel <LastSeenStepModel>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <AllLastSeenDefaultStepsCompleted>k__BackingField; // 0x48
	[CompilerGenerated]
	private int <VaultStepsCount>k__BackingField; // 0x4C
	[CompilerGenerated]
	private int <VaultStepKeyCount>k__BackingField; // 0x50
	[CompilerGenerated]
	private int <VaultStepCoinAmount>k__BackingField; // 0x54
	[CompilerGenerated]
	private int <MaxVaultCoinAmount>k__BackingField; // 0x58
	[CompilerGenerated]
	private int <CurrentVaultCoinAmount>k__BackingField; // 0x5C
	[CompilerGenerated]
	private bool <AllVaultStepsCompleted>k__BackingField; // 0x60
	[CompilerGenerated]
	private int <LastSeenVaultCoinAmount>k__BackingField; // 0x64
	[CompilerGenerated]
	private bool <AllLastSeenVaultStepsCompleted>k__BackingField; // 0x68
	[CompilerGenerated]
	private List<MagicPassRewardElementViewModel> <RewardElementViews>k__BackingField; // 0x70
	[CompilerGenerated]
	private IAPConfigModel <IAPConfigModel>k__BackingField; // 0x78
	[CompilerGenerated]
	private DateTime <EndDate>k__BackingField; // 0x80
	[CompilerGenerated]
	private bool <IsPassActivated>k__BackingField; // 0x88
	[CompilerGenerated]
	private bool <IsKeyCountIncreased>k__BackingField; // 0x89
	[CompilerGenerated]
	private bool <IsStepIncreased>k__BackingField; // 0x8A
	[CompilerGenerated]
	private int <NormalLevelKeyCount>k__BackingField; // 0x8C
	[CompilerGenerated]
	private int <HardLevelKeyCount>k__BackingField; // 0x90
	[CompilerGenerated]
	private int <SuperHardLevelKeyCount>k__BackingField; // 0x94

	// Properties
	public List<MagicPassStepModel> Steps { get; set; }
	public int CurrentStep { get; set; }
	public int CurrentStepProgress { get; set; }
	public int CurrentStepMaxProgress { get; set; }
	public MagicPassStepModel CurrentStepModel { get; set; }
	public bool AllDefaultStepsCompleted { get; set; }
	public int LastSeenStep { get; set; }
	public int LastSeenStepProgress { get; set; }
	public int LastSeenStepMaxProgress { get; set; }
	public MagicPassStepModel LastSeenStepModel { get; set; }
	public bool AllLastSeenDefaultStepsCompleted { get; set; }
	public int VaultStepsCount { get; set; }
	public int VaultStepKeyCount { get; set; }
	public int VaultStepCoinAmount { get; set; }
	public int MaxVaultCoinAmount { get; set; }
	public int CurrentVaultCoinAmount { get; set; }
	public bool AllVaultStepsCompleted { get; set; }
	public int LastSeenVaultCoinAmount { get; set; }
	public bool AllLastSeenVaultStepsCompleted { get; set; }
	public List<MagicPassRewardElementViewModel> RewardElementViews { get; set; }
	public IAPConfigModel IAPConfigModel { get; set; }
	public DateTime EndDate { get; set; }
	public bool IsPassActivated { get; set; }
	public bool IsKeyCountIncreased { get; set; }
	public bool IsStepIncreased { get; set; }
	public int NormalLevelKeyCount { get; set; }
	public int HardLevelKeyCount { get; set; }
	public int SuperHardLevelKeyCount { get; set; }
	public int ClampedCurrentStep { get; }
	public int ClampedLastSeenStep { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x38EC668 Offset: 0x38EC668 VA: 0x38EC668
	public List<MagicPassStepModel> get_Steps() { }

	[CompilerGenerated]
	// RVA: 0x38EC670 Offset: 0x38EC670 VA: 0x38EC670
	public void set_Steps(List<MagicPassStepModel> value) { }

	[CompilerGenerated]
	// RVA: 0x38EC678 Offset: 0x38EC678 VA: 0x38EC678
	public int get_CurrentStep() { }

	[CompilerGenerated]
	// RVA: 0x38EC680 Offset: 0x38EC680 VA: 0x38EC680
	public void set_CurrentStep(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC688 Offset: 0x38EC688 VA: 0x38EC688
	public int get_CurrentStepProgress() { }

	[CompilerGenerated]
	// RVA: 0x38EC690 Offset: 0x38EC690 VA: 0x38EC690
	public void set_CurrentStepProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC698 Offset: 0x38EC698 VA: 0x38EC698
	public int get_CurrentStepMaxProgress() { }

	[CompilerGenerated]
	// RVA: 0x38EC6A0 Offset: 0x38EC6A0 VA: 0x38EC6A0
	public void set_CurrentStepMaxProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC6A8 Offset: 0x38EC6A8 VA: 0x38EC6A8
	public MagicPassStepModel get_CurrentStepModel() { }

	[CompilerGenerated]
	// RVA: 0x38EC6B0 Offset: 0x38EC6B0 VA: 0x38EC6B0
	public void set_CurrentStepModel(MagicPassStepModel value) { }

	[CompilerGenerated]
	// RVA: 0x38EC6B8 Offset: 0x38EC6B8 VA: 0x38EC6B8
	public bool get_AllDefaultStepsCompleted() { }

	[CompilerGenerated]
	// RVA: 0x38EC6C0 Offset: 0x38EC6C0 VA: 0x38EC6C0
	public void set_AllDefaultStepsCompleted(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38EC6CC Offset: 0x38EC6CC VA: 0x38EC6CC
	public int get_LastSeenStep() { }

	[CompilerGenerated]
	// RVA: 0x38EC6D4 Offset: 0x38EC6D4 VA: 0x38EC6D4
	public void set_LastSeenStep(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC6DC Offset: 0x38EC6DC VA: 0x38EC6DC
	public int get_LastSeenStepProgress() { }

	[CompilerGenerated]
	// RVA: 0x38EC6E4 Offset: 0x38EC6E4 VA: 0x38EC6E4
	public void set_LastSeenStepProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC6EC Offset: 0x38EC6EC VA: 0x38EC6EC
	public int get_LastSeenStepMaxProgress() { }

	[CompilerGenerated]
	// RVA: 0x38EC6F4 Offset: 0x38EC6F4 VA: 0x38EC6F4
	public void set_LastSeenStepMaxProgress(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC6FC Offset: 0x38EC6FC VA: 0x38EC6FC
	public MagicPassStepModel get_LastSeenStepModel() { }

	[CompilerGenerated]
	// RVA: 0x38EC704 Offset: 0x38EC704 VA: 0x38EC704
	public void set_LastSeenStepModel(MagicPassStepModel value) { }

	[CompilerGenerated]
	// RVA: 0x38EC70C Offset: 0x38EC70C VA: 0x38EC70C
	public bool get_AllLastSeenDefaultStepsCompleted() { }

	[CompilerGenerated]
	// RVA: 0x38EC714 Offset: 0x38EC714 VA: 0x38EC714
	public void set_AllLastSeenDefaultStepsCompleted(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38EC720 Offset: 0x38EC720 VA: 0x38EC720
	public int get_VaultStepsCount() { }

	[CompilerGenerated]
	// RVA: 0x38EC728 Offset: 0x38EC728 VA: 0x38EC728
	public void set_VaultStepsCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC730 Offset: 0x38EC730 VA: 0x38EC730
	public int get_VaultStepKeyCount() { }

	[CompilerGenerated]
	// RVA: 0x38EC738 Offset: 0x38EC738 VA: 0x38EC738
	public void set_VaultStepKeyCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC740 Offset: 0x38EC740 VA: 0x38EC740
	public int get_VaultStepCoinAmount() { }

	[CompilerGenerated]
	// RVA: 0x38EC748 Offset: 0x38EC748 VA: 0x38EC748
	public void set_VaultStepCoinAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC750 Offset: 0x38EC750 VA: 0x38EC750
	public int get_MaxVaultCoinAmount() { }

	[CompilerGenerated]
	// RVA: 0x38EC758 Offset: 0x38EC758 VA: 0x38EC758
	public void set_MaxVaultCoinAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC760 Offset: 0x38EC760 VA: 0x38EC760
	public int get_CurrentVaultCoinAmount() { }

	[CompilerGenerated]
	// RVA: 0x38EC768 Offset: 0x38EC768 VA: 0x38EC768
	public void set_CurrentVaultCoinAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC770 Offset: 0x38EC770 VA: 0x38EC770
	public bool get_AllVaultStepsCompleted() { }

	[CompilerGenerated]
	// RVA: 0x38EC778 Offset: 0x38EC778 VA: 0x38EC778
	public void set_AllVaultStepsCompleted(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38EC784 Offset: 0x38EC784 VA: 0x38EC784
	public int get_LastSeenVaultCoinAmount() { }

	[CompilerGenerated]
	// RVA: 0x38EC78C Offset: 0x38EC78C VA: 0x38EC78C
	public void set_LastSeenVaultCoinAmount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC794 Offset: 0x38EC794 VA: 0x38EC794
	public bool get_AllLastSeenVaultStepsCompleted() { }

	[CompilerGenerated]
	// RVA: 0x38EC79C Offset: 0x38EC79C VA: 0x38EC79C
	public void set_AllLastSeenVaultStepsCompleted(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38EC7A8 Offset: 0x38EC7A8 VA: 0x38EC7A8
	public List<MagicPassRewardElementViewModel> get_RewardElementViews() { }

	[CompilerGenerated]
	// RVA: 0x38EC7B0 Offset: 0x38EC7B0 VA: 0x38EC7B0
	public void set_RewardElementViews(List<MagicPassRewardElementViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x38EC7B8 Offset: 0x38EC7B8 VA: 0x38EC7B8
	public IAPConfigModel get_IAPConfigModel() { }

	[CompilerGenerated]
	// RVA: 0x38EC7C0 Offset: 0x38EC7C0 VA: 0x38EC7C0
	public void set_IAPConfigModel(IAPConfigModel value) { }

	[CompilerGenerated]
	// RVA: 0x38EC7C8 Offset: 0x38EC7C8 VA: 0x38EC7C8
	public DateTime get_EndDate() { }

	[CompilerGenerated]
	// RVA: 0x38EC7D0 Offset: 0x38EC7D0 VA: 0x38EC7D0
	public void set_EndDate(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x38EC7D8 Offset: 0x38EC7D8 VA: 0x38EC7D8
	public bool get_IsPassActivated() { }

	[CompilerGenerated]
	// RVA: 0x38EC7E0 Offset: 0x38EC7E0 VA: 0x38EC7E0
	public void set_IsPassActivated(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38EC7EC Offset: 0x38EC7EC VA: 0x38EC7EC
	public bool get_IsKeyCountIncreased() { }

	[CompilerGenerated]
	// RVA: 0x38EC7F4 Offset: 0x38EC7F4 VA: 0x38EC7F4
	public void set_IsKeyCountIncreased(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38EC800 Offset: 0x38EC800 VA: 0x38EC800
	public bool get_IsStepIncreased() { }

	[CompilerGenerated]
	// RVA: 0x38EC808 Offset: 0x38EC808 VA: 0x38EC808
	public void set_IsStepIncreased(bool value) { }

	[CompilerGenerated]
	// RVA: 0x38EC814 Offset: 0x38EC814 VA: 0x38EC814
	public int get_NormalLevelKeyCount() { }

	[CompilerGenerated]
	// RVA: 0x38EC81C Offset: 0x38EC81C VA: 0x38EC81C
	public void set_NormalLevelKeyCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC824 Offset: 0x38EC824 VA: 0x38EC824
	public int get_HardLevelKeyCount() { }

	[CompilerGenerated]
	// RVA: 0x38EC82C Offset: 0x38EC82C VA: 0x38EC82C
	public void set_HardLevelKeyCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x38EC834 Offset: 0x38EC834 VA: 0x38EC834
	public int get_SuperHardLevelKeyCount() { }

	[CompilerGenerated]
	// RVA: 0x38EC83C Offset: 0x38EC83C VA: 0x38EC83C
	public void set_SuperHardLevelKeyCount(int value) { }

	// RVA: 0x38E9F1C Offset: 0x38E9F1C VA: 0x38E9F1C
	public int get_ClampedCurrentStep() { }

	// RVA: 0x38E9C34 Offset: 0x38E9C34 VA: 0x38E9C34
	public int get_ClampedLastSeenStep() { }

	// RVA: 0x38DF26C Offset: 0x38DF26C VA: 0x38DF26C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI