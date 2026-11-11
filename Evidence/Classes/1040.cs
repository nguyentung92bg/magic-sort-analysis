public class StuckAreYouSurePopup : MonoBehaviour, IPopUp // TypeDefIndex: 1040
{
	// Fields
	[SerializeField]
	private List<AreYouSureContainer> _areYouSureContainers; // 0x18
	[SerializeField]
	private Transform _centerContainer; // 0x20
	[SerializeField]
	private Transform _closeButton; // 0x28
	[SerializeField]
	private Transform topPosition; // 0x30
	[SerializeField]
	private Transform bottomPosition; // 0x38
	[SerializeField]
	private Transform _coinTransform; // 0x40
	[SerializeField]
	private Transform _coinLeftPosition; // 0x48
	[SerializeField]
	private Transform _coinTargetPosition; // 0x50
	[SerializeField]
	private DifficultySpriteConfig _difficultySpriteConfig; // 0x58
	[SerializeField]
	private SpriteRenderer backgroundSpriteRenderer; // 0x60
	[SerializeField]
	private SpriteRenderer darkBackgroundRenderer; // 0x68
	[SerializeField]
	private Transform _bottomContainer; // 0x70
	[SerializeField]
	private PawTouchOfferContainerView _pawTouchOfferContainer; // 0x78
	[SerializeField]
	private TextMeshPro _headerText; // 0x80
	[SerializeField]
	private List<PlayOnView> _playOnViews; // 0x88
	[SerializeField]
	private AreYouSureCatView _areYouSureCatView; // 0x90
	[SerializeField]
	private MagicPassOfferView _magicPassOfferView; // 0x98
	[SerializeField]
	private EgoAreYouSureButtonController _egoAreYouSureButtonController; // 0xA0
	[SerializeField]
	private TreasureDrillEgoView _treasureDrillEgoView; // 0xA8
	[SerializeField]
	private SpecialOfferEgoView _specialOfferEgoView; // 0xB0
	private FailFlowAnimationConfig _animationConfig; // 0xB8
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0xC0
	private Vector3 _centerContainerStartPosition; // 0xC8
	private Vector3 _bottomContainerStartPosition; // 0xD4
	private Vector3 _bottomContainerStartScale; // 0xE0
	private float _backgroundStartAlpha; // 0xEC
	private bool _areValuesCached; // 0xF0
	private bool _anyOfferDisplayed; // 0xF1

	// Methods

	// RVA: 0x40F13D8 Offset: 0x40F13D8 VA: 0x40F13D8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x40F1880 Offset: 0x40F1880 VA: 0x40F1880
	private void CacheValues() { }

	// RVA: 0x40F18F0 Offset: 0x40F18F0 VA: 0x40F18F0
	private void ShowPlayOnOfferContainer() { }

	// RVA: 0x40F22D0 Offset: 0x40F22D0 VA: 0x40F22D0
	private bool TryShowOffer(EgoOfferType offerType) { }

	// RVA: 0x40F230C Offset: 0x40F230C VA: 0x40F230C
	private bool TryShowSpecialOffer() { }

	// RVA: 0x40F23D0 Offset: 0x40F23D0 VA: 0x40F23D0
	private bool TryShowTreasureDrillOffer() { }

	// RVA: 0x40F256C Offset: 0x40F256C VA: 0x40F256C
	private bool TryShowMagicPassOffer() { }

	// RVA: 0x40F2624 Offset: 0x40F2624 VA: 0x40F2624
	private bool TryShowPawTouchOffer() { }

	// RVA: 0x40F1B04 Offset: 0x40F1B04 VA: 0x40F1B04
	private void ShowAreYouSureCatView() { }

	// RVA: 0x40F2724 Offset: 0x40F2724 VA: 0x40F2724 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x40F1DF0 Offset: 0x40F1DF0 VA: 0x40F1DF0
	private void ConfigureViewVisibilityBasedOnDifficulty(LevelDifficultyType difficultyType) { }

	// RVA: 0x40F27F0 Offset: 0x40F27F0 VA: 0x40F27F0 Slot: 6
	public Task Hide() { }

	[AsyncStateMachine(typeof(StuckAreYouSurePopup.<HideWithMoveDown>d__40))]
	// RVA: 0x40F28F4 Offset: 0x40F28F4 VA: 0x40F28F4
	public Task HideWithMoveDown() { }

	[AsyncStateMachine(typeof(StuckAreYouSurePopup.<HideWithMoveUp>d__41))]
	// RVA: 0x40F29E0 Offset: 0x40F29E0 VA: 0x40F29E0
	public Task HideWithMoveUp() { }

	// RVA: 0x40F2ACC Offset: 0x40F2ACC VA: 0x40F2ACC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x40F1EB4 Offset: 0x40F1EB4 VA: 0x40F1EB4
	private void ResetToInitialValues() { }

	// RVA: 0x40F1F5C Offset: 0x40F1F5C VA: 0x40F1F5C
	private void PlayContainerEnterAnimation() { }

	[AsyncStateMachine(typeof(StuckAreYouSurePopup.<PlayContainerMoveUpAnimation>d__45))]
	// RVA: 0x40F2AD4 Offset: 0x40F2AD4 VA: 0x40F2AD4
	private Task PlayContainerMoveUpAnimation() { }

	[AsyncStateMachine(typeof(StuckAreYouSurePopup.<PlayContainerMoveDownAnimation>d__46))]
	// RVA: 0x40F2BC0 Offset: 0x40F2BC0 VA: 0x40F2BC0
	private Task PlayContainerMoveDownAnimation() { }

	[AsyncStateMachine(typeof(StuckAreYouSurePopup.<PlayDarkBackgroundAlphaExitAnimation>d__47))]
	// RVA: 0x40F2CAC Offset: 0x40F2CAC VA: 0x40F2CAC
	private Task PlayDarkBackgroundAlphaExitAnimation() { }

	// RVA: 0x40F2D98 Offset: 0x40F2D98 VA: 0x40F2D98
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.StuckAreYouSurePopUpNs.Scripts