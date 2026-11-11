public class CollectionPopUpTitle : MonoBehaviour // TypeDefIndex: 4604
{
	// Fields
	[SerializeField]
	private string _titleId; // 0x18
	[SerializeField]
	private CollectionPopUpTitle.TitleLayoutType _currentLayout; // 0x20
	[Header("Basic Layout Components")]
	[SerializeField]
	private TextMeshPro _basicNameText; // 0x28
	[SerializeField]
	private SpriteRenderer _titleFrame; // 0x30
	[SerializeField]
	private List<SpriteRenderer> _titleIcons; // 0x38
	[Header("Composite Layout Components")]
	[SerializeField]
	private GameObject _grandFrame; // 0x40
	[SerializeField]
	private TextMeshPro _grandText; // 0x48
	[SerializeField]
	private List<TextMeshPro> _upperTexts; // 0x50
	[SerializeField]
	private List<TextMeshPro> _lowerTexts; // 0x58
	private CollectionThemeSpriteLibrary _collectionThemeSpriteLibrary; // 0x60
	private string _headerText; // 0x68
	private CollectionPhase _phase; // 0x70
	private string _grandNumeral; // 0x78

	// Properties
	public string CollectionID { get; }

	// Methods

	// RVA: 0x3A6BB6C Offset: 0x3A6BB6C VA: 0x3A6BB6C
	public string get_CollectionID() { }

	// RVA: 0x3A68958 Offset: 0x3A68958 VA: 0x3A68958
	public void Initialize(CollectionThemeSpriteLibrary collectionThemeSpriteLibrary, string headerText, CollectionPhase phase, string grandNumeral = "") { }

	// RVA: 0x3A6BB74 Offset: 0x3A6BB74 VA: 0x3A6BB74
	private void InitializeBasicLayout() { }

	// RVA: 0x3A6BD1C Offset: 0x3A6BD1C VA: 0x3A6BD1C
	private void InitializeCompositeLayout() { }

	// RVA: 0x3A6BD50 Offset: 0x3A6BD50 VA: 0x3A6BD50
	private void SetCompositeText() { }

	// RVA: 0x3A6C120 Offset: 0x3A6C120 VA: 0x3A6C120
	private void SetUpperText(string text) { }

	// RVA: 0x3A6C280 Offset: 0x3A6C280 VA: 0x3A6C280
	private void SetLowerText(string text) { }

	// RVA: 0x3A6C3E0 Offset: 0x3A6C3E0 VA: 0x3A6C3E0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A6C3E8 Offset: 0x3A6C3E8 VA: 0x3A6C3E8
	private bool <SetCompositeText>b__19_0(string word) { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI