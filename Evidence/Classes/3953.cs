public class MagicPassVaultRewardPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3953
{
	// Fields
	[SerializeField]
	private MagicPassVaultRewardAnimationView _animationView; // 0x18
	[SerializeField]
	private TextMeshPro _titleText; // 0x20
	[SerializeField]
	private TextMeshPro _taptToContinueText; // 0x28
	[SerializeField]
	private Button _closeButton; // 0x30
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x38
	[SerializeField]
	private float _textAnimationStartDelay; // 0x40
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x48
	private Sequence _sequence; // 0x50

	// Methods

	// RVA: 0x38EBDCC Offset: 0x38EBDCC VA: 0x38EBDCC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x38EBE9C Offset: 0x38EBE9C VA: 0x38EBE9C
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x38EC018 Offset: 0x38EC018 VA: 0x38EC018
	private Sequence GetAnimationSequence(Transform transformObject) { }

	// RVA: 0x38EC250 Offset: 0x38EC250 VA: 0x38EC250
	private void SubscribeButton() { }

	// RVA: 0x38EC2DC Offset: 0x38EC2DC VA: 0x38EC2DC
	private void UnsubscribeButton() { }

	// RVA: 0x38EC368 Offset: 0x38EC368 VA: 0x38EC368
	private void ClosePopup() { }

	// RVA: 0x38EC3E8 Offset: 0x38EC3E8 VA: 0x38EC3E8 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x38EC48C Offset: 0x38EC48C VA: 0x38EC48C Slot: 6
	public Task Hide() { }

	// RVA: 0x38EC540 Offset: 0x38EC540 VA: 0x38EC540 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x38EC548 Offset: 0x38EC548 VA: 0x38EC548
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicPass.Scripts.UI