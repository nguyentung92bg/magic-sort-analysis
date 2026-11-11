public class ShowTeamArenaEventCommand : ICommand // TypeDefIndex: 2418
{
	// Fields
	private readonly IPopUpService _popUpService; // 0x10
	private readonly RewardService _rewardService; // 0x18
	private readonly TeamArenaService _teamArenaService; // 0x20
	private readonly int _directory; // 0x28

	// Methods

	// RVA: 0x2964FA8 Offset: 0x2964FA8 VA: 0x2964FA8
	public void .ctor(int directory) { }

	[AsyncStateMachine(typeof(ShowTeamArenaEventCommand.<ExecuteAsync>d__5))]
	// RVA: 0x29650D4 Offset: 0x29650D4 VA: 0x29650D4 Slot: 4
	public Task ExecuteAsync() { }

	// RVA: 0x296E1EC Offset: 0x296E1EC VA: 0x296E1EC Slot: 5
	public void Dispose() { }

	[AsyncStateMachine(typeof(ShowTeamArenaEventCommand.<TryGiveRewards>d__7))]
	// RVA: 0x296E1F0 Offset: 0x296E1F0 VA: 0x296E1F0
	private Task TryGiveRewards() { }
}

// Namespace: 
[CompilerGenerated]