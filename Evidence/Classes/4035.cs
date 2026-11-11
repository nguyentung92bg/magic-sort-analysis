public class MagicLabViewModel // TypeDefIndex: 4035
{
	// Fields
	[CompilerGenerated]
	private List<MagicLabStageViewModel> <MagicLabStages>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <LastSeenStageId>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <CurrentStageId>k__BackingField; // 0x1C
	[CompilerGenerated]
	private DateTime <StartTime>k__BackingField; // 0x20
	[CompilerGenerated]
	private DateTime <FinishTime>k__BackingField; // 0x28
	[CompilerGenerated]
	private MagicLabPopUpState <MagicLabPopUpState>k__BackingField; // 0x30

	// Properties
	public List<MagicLabStageViewModel> MagicLabStages { get; set; }
	public int LastSeenStageId { get; set; }
	public int CurrentStageId { get; set; }
	public DateTime StartTime { get; set; }
	public DateTime FinishTime { get; set; }
	public MagicLabPopUpState MagicLabPopUpState { get; set; }
	public bool ShouldPlayStageCompleteAnimation { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x375CA48 Offset: 0x375CA48 VA: 0x375CA48
	public List<MagicLabStageViewModel> get_MagicLabStages() { }

	[CompilerGenerated]
	// RVA: 0x375CA50 Offset: 0x375CA50 VA: 0x375CA50
	public void set_MagicLabStages(List<MagicLabStageViewModel> value) { }

	[CompilerGenerated]
	// RVA: 0x375CA58 Offset: 0x375CA58 VA: 0x375CA58
	public int get_LastSeenStageId() { }

	[CompilerGenerated]
	// RVA: 0x375CA60 Offset: 0x375CA60 VA: 0x375CA60
	public void set_LastSeenStageId(int value) { }

	[CompilerGenerated]
	// RVA: 0x375CA68 Offset: 0x375CA68 VA: 0x375CA68
	public int get_CurrentStageId() { }

	[CompilerGenerated]
	// RVA: 0x375CA70 Offset: 0x375CA70 VA: 0x375CA70
	public void set_CurrentStageId(int value) { }

	[CompilerGenerated]
	// RVA: 0x375CA78 Offset: 0x375CA78 VA: 0x375CA78
	public DateTime get_StartTime() { }

	[CompilerGenerated]
	// RVA: 0x375CA80 Offset: 0x375CA80 VA: 0x375CA80
	public void set_StartTime(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x375CA88 Offset: 0x375CA88 VA: 0x375CA88
	public DateTime get_FinishTime() { }

	[CompilerGenerated]
	// RVA: 0x375CA90 Offset: 0x375CA90 VA: 0x375CA90
	public void set_FinishTime(DateTime value) { }

	[CompilerGenerated]
	// RVA: 0x375CA98 Offset: 0x375CA98 VA: 0x375CA98
	public MagicLabPopUpState get_MagicLabPopUpState() { }

	[CompilerGenerated]
	// RVA: 0x375CAA0 Offset: 0x375CAA0 VA: 0x375CAA0
	public void set_MagicLabPopUpState(MagicLabPopUpState value) { }

	// RVA: 0x3757908 Offset: 0x3757908 VA: 0x3757908
	public bool get_ShouldPlayStageCompleteAnimation() { }

	// RVA: 0x375AA88 Offset: 0x375AA88 VA: 0x375AA88
	public bool ShouldPlayTaskCompleteAnimation() { }

	// RVA: 0x375367C Offset: 0x375367C VA: 0x375367C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x375CAA8 Offset: 0x375CAA8 VA: 0x375CAA8
	private bool <ShouldPlayTaskCompleteAnimation>b__26_0(MagicLabStageViewModel x) { }
}

// Namespace: Modules.Contexts.Home.MagicLab.Scripts.UI