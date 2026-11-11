public class RegularGamePlayStateManager : IGamePlayStateManager, IInitializable // TypeDefIndex: 1317
{
	// Fields
	private StateMachine<GamePlayStateType> _stateMachine; // 0x10

	// Methods

	// RVA: 0x1F0AC20 Offset: 0x1F0AC20 VA: 0x1F0AC20 Slot: 16
	public void Initialize() { }

	// RVA: 0x1F0B048 Offset: 0x1F0B048 VA: 0x1F0B048 Slot: 4
	public void FromHomeToGamePlay() { }

	// RVA: 0x1F0B0A0 Offset: 0x1F0B0A0 VA: 0x1F0B0A0 Slot: 5
	public void Playing() { }

	// RVA: 0x1F0B0F8 Offset: 0x1F0B0F8 VA: 0x1F0B0F8 Slot: 6
	public void QuitPressedState() { }

	// RVA: 0x1F0B150 Offset: 0x1F0B150 VA: 0x1F0B150 Slot: 7
	public void ResumePlayingAfterQuit() { }

	// RVA: 0x1F0B1A8 Offset: 0x1F0B1A8 VA: 0x1F0B1A8 Slot: 8
	public void Stuck(StuckType stuckType) { }

	// RVA: 0x1F0B200 Offset: 0x1F0B200 VA: 0x1F0B200 Slot: 9
	public void PlayOn(PlayOnArguments args) { }

	// RVA: 0x1F0B25C Offset: 0x1F0B25C VA: 0x1F0B25C Slot: 10
	public void Lose() { }

	// RVA: 0x1F0B2B4 Offset: 0x1F0B2B4 VA: 0x1F0B2B4 Slot: 11
	public void WaitingForStartAfterLoseState() { }

	// RVA: 0x1F0B30C Offset: 0x1F0B30C VA: 0x1F0B30C Slot: 12
	public void Win() { }

	// RVA: 0x1F0B364 Offset: 0x1F0B364 VA: 0x1F0B364 Slot: 13
	public void GamePlaySceneToHomeSceneState() { }

	// RVA: 0x1F0B3BC Offset: 0x1F0B3BC VA: 0x1F0B3BC Slot: 14
	public void Quit() { }

	// RVA: 0x1F0B414 Offset: 0x1F0B414 VA: 0x1F0B414 Slot: 15
	public void WaitingForStartAfterQuitState() { }

	// RVA: 0x1F0B46C Offset: 0x1F0B46C VA: 0x1F0B46C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts.Regular