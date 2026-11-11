public class SkyJumpWithStagePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2707
{
	// Fields
	[SerializeField]
	private GameObject _continueButtonContainer; // 0x18
	[SerializeField]
	private Button _continueButton; // 0x20
	[SerializeField]
	private GameObject _closeButton; // 0x28
	[SerializeField]
	private SkyJumpWithStageView _SkyJumpWithStageView; // 0x30
	[SerializeField]
	private TextMeshPro _continueButtonText; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40
	private SkyJumpWithStageService _SkyJumpWithStageService; // 0x48

	// Methods

	// RVA: 0x233D638 Offset: 0x233D638 VA: 0x233D638
	private void Awake() { }

	// RVA: 0x233D6C4 Offset: 0x233D6C4 VA: 0x233D6C4
	private void OnDestroy() { }

	// RVA: 0x233D750 Offset: 0x233D750 VA: 0x233D750 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x233DCFC Offset: 0x233DCFC VA: 0x233DCFC
	private void MarkEventIntroduced() { }

	[AsyncStateMachine(typeof(SkyJumpWithStagePopUp.<PlayFirstShowEverAnimations>d__11))]
	// RVA: 0x233DC44 Offset: 0x233DC44 VA: 0x233DC44
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(SkyJumpWithStagePopUp.<OpenAutomaticallyInfoPopUp>d__12))]
	// RVA: 0x233DD2C Offset: 0x233DD2C VA: 0x233DD2C
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x233DC40 Offset: 0x233DC40 VA: 0x233DC40
	private void SetFirstShowEverView() { }

	// RVA: 0x233DD20 Offset: 0x233DD20 VA: 0x233DD20
	private void SetFirstShowView() { }

	// RVA: 0x233DD24 Offset: 0x233DD24 VA: 0x233DD24
	private void SetInProgressView() { }

	// RVA: 0x233DD28 Offset: 0x233DD28 VA: 0x233DD28
	private void SetResultView() { }

	// RVA: 0x233DDFC Offset: 0x233DDFC VA: 0x233DDFC
	public void SetSkyJumpWithStageViewIdleOrStepIncrease() { }

	// RVA: 0x233DEB4 Offset: 0x233DEB4 VA: 0x233DEB4
	public void SetSkyViewLoseOrWin() { }

	[AsyncStateMachine(typeof(SkyJumpWithStagePopUp.<OnContinueButtonClick>d__19))]
	// RVA: 0x233E308 Offset: 0x233E308 VA: 0x233E308
	private void OnContinueButtonClick() { }

	// RVA: 0x233E394 Offset: 0x233E394 VA: 0x233E394 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x233E4C8 Offset: 0x233E4C8 VA: 0x233E4C8 Slot: 6
	public Task Hide() { }

	// RVA: 0x233E5B4 Offset: 0x233E5B4 VA: 0x233E5B4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x233E5BC Offset: 0x233E5BC VA: 0x233E5BC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]