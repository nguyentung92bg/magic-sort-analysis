public class MiniGameFinishedAreYouSurePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3508
{
	// Fields
	[SerializeField]
	private Button _playOnButton; // 0x18
	[SerializeField]
	private Button _quitOnButton; // 0x20
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x28

	// Methods

	// RVA: 0x20BA450 Offset: 0x20BA450 VA: 0x20BA450 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x20BA530 Offset: 0x20BA530 VA: 0x20BA530
	private void OnPlayOnButtonClicked() { }

	// RVA: 0x20BA5A4 Offset: 0x20BA5A4 VA: 0x20BA5A4
	private void OnQuitButtonClicked() { }

	// RVA: 0x20BA62C Offset: 0x20BA62C VA: 0x20BA62C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x20BA6F8 Offset: 0x20BA6F8 VA: 0x20BA6F8 Slot: 6
	public Task Hide() { }

	// RVA: 0x20BA864 Offset: 0x20BA864 VA: 0x20BA864 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x20BA86C Offset: 0x20BA86C VA: 0x20BA86C
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.MiniGame.Scripts.UI