public class ClaimStrikeShowEventCommand : ICommand // TypeDefIndex: 2525
{
	// Fields
	private readonly StrikeShowService _strikeShowService; // 0x10
	private readonly RewardService _rewardService; // 0x18
	private readonly IPopUpService _popUpService; // 0x20

	// Methods

	// RVA: 0x2AFB17C Offset: 0x2AFB17C VA: 0x2AFB17C
	public void .ctor() { }

	[AsyncStateMachine(typeof(ClaimStrikeShowEventCommand.<ExecuteAsync>d__4))]
	// RVA: 0x2AFB294 Offset: 0x2AFB294 VA: 0x2AFB294 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2B01414 Offset: 0x2B01414 VA: 0x2B01414 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]