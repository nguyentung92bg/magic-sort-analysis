public class MagicPassActivationPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3913
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x28
	[SerializeField]
	private Button _closeButton; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private Sequence _sequence; // 0x40

	// Methods

	// RVA: 0x38E146C Offset: 0x38E146C VA: 0x38E146C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x38E1690 Offset: 0x38E1690 VA: 0x38E1690
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x38E1A48 Offset: 0x38E1A48 VA: 0x38E1A48
	private void SubscribeButton() { }

	// RVA: 0x38E1AD4 Offset: 0x38E1AD4 VA: 0x38E1AD4
	private void UnsubscribeButton() { }

	// RVA: 0x38E1B60 Offset: 0x38E1B60 VA: 0x38E1B60
	private void ClosePopup() { }

	// RVA: 0x38E1520 Offset: 0x38E1520 VA: 0x38E1520
	private void SetActiveAll(bool active) { }

	// RVA: 0x38E1BE0 Offset: 0x38E1BE0 VA: 0x38E1BE0 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38E1CAC Offset: 0x38E1CAC VA: 0x38E1CAC Slot: 6
	public Task Hide() { }

	// RVA: 0x38E1D60 Offset: 0x38E1D60 VA: 0x38E1D60 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38E1D68 Offset: 0x38E1D68 VA: 0x38E1D68
	private void OnDestroy() { }

	// RVA: 0x38E1D80 Offset: 0x38E1D80 VA: 0x38E1D80
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI
[CreateAssetMenu(fileName = "MagicPassAnimationConfig", menuName = "Configs/MagicPassAnimationConfig")]