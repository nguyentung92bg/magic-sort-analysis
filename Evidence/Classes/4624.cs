public class CollectionTokenPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4624
{
	// Fields
	[SerializeField]
	private ProfileSpriteConfig _profileSpriteConfig; // 0x18
	[SerializeField]
	private TextMeshPro _tokenName; // 0x20
	[SerializeField]
	private SpriteRenderer _tokenImage; // 0x28
	[SerializeField]
	private TextMeshPro _playerLevelText; // 0x30
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x38
	[SerializeField]
	private Transform _tokenParent; // 0x40
	[SerializeField]
	private Transform _staticTokenParent; // 0x48
	[SerializeField]
	private Transform _uiTokenParent; // 0x50
	[SerializeField]
	private TextMeshPro _infoText; // 0x58
	[SerializeField]
	private ProfileFrameView _frameView; // 0x60
	[SerializeField]
	private ProfileNameStyleView _nameStyleView; // 0x68
	[SerializeField]
	private SpriteRenderer _tokenNameFrame; // 0x70
	[SerializeField]
	private List<CollectionPopUpTitle> _popUpTitles; // 0x78
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x80
	private CollectionViewModel _viewModel; // 0x88
	private CollectionThemeSpriteLibrary _collectionThemeSpriteLibrary; // 0x90
	private const string complete_text_localization_term = "CollectionCompleteThemes";

	// Methods

	// RVA: 0x3A6FA80 Offset: 0x3A6FA80 VA: 0x3A6FA80 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A6FD10 Offset: 0x3A6FD10 VA: 0x3A6FD10
	private void CreateToken() { }

	// RVA: 0x3A70068 Offset: 0x3A70068 VA: 0x3A70068
	private void UpdatePlayerView() { }

	// RVA: 0x3A6FB28 Offset: 0x3A6FB28 VA: 0x3A6FB28
	private void InitializeTitle() { }

	// RVA: 0x3A701C4 Offset: 0x3A701C4 VA: 0x3A701C4 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A702A0 Offset: 0x3A702A0 VA: 0x3A702A0 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A70354 Offset: 0x3A70354 VA: 0x3A70354 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A7035C Offset: 0x3A7035C VA: 0x3A7035C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3A70364 Offset: 0x3A70364 VA: 0x3A70364
	private bool <CreateToken>b__18_0(ProfileTokenSprite token) { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI