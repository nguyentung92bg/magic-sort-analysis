public class TeamsChatHelpRequestController : MonoBehaviour, IIntervalUpdate // TypeDefIndex: 2180
{
	// Fields
	[SerializeField]
	private Button _helpButton; // 0x18
	[SerializeField]
	private GameObject _helpContainer; // 0x20
	[SerializeField]
	private GameObject _helpContainerDisabled; // 0x28
	[SerializeField]
	private TMP_Text _remainingTimeText; // 0x30
	private TeamsService _teamsService; // 0x38
	private TeamChatService _teamChatService; // 0x40
	private CustomUpdater _customUpdater; // 0x48
	private bool _canRequestHelp; // 0x50

	// Methods

	// RVA: 0x345551C Offset: 0x345551C VA: 0x345551C
	public void Initialize() { }

	// RVA: 0x3455BEC Offset: 0x3455BEC VA: 0x3455BEC
	public void Dispose() { }

	// RVA: 0x3455FC0 Offset: 0x3455FC0 VA: 0x3455FC0
	public void Show() { }

	// RVA: 0x345631C Offset: 0x345631C VA: 0x345631C
	public void Hide() { }

	// RVA: 0x345BD94 Offset: 0x345BD94 VA: 0x345BD94
	private void OnHelpButtonSelected() { }

	// RVA: 0x345BEF4 Offset: 0x345BEF4 VA: 0x345BEF4 Slot: 4
	public void IntervalUpdate() { }

	// RVA: 0x345BCF0 Offset: 0x345BCF0 VA: 0x345BCF0
	private void RefreshView() { }

	// RVA: 0x345BF94 Offset: 0x345BF94 VA: 0x345BF94
	private void SetTimeText(long remainingSeconds) { }

	// RVA: 0x345C13C Offset: 0x345C13C VA: 0x345C13C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI