public class ProfileFrameSelectionContainer : MonoBehaviour // TypeDefIndex: 2936
{
	// Fields
	[SerializeField]
	private List<ProfileFrameSpriteSelectionFrame> _frames; // 0x18
	[CompilerGenerated]
	private ProfileFrameInfo <ActiveFrameInfo>k__BackingField; // 0x20
	private List<string> _allFrameIds; // 0x28
	private List<string> _playerFrameIds; // 0x30

	// Properties
	public ProfileFrameInfo ActiveFrameInfo { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2989CD0 Offset: 0x2989CD0 VA: 0x2989CD0
	public ProfileFrameInfo get_ActiveFrameInfo() { }

	[CompilerGenerated]
	// RVA: 0x2989CD8 Offset: 0x2989CD8 VA: 0x2989CD8
	private void set_ActiveFrameInfo(ProfileFrameInfo value) { }

	// RVA: 0x2989CE0 Offset: 0x2989CE0 VA: 0x2989CE0
	private void Awake() { }

	// RVA: 0x2989E30 Offset: 0x2989E30 VA: 0x2989E30
	private void OnDestroy() { }

	// RVA: 0x29879E4 Offset: 0x29879E4 VA: 0x29879E4
	public void Initialize(List<string> allFrameIds, ProfileFrameInfo activeFrameInfo) { }

	// RVA: 0x298A050 Offset: 0x298A050 VA: 0x298A050
	private List<ProfileFrameInfo> GetPlayerFrames() { }

	// RVA: 0x298A3B0 Offset: 0x298A3B0 VA: 0x298A3B0
	private void DisableEmptyFrames(int frameCount) { }

	// RVA: 0x298A5A4 Offset: 0x298A5A4 VA: 0x298A5A4
	private void OnFrameSelected(ProfileFrameInfo info) { }

	// RVA: 0x298A44C Offset: 0x298A44C VA: 0x298A44C
	private void UpdateFrames() { }

	// RVA: 0x298A750 Offset: 0x298A750 VA: 0x298A750
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts