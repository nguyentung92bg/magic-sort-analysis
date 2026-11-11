public class FriendsInviteInfoPopup : MonoBehaviour, IPopUp // TypeDefIndex: 4365
{
	// Fields
	[SerializeField]
	private Button _closeButton; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x28
	[SerializeField]
	private TMP_Text _inviteFriendText; // 0x30
	private Sequence _sequence; // 0x38
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x40

	// Methods

	// RVA: 0x1B8F3FC Offset: 0x1B8F3FC VA: 0x1B8F3FC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1B8FA58 Offset: 0x1B8FA58 VA: 0x1B8FA58 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x1B8FB24 Offset: 0x1B8FB24 VA: 0x1B8FB24 Slot: 6
	public Task Hide() { }

	// RVA: 0x1B8FBD8 Offset: 0x1B8FBD8 VA: 0x1B8FBD8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x1B8F538 Offset: 0x1B8F538 VA: 0x1B8F538
	private void SetActiveAll(bool active) { }

	// RVA: 0x1B8FBE0 Offset: 0x1B8FBE0 VA: 0x1B8FBE0
	private void OnDestroy() { }

	// RVA: 0x1B8F6A8 Offset: 0x1B8F6A8 VA: 0x1B8F6A8
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x1B8FC9C Offset: 0x1B8FC9C VA: 0x1B8FC9C
	private void SubscribeButton() { }

	// RVA: 0x1B8FC08 Offset: 0x1B8FC08 VA: 0x1B8FC08
	private void UnsubscribeButton() { }

	// RVA: 0x1B8FD28 Offset: 0x1B8FD28 VA: 0x1B8FD28
	private void ClosePopup() { }

	// RVA: 0x1B8FDA4 Offset: 0x1B8FDA4 VA: 0x1B8FDA4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Friends.Scripts.UI