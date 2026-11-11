public class ProfileTokenSelectionContainer : MonoBehaviour // TypeDefIndex: 2961
{
	// Fields
	[SerializeField]
	private ScrollBar _scrollBar; // 0x18
	[SerializeField]
	private BasicScrollAdapter _scrollAdapter; // 0x20
	[SerializeField]
	private TokenSelectionScrollViewAdapter _tokenViewAdapter; // 0x28
	private const int ItemPerLine = 3;
	[CompilerGenerated]
	private string <ActiveTokenId>k__BackingField; // 0x30
	private List<ProfileTokenSprite> _allTokenSprites; // 0x38
	private int _selectedTokenIndex; // 0x40

	// Properties
	public string ActiveTokenId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2ADD5A4 Offset: 0x2ADD5A4 VA: 0x2ADD5A4
	public string get_ActiveTokenId() { }

	[CompilerGenerated]
	// RVA: 0x2ADD5AC Offset: 0x2ADD5AC VA: 0x2ADD5AC
	private void set_ActiveTokenId(string value) { }

	// RVA: 0x2ADD5B4 Offset: 0x2ADD5B4 VA: 0x2ADD5B4
	private void Awake() { }

	// RVA: 0x2ADD6EC Offset: 0x2ADD6EC VA: 0x2ADD6EC
	private void OnDestroy() { }

	// RVA: 0x2ADD860 Offset: 0x2ADD860 VA: 0x2ADD860
	public void Initialize(List<ProfileTokenSprite> allTokenSprites, string activeTokenId) { }

	// RVA: 0x2ADE034 Offset: 0x2ADE034 VA: 0x2ADE034
	private void InitializeScrollView(List<TokenSelectionItemViewModel> items) { }

	// RVA: 0x2ADDC64 Offset: 0x2ADDC64 VA: 0x2ADDC64
	private List<ProfileTokenSprite> GetPlayerTokenSprites() { }

	// RVA: 0x2ADDF2C Offset: 0x2ADDF2C VA: 0x2ADDF2C
	private ProfileTokenSprite GetTokenSpriteById(string tokenId) { }

	// RVA: 0x2ADE2CC Offset: 0x2ADE2CC VA: 0x2ADE2CC
	private void OnTokenSelected(ProfileTokenSprite tokenSprite) { }

	// RVA: 0x2ADD334 Offset: 0x2ADD334 VA: 0x2ADD334
	public void SetActiveTokenId(string tokenId) { }

	// RVA: 0x2ADE3A8 Offset: 0x2ADE3A8 VA: 0x2ADE3A8
	private void UpdateVisibleTokenViews() { }

	// RVA: 0x2ADE2D0 Offset: 0x2ADE2D0 VA: 0x2ADE2D0
	private void OpenActiveCollectionTokenPopUp(ProfileTokenSprite tokenSprite) { }

	// RVA: 0x2ADE524 Offset: 0x2ADE524 VA: 0x2ADE524
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts