public class MergeMiniGameFinishedAreYouSurePopUp : MonoBehaviour, IPopUp // TypeDefIndex: 3602
{
	// Fields
	[SerializeField]
	private Button _playOnButton; // 0x18
	[SerializeField]
	private Button _quitOnButton; // 0x20
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x28

	// Methods

	// RVA: 0x3FAAFFC Offset: 0x3FAAFFC VA: 0x3FAAFFC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAB0DC Offset: 0x3FAB0DC VA: 0x3FAB0DC
	private void OnPlayOnButtonClicked() { }

	// RVA: 0x3FAB150 Offset: 0x3FAB150 VA: 0x3FAB150
	private void OnQuitButtonClicked() { }

	// RVA: 0x3FAB22C Offset: 0x3FAB22C VA: 0x3FAB22C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3FAB2F8 Offset: 0x3FAB2F8 VA: 0x3FAB2F8 Slot: 6
	public Task Hide() { }

	// RVA: 0x3FAB464 Offset: 0x3FAB464 VA: 0x3FAB464 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3FAB46C Offset: 0x3FAB46C VA: 0x3FAB46C
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]