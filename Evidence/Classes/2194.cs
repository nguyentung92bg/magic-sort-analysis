public class SearchView : MonoBehaviour // TypeDefIndex: 2194
{
	// Fields
	[SerializeField]
	private TMP_InputField _searchInputField; // 0x18
	[SerializeField]
	private Button _searchInputFieldButton; // 0x20
	[SerializeField]
	private TMP_Text _searchPlaceHolder; // 0x28
	[SerializeField]
	private Button _searchButton; // 0x30
	[SerializeField]
	private Button _clearInputButton; // 0x38
	[SerializeField]
	private Button _showSuggestionsButton; // 0x40
	[SerializeField]
	private ScrollBar _scrollBar; // 0x48
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x50
	[SerializeField]
	private TeamsSummaryViewAdapter _summaryViewAdapter; // 0x58
	[SerializeField]
	private GameObject _joinTitleContainer; // 0x60
	[SerializeField]
	private GameObject _showSuggestionContainer; // 0x68
	private TeamsService _teamsService; // 0x70

	// Methods

	// RVA: 0x345F0FC Offset: 0x345F0FC VA: 0x345F0FC
	public void Show() { }

	// RVA: 0x345F2E0 Offset: 0x345F2E0 VA: 0x345F2E0
	public void Hide() { }

	// RVA: 0x345F304 Offset: 0x345F304 VA: 0x345F304
	public void Initialize() { }

	// RVA: 0x345F554 Offset: 0x345F554 VA: 0x345F554
	public void Dispose() { }

	// RVA: 0x345F748 Offset: 0x345F748 VA: 0x345F748
	private void OnNameInputFieldSelected() { }

	[AsyncStateMachine(typeof(SearchView.<OnSearchButtonSelected>d__17))]
	// RVA: 0x345F764 Offset: 0x345F764 VA: 0x345F764
	private void OnSearchButtonSelected() { }

	// RVA: 0x345F81C Offset: 0x345F81C VA: 0x345F81C
	private void OnClearInputButtonSelected() { }

	// RVA: 0x345F1C0 Offset: 0x345F1C0 VA: 0x345F1C0
	private void OnSuggestionsButtonSelected() { }

	// RVA: 0x345F8D0 Offset: 0x345F8D0 VA: 0x345F8D0
	private void OnSearchInputChanged(string value) { }

	// RVA: 0x345F8D4 Offset: 0x345F8D4 VA: 0x345F8D4
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Teams.Scripts.UI