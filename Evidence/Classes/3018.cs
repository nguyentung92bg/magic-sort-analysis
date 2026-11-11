public class PermanentLeaderboardElementView : BasicView // TypeDefIndex: 3018
{
	// Fields
	[SerializeField]
	private int _id; // 0x24
	[SerializeField]
	private UIElement _uiElement; // 0x28
	[SerializeField]
	private RankView _rankView; // 0x30
	[SerializeField]
	private LeaderboardElementNameView _nameView; // 0x38
	[SerializeField]
	private TextMeshPro _nameText; // 0x40
	[SerializeField]
	private TextMeshPro _teamText; // 0x48
	[SerializeField]
	private TextMeshPro _score; // 0x50
	[SerializeField]
	private TextMeshPro _myScore; // 0x58
	[SerializeField]
	private ProfileImageView _profileImageView; // 0x60
	[SerializeField]
	private List<GameObject> _userObjects; // 0x68
	[SerializeField]
	private List<GameObject> _otherObjects; // 0x70
	[SerializeField]
	private UserProfileView _userProfileView; // 0x78
	private string _publicId; // 0x80

	// Properties
	public override int Id { get; set; }
	public Vector3 Size { get; }

	// Methods

	// RVA: 0x2AEE844 Offset: 0x2AEE844 VA: 0x2AEE844 Slot: 5
	public override int get_Id() { }

	// RVA: 0x2AEE84C Offset: 0x2AEE84C VA: 0x2AEE84C Slot: 6
	public override void set_Id(int value) { }

	// RVA: 0x2AEE854 Offset: 0x2AEE854 VA: 0x2AEE854
	public Vector3 get_Size() { }

	// RVA: 0x2AEE87C Offset: 0x2AEE87C VA: 0x2AEE87C Slot: 7
	public override void Initialize() { }

	// RVA: 0x2AEE880 Offset: 0x2AEE880 VA: 0x2AEE880
	public void Awake() { }

	// RVA: 0x2AEE888 Offset: 0x2AEE888 VA: 0x2AEE888
	public void SetModel(PermanentLeaderboardPlayerViewModel model) { }

	// RVA: 0x2AEEA48 Offset: 0x2AEEA48 VA: 0x2AEEA48
	private void SetBackgrounds(bool isUser) { }

	// RVA: 0x2AEEA54 Offset: 0x2AEEA54 VA: 0x2AEEA54
	private void ApplyUserSprites() { }

	// RVA: 0x2AEEC98 Offset: 0x2AEEC98 VA: 0x2AEEC98
	private void ApplyCompetitorSprites() { }

	// RVA: 0x2AEEEDC Offset: 0x2AEEEDC VA: 0x2AEEEDC
	public void OnDestroy() { }

	// RVA: 0x2AEEEE8 Offset: 0x2AEEEE8 VA: 0x2AEEEE8 Slot: 8
	public override void Recycle() { }

	// RVA: 0x2AEEF48 Offset: 0x2AEEF48 VA: 0x2AEEF48
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.PermanentLeaderboard.Scripts.UI