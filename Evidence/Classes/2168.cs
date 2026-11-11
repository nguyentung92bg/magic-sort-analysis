public class TeamChatCardRequestController : MonoBehaviour, IIntervalUpdate // TypeDefIndex: 2168
{
	// Fields
	[SerializeField]
	private Button _askButton; // 0x18
	[SerializeField]
	private GameObject _buttonFrameContainer; // 0x20
	[SerializeField]
	private GameObject _requestContainer; // 0x28
	[SerializeField]
	private GameObject _requestDisabledContainer; // 0x30
	[SerializeField]
	private TMP_Text _remainingTimeText; // 0x38
	private TeamsService _teamsService; // 0x40
	private CollectionService _collectionService; // 0x48
	private TeamChatService _teamChatService; // 0x50
	private IPopUpService _popUpService; // 0x58
	private CustomUpdater _customUpdater; // 0x60
	private bool _canRequestCard; // 0x68

	// Methods

	// RVA: 0x3454608 Offset: 0x3454608 VA: 0x3454608
	public void Initialize() { }

	// RVA: 0x3454854 Offset: 0x3454854 VA: 0x3454854
	public void Dispose() { }

	// RVA: 0x3454934 Offset: 0x3454934 VA: 0x3454934
	private void OnAskButtonSelected() { }

	// RVA: 0x3454A7C Offset: 0x3454A7C VA: 0x3454A7C
	public void Show() { }

	// RVA: 0x3454B9C Offset: 0x3454B9C VA: 0x3454B9C
	public void Hide() { }

	// RVA: 0x3454AC8 Offset: 0x3454AC8 VA: 0x3454AC8
	private void RefreshView() { }

	// RVA: 0x3454D64 Offset: 0x3454D64 VA: 0x3454D64 Slot: 4
	public void IntervalUpdate() { }

	// RVA: 0x3454BBC Offset: 0x3454BBC VA: 0x3454BBC
	private void SetTimeText(long remainingSeconds) { }

	// RVA: 0x3454DEC Offset: 0x3454DEC VA: 0x3454DEC
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]