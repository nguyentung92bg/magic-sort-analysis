public class MultiplierController : MonoBehaviour // TypeDefIndex: 2868
{
	// Fields
	[SerializeField]
	private MultiplierDifficultyController _difficultyController; // 0x18
	[SerializeField]
	private MultiplierEventCurrencyController _eventCurrencyController; // 0x20
	[SerializeField]
	private Button _decreaseButton; // 0x28
	[SerializeField]
	private Button _increaseButton; // 0x30
	[SerializeField]
	private Button _lockButton; // 0x38
	[SerializeField]
	private ToolbarButton _lockedToolbarButton; // 0x40
	[SerializeField]
	private GameObject _decreaseButtonMin; // 0x48
	[SerializeField]
	private GameObject _increaseButtonMax; // 0x50
	[SerializeField]
	private GameObject _tagHolder; // 0x58
	[SerializeField]
	private TMP_Text _tagMultiplierTextLow; // 0x60
	[SerializeField]
	private TMP_Text _tagMultiplierTextMid; // 0x68
	[SerializeField]
	private TMP_Text _tagMultiplierTextHigh; // 0x70
	[SerializeField]
	private TMP_Text _progressMultiplierText; // 0x78
	[SerializeField]
	private SpriteRenderer _progressFillSpriteRenderer; // 0x80
	[SerializeField]
	private float _progressBarEmptySize; // 0x88
	[SerializeField]
	private float _progressBarFullSize; // 0x8C
	[SerializeField]
	private ParticleSystem[] _progressBarParticles; // 0x90
	[SerializeField]
	private Animation _tagAnimation; // 0x98
	[SerializeField]
	private Animation _multiplierAnimation; // 0xA0
	[SerializeField]
	private GameObject _decreaseButtonParent; // 0xA8
	[SerializeField]
	private GameObject _increaseButtonParent; // 0xB0
	[SerializeField]
	private Button _infoButton; // 0xB8
	[SerializeField]
	private Button _infoCloseButton; // 0xC0
	[SerializeField]
	private GameObject _infoPanel; // 0xC8
	[SerializeField]
	private GameObject _increaseMultiplierTooltip; // 0xD0
	[SerializeField]
	private Button _hideIncreaseMultiplierTooltipButton; // 0xD8
	[SerializeField]
	private TMP_Text[] _infoPanelMultiplierTexts; // 0xE0
	[SerializeField]
	private TMP_Text[] _infoPanelPlayOnPrices; // 0xE8
	private const string TagAnimationKey = "TagAnimation";
	private const string MultiplierLevelWin = "LevelWinAnim";
	private const string MultiplierIdle = "Idle";
	private MultiplierService _service; // 0xF0
	private LevelDifficultyType _difficulty; // 0xF8

	// Methods

	// RVA: 0x29784FC Offset: 0x29784FC VA: 0x29784FC
	public void Initialize(LevelDifficultyType difficulty, bool forLevelWin = False) { }

	// RVA: 0x2978FE4 Offset: 0x2978FE4 VA: 0x2978FE4
	public void Dispose() { }

	// RVA: 0x29792FC Offset: 0x29792FC VA: 0x29792FC
	private void OnHideIncreaseMultiplierTooltipButtonSelected() { }

	// RVA: 0x297931C Offset: 0x297931C VA: 0x297931C
	private void OnDecreaseButtonSelected() { }

	// RVA: 0x2979358 Offset: 0x2979358 VA: 0x2979358
	private void OnIncreaseButtonSelected() { }

	// RVA: 0x2979394 Offset: 0x2979394 VA: 0x2979394
	private void OnInfoButtonSelected() { }

	// RVA: 0x29793D4 Offset: 0x29793D4 VA: 0x29793D4
	private void OnInfoCloseButtonSelected() { }

	// RVA: 0x2978A2C Offset: 0x2978A2C VA: 0x2978A2C
	private void UpdateUI(bool playAnimation = False, bool forLevelWin = False) { }

	// RVA: 0x29789C8 Offset: 0x29789C8 VA: 0x29789C8
	private void PlayTagAnimation() { }

	// RVA: 0x29796C8 Offset: 0x29796C8 VA: 0x29796C8
	public void SetIncreaseLocked() { }

	// RVA: 0x2979738 Offset: 0x2979738 VA: 0x2979738
	public void HideTag() { }

	// RVA: 0x2979758 Offset: 0x2979758 VA: 0x2979758
	public void HideModifyMultiplierButtons() { }

	// RVA: 0x2979790 Offset: 0x2979790 VA: 0x2979790
	public void PlayLevelWinAnimation() { }

	// RVA: 0x2979688 Offset: 0x2979688 VA: 0x2979688
	private Vector2 GetSizeForProgressBar(float normalizedProgress) { }

	// RVA: 0x29797F4 Offset: 0x29797F4 VA: 0x29797F4
	public void HideInfoButton() { }

	// RVA: 0x2979820 Offset: 0x2979820 VA: 0x2979820
	public void Hide() { }

	// RVA: 0x2979844 Offset: 0x2979844 VA: 0x2979844
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier