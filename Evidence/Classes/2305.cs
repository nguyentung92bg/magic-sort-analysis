public class TeamQuestPopupAnimationConfig : ScriptableObject // TypeDefIndex: 2305
{
	// Fields
	public StepAnimationPosition[] StepXPositions; // 0x18
	public float progressBarFillAnimationDuration; // 0x20
	public float chestClaimAnimationDelay; // 0x24
	public float chestClaimFinalDelay; // 0x28
	public float delayBetweenRewards; // 0x2C
	public Vector3[] HeroImageXPositions; // 0x30
	public float heroImageAnimationDuration; // 0x38
	public Vector3 teamChatElementViewUpPosition; // 0x3C
	public Vector3 teamChatElementViewDownPosition; // 0x48
	public float teamChatElementViewAnimationDuration; // 0x54
	public float teamChatElementBgStartTime; // 0x58
	public float teamChatElementBgDuration; // 0x5C
	public float teamChatElementHiddenYScale; // 0x60
	public float teamChatElementHiddenXScale; // 0x64
	[SerializeField]
	public Ease _moveHeroImageAnimationCurve; // 0x68
	public float NoContributionTextVerticalOffset; // 0x6C

	// Methods

	// RVA: 0x2DDE6C8 Offset: 0x2DDE6C8 VA: 0x2DDE6C8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI