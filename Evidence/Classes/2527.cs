public class OpenStrikeShowEventPopupCommand : ICommand // TypeDefIndex: 2527
{
	// Fields
	private readonly StrikeShowService _strikeShowService; // 0x10
	private readonly StrikeShowStateService _stateService; // 0x18
	private readonly RewardService _rewardService; // 0x20
	private readonly IPopUpService _popUpService; // 0x28

	// Methods

	// RVA: 0x2B01B18 Offset: 0x2B01B18 VA: 0x2B01B18
	public void .ctor() { }

	[AsyncStateMachine(typeof(OpenStrikeShowEventPopupCommand.<ExecuteAsync>d__5))]
	// RVA: 0x2B01C74 Offset: 0x2B01C74 VA: 0x2B01C74 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x2B01D64 Offset: 0x2B01D64 VA: 0x2B01D64 Slot: 5
	public void Dispose() { }
}

// Namespace: 
[CompilerGenerated]