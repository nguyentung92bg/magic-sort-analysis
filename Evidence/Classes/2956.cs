public class ProfileSpriteSelectionContainer : MonoBehaviour // TypeDefIndex: 2956
{
	// Fields
	[SerializeField]
	private ProfileSpriteSelectionFrame facebookSprite; // 0x18
	[SerializeField]
	private List<ProfileSpriteSelectionFrame> otherSprites; // 0x20
	[CompilerGenerated]
	private string <ActiveSpriteId>k__BackingField; // 0x28
	[CompilerGenerated]
	private Action<string> OnProfileSpriteSelected; // 0x30

	// Properties
	public string ActiveSpriteId { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x298D204 Offset: 0x298D204 VA: 0x298D204
	public string get_ActiveSpriteId() { }

	[CompilerGenerated]
	// RVA: 0x298D20C Offset: 0x298D20C VA: 0x298D20C
	public void set_ActiveSpriteId(string value) { }

	[CompilerGenerated]
	// RVA: 0x2988454 Offset: 0x2988454 VA: 0x2988454
	public void add_OnProfileSpriteSelected(Action<string> value) { }

	[CompilerGenerated]
	// RVA: 0x2988A64 Offset: 0x2988A64 VA: 0x2988A64
	public void remove_OnProfileSpriteSelected(Action<string> value) { }

	// RVA: 0x298D214 Offset: 0x298D214 VA: 0x298D214
	private void Awake() { }

	// RVA: 0x298D3EC Offset: 0x298D3EC VA: 0x298D3EC
	private void OnDestroy() { }

	// RVA: 0x298D5C4 Offset: 0x298D5C4 VA: 0x298D5C4
	private void OnFrameSelected(string id) { }

	[AsyncStateMachine(typeof(ProfileSpriteSelectionContainer.<SelectExceptFacebook>d__12))]
	// RVA: 0x298D7B8 Offset: 0x298D7B8 VA: 0x298D7B8
	private void SelectExceptFacebook(string id) { }

	// RVA: 0x298D708 Offset: 0x298D708 VA: 0x298D708
	private void SelectWithNoRule(string id) { }

	// RVA: 0x298D88C Offset: 0x298D88C VA: 0x298D88C
	private static void UpdateSelection(string id, ProfileSpriteSelectionFrame sprite) { }

	// RVA: 0x2987824 Offset: 0x2987824 VA: 0x2987824
	public void Initialize(List<ProfileSprite> profileSprites, ProfileSprite faceBookProfileSprite, string activeSpriteId, bool selectFrame = True) { }

	// RVA: 0x298D8D0 Offset: 0x298D8D0 VA: 0x298D8D0
	private bool ValidateSpriteSizes(List<ProfileSprite> profileSprites) { }

	// RVA: 0x298D938 Offset: 0x298D938 VA: 0x298D938
	private void InitializeSprites(List<ProfileSprite> profileSprites, ProfileSprite faceBookProfileSprite, bool isSignedInToFacebook) { }

	// RVA: 0x298DA50 Offset: 0x298DA50 VA: 0x298DA50
	private void LoadFacebookProfilePhoto() { }

	// RVA: 0x298DAEC Offset: 0x298DAEC VA: 0x298DAEC
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts