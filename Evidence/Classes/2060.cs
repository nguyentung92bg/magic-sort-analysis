public class TowerWinStreakPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2060
{
	// Fields
	[SerializeField]
	private TowerView _towerView; // 0x18
	[SerializeField]
	private GameObject _continueButton; // 0x20
	[SerializeField]
	private GameObject _closeButton; // 0x28
	[SerializeField]
	private TextMeshPro[] _headerBroomTexts; // 0x30
	[SerializeField]
	private TextMeshPro[] _headerStreakTexts; // 0x38
	private TowerWinStreakService _towerWinStreakService; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48

	// Methods

	// RVA: 0x35A0A34 Offset: 0x35A0A34 VA: 0x35A0A34 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x35A0DBC Offset: 0x35A0DBC VA: 0x35A0DBC
	private void SetFallDownView() { }

	// RVA: 0x35A0FD8 Offset: 0x35A0FD8 VA: 0x35A0FD8
	private void MarkEventIntroduced() { }

	// RVA: 0x35A0E70 Offset: 0x35A0E70 VA: 0x35A0E70
	private void SetFirstShowEverView() { }

	[AsyncStateMachine(typeof(TowerWinStreakPopUp.<PlayFirstShowEverAnimations>d__11))]
	// RVA: 0x35A0F20 Offset: 0x35A0F20 VA: 0x35A0F20
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(TowerWinStreakPopUp.<OpenAutomaticallyInfoPopUp>d__12))]
	// RVA: 0x35A1368 Offset: 0x35A1368 VA: 0x35A1368
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x35A0FF4 Offset: 0x35A0FF4 VA: 0x35A0FF4
	private void SetFirstShowView() { }

	// RVA: 0x35A10CC Offset: 0x35A10CC VA: 0x35A10CC
	private void SetInProgressView() { }

	// RVA: 0x35A123C Offset: 0x35A123C VA: 0x35A123C
	private void SetResultView() { }

	// RVA: 0x35A1438 Offset: 0x35A1438 VA: 0x35A1438 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x35A14EC Offset: 0x35A14EC VA: 0x35A14EC Slot: 6
	public Task Hide() { }

	// RVA: 0x35A15B4 Offset: 0x35A15B4 VA: 0x35A15B4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x35A15BC Offset: 0x35A15BC VA: 0x35A15BC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI