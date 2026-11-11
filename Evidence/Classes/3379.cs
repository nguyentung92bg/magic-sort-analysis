public class EndlessPortalController : MonoBehaviour // TypeDefIndex: 3379
{
	// Fields
	[SerializeField]
	private EndlessPortalStepFactory _endlessPortalStepFactory; // 0x18
	[SerializeField]
	private EndlessPortalPositionContainer _endlessPortalPositionContainer; // 0x20
	[SerializeField]
	private EndlessPortalAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private RevealAnimationConfig _simpleRewardRevealAnimationConfig; // 0x30
	[SerializeField]
	private RevealAnimationConfig _chestRevealAnimationConfig; // 0x38
	private List<EndlessPortalStepCard> _endlessPortalStepCards; // 0x40
	private const int MaxStep = 6;
	private Sequence _sequence; // 0x48
	private EndlessPortalService _endlessPortalService; // 0x50

	// Methods

	// RVA: 0x3467B00 Offset: 0x3467B00 VA: 0x3467B00
	public void Show() { }

	// RVA: 0x3467F5C Offset: 0x3467F5C VA: 0x3467F5C
	public void Hide() { }

	[Button]
	// RVA: 0x346BDCC Offset: 0x346BDCC VA: 0x346BDCC
	public void PlayAnimation() { }

	// RVA: 0x346BCAC Offset: 0x346BCAC VA: 0x346BCAC
	private EndlessPortalStepCard GetView(Vector3 position, EndlessPortalRewardStepModel stepModel, bool isUnlocked = False) { }

	// RVA: 0x346CA78 Offset: 0x346CA78 VA: 0x346CA78
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI