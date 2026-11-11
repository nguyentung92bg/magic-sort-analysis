public class MergeMiniGamePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3615
{
	// Fields
	[SerializeField]
	private MergeMiniGameController _controller; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private Button _infoButton; // 0x28
	[SerializeField]
	private Button _closeButton; // 0x30
	[SerializeField]
	private MergeMiniGameAnimationConfig _config; // 0x38
	[SerializeField]
	private MergeMiniGameTutorialController _tutorialController; // 0x40
	private MergeMiniGameService _service; // 0x48
	private MergeMiniGameViewModel _viewModel; // 0x50
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x58

	// Methods

	// RVA: 0x3FAE560 Offset: 0x3FAE560 VA: 0x3FAE560 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(MergeMiniGamePopUp.<TryShowTutorials>d__10))]
	// RVA: 0x3FAE828 Offset: 0x3FAE828 VA: 0x3FAE828
	private void TryShowTutorials() { }

	// RVA: 0x3FAE8E0 Offset: 0x3FAE8E0 VA: 0x3FAE8E0
	public MergeMiniGameController GetController() { }

	// RVA: 0x3FAE8E8 Offset: 0x3FAE8E8 VA: 0x3FAE8E8
	private void OnInfoButtonClicked() { }

	// RVA: 0x3FAE8F0 Offset: 0x3FAE8F0 VA: 0x3FAE8F0
	private void OpenInfoPopUp(MergeMiniGameInfoPopUpImpressionSource source) { }

	// RVA: 0x3FAE9B8 Offset: 0x3FAE9B8 VA: 0x3FAE9B8
	private void OnCloseButtonClicked() { }

	[AsyncStateMachine(typeof(MergeMiniGamePopUp.<OnQuitSelected>d__15))]
	// RVA: 0x3FAEB9C Offset: 0x3FAEB9C VA: 0x3FAEB9C
	private void OnQuitSelected() { }

	// RVA: 0x3FAEC54 Offset: 0x3FAEC54 VA: 0x3FAEC54
	private void UpdateLobbyButtonState() { }

	// RVA: 0x3FAEDDC Offset: 0x3FAEDDC VA: 0x3FAEDDC Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAEEB8 Offset: 0x3FAEEB8 VA: 0x3FAEEB8 Slot: 6
	public Task Hide() { }

	// RVA: 0x3FAF0C4 Offset: 0x3FAF0C4 VA: 0x3FAF0C4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FAF0CC Offset: 0x3FAF0CC VA: 0x3FAF0CC
	public MergeBoard GetBoard() { }

	// RVA: 0x3FAF0E8 Offset: 0x3FAF0E8 VA: 0x3FAF0E8
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]