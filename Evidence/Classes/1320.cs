public class PlayingState : IState<GamePlayStateType> // TypeDefIndex: 1320
{
	// Properties
	public GamePlayStateType StateType { get; }

	// Methods

	// RVA: 0x1F0B648 Offset: 0x1F0B648 VA: 0x1F0B648 Slot: 4
	public GamePlayStateType get_StateType() { }

	// RVA: 0x1F0B650 Offset: 0x1F0B650 VA: 0x1F0B650 Slot: 5
	public void Enter(StateArguments stateArguments) { }

	// RVA: 0x1F0BFD8 Offset: 0x1F0BFD8 VA: 0x1F0BFD8
	private void SendSuperChagerStatusEvent(SuperChargerService service) { }

	// RVA: 0x1F0C0B8 Offset: 0x1F0C0B8 VA: 0x1F0C0B8 Slot: 6
	public void Exit() { }

	// RVA: 0x1F0AFF0 Offset: 0x1F0AFF0 VA: 0x1F0AFF0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts.Regular