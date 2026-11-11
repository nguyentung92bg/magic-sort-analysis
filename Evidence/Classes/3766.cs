public class MagicStreakTournamentPopup : MonoBehaviour, IPopUp // TypeDefIndex: 3766
{
	// Fields
	[SerializeField]
	private MagicStreakTournamentResultController _resultController; // 0x18
	[SerializeField]
	private MagicStreakTournamentInProgressController _inProgressController; // 0x20
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x28
	private MagicStreakTournamentPopupStateType _magicStreakTournamentPopupStateType; // 0x30

	// Methods

	// RVA: 0x3E1001C Offset: 0x3E1001C VA: 0x3E1001C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	[Button]
	// RVA: 0x3E101F0 Offset: 0x3E101F0 VA: 0x3E101F0
	private void ShowInProgressView(MagicStreakTournamentPopupStateType magicStreakTournamentPopupStateType) { }

	[Button]
	// RVA: 0x3E101C8 Offset: 0x3E101C8 VA: 0x3E101C8
	private void ShowResultView() { }

	// RVA: 0x3E10334 Offset: 0x3E10334 VA: 0x3E10334 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3E10410 Offset: 0x3E10410 VA: 0x3E10410 Slot: 6
	public Task Hide() { }

	// RVA: 0x3E105B8 Offset: 0x3E105B8 VA: 0x3E105B8 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3E105C0 Offset: 0x3E105C0 VA: 0x3E105C0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MagicStreakTournament.Scripts.UI