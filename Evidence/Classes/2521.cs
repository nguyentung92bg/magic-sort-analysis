public class StrikeShowLobbyButtonAnimationConfig : ScriptableObject // TypeDefIndex: 2521
{
	// Fields
	public float DelayBetweenKeys; // 0x18
	public float CollectedKeyCountFadeInDuration; // 0x1C
	public float CollectedKeyCountFadeOutDuration; // 0x20
	public float CollectedKeyCountDisableDuration; // 0x24
	public float CollectedKeyCountMoveAmount; // 0x28
	public AnimationCurve CollectedKeyCountMoveCurve; // 0x30
	public AnimationCurve CollectedKeyCountFadeOutCurve; // 0x38
	[Header("Streak Panel")]
	public float StreakStartTime; // 0x40
	public float StreakHiddenPositionX; // 0x44
	public float StreakShownPositionX; // 0x48
	public float StreakMoveDuration; // 0x4C
	public AnimationCurve StreakMoveCurve; // 0x50
	public float StreakSwapDelay; // 0x58
	public float StreakSwapPunchScale; // 0x5C
	public float StreakSwapPunchDuration; // 0x60
	public float StreakShownHoldDuration; // 0x64

	// Methods

	// RVA: 0x2B011BC Offset: 0x2B011BC VA: 0x2B011BC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]