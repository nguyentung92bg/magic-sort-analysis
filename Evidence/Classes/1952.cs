public class ClaimWeeklyTournamentLeaderboardCommand : ICommand // TypeDefIndex: 1952
{
	// Fields
	[CompilerGenerated]
	private RewardModel <ShownReward>k__BackingField; // 0x10
	[CompilerGenerated]
	private int <Rank>k__BackingField; // 0x18
	private const int PlayerNotInClaimStateStatusCode = 425;

	// Properties
	public RewardModel ShownReward { get; set; }
	public int Rank { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32D4AA4 Offset: 0x32D4AA4 VA: 0x32D4AA4
	public RewardModel get_ShownReward() { }

	[CompilerGenerated]
	// RVA: 0x32D4AAC Offset: 0x32D4AAC VA: 0x32D4AAC
	public void set_ShownReward(RewardModel value) { }

	[CompilerGenerated]
	// RVA: 0x32D4AB4 Offset: 0x32D4AB4 VA: 0x32D4AB4
	public int get_Rank() { }

	[CompilerGenerated]
	// RVA: 0x32D4ABC Offset: 0x32D4ABC VA: 0x32D4ABC
	public void set_Rank(int value) { }

	[AsyncStateMachine(typeof(ClaimWeeklyTournamentLeaderboardCommand.<ExecuteAsync>d__9))]
	// RVA: 0x32D4AC4 Offset: 0x32D4AC4 VA: 0x32D4AC4 Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(ClaimWeeklyTournamentLeaderboardCommand.<TryGiveRewardsAndShowUpdatedWeeklyTournamentAgain>d__10))]
	// RVA: 0x32D4BB0 Offset: 0x32D4BB0 VA: 0x32D4BB0
	private Task TryGiveRewardsAndShowUpdatedWeeklyTournamentAgain(List<RewardModel> rewards) { }

	// RVA: 0x32D4CA0 Offset: 0x32D4CA0 VA: 0x32D4CA0 Slot: 5
	public void Dispose() { }

	// RVA: 0x32D4CA4 Offset: 0x32D4CA4 VA: 0x32D4CA4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.WeeklyTournament.Scripts
[Serializable]