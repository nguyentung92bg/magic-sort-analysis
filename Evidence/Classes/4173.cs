public class JetpackRaceWithStageJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4173
{
	// Fields
	private JetpackRaceWithStageService _jetpackRaceWithStageService; // 0x18
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x20
	[SerializeField]
	private Button _button; // 0x28
	[SerializeField]
	private TextMeshPro _infoText; // 0x30
	[SerializeField]
	private GameObject _joinButtonWithLimitlessLifeView; // 0x38
	[SerializeField]
	private GameObject _joinButtonWithoutLimitlessLifeView; // 0x40
	[SerializeField]
	private List<GameObject> _viewsByStages; // 0x48
	[SerializeField]
	private List<ToolbarButton> _buttons; // 0x50
	[SerializeField]
	private GameObject _closeButtonGameObject; // 0x58
	private bool _isRewardIntroduced; // 0x60

	// Methods

	// RVA: 0x3B0DCEC Offset: 0x3B0DCEC VA: 0x3B0DCEC
	private void Awake() { }

	// RVA: 0x3B0DD78 Offset: 0x3B0DD78 VA: 0x3B0DD78
	private void OnDestroy() { }

	// RVA: 0x3B0DE04 Offset: 0x3B0DE04 VA: 0x3B0DE04 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(JetpackRaceWithStageJoinPopUp.<OnJoinButtonDown>d__13))]
	// RVA: 0x3B0E2D4 Offset: 0x3B0E2D4 VA: 0x3B0E2D4
	public void OnJoinButtonDown() { }

	// RVA: 0x3B0E38C Offset: 0x3B0E38C VA: 0x3B0E38C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3B0E440 Offset: 0x3B0E440 VA: 0x3B0E440 Slot: 6
	public Task Hide() { }

	// RVA: 0x3B0E4F4 Offset: 0x3B0E4F4 VA: 0x3B0E4F4 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3B0E4FC Offset: 0x3B0E4FC VA: 0x3B0E4FC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI