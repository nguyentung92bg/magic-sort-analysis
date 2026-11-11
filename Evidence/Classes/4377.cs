public class DuckFestivalConfigModel : IRemoteConfigValidatable // TypeDefIndex: 4377
{
	// Fields
	public List<DuckFestivalRewardStepModel> GaeRewardSteps; // 0x10
	[CompilerGenerated]
	private List<DuckFestivalRewardStepModel> <GaeRewardStepsWithCollection>k__BackingField; // 0x18
	public int EventOpenLevel; // 0x20
	public bool IsEventEnabled; // 0x24
	public int TournamentType; // 0x28
	public List<RewardModel> LeaderboardRewards; // 0x30
	public List<RewardModel> LeaderboardRewardsWithCollection; // 0x38

	// Properties
	public List<DuckFestivalRewardStepModel> GaeRewardStepsWithCollection { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1B92B4C Offset: 0x1B92B4C VA: 0x1B92B4C
	public List<DuckFestivalRewardStepModel> get_GaeRewardStepsWithCollection() { }

	[CompilerGenerated]
	// RVA: 0x1B92B54 Offset: 0x1B92B54 VA: 0x1B92B54
	public void set_GaeRewardStepsWithCollection(List<DuckFestivalRewardStepModel> value) { }

	// RVA: 0x1B92B5C Offset: 0x1B92B5C VA: 0x1B92B5C Slot: 4
	public bool IsValid() { }

	// RVA: 0x1B92BFC Offset: 0x1B92BFC VA: 0x1B92BFC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.DuckFestival.Scripts