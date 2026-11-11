public class MiniGameInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3512
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private List<Transform> _transforms; // 0x20
	[SerializeField]
	private Button _closeButton; // 0x28
	[SerializeField]
	private TextMeshPro _normalLevelTridentCountText; // 0x30
	[SerializeField]
	private TextMeshPro _hardLevelTridentCountText; // 0x38
	[SerializeField]
	private TextMeshPro _superHardLevelTridentCountText; // 0x40
	[SerializeField]
	private TextMeshPro _firstTryInfoText; // 0x48
	[SerializeField]
	private Transform _firstTryInfoParent; // 0x50
	private MiniGameViewModel _viewModel; // 0x58
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x60
	private Sequence _sequence; // 0x68
	private const string first_try_localization_term = "MiniGameTridentInfoStep4";

	// Methods

	// RVA: 0x20BA910 Offset: 0x20BA910 VA: 0x20BA910 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x20BB108 Offset: 0x20BB108 VA: 0x20BB108 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x20BABE8 Offset: 0x20BABE8 VA: 0x20BABE8
	private void SetActiveAll(bool active) { }

	// RVA: 0x20BAD58 Offset: 0x20BAD58 VA: 0x20BAD58
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x20BB1EC Offset: 0x20BB1EC VA: 0x20BB1EC
	private void SubscribeButton() { }

	// RVA: 0x20BB278 Offset: 0x20BB278 VA: 0x20BB278
	private void UnsubscribeButton() { }

	// RVA: 0x20BB304 Offset: 0x20BB304 VA: 0x20BB304
	private void ClosePopup() { }

	// RVA: 0x20BB378 Offset: 0x20BB378 VA: 0x20BB378 Slot: 6
	public Task Hide() { }

	// RVA: 0x20BB42C Offset: 0x20BB42C VA: 0x20BB42C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x20BB434 Offset: 0x20BB434 VA: 0x20BB434
	private void OnDestroy() { }

	// RVA: 0x20BB45C Offset: 0x20BB45C VA: 0x20BB45C
	public void .ctor() { }
}

// Namespace: 
[Serializable]