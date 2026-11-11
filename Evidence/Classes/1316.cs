public enum GamePlayStateType // TypeDefIndex: 1316
{
	// Fields
	public int value__; // 0x0
	public const GamePlayStateType None = 0;
	public const GamePlayStateType FromHomeToGamePlayState = 1;
	public const GamePlayStateType PlayingState = 2;
	public const GamePlayStateType StuckState = 3;
	public const GamePlayStateType PlayOnState = 4;
	public const GamePlayStateType LoseState = 5;
	public const GamePlayStateType WaitingForStartAfterLoseState = 6;
	public const GamePlayStateType WinState = 7;
	public const GamePlayStateType GamePlaySceneToHomeSceneState = 9;
	public const GamePlayStateType QuitPressedState = 10;
	public const GamePlayStateType ResumePlayingAfterQuit = 11;
	public const GamePlayStateType QuitState = 12;
	public const GamePlayStateType WaitingForStartAfterQuitState = 13;
}

// Namespace: Modules.Contexts.GamePlay.Loop.Scripts.Regular