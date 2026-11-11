public class JetpackRaceWithStageInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4170
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private List<Transform> _keepProgressOnLoseTransforms; // 0x28
	[SerializeField]
	private Button _closeButton; // 0x30
	[SerializeField]
	private Transform _resetInfoText; // 0x38
	[SerializeField]
	private Transform _headerText; // 0x40
	[SerializeField]
	private TextMeshPro _sequence1Text; // 0x48
	private const string JetpackRaceWithStageInfoPopUpKey = "JetpackRaceWithStageInfoPopUp2!";
	private const string JetpackRaceWithStageKeepProgressOnLoseInfoPopUpKey = "JetpackRaceWithStageKeepProgressOnLoseInfoPopUp2!";
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x50
	private Sequence _sequence; // 0x58

	// Methods

	// RVA: 0x3B0D25C Offset: 0x3B0D25C VA: 0x3B0D25C
	private void OnDestroy() { }

	// RVA: 0x3B0D274 Offset: 0x3B0D274 VA: 0x3B0D274
	private void SetActiveAll(bool active) { }

	// RVA: 0x3B0D3E4 Offset: 0x3B0D3E4 VA: 0x3B0D3E4
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3B0D7FC Offset: 0x3B0D7FC VA: 0x3B0D7FC
	private void SubscribeButton() { }

	// RVA: 0x3B0D888 Offset: 0x3B0D888 VA: 0x3B0D888
	private void UnsubscribeButton() { }

	// RVA: 0x3B0D914 Offset: 0x3B0D914 VA: 0x3B0D914
	private void ClosePopup() { }

	// RVA: 0x3B0D994 Offset: 0x3B0D994 VA: 0x3B0D994 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3B0DA08 Offset: 0x3B0DA08 VA: 0x3B0DA08
	private void SetInfoTexts() { }

	// RVA: 0x3B0DB14 Offset: 0x3B0DB14 VA: 0x3B0DB14 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3B0DBE0 Offset: 0x3B0DBE0 VA: 0x3B0DBE0 Slot: 6
	public Task Hide() { }

	// RVA: 0x3B0DC94 Offset: 0x3B0DC94 VA: 0x3B0DC94 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3B0DC9C Offset: 0x3B0DC9C VA: 0x3B0DC9C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.JetpackRaceWithStage.Scripts.UI