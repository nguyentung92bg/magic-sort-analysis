public class JetpackRacePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4269
{
	// Fields
	private JetpackRaceService _jetpackRaceService; // 0x18
	[SerializeField]
	private JetpackRaceView _jetpackRaceView; // 0x20
	[SerializeField]
	private GameObject _continueButtonContainer; // 0x28
	[SerializeField]
	private TextMeshPro _continueButtonText; // 0x30
	[SerializeField]
	private Button _continueButton; // 0x38
	[SerializeField]
	private GameObject _closeButton; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48

	// Methods

	// RVA: 0x1C6BD1C Offset: 0x1C6BD1C VA: 0x1C6BD1C
	private void Awake() { }

	// RVA: 0x1C6BDA8 Offset: 0x1C6BDA8 VA: 0x1C6BDA8
	private void OnDestroy() { }

	// RVA: 0x1C6BE34 Offset: 0x1C6BE34 VA: 0x1C6BE34 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1C6C1FC Offset: 0x1C6C1FC VA: 0x1C6C1FC
	private void SetFallDownView() { }

	// RVA: 0x1C6C5D8 Offset: 0x1C6C5D8 VA: 0x1C6C5D8
	private void MarkEventIntroduced() { }

	[AsyncStateMachine(typeof(JetpackRacePopUp.<PlayFirstShowEverAnimations>d__12))]
	// RVA: 0x1C6C520 Offset: 0x1C6C520 VA: 0x1C6C520
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(JetpackRacePopUp.<OpenAutomaticallyInfoPopUp>d__13))]
	// RVA: 0x1C6CE4C Offset: 0x1C6CE4C VA: 0x1C6CE4C
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x1C6C3BC Offset: 0x1C6C3BC VA: 0x1C6C3BC
	private void SetFirstShowEverView() { }

	// RVA: 0x1C6C5F4 Offset: 0x1C6C5F4 VA: 0x1C6C5F4
	private void SetFirstShowView() { }

	// RVA: 0x1C6C758 Offset: 0x1C6C758 VA: 0x1C6C758
	private void SetInProgressView() { }

	// RVA: 0x1C6C854 Offset: 0x1C6C854 VA: 0x1C6C854
	private void SetResultView() { }

	// RVA: 0x1C6D034 Offset: 0x1C6D034 VA: 0x1C6D034
	private void SetResultViewButton() { }

	// RVA: 0x1C6D7B4 Offset: 0x1C6D7B4 VA: 0x1C6D7B4
	private List<JetpackRaceLeaderboardPlayerViewModel> GetRandom5Model() { }

	[AsyncStateMachine(typeof(JetpackRacePopUp.<OnContinueButtonClick>d__20))]
	// RVA: 0x1C6DC80 Offset: 0x1C6DC80 VA: 0x1C6DC80
	private void OnContinueButtonClick() { }

	// RVA: 0x1C6DD38 Offset: 0x1C6DD38 VA: 0x1C6DD38 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1C6DE6C Offset: 0x1C6DE6C VA: 0x1C6DE6C Slot: 6
	public Task Hide() { }

	// RVA: 0x1C6E054 Offset: 0x1C6E054 VA: 0x1C6E054 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1C6E05C Offset: 0x1C6E05C VA: 0x1C6E05C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRace.Scripts.UI