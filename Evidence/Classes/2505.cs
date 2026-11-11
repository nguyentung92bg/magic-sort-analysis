public class StrikeShowJoinPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2505
{
	// Fields
	[SerializeField]
	private PopupAnimationController _popupAnimationController; // 0x18
	[SerializeField]
	private Animation _animation; // 0x20
	[SerializeField]
	private Button _infoPopupButton; // 0x28
	[SerializeField]
	private Timer _timer; // 0x30
	[SerializeField]
	private Button _closeButton; // 0x38
	[SerializeField]
	private Button _continueButton; // 0x40
	[SerializeField]
	private StrikeShowLightAnimationController _lightAnimationController; // 0x48
	[SerializeField]
	private GameObject _regularJoinText; // 0x50
	[SerializeField]
	private GameObject _tierUI; // 0x58
	[SerializeField]
	private GameObject _bronzeTierUI; // 0x60
	[SerializeField]
	private GameObject _silverTierUI; // 0x68
	[SerializeField]
	private GameObject _goldTierUI; // 0x70
	[SerializeField]
	private GameObject _bronzeText; // 0x78
	[SerializeField]
	private GameObject _silverText; // 0x80
	[SerializeField]
	private GameObject _goldText; // 0x88
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x90

	// Methods

	// RVA: 0x2AFDC68 Offset: 0x2AFDC68 VA: 0x2AFDC68 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFDDEC Offset: 0x2AFDDEC VA: 0x2AFDDEC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2AFDF00 Offset: 0x2AFDF00 VA: 0x2AFDF00 Slot: 6
	public Task Hide() { }

	// RVA: 0x2AFDFC4 Offset: 0x2AFDFC4 VA: 0x2AFDFC4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2AFDFCC Offset: 0x2AFDFCC VA: 0x2AFDFCC
	private void Awake() { }

	// RVA: 0x2AFE0F8 Offset: 0x2AFE0F8 VA: 0x2AFE0F8
	private void OnDestroy() { }

	// RVA: 0x2AFE224 Offset: 0x2AFE224 VA: 0x2AFE224
	private void OnContinueButtonSelected() { }

	// RVA: 0x2AFE298 Offset: 0x2AFE298 VA: 0x2AFE298
	private void OnCloseButtonSelected() { }

	// RVA: 0x2AFE30C Offset: 0x2AFE30C VA: 0x2AFE30C
	private void OpenStrikeShowInfoPopup() { }

	// RVA: 0x2AFE3D0 Offset: 0x2AFE3D0 VA: 0x2AFE3D0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]