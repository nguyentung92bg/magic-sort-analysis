public class OpenBoatRushJoinPopUpCommand : ICommand // TypeDefIndex: 4894
{
	// Fields
	private readonly BoatRushJoinPopUpImpressionSource _source; // 0x10
	private readonly IPopUpService _popUpService; // 0x18
	private readonly BoatRushService _boatRushService; // 0x20
	private readonly RewardService _rewardService; // 0x28

	// Methods

	// RVA: 0x40FB884 Offset: 0x40FB884 VA: 0x40FB884
	public void .ctor(BoatRushJoinPopUpImpressionSource source) { }

	[AsyncStateMachine(typeof(OpenBoatRushJoinPopUpCommand.<ExecuteAsync>d__5))]
	// RVA: 0x40FB9AC Offset: 0x40FB9AC VA: 0x40FB9AC Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x4101518 Offset: 0x4101518 VA: 0x4101518 Slot: 5
	public void Dispose() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.Commands