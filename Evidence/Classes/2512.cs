public class StrikeShowPromotionPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2512
{
	// Fields
	[SerializeField]
	private TextMeshPro _infoText; // 0x18
	[SerializeField]
	private GameObject _promotionUI; // 0x20
	[SerializeField]
	private GameObject _demotionUI; // 0x28
	[SerializeField]
	private GameObject _unchangedUI; // 0x30
	[SerializeField]
	private GameObject _bronzeUI; // 0x38
	[SerializeField]
	private GameObject _silverUI; // 0x40
	[SerializeField]
	private GameObject _goldUI; // 0x48
	[SerializeField]
	private TextMeshPro _promotionText; // 0x50
	[SerializeField]
	private TextSequenceAnimator _tierTextAnimator; // 0x58
	[SerializeField]
	private TextSequenceFontType _tierTextFontType; // 0x60
	[SerializeField]
	private StrikeShowRewardsView _rewardsView; // 0x68
	[SerializeField]
	private Button _closeButton; // 0x70
	[SerializeField]
	private SpriteRenderer _background; // 0x78
	[SerializeField]
	private ParticleSystem _promotionSwapParticle; // 0x80
	[SerializeField]
	private GameObject _tapToClaimText; // 0x88
	[SerializeField]
	private StrikeShowPromotionAnimationConfig _animationConfig; // 0x90
	[SerializeField]
	private GameObject _rewardsText; // 0x98
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0xA0
	private Sequence _introSequence; // 0xA8
	private Sequence _tierTextSequence; // 0xB0
	private const string PromotionTerm = "StrikeShowPromotionText";
	private const string DemotionTerm = "StrikeShowDemotionText";
	private const string UnchangedTerm = "StrikeShowUnchangedText";
	private const string UnchangedGoldTerm = "StrikeShowUnchangedGoldText";
	private const string NewTierTerm = "StrikeShowNewTierText";
	private const string CurrentTierTerm = "StrikeShowCurrentTierText";
	private const string BronzeTierTerm = "StrikeShowBronzeTier";
	private const string SilverTierTerm = "StrikeShowSilverTier";
	private const string GoldTierTerm = "StrikeShowGoldTier";

	// Methods

	// RVA: 0x2AFE720 Offset: 0x2AFE720 VA: 0x2AFE720 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFED2C Offset: 0x2AFED2C VA: 0x2AFED2C
	private static StrikeShowLeagueType GetDisplayedLeague(StrikeShowPromotionPopupArguments args) { }

	// RVA: 0x2AFED50 Offset: 0x2AFED50 VA: 0x2AFED50
	private GameObject GetLeagueUI(StrikeShowLeagueType league) { }

	// RVA: 0x2AFEC78 Offset: 0x2AFEC78 VA: 0x2AFEC78
	private static string GetTierName(StrikeShowLeagueType league) { }

	// RVA: 0x2AFED78 Offset: 0x2AFED78 VA: 0x2AFED78 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFEEA4 Offset: 0x2AFEEA4 VA: 0x2AFEEA4
	private Sequence PlayIntroAnimation(StrikeShowPromotionPopupArguments args) { }

	// RVA: 0x2AFF6E0 Offset: 0x2AFF6E0 VA: 0x2AFF6E0
	private float GetNextStepStartTime(float stepStartTime, float stepDuration) { }

	// RVA: 0x2AFF5C8 Offset: 0x2AFF5C8 VA: 0x2AFF5C8
	private static void InsertLeagueFade(Sequence sequence, float startTime, GameObject leagueUI, float duration) { }

	// RVA: 0x2AFF70C Offset: 0x2AFF70C VA: 0x2AFF70C
	private Sequence BuildPromotionSwapSequence(StrikeShowPromotionPopupArguments args) { }

	// RVA: 0x2AFF404 Offset: 0x2AFF404 VA: 0x2AFF404
	private void KillIntroSequence() { }

	// RVA: 0x2AFFB48 Offset: 0x2AFFB48 VA: 0x2AFFB48 Slot: 6
	public Task Hide() { }

	// RVA: 0x2AFFD64 Offset: 0x2AFFD64 VA: 0x2AFFD64 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2AFFD6C Offset: 0x2AFFD6C VA: 0x2AFFD6C
	private void Awake() { }

	// RVA: 0x2AFFDF8 Offset: 0x2AFFDF8 VA: 0x2AFFDF8
	private void OnDestroy() { }

	// RVA: 0x2AFFE8C Offset: 0x2AFFE8C VA: 0x2AFFE8C
	private void OnCloseButtonSelected() { }

	// RVA: 0x2AFFF00 Offset: 0x2AFFF00 VA: 0x2AFFF00
	public void .ctor() { }
}

// Namespace: 
[Serializable]