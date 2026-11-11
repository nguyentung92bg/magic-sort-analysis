private struct ShowSkyJumpPopupSequenceCommand.<Open>d__3 : IAsyncStateMachine // TypeDefIndex: 2775
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncTaskMethodBuilder <>t__builder; // 0x8
	public ShowSkyJumpPopupSequenceCommand <>4__this; // 0x20
	private SkyJumpService <skyJumpService>5__2; // 0x28
	private IPopUpService <popUpService>5__3; // 0x30
	private RewardService <rewardService>5__4; // 0x38
	private SkyJumpStateService <sjStateService>5__5; // 0x40
	private TaskAwaiter <>u__1; // 0x48
	private RewardModel <rewardModel>5__6; // 0x50
	private bool <canShowWinPopUp>5__7; // 0x58
	private List<SkyJumpLeaderboardPlayerViewModel> <sharingRewardsWith>5__8; // 0x60
	private int <sharingRewardsWithUserCount>5__9; // 0x68

	// Methods

	// RVA: 0x2F1C8DC Offset: 0x2F1C8DC VA: 0x2F1C8DC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x2F1D65C Offset: 0x2F1D65C VA: 0x2F1D65C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI