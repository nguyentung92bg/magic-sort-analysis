public class JetpackRaceWithStagePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4184
{
	// Fields
	private JetpackRaceWithStageService _jetpackRaceWithStageService; // 0x18
	[SerializeField]
	private JetpackRaceWithStageView _jetpackRaceWithStageView; // 0x20
	[SerializeField]
	private GameObject _continueButtonContainer; // 0x28
	[SerializeField]
	private TextMeshPro _continueButtonText; // 0x30
	[SerializeField]
	private Button _continueButton; // 0x38
	[SerializeField]
	private GameObject _closeButton; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48
	private const string JetpackRaceWithStagePopUpDescriptionKey = "JetpackRaceWithStagePopUpDescription";
	private const string JetpackRaceWithStageKeepProgressOnLosePopUpDescriptionKey = "JetpackRaceWithStageKeepProgressOnLosePopUpDescription";

	// Methods

	// RVA: 0x3B0F744 Offset: 0x3B0F744 VA: 0x3B0F744
	private void Awake() { }

	// RVA: 0x3B0F7D0 Offset: 0x3B0F7D0 VA: 0x3B0F7D0
	private void OnDestroy() { }

	// RVA: 0x3B0F85C Offset: 0x3B0F85C VA: 0x3B0F85C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3B0FC24 Offset: 0x3B0FC24 VA: 0x3B0FC24
	private void SetFallDownView() { }

	// RVA: 0x3B10170 Offset: 0x3B10170 VA: 0x3B10170
	private void MarkEventIntroduced() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStagePopUp.<PlayFirstShowEverAnimations>d__14))]
	// RVA: 0x3B100B8 Offset: 0x3B100B8 VA: 0x3B100B8
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStagePopUp.<OpenAutomaticallyInfoPopUp>d__15))]
	// RVA: 0x3B10AB8 Offset: 0x3B10AB8 VA: 0x3B10AB8
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x3B0FEF8 Offset: 0x3B0FEF8 VA: 0x3B0FEF8
	private void SetFirstShowEverView() { }

	// RVA: 0x3B1018C Offset: 0x3B1018C VA: 0x3B1018C
	private void SetFirstShowView() { }

	// RVA: 0x3B1034C Offset: 0x3B1034C VA: 0x3B1034C
	private void SetInProgressView() { }

	// RVA: 0x3B1056C Offset: 0x3B1056C VA: 0x3B1056C
	private void SetResultView() { }

	// RVA: 0x3B10C7C Offset: 0x3B10C7C VA: 0x3B10C7C
	private void SetResultViewButton() { }

	// RVA: 0x3B110B0 Offset: 0x3B110B0 VA: 0x3B110B0
	private List<JetpackRaceWithStageLeaderboardPlayerViewModel> GetRandom5Model() { }

	[AsyncStateMachine(typeof(JetpackRaceWithStagePopUp.<OnContinueButtonClick>d__22))]
	// RVA: 0x3B1157C Offset: 0x3B1157C VA: 0x3B1157C
	private void OnContinueButtonClick() { }

	// RVA: 0x3B11634 Offset: 0x3B11634 VA: 0x3B11634 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3B11768 Offset: 0x3B11768 VA: 0x3B11768 Slot: 6
	public Task Hide() { }

	// RVA: 0x3B11950 Offset: 0x3B11950 VA: 0x3B11950 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3B11958 Offset: 0x3B11958 VA: 0x3B11958
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI