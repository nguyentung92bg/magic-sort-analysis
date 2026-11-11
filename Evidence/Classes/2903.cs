public class UserProfileView : MonoBehaviour // TypeDefIndex: 2903
{
	// Fields
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x18
	[SerializeField]
	private TextMeshPro _nameText; // 0x20
	[SerializeField]
	private TextMeshPro _teamText; // 0x28
	[SerializeField]
	private SpriteRenderer _tokenSpriteRenderer; // 0x30
	[SerializeField]
	private float _nameTextTokenActiveWidth; // 0x38
	[SerializeField]
	private float _nameTextTokenDefaultWidth; // 0x3C
	[SerializeField]
	private float _nameTextYPositionInTeam; // 0x40
	[SerializeField]
	private ProfileFrameView _frameView; // 0x48
	[SerializeField]
	private ProfileNameStyleView _nameStyleView; // 0x50
	[SerializeField]
	private ShowUserProfileButton _showUserProfileButton; // 0x58
	private bool _isMe; // 0x60
	private string _publicId; // 0x68
	private IPlayerService _playerService; // 0x70
	private TeamsService _teamsService; // 0x78
	private ProfileSpriteService _profileSpriteService; // 0x80
	private bool _initialized; // 0x88

	// Methods

	// RVA: 0x2981064 Offset: 0x2981064 VA: 0x2981064
	public void Initialize(bool isMe, string userId, bool isClickable = True) { }

	// RVA: 0x2981380 Offset: 0x2981380 VA: 0x2981380
	public void Dispose() { }

	// RVA: 0x2981528 Offset: 0x2981528 VA: 0x2981528
	private void OnProfileInfoUpdated() { }

	// RVA: 0x2981608 Offset: 0x2981608 VA: 0x2981608
	private void OnUserTeamDataUpdated() { }

	// RVA: 0x298152C Offset: 0x298152C VA: 0x298152C
	private void UpdateView() { }

	// RVA: 0x298160C Offset: 0x298160C VA: 0x298160C
	public void SetProfileImage(string avatarId) { }

	// RVA: 0x2981644 Offset: 0x2981644 VA: 0x2981644
	public void SetUserName(string userName) { }

	// RVA: 0x2981720 Offset: 0x2981720 VA: 0x2981720
	public void SetTokenImage(string token) { }

	// RVA: 0x2981904 Offset: 0x2981904 VA: 0x2981904
	public void SetTeamName(string userTeamName) { }

	// RVA: 0x2981ABC Offset: 0x2981ABC VA: 0x2981ABC
	public void SetFrameView(string frameId) { }

	// RVA: 0x2981BEC Offset: 0x2981BEC VA: 0x2981BEC
	public void SetNameStyleView(string nameStyleId, string userName) { }

	// RVA: 0x29825B0 Offset: 0x29825B0 VA: 0x29825B0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Common.Scripts.LobbyEventController