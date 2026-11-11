public class MergeMiniGameInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3610
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private Button _rewardedButton; // 0x30
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x38
	private Sequence _sequence; // 0x40

	// Methods

	// RVA: 0x3FAD1D0 Offset: 0x3FAD1D0 VA: 0x3FAD1D0 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAD788 Offset: 0x3FAD788 VA: 0x3FAD788 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAD268 Offset: 0x3FAD268 VA: 0x3FAD268
	private void SetActiveAll(bool active) { }

	// RVA: 0x3FAD3D8 Offset: 0x3FAD3D8 VA: 0x3FAD3D8
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3FAD85C Offset: 0x3FAD85C VA: 0x3FAD85C
	private void OnProbabilityButtonClicked() { }

	// RVA: 0x3FAD944 Offset: 0x3FAD944 VA: 0x3FAD944
	private void SubscribeButtons() { }

	// RVA: 0x3FADA24 Offset: 0x3FADA24 VA: 0x3FADA24
	private void UnsubscribeButtons() { }

	// RVA: 0x3FADB04 Offset: 0x3FADB04 VA: 0x3FADB04
	private void ClosePopup() { }

	// RVA: 0x3FADBA0 Offset: 0x3FADBA0 VA: 0x3FADBA0 Slot: 6
	public Task Hide() { }

	// RVA: 0x3FADC54 Offset: 0x3FADC54 VA: 0x3FADC54 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FADC5C Offset: 0x3FADC5C VA: 0x3FADC5C
	private void OnDestroy() { }

	// RVA: 0x3FADC84 Offset: 0x3FADC84 VA: 0x3FADC84
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]