public class SkyJumpWithStageJoinPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2696
{
	// Fields
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x18
	[SerializeField]
	private Button _joinButton; // 0x20
	[SerializeField]
	private GameObject _joinableUIContainer; // 0x28
	[SerializeField]
	private GameObject _notJoinableUIContainer; // 0x30
	[SerializeField]
	private Transform[] _stageArtParents; // 0x38
	[SerializeField]
	private TextMeshPro[] _stageArtRewardTexts; // 0x40
	[SerializeField]
	private Transform[] _stageCurrentBackgrounds; // 0x48
	[SerializeField]
	private Transform[] _stageChecksTransforms; // 0x50
	[SerializeField]
	private Transform[] _stageChestsTransforms; // 0x58
	[SerializeField]
	private TextMeshPro[] _stageIndexTexts; // 0x60
	[SerializeField]
	private TextMeshPro _levelInfoText; // 0x68
	private SkyJumpWithStageService _SkyJumpWithStageService; // 0x70
	private SkyJumpWithStageJoinPopUpArguments _popUpArguments; // 0x78
	private const string beat_levels_text_localization_term = "SkyJumpWithStageJoinPopupInfo";
	private const string stage_text_localization_term = "SkyJumpWithStageJoinPopupStage";

	// Methods

	// RVA: 0x233BF34 Offset: 0x233BF34 VA: 0x233BF34
	private void Awake() { }

	// RVA: 0x233BFC0 Offset: 0x233BFC0 VA: 0x233BFC0
	private void OnDestroy() { }

	// RVA: 0x233C04C Offset: 0x233C04C VA: 0x233C04C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[AsyncStateMachine(typeof(SkyJumpWithStageJoinPopUp.<OnJoinJoinButtonDown>d__18))]
	// RVA: 0x233C564 Offset: 0x233C564 VA: 0x233C564
	private void OnJoinJoinButtonDown() { }

	// RVA: 0x233C61C Offset: 0x233C61C VA: 0x233C61C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x233C6D0 Offset: 0x233C6D0 VA: 0x233C6D0 Slot: 6
	public Task Hide() { }

	// RVA: 0x233C784 Offset: 0x233C784 VA: 0x233C784 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x233C78C Offset: 0x233C78C VA: 0x233C78C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI