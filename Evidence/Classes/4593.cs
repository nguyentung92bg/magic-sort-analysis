public class CollectionInfoPopUp : MonoBehaviour, IPopUp // TypeDefIndex: 4593
{
	// Fields
	[SerializeField]
	private StreakTournamentInfoPopupAnimationConfig _animationConfig; // 0x18
	[SerializeField]
	private CollectionThemeDatabase _collectionThemeDatabase; // 0x20
	[SerializeField]
	private List<Transform> _transforms; // 0x28
	[SerializeField]
	private Button _closeButton; // 0x30
	[SerializeField]
	private TextMeshPro _playerLevelText; // 0x38
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x40
	[SerializeField]
	private SpriteRenderer _tokenImage; // 0x48
	[SerializeField]
	private ProfileSpriteConfig _profileSpriteConfig; // 0x50
	[SerializeField]
	private ProfileFrameView _frameView; // 0x58
	[SerializeField]
	private ProfileNameStyleView _nameStyleView; // 0x60
	[SerializeField]
	private SpriteRenderer _step3CoinsRenderer; // 0x68
	[SerializeField]
	private List<CollectionPopUpTitle> _popUpTitles; // 0x70
	private CollectionThemeSpriteLibrary _collectionThemeSpriteLibrary; // 0x78
	private Sequence _sequence; // 0x80
	private CollectionService _service; // 0x88
	private TaskCompletionSource<bool> _popupDisplayFlow; // 0x90
	private string _collectionId; // 0x98

	// Methods

	// RVA: 0x3A67E50 Offset: 0x3A67E50 VA: 0x3A67E50 Slot: 4
	public void Show(PopUpArguments popUpArguments) { }

	// RVA: 0x3A67F38 Offset: 0x3A67F38 VA: 0x3A67F38
	private void UpdatePlayerView() { }

	// RVA: 0x3A68738 Offset: 0x3A68738 VA: 0x3A68738
	private void InitializeTitle() { }

	// RVA: 0x3A68380 Offset: 0x3A68380 VA: 0x3A68380
	private void PlayAnimationsWithInterval() { }

	// RVA: 0x3A689DC Offset: 0x3A689DC VA: 0x3A689DC
	private void SubscribeButton() { }

	// RVA: 0x3A68A68 Offset: 0x3A68A68 VA: 0x3A68A68
	private void UnsubscribeButton() { }

	// RVA: 0x3A68AF4 Offset: 0x3A68AF4 VA: 0x3A68AF4
	private void ClosePopup() { }

	// RVA: 0x3A68210 Offset: 0x3A68210 VA: 0x3A68210
	private void SetActiveAll(bool active) { }

	// RVA: 0x3A68B88 Offset: 0x3A68B88 VA: 0x3A68B88 Slot: 5
	public Task ShowAsync(PopUpArguments popUpArguments) { }

	// RVA: 0x3A68C54 Offset: 0x3A68C54 VA: 0x3A68C54 Slot: 6
	public Task Hide() { }

	// RVA: 0x3A68D08 Offset: 0x3A68D08 VA: 0x3A68D08 Slot: 7
	public GameObject GetGameObject() { }

	// RVA: 0x3A68D10 Offset: 0x3A68D10 VA: 0x3A68D10
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.Collection.Scripts.UI