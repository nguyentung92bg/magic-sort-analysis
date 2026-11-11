public class WinState : IState<GamePlayStateType> // TypeDefIndex: 1329
{
	// Properties
	public GamePlayStateType StateType { get; }

	// Methods

	// RVA: 0x1F0DA40 Offset: 0x1F0DA40 VA: 0x1F0DA40 Slot: 4
	public GamePlayStateType get_StateType() { }

	// RVA: 0x1F0DA48 Offset: 0x1F0DA48 VA: 0x1F0DA48 Slot: 5
	public void Enter(StateArguments stateArguments) { }

	// RVA: 0x1F0DAD4 Offset: 0x1F0DAD4 VA: 0x1F0DAD4
	private void DelayedWin() { }

	// RVA: 0x1F0F6B8 Offset: 0x1F0F6B8 VA: 0x1F0F6B8
	private void SendSuperChagerStatusEvent(SuperChargerService service) { }

	// RVA: 0x1F0F584 Offset: 0x1F0F584 VA: 0x1F0F584
	private void SendLevelWinAnalytics() { }

	// RVA: 0x1F0F7BC Offset: 0x1F0F7BC VA: 0x1F0F7BC Slot: 6
	public void Exit() { }

	// RVA: 0x1F0B028 Offset: 0x1F0B028 VA: 0x1F0B028
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts.Regular