public class TeamQuestLobbyButtonAnimationConfig : ScriptableObject // TypeDefIndex: 2319
{
	// Fields
	[SerializeField]
	private float _circleProgressBarAnimationDuration; // 0x18
	[SerializeField]
	private AnimationCurve _circleProgressBarAnimationCurve; // 0x20
	[SerializeField]
	private float _circleProgressBarAnimationDelay; // 0x28
	[SerializeField]
	private float _delayBetweenKeys; // 0x2C
	public float CollectedKeyCountFadeInDuration; // 0x30
	public float CollectedKeyCountFadeOutDuration; // 0x34
	public float CollectedKeyCountDisableDuration; // 0x38
	public float CollectedKeyCountMoveAmount; // 0x3C
	public AnimationCurve CollectedKeyCountMoveCurve; // 0x40
	public AnimationCurve CollectedKeyCountFadeOutCurve; // 0x48

	// Properties
	public float DelayBetweenKeys { get; }

	// Methods

	// RVA: 0x2DE0780 Offset: 0x2DE0780 VA: 0x2DE0780
	public float get_DelayBetweenKeys() { }

	// RVA: 0x2DE0788 Offset: 0x2DE0788 VA: 0x2DE0788
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI.Leaderboard