public class MagicBottleInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4052
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
	[SerializeField]
	private TextMeshPro _neededLevelText; // 0x40

	// Methods

	// RVA: 0x375F4B8 Offset: 0x375F4B8 VA: 0x375F4B8
	private void OnDestroy() { }

	// RVA: 0x375F4D0 Offset: 0x375F4D0 VA: 0x375F4D0
	private void SetActiveAll(bool active) { }

	// RVA: 0x375F640 Offset: 0x375F640 VA: 0x375F640
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x375F9F8 Offset: 0x375F9F8 VA: 0x375F9F8
	private void SubscribeButton() { }

	// RVA: 0x375FA84 Offset: 0x375FA84 VA: 0x375FA84
	private void UnsubscribeButton() { }

	// RVA: 0x375FB10 Offset: 0x375FB10 VA: 0x375FB10
	private void ClosePopup() { }

	// RVA: 0x375FB90 Offset: 0x375FB90 VA: 0x375FB90 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x375FD2C Offset: 0x375FD2C VA: 0x375FD2C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x375FE08 Offset: 0x375FE08 VA: 0x375FE08 Slot: 6
	public Task Hide() { }

	// RVA: 0x375FEBC Offset: 0x375FEBC VA: 0x375FEBC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x375FEC4 Offset: 0x375FEC4 VA: 0x375FEC4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicBottle.Scripts.UI