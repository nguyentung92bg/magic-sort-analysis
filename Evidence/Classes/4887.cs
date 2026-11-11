public class ClaimBoatRushCommand : ICommand // TypeDefIndex: 4887
{
	// Fields
	private readonly BoatRushService _boatRushService; // 0x10
	private readonly RewardService _rewardService; // 0x18
	private readonly IPopUpService _popUpService; // 0x20
	private readonly List<RewardModel> _stageRewards; // 0x28
	private readonly RewardModel _tierChestReward; // 0x30
	private readonly int _playerRank; // 0x38
	private readonly bool _didPlayerWin; // 0x3C
	private readonly bool _isTimeOut; // 0x3D
	private readonly string _leaderboardId; // 0x40

	// Methods

	// RVA: 0x40FCF50 Offset: 0x40FCF50 VA: 0x40FCF50
	public void .ctor(List<RewardModel> stageRewards, RewardModel tierChestReward, int playerRank, bool didPlayerWin, bool isTimeOut, string leaderboardId) { }

	[AsyncStateMachine(typeof(ClaimBoatRushCommand.<ExecuteAsync>d__10))]
	// RVA: 0x40FD0D4 Offset: 0x40FD0D4 VA: 0x40FD0D4 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x41001D8 Offset: 0x41001D8 VA: 0x41001D8 Slot: 5
	public void Dispose() { }

	// RVA: 0x41001DC Offset: 0x41001DC VA: 0x41001DC
	private void QueueRewards() { }
}

// Namespace: 
[CompilerGenerated]