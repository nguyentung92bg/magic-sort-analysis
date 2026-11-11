public class OpenBoatRushPopUpCommand : ICommand // TypeDefIndex: 4899
{
	// Fields
	private readonly BoatRushPopUpImpressionSource _source; // 0x10
	private readonly IPopUpService _popUpService; // 0x18
	private readonly BoatRushService _service; // 0x20
	private readonly RewardService _rewardService; // 0x28
	private BoatRushRaceViewModel _raceViewModel; // 0x30

	// Methods

	// RVA: 0x40FBA98 Offset: 0x40FBA98 VA: 0x40FBA98
	public void .ctor(BoatRushPopUpImpressionSource source) { }

	[AsyncStateMachine(typeof(OpenBoatRushPopUpCommand.<ExecuteAsync>d__6))]
	// RVA: 0x40FBBC4 Offset: 0x40FBBC4 VA: 0x40FBBC4 Slot: 4
	public Task ExecuteAsync() { }

	[AsyncStateMachine(typeof(OpenBoatRushPopUpCommand.<GiveRewards>d__7))]
	// RVA: 0x4101AF0 Offset: 0x4101AF0 VA: 0x4101AF0
	private Task GiveRewards() { }

	// RVA: 0x4101BDC Offset: 0x4101BDC VA: 0x4101BDC Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]