public class SkyJumpWithStageInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 2693
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private TextMeshPro _beatLevelsText; // 0x30
	[SerializeField]
	private TextMeshPro _winCoinText; // 0x38
	[SerializeField]
	private Transform[] _stageChestTransforms; // 0x40
	[SerializeField]
	private Transform[] _stageProgressTransforms; // 0x48
	[SerializeField]
	private Transform[] _stageChecksTransforms; // 0x50
	private const string beat_levels_text_localization_term = "SkyJumpWithStageInfoPopupStep2";
	private const string win_coin_text_localization_term = "SkyJumpWithStageInfoPopupStep3";
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x58
	private Sequence _sequence; // 0x60

	// Methods

	// RVA: 0x233B3B8 Offset: 0x233B3B8 VA: 0x233B3B8
	private void OnDestroy() { }

	// RVA: 0x233B3D0 Offset: 0x233B3D0 VA: 0x233B3D0
	private void SetActiveAll(bool active) { }

	// RVA: 0x233B540 Offset: 0x233B540 VA: 0x233B540
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x233B8F8 Offset: 0x233B8F8 VA: 0x233B8F8
	private void SubscribeButton() { }

	// RVA: 0x233B984 Offset: 0x233B984 VA: 0x233B984
	private void UnsubscribeButton() { }

	// RVA: 0x233BA10 Offset: 0x233BA10 VA: 0x233BA10
	private void ClosePopup() { }

	// RVA: 0x233BA90 Offset: 0x233BA90 VA: 0x233BA90 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x233BD70 Offset: 0x233BD70 VA: 0x233BD70 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x233BE3C Offset: 0x233BE3C VA: 0x233BE3C Slot: 6
	public Task Hide() { }

	// RVA: 0x233BEF0 Offset: 0x233BEF0 VA: 0x233BEF0 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x233BEF8 Offset: 0x233BEF8 VA: 0x233BEF8
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.SkyJumpWithStage.Scripts.UI