public class SkyJumpWithStageWinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2728
{
	// Fields
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x18
	[SerializeField]
	private CoinTextRevealAnimation _coinTextRevealAnimation; // 0x20
	[SerializeField]
	private List<RevealAnimation> _revealAnimationsBeforeSkyJumpWithStageUserViews; // 0x28
	[SerializeField]
	private List<RevealAnimation> _revealAnimationsAfterSkyJumpWithStageUserViews; // 0x30
	[SerializeField]
	private List<RevealAnimation> _revealAnimationsSkyJumpWithStageUserViews; // 0x38
	[SerializeField]
	private List<SkyJumpWithStageUserView> _SkyJumpWithStageUserViews; // 0x40
	[SerializeField]
	private SkyJumpWithStageUserView _SkyJumpWithStageUserViewUser; // 0x48
	[SerializeField]
	private Button _closeButton; // 0x50
	[SerializeField]
	private TextMeshPro _youAreSharingTheRewardsWithText; // 0x58
	[SerializeField]
	private Transform[] _stagedChestTransforms; // 0x60
	[SerializeField]
	private TextMeshPro[] _stagedChestRewardTexts; // 0x68
	private SkyJumpWithStageService _service; // 0x70
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x78
	private Sequence _sequence; // 0x80
	private SkyJumpWithStageWinPopUpArguments _SkyJumpWithStageWinPopUpArguments; // 0x88
	private const string sharing_text_localization_term = "SkyJumpWithStageWinPopupInfo";

	// Methods

	// RVA: 0x2F10598 Offset: 0x2F10598 VA: 0x2F10598
	private void OnDestroy() { }

	// RVA: 0x2F105B0 Offset: 0x2F105B0 VA: 0x2F105B0
	private void SetActiveAll(bool active) { }

	// RVA: 0x2F108D0 Offset: 0x2F108D0 VA: 0x2F108D0
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2F10E30 Offset: 0x2F10E30 VA: 0x2F10E30
	private void SubscribeButton() { }

	// RVA: 0x2F10EBC Offset: 0x2F10EBC VA: 0x2F10EBC
	private void UnsubscribeButton() { }

	// RVA: 0x2F10F48 Offset: 0x2F10F48 VA: 0x2F10F48
	private void ClosePopup() { }

	// RVA: 0x2F10FDC Offset: 0x2F10FDC VA: 0x2F10FDC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2F111F0 Offset: 0x2F111F0 VA: 0x2F111F0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F112CC Offset: 0x2F112CC VA: 0x2F112CC Slot: 6
	public Task Hide() { }

	// RVA: 0x2F11380 Offset: 0x2F11380 VA: 0x2F11380 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F11388 Offset: 0x2F11388 VA: 0x2F11388
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI
[CreateAssetMenu(fileName = "SkyJumpWithStageWinPopUpAnimationConfig", menuName = "Configs/SkyJumpWithStageWinPopUpAnimationConfig", order = 1)]