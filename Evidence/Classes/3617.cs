public class MergeMiniGameRewardedInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3617
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

	// RVA: 0x3FAF750 Offset: 0x3FAF750 VA: 0x3FAF750 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAFC8C Offset: 0x3FAFC8C VA: 0x3FAFC8C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAF76C Offset: 0x3FAF76C VA: 0x3FAF76C
	private void SetActiveAll(bool active) { }

	// RVA: 0x3FAF8DC Offset: 0x3FAF8DC VA: 0x3FAF8DC
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3FAFD6C Offset: 0x3FAFD6C VA: 0x3FAFD6C
	private void SubscribeButton() { }

	// RVA: 0x3FAFDF8 Offset: 0x3FAFDF8 VA: 0x3FAFDF8
	private void UnsubscribeButton() { }

	// RVA: 0x3FAFE84 Offset: 0x3FAFE84 VA: 0x3FAFE84
	private void ClosePopup() { }

	// RVA: 0x3FAFEF8 Offset: 0x3FAFEF8 VA: 0x3FAFEF8 Slot: 6
	public Task Hide() { }

	// RVA: 0x3FAFFAC Offset: 0x3FAFFAC VA: 0x3FAFFAC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FAFFB4 Offset: 0x3FAFFB4 VA: 0x3FAFFB4
	private void OnDestroy() { }

	// RVA: 0x3FAFFDC Offset: 0x3FAFFDC VA: 0x3FAFFDC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MergeMiniGame.Scripts.UI