public class BroomStreakPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4793
{
	// Fields
	[SerializeField]
	private BroomStreakView _broomStreakView; // 0x18
	[SerializeField]
	private GameObject _continueButton; // 0x20
	[SerializeField]
	private GameObject _closeButton; // 0x28
	[SerializeField]
	private TextMeshPro[] _headerBroomTexts; // 0x30
	[SerializeField]
	private TextMeshPro[] _headerStreakTexts; // 0x38
	private BroomStreakService _broomStreakService; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48

	// Methods

	// RVA: 0x3FC5ED4 Offset: 0x3FC5ED4 VA: 0x3FC5ED4 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3FC6250 Offset: 0x3FC6250 VA: 0x3FC6250
	private void SetFallDownView() { }

	// RVA: 0x3FC648C Offset: 0x3FC648C VA: 0x3FC648C
	private void MarkEventIntroduced() { }

	// RVA: 0x3FC6324 Offset: 0x3FC6324 VA: 0x3FC6324
	private void SetFirstShowEverView() { }

	[AsyncStateMachine(typeof(BroomStreakPopUp.<PlayFirstShowEverAnimations>d__11))]
	// RVA: 0x3FC63D4 Offset: 0x3FC63D4 VA: 0x3FC63D4
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(BroomStreakPopUp.<OpenAutomaticallyInfoPopUp>d__12))]
	// RVA: 0x3FC6F40 Offset: 0x3FC6F40 VA: 0x3FC6F40
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x3FC64A4 Offset: 0x3FC64A4 VA: 0x3FC64A4
	private void SetFirstShowView() { }

	// RVA: 0x3FC6574 Offset: 0x3FC6574 VA: 0x3FC6574
	private void SetInProgressView() { }

	// RVA: 0x3FC66D4 Offset: 0x3FC66D4 VA: 0x3FC66D4
	private void SetResultView() { }

	// RVA: 0x3FC70D8 Offset: 0x3FC70D8 VA: 0x3FC70D8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FC718C Offset: 0x3FC718C VA: 0x3FC718C Slot: 6
	public Task Hide() { }

	// RVA: 0x3FC7488 Offset: 0x3FC7488 VA: 0x3FC7488 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FC7490 Offset: 0x3FC7490 VA: 0x3FC7490
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI