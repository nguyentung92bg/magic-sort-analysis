public class LevelTimeTracker // TypeDefIndex: 1144
{
	// Fields
	private DateTime _levelStartTime; // 0x10
	private DateTime _levelEndTime; // 0x18
	private bool _hasMadeFirstMove; // 0x20
	private float _firstMoveDuration; // 0x24
	private int _moveCount; // 0x28

	// Methods

	// RVA: 0x1610F3C Offset: 0x1610F3C VA: 0x1610F3C
	public void .ctor() { }

	// RVA: 0x1610F44 Offset: 0x1610F44 VA: 0x1610F44
	public void OnLevelStart() { }

	// RVA: 0x1611054 Offset: 0x1611054 VA: 0x1611054
	private void RegisterMove() { }

	// RVA: 0x1611118 Offset: 0x1611118 VA: 0x1611118
	public void SendLevelDurationEvent(int finishStatus, GamePlayStateType gamePlayStateType) { }

	// RVA: 0x1611338 Offset: 0x1611338 VA: 0x1611338
	private LevelEndType GetLevelEndType(GamePlayStateType gamePlayStateType) { }

	// RVA: 0x1611368 Offset: 0x1611368 VA: 0x1611368
	private float GetAverageMoveDuration() { }
}

// Namespace: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS