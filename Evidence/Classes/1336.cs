public class DailyStateManager : IGamePlayStateManager, IInitializable // TypeDefIndex: 1336
{
	// Fields
	private StateMachine<GamePlayStateType> _stateMachine; // 0x10

	// Methods

	// RVA: 0x1F1109C Offset: 0x1F1109C VA: 0x1F1109C Slot: 16
	public void Initialize() { }

	// RVA: 0x1F114C4 Offset: 0x1F114C4 VA: 0x1F114C4 Slot: 4
	public void FromHomeToGamePlay() { }

	// RVA: 0x1F1151C Offset: 0x1F1151C VA: 0x1F1151C Slot: 5
	public void Playing() { }

	// RVA: 0x1F11574 Offset: 0x1F11574 VA: 0x1F11574 Slot: 6
	public void QuitPressedState() { }

	// RVA: 0x1F115CC Offset: 0x1F115CC VA: 0x1F115CC Slot: 7
	public void ResumePlayingAfterQuit() { }

	// RVA: 0x1F11624 Offset: 0x1F11624 VA: 0x1F11624 Slot: 8
	public void Stuck(StuckType stuckType) { }

	// RVA: 0x1F116C4 Offset: 0x1F116C4 VA: 0x1F116C4 Slot: 9
	public void PlayOn(PlayOnArguments args) { }

	// RVA: 0x1F1171C Offset: 0x1F1171C VA: 0x1F1171C Slot: 10
	public void Lose() { }

	// RVA: 0x1F11774 Offset: 0x1F11774 VA: 0x1F11774 Slot: 11
	public void WaitingForStartAfterLoseState() { }

	// RVA: 0x1F117CC Offset: 0x1F117CC VA: 0x1F117CC Slot: 12
	public void Win() { }

	// RVA: 0x1F11824 Offset: 0x1F11824 VA: 0x1F11824 Slot: 13
	public void GamePlaySceneToHomeSceneState() { }

	// RVA: 0x1F1187C Offset: 0x1F1187C VA: 0x1F1187C Slot: 14
	public void Quit() { }

	// RVA: 0x1F118D4 Offset: 0x1F118D4 VA: 0x1F118D4 Slot: 15
	public void WaitingForStartAfterQuitState() { }

	// RVA: 0x1F1192C Offset: 0x1F1192C VA: 0x1F1192C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts.Daily