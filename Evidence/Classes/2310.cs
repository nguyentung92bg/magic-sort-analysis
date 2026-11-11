public class TeamQuestTeamChatElementView : MonoBehaviour, ITeamChatEventView // TypeDefIndex: 2310
{
	// Fields
	[SerializeField]
	private Timer _timer; // 0x18
	[SerializeField]
	private TMP_Text _mapText; // 0x20
	[SerializeField]
	private Button _button; // 0x28
	[SerializeField]
	private Button _arrowButton; // 0x30
	[SerializeField]
	private GameObject _downArrow; // 0x38
	[SerializeField]
	private GameObject _upArrow; // 0x40
	[SerializeField]
	private TeamQuestPopupAnimationConfig _animationConfig; // 0x48
	[SerializeField]
	private GameObject _background; // 0x50
	[SerializeField]
	private GameObject _container; // 0x58
	[SerializeField]
	private TeamChatController _chatController; // 0x60
	private TeamQuestService _teamQuestService; // 0x68
	private TeamQuestTeamChatElementViewModel _viewModel; // 0x70
	private bool _expanded; // 0x78
	private bool _isVisible; // 0x79

	// Methods

	// RVA: 0x2DDEF98 Offset: 0x2DDEF98 VA: 0x2DDEF98
	private void Awake() { }

	// RVA: 0x2DDF078 Offset: 0x2DDF078 VA: 0x2DDF078
	private void OnDestroy() { }

	// RVA: 0x2DDF158 Offset: 0x2DDF158 VA: 0x2DDF158 Slot: 4
	public bool IsExpanded() { }

	// RVA: 0x2DDF160 Offset: 0x2DDF160 VA: 0x2DDF160 Slot: 5
	public bool IsViewVisible() { }

	// RVA: 0x2DDF168 Offset: 0x2DDF168 VA: 0x2DDF168
	public void Initialize(TeamQuestTeamChatElementViewModel viewModel) { }

	// RVA: 0x2DDF504 Offset: 0x2DDF504 VA: 0x2DDF504
	public void Dispose() { }

	// RVA: 0x2DDF20C Offset: 0x2DDF20C VA: 0x2DDF20C
	private void UpdateView(TeamQuestTeamChatElementViewModel viewModel) { }

	// RVA: 0x2DDF508 Offset: 0x2DDF508 VA: 0x2DDF508
	private void OnButtonClick() { }

	// RVA: 0x2DDF680 Offset: 0x2DDF680 VA: 0x2DDF680
	private void OnArrowButtonClick() { }

	// RVA: 0x2DDF350 Offset: 0x2DDF350 VA: 0x2DDF350
	private void SetInitialVisibility() { }

	// RVA: 0x2DDF8E4 Offset: 0x2DDF8E4 VA: 0x2DDF8E4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI