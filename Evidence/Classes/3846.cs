public class MagicStreakGaeInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3846
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

	// RVA: 0x3CF6A54 Offset: 0x3CF6A54 VA: 0x3CF6A54
	private void OnDestroy() { }

	// RVA: 0x3CF6A6C Offset: 0x3CF6A6C VA: 0x3CF6A6C
	private void SetActiveAll(bool active) { }

	// RVA: 0x3CF6BDC Offset: 0x3CF6BDC VA: 0x3CF6BDC
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3CF6F94 Offset: 0x3CF6F94 VA: 0x3CF6F94
	private void SubscribeButton() { }

	// RVA: 0x3CF7020 Offset: 0x3CF7020 VA: 0x3CF7020
	private void UnsubscribeButton() { }

	// RVA: 0x3CF70AC Offset: 0x3CF70AC VA: 0x3CF70AC
	private void ClosePopup() { }

	// RVA: 0x3CF712C Offset: 0x3CF712C VA: 0x3CF712C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3CF718C Offset: 0x3CF718C VA: 0x3CF718C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3CF7258 Offset: 0x3CF7258 VA: 0x3CF7258 Slot: 6
	public Task Hide() { }

	// RVA: 0x3CF730C Offset: 0x3CF730C VA: 0x3CF730C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3CF7314 Offset: 0x3CF7314 VA: 0x3CF7314
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakGAE.Scripts
[CreateAssetMenu(fileName = "MagicStreakGaeKeyAnimationConfig", menuName = "Configs/MagicStreakGaeKeyAnimationConfig")]