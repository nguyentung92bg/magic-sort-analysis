public class JoinBoatRushRaceCommand : ICommand // TypeDefIndex: 4890
{
	// Fields
	private readonly BoatRushService _boatRushService; // 0x10
	private readonly RewardService _rewardService; // 0x18
	private readonly BoatRushJoinPopUpImpressionSource _joinPopUpImpressionSource; // 0x20

	// Methods

	// RVA: 0x40FA828 Offset: 0x40FA828 VA: 0x40FA828
	public void .ctor(BoatRushJoinPopUpImpressionSource impressionSource) { }

	[AsyncStateMachine(typeof(JoinBoatRushRaceCommand.<ExecuteAsync>d__4))]
	// RVA: 0x40FA910 Offset: 0x40FA910 VA: 0x40FA910 Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(JoinBoatRushRaceCommand.<TryGiveJoinReward>d__5))]
	// RVA: 0x4100B48 Offset: 0x4100B48 VA: 0x4100B48
	private Task TryGiveJoinReward(bool isEligibleForLimitless) { }

	// RVA: 0x4100C20 Offset: 0x4100C20 VA: 0x4100C20 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.Commands