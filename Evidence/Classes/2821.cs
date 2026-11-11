public class SkyJumpWinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2821
{
	// Fields
	[SerializeField]
	private TextSequenceAnimator _textSequenceAnimator; // 0x18
	[SerializeField]
	private CoinTextRevealAnimation _coinTextRevealAnimation; // 0x20
	[SerializeField]
	private List<RevealAnimation> _revealAnimationsBeforeSkyJumpUserViews; // 0x28
	[SerializeField]
	private List<RevealAnimation> _revealAnimationsAfterSkyJumpUserViews; // 0x30
	[SerializeField]
	private List<RevealAnimation> _revealAnimationsSkyJumpUserViews; // 0x38
	[SerializeField]
	private List<SkyJumpUserView> _skyJumpUserViews; // 0x40
	[SerializeField]
	private SkyJumpUserView _skyJumpUserViewUser; // 0x48
	[SerializeField]
	private Button _closeButton; // 0x50
	[SerializeField]
	private TextMeshPro _youAreSharingTheRewardsWithText; // 0x58
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x60
	private Sequence _sequence; // 0x68
	private SkyJumpWinPopUpArguments _skyJumpWinPopUpArguments; // 0x70

	// Methods

	// RVA: 0x2DC6EF0 Offset: 0x2DC6EF0 VA: 0x2DC6EF0
	private void OnDestroy() { }

	// RVA: 0x2DC6F08 Offset: 0x2DC6F08 VA: 0x2DC6F08
	private void SetActiveAll(bool active) { }

	// RVA: 0x2DC7228 Offset: 0x2DC7228 VA: 0x2DC7228
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2DC7780 Offset: 0x2DC7780 VA: 0x2DC7780
	private void SubscribeButton() { }

	// RVA: 0x2DC780C Offset: 0x2DC780C VA: 0x2DC780C
	private void UnsubscribeButton() { }

	// RVA: 0x2DC7898 Offset: 0x2DC7898 VA: 0x2DC7898
	private void ClosePopup() { }

	// RVA: 0x2DC792C Offset: 0x2DC792C VA: 0x2DC792C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2DC7A00 Offset: 0x2DC7A00 VA: 0x2DC7A00 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2DC7ADC Offset: 0x2DC7ADC VA: 0x2DC7ADC Slot: 6
	public Task Hide() { }

	// RVA: 0x2DC7B90 Offset: 0x2DC7B90 VA: 0x2DC7B90 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2DC7B98 Offset: 0x2DC7B98 VA: 0x2DC7B98
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJump.Scripts.UI
[CreateAssetMenu(fileName = "SkyJumpWinPopUpAnimationConfig", menuName = "Configs/SkyJumpWinPopUpAnimationConfig", order = 1)]