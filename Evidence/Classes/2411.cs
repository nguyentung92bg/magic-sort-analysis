public class ClaimTeamArenaEventCommand : ICommand // TypeDefIndex: 2411
{
	// Fields
	private readonly TeamArenaService _teamArena; // 0x10
	private readonly RewardService _rewardService; // 0x18
	private readonly int _teamRank; // 0x20
	private readonly int _playerRank; // 0x24
	private readonly RewardModel _arenaReward; // 0x28
	private readonly RewardModel _playerReward; // 0x30

	// Methods

	// RVA: 0x2967D00 Offset: 0x2967D00 VA: 0x2967D00
	public void .ctor(int teamRank, int playerRank, RewardModel teamArenaReward, RewardModel contributionReward) { }

	[AsyncStateMachine(typeof(ClaimTeamArenaEventCommand.<ExecuteAsync>d__7))]
	// RVA: 0x2967E18 Offset: 0x2967E18 VA: 0x2967E18 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x296CB90 Offset: 0x296CB90 VA: 0x296CB90 Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(ClaimTeamArenaEventCommand.<GiveRewards>d__9))]
	// RVA: 0x296CB94 Offset: 0x296CB94 VA: 0x296CB94
	private Task GiveRewards() { }
}

// Namespace: 
[CompilerGenerated]