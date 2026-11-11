public class BoatRushJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4867
{
	// Fields
	[SerializeField]
	private BoatRushJoinController _joinController; // 0x18
	[SerializeField]
	private Timer _timer; // 0x20
	[SerializeField]
	private Button _infoButton; // 0x28
	[SerializeField]
	private Button _joinButton; // 0x30
	[SerializeField]
	private TMP_Text _joinButtonTextWithLimitless; // 0x38
	[SerializeField]
	private TMP_Text _joinButtonTextWithoutLimitless; // 0x40
	[SerializeField]
	private TMP_Text _infoText; // 0x48
	[SerializeField]
	private List<ToolbarButton> _buttons; // 0x50
	private TMP_Text _joinButtonText; // 0x58
	[SerializeField]
	private Transform _joinButtonWithLimitless; // 0x60
	[SerializeField]
	private Transform _joinButtonWithoutLimitless; // 0x68
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x70
	private BoatRushJoinViewModel _viewModel; // 0x78
	private IPopUpService _popUpService; // 0x80
	private BoatRushService _boatRushService; // 0x88
	private BoatRushJoinPopUpImpressionSource _impressionSource; // 0x90

	// Methods

	// RVA: 0x40F9BD8 Offset: 0x40F9BD8 VA: 0x40F9BD8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x40FA194 Offset: 0x40FA194 VA: 0x40FA194 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x40F9CD4 Offset: 0x40F9CD4 VA: 0x40F9CD4
	private void SetView() { }

	// RVA: 0x40FA344 Offset: 0x40FA344 VA: 0x40FA344 Slot: 6
	public Task Hide() { }

	// RVA: 0x40FA430 Offset: 0x40FA430 VA: 0x40FA430 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x40FA438 Offset: 0x40FA438 VA: 0x40FA438
	private void Awake() { }

	// RVA: 0x40FA5B8 Offset: 0x40FA5B8 VA: 0x40FA5B8
	private void OnDestroy() { }

	// RVA: 0x40FA698 Offset: 0x40FA698 VA: 0x40FA698
	private void OnInfoButtonSelected() { }

	// RVA: 0x40FA760 Offset: 0x40FA760 VA: 0x40FA760
	private void OnJoinButtonSelected() { }

	[AsyncStateMachine(typeof(BoatRushJoinPopUp.<PlayFirstShowEverAnimations>d__25))]
	// RVA: 0x40FA28C Offset: 0x40FA28C VA: 0x40FA28C
	private void PlayFirstShowEverAnimations() { }

	[AsyncStateMachine(typeof(BoatRushJoinPopUp.<OpenAutomaticallyInfoPopUp>d__26))]
	// RVA: 0x40FA9FC Offset: 0x40FA9FC VA: 0x40FA9FC
	private Task OpenAutomaticallyInfoPopUp() { }

	// RVA: 0x40FA270 Offset: 0x40FA270 VA: 0x40FA270
	private void MarkJoinPopUpIntroduced() { }

	// RVA: 0x40FAACC Offset: 0x40FAACC VA: 0x40FAACC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BoatRush.Scripts.UI