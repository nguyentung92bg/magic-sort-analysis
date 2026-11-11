public class PreGamePopup : MonoBehaviour, IPopUp // TypeDefIndex: 2867
{
	// Fields
	[SerializeField]
	private MultiplierController _multiplierController; // 0x18
	[SerializeField]
	private PreGameDifficultyController _preGameDifficultyController; // 0x20
	[SerializeField]
	private Button _playButton; // 0x28
	[SerializeField]
	private PopupAnimationController _animator; // 0x30

	// Methods

	// RVA: 0x2DD317C Offset: 0x2DD317C VA: 0x2DD317C Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x2DD3438 Offset: 0x2DD3438 VA: 0x2DD3438 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x2DD34CC Offset: 0x2DD34CC VA: 0x2DD34CC Slot: 6
	public Task Hide() { }

	// RVA: 0x2DD361C Offset: 0x2DD361C VA: 0x2DD361C Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x2DD3624 Offset: 0x2DD3624 VA: 0x2DD3624
	private void OnPlayButtonSelected() { }

	// RVA: 0x2DD3580 Offset: 0x2DD3580 VA: 0x2DD3580
	private void Dispose() { }

	// RVA: 0x2DD38B0 Offset: 0x2DD38B0 VA: 0x2DD38B0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.PreGame.Scripts.Multiplier