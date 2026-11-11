public class TeamsAskCardPopup : MonoBehaviour, IPopUp // TypeDefIndex: 2151
{
	// Fields
	[SerializeField]
	private TeamsAskCardThemeViewAdapter _viewAdapter; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private ScrollBar _scrollbar; // 0x28
	[SerializeField]
	private TeamsAskCardThemeView _themeView; // 0x30
	[SerializeField]
	private Button _leftPageButton; // 0x38
	[SerializeField]
	private Button _rightPageButton; // 0x40
	[SerializeField]
	private TMP_Text _pageIndexText; // 0x48
	[SerializeField]
	private Button _askCardButton; // 0x50
	[SerializeField]
	private Button _infoButton; // 0x58
	private List<TeamsAskCardThemeViewModel> _viewModels; // 0x60
	private int _selectedIndex; // 0x68

	// Methods

	// RVA: 0x34510DC Offset: 0x34510DC VA: 0x34510DC Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x345129C Offset: 0x345129C VA: 0x345129C Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3451340 Offset: 0x3451340 VA: 0x3451340 Slot: 6
	public Task Hide() { }

	// RVA: 0x34513EC Offset: 0x34513EC VA: 0x34513EC Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3451188 Offset: 0x3451188 VA: 0x3451188
	private void UpdateView() { }

	// RVA: 0x345150C Offset: 0x345150C VA: 0x345150C
	private void Awake() { }

	// RVA: 0x3451684 Offset: 0x3451684 VA: 0x3451684
	private void OnDestroy() { }

	// RVA: 0x34517FC Offset: 0x34517FC VA: 0x34517FC
	private void OnRequestButtonSelected() { }

	// RVA: 0x34519CC Offset: 0x34519CC VA: 0x34519CC
	private void OnLeftPageButtonClicked() { }

	// RVA: 0x3451A54 Offset: 0x3451A54 VA: 0x3451A54
	private void OnRightPageButtonClicked() { }

	// RVA: 0x34519E8 Offset: 0x34519E8 VA: 0x34519E8
	private void IncreaseSelectedIndex(int delta) { }

	// RVA: 0x3451A70 Offset: 0x3451A70 VA: 0x3451A70
	private void OnInfoButtonClicked() { }

	// RVA: 0x3451B58 Offset: 0x3451B58 VA: 0x3451B58
	public void .ctor() { }
}

// Namespace: 
[Serializable]