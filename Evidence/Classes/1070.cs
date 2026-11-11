public class LevelWinPopUpView : MonoBehaviour // TypeDefIndex: 1070
{
	// Fields
	[SerializeField]
	private LevelWinContinueOrQuitButton _continueButton; // 0x18
	[SerializeField]
	private Rewarded2xButton _rewarded2xButton; // 0x20
	[SerializeField]
	private DifficultySpriteConfig _difficultySpriteConfig; // 0x28
	[SerializeField]
	private GameObject _hardView; // 0x30
	[SerializeField]
	private GameObject _superHardView; // 0x38
	[SerializeField]
	private SpriteRenderer _backgroundSpriteRenderer; // 0x40
	[SerializeField]
	private SpriteRenderer _backgroundSpriteRenderer2; // 0x48
	[SerializeField]
	private SpriteRenderer _headerBackgroundSpriteRenderer; // 0x50
	[SerializeField]
	private SpriteRenderer _headerBackgroundSpriteRenderer2; // 0x58
	[SerializeField]
	private SpriteRenderer _platform1Renderer; // 0x60
	[SerializeField]
	private SpriteRenderer _platform2Renderer; // 0x68
	[SerializeField]
	private SpriteRenderer _platform3Renderer; // 0x70
	[SerializeField]
	private SpriteRenderer _shineRenderer; // 0x78
	[SerializeField]
	private SpriteRenderer _shadowRenderer; // 0x80
	[SerializeField]
	private TextMeshPro _headerText; // 0x88
	[SerializeField]
	private TextMeshPro _rewardsText; // 0x90
	[SerializeField]
	private TextMeshPro _coinText; // 0x98
	[SerializeField]
	private TextMeshPro _coinText2; // 0xA0
	[SerializeField]
	private TextMeshPro _x2Text; // 0xA8
	[SerializeField]
	private LevelWinEntranceAnimator _levelWinEntranceAnimator; // 0xB0
	[SerializeField]
	private MultiplierController _multiplierController; // 0xB8
	private bool _isDaily; // 0xC0
	private bool _isHardLevel; // 0xC1
	private bool _isSuperHardLevel; // 0xC2

	// Methods

	// RVA: 0x16EF960 Offset: 0x16EF960 VA: 0x16EF960
	public void Show(LevelWinPopUpArguments levelWinPopUpArguments) { }

	// RVA: 0x16F06D0 Offset: 0x16F06D0 VA: 0x16F06D0
	private bool ShouldShow2XRewarded() { }

	// RVA: 0x16F00B0 Offset: 0x16F00B0 VA: 0x16F00B0
	private void SelectDifficultyAssets(int level) { }

	// RVA: 0x16EFF68 Offset: 0x16EFF68 VA: 0x16EFF68
	private void InitializeMultiplierController(int level) { }

	// RVA: 0x16EF900 Offset: 0x16EF900 VA: 0x16EF900
	public void Hide() { }

	// RVA: 0x16F0AF0 Offset: 0x16F0AF0 VA: 0x16F0AF0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelWinPopUpNS.Scripts