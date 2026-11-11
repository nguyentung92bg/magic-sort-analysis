public class SkyJumpPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2801
{
	// Fields
	[SerializeField]
	private GameObject _continueButtonContainer; // 0x18
	[SerializeField]
	private Button _continueButton; // 0x20
	[SerializeField]
	private GameObject _closeButton; // 0x28
	[SerializeField]
	private SkyJumpView _skyJumpView; // 0x30
	[SerializeField]
	private TextMeshPro _continueButtonText; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40
	private SkyJumpService _skyJumpService; // 0x48

	// Methods

	// RVA: 0x2F20F28 Offset: 0x2F20F28 VA: 0x2F20F28
	private void Awake() { }

	// RVA: 0x2F20FB4 Offset: 0x2F20FB4 VA: 0x2F20FB4
	private void OnDestroy() { }

	// RVA: 0x2F21040 Offset: 0x2F21040 VA: 0x2F21040 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2F21384 Offset: 0x2F21384 VA: 0x2F21384
	private void MarkEventIntroduced() { }

	[AsyncStateMachine(typeof(SkyJumpPopUp.<PlayFirstShowEverAnimations>d__11))]
	// RVA: 0x2F212CC Offset: 0x2F212CC VA: 0x2F212CC
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(SkyJumpPopUp.<OpenAutomaticallyInfoPopUp>d__12))]
	// RVA: 0x2F213B0 Offset: 0x2F213B0 VA: 0x2F213B0
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x2F212C8 Offset: 0x2F212C8 VA: 0x2F212C8
	private void SetFirstShowEverView() { }

	// RVA: 0x2F213A4 Offset: 0x2F213A4 VA: 0x2F213A4
	private void SetFirstShowView() { }

	// RVA: 0x2F213A8 Offset: 0x2F213A8 VA: 0x2F213A8
	private void SetInProgressView() { }

	// RVA: 0x2F213AC Offset: 0x2F213AC VA: 0x2F213AC
	private void SetResultView() { }

	// RVA: 0x2F21480 Offset: 0x2F21480 VA: 0x2F21480
	public void SetSkyJumpViewIdleOrStepIncrease() { }

	// RVA: 0x2F21560 Offset: 0x2F21560 VA: 0x2F21560
	public void SetSkyViewLoseOrWin() { }

	[AsyncStateMachine(typeof(SkyJumpPopUp.<OnContinueButtonClick>d__19))]
	// RVA: 0x2F216D4 Offset: 0x2F216D4 VA: 0x2F216D4
	private void OnContinueButtonClick() { }

	// RVA: 0x2F21760 Offset: 0x2F21760 VA: 0x2F21760 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2F21894 Offset: 0x2F21894 VA: 0x2F21894 Slot: 6
	public Task Hide() { }

	// RVA: 0x2F2195C Offset: 0x2F2195C VA: 0x2F2195C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2F21964 Offset: 0x2F21964 VA: 0x2F21964
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]