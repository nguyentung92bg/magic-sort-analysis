public class TryAgainPopup : MonoBehaviour, IPopUp // TypeDefIndex: 1032
{
	// Fields
	[SerializeField]
	private Transform container; // 0x18
	[SerializeField]
	private DifficultySpriteConfig _difficultySpriteConfig; // 0x20
	[SerializeField]
	private GameObject hardView; // 0x28
	[SerializeField]
	private GameObject superHardView; // 0x30
	[SerializeField]
	private SpriteRenderer backgroundSpriteRenderer; // 0x38
	[SerializeField]
	private SpriteRenderer backgroundSpriteRendererMultiplier; // 0x40
	[SerializeField]
	private SpriteRenderer backgroundSpriteRenderer2; // 0x48
	[SerializeField]
	private SpriteRenderer backgroundSpriteRendererMultiplier2; // 0x50
	[SerializeField]
	private SpriteRenderer headerBackgroundSpriteRenderer; // 0x58
	[SerializeField]
	private SpriteRenderer headerBackgroundSpriteRenderer2; // 0x60
	[SerializeField]
	private SpriteRenderer textBackgroundSpriteRenderer; // 0x68
	[SerializeField]
	private SpriteRenderer _platform1Renderer; // 0x70
	[SerializeField]
	private SpriteRenderer _platform2Renderer; // 0x78
	[SerializeField]
	private SpriteRenderer _platform3Renderer; // 0x80
	[SerializeField]
	private SpriteRenderer _shineRenderer; // 0x88
	[SerializeField]
	private SpriteRenderer _shadowRenderer; // 0x90
	[SerializeField]
	private TextMeshPro _headerText; // 0x98
	[SerializeField]
	private TextMeshPro _rewardsText; // 0xA0
	[SerializeField]
	private TextMeshPro _coinText; // 0xA8
	[SerializeField]
	private TextMeshPro _coinText2; // 0xB0
	[SerializeField]
	private TextMeshPro _x2Text; // 0xB8
	[SerializeField]
	private TextMeshPro _infoText; // 0xC0
	[SerializeField]
	private MagicStreakTournamentBannerView _magicStreakTournamentBannerView; // 0xC8
	[SerializeField]
	private MagicStreakGaeBannerView _magicStreakGaeBannerView; // 0xD0
	[SerializeField]
	private LevelRewardsView _levelRewardsView; // 0xD8
	[SerializeField]
	private GameObject _defaultContainer; // 0xE0
	[SerializeField]
	private GameObject _multiplierContainer; // 0xE8
	[SerializeField]
	private MultiplierController _multiplierController; // 0xF0
	private FailFlowAnimationConfig animationConfig; // 0xF8
	private TaskCompletionSource<bool> popupDisplayFlow; // 0x100
	private Tween _enterAnimationTween; // 0x108

	// Methods

	// RVA: 0x40F0268 Offset: 0x40F0268 VA: 0x40F0268 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x40F1218 Offset: 0x40F1218 VA: 0x40F1218 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x40F0E54 Offset: 0x40F0E54 VA: 0x40F0E54
	private LevelDifficultyType GetDifficulty() { }

	// RVA: 0x40F0514 Offset: 0x40F0514 VA: 0x40F0514
	private void SetDifficultyAssets() { }

	// RVA: 0x40F12EC Offset: 0x40F12EC VA: 0x40F12EC Slot: 6
	public Task Hide() { }

	// RVA: 0x40F13C8 Offset: 0x40F13C8 VA: 0x40F13C8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x40F0D08 Offset: 0x40F0D08 VA: 0x40F0D08
	private void PlayScaleAnimation(TryAgainPopupOpenPlace openPlace) { }

	// RVA: 0x40F0FF0 Offset: 0x40F0FF0 VA: 0x40F0FF0
	private void InitializeMultiplierController() { }

	// RVA: 0x40F13D0 Offset: 0x40F13D0 VA: 0x40F13D0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.TryAgainPopUpNs.Scripts