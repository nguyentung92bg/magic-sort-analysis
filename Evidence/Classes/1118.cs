public class StuckPopup : MonoBehaviour, IPopUp // TypeDefIndex: 1118
{
	// Fields
	[SerializeField]
	private AStuckPopupVariant _currentVariant; // 0x18
	[SerializeField]
	private List<PlayOnView> _playOnViews; // 0x20
	[SerializeField]
	private PlayOnWithRewardedButton _playOnWithRewardedButton; // 0x28
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x30

	// Methods

	// RVA: 0x1606F10 Offset: 0x1606F10 VA: 0x1606F10 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x1607118 Offset: 0x1607118 VA: 0x1607118 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x16071E4 Offset: 0x16071E4 VA: 0x16071E4 Slot: 6
	public Task Hide() { }

	// RVA: 0x1607298 Offset: 0x1607298 VA: 0x1607298 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x16072A0 Offset: 0x16072A0 VA: 0x16072A0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.UI.LevelStuckPopUpNs.Scripts