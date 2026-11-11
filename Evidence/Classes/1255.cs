public interface IGamePlayStateManager : IInitializable // TypeDefIndex: 1255
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void FromHomeToGamePlay();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Playing();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void QuitPressedState();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void ResumePlayingAfterQuit();

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Stuck(StuckType stuckType);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void PlayOn(PlayOnArguments args);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void Lose();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void WaitingForStartAfterLoseState();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void Win();

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void GamePlaySceneToHomeSceneState();

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void Quit();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void WaitingForStartAfterQuitState();
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts