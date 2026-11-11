public class BroomStreakInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4785
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

	// RVA: 0x3FC3AD0 Offset: 0x3FC3AD0 VA: 0x3FC3AD0
	private void OnDestroy() { }

	// RVA: 0x3FC3AE8 Offset: 0x3FC3AE8 VA: 0x3FC3AE8
	private void SetActiveAll(bool active) { }

	// RVA: 0x3FC3C58 Offset: 0x3FC3C58 VA: 0x3FC3C58
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3FC4010 Offset: 0x3FC4010 VA: 0x3FC4010
	private void SubscribeButton() { }

	// RVA: 0x3FC409C Offset: 0x3FC409C VA: 0x3FC409C
	private void UnsubscribeButton() { }

	// RVA: 0x3FC4128 Offset: 0x3FC4128 VA: 0x3FC4128
	private void ClosePopup() { }

	// RVA: 0x3FC41A8 Offset: 0x3FC41A8 VA: 0x3FC41A8 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3FC4214 Offset: 0x3FC4214 VA: 0x3FC4214 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FC42E0 Offset: 0x3FC42E0 VA: 0x3FC42E0 Slot: 6
	public Task Hide() { }

	// RVA: 0x3FC4394 Offset: 0x3FC4394 VA: 0x3FC4394 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FC439C Offset: 0x3FC439C VA: 0x3FC439C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.BroomStreak.Scripts.UI