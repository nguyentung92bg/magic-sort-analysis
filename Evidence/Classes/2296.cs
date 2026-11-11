public class TeamQuestInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2296
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30
	private Sequence _sequence; // 0x38

	// Methods

	// RVA: 0x2DDAB90 Offset: 0x2DDAB90 VA: 0x2DDAB90
	private void OnDestroy() { }

	// RVA: 0x2DDABA8 Offset: 0x2DDABA8 VA: 0x2DDABA8
	private void SetActiveAll(bool active) { }

	// RVA: 0x2DDAD18 Offset: 0x2DDAD18 VA: 0x2DDAD18
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x2DDB0D0 Offset: 0x2DDB0D0 VA: 0x2DDB0D0
	private void SubscribeButton() { }

	// RVA: 0x2DDB15C Offset: 0x2DDB15C VA: 0x2DDB15C
	private void UnsubscribeButton() { }

	// RVA: 0x2DDB1E8 Offset: 0x2DDB1E8 VA: 0x2DDB1E8
	private void ClosePopup() { }

	// RVA: 0x2DDB268 Offset: 0x2DDB268 VA: 0x2DDB268 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2DDB348 Offset: 0x2DDB348 VA: 0x2DDB348 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2DDB424 Offset: 0x2DDB424 VA: 0x2DDB424 Slot: 6
	public Task Hide() { }

	// RVA: 0x2DDB4D8 Offset: 0x2DDB4D8 VA: 0x2DDB4D8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2DDB4E0 Offset: 0x2DDB4E0 VA: 0x2DDB4E0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.TeamQuest.Scripts.UI