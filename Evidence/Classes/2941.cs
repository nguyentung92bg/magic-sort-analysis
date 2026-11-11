public class ProfileNameStyleSelectionContainer : MonoBehaviour // TypeDefIndex: 2941
{
	// Fields
	[SerializeField]
	private List<ProfileNameStyleSelectionFrame> _nameStyles; // 0x18
	[CompilerGenerated]
	private ProfileNameStyleInfo <ActiveNameStyleInfo>k__BackingField; // 0x20
	private List<string> _allNameStyles; // 0x28
	private List<string> _playerNameStyles; // 0x30

	// Properties
	public ProfileNameStyleInfo ActiveNameStyleInfo { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x298AC48 Offset: 0x298AC48 VA: 0x298AC48
	public ProfileNameStyleInfo get_ActiveNameStyleInfo() { }

	[CompilerGenerated]
	// RVA: 0x298AC50 Offset: 0x298AC50 VA: 0x298AC50
	private void set_ActiveNameStyleInfo(ProfileNameStyleInfo value) { }

	// RVA: 0x298AC58 Offset: 0x298AC58 VA: 0x298AC58
	private void Awake() { }

	// RVA: 0x298ADA8 Offset: 0x298ADA8 VA: 0x298ADA8
	private void OnDestroy() { }

	// RVA: 0x2987E50 Offset: 0x2987E50 VA: 0x2987E50
	public void Initialize(List<string> allNameStyles, ProfileNameStyleInfo activeNameStyleInfo) { }

	// RVA: 0x298AFD0 Offset: 0x298AFD0 VA: 0x298AFD0
	private List<ProfileNameStyleInfo> GetPlayerNameStyles() { }

	// RVA: 0x298B330 Offset: 0x298B330 VA: 0x298B330
	private void DisableEmptyNameStyles(int nameStyleCount) { }

	// RVA: 0x298B524 Offset: 0x298B524 VA: 0x298B524
	private void OnFrameSelected(ProfileNameStyleInfo info) { }

	// RVA: 0x298B3CC Offset: 0x298B3CC VA: 0x298B3CC
	private void UpdateFrames() { }

	// RVA: 0x298B6D0 Offset: 0x298B6D0 VA: 0x298B6D0
	public void .ctor() { }
}

// Namespace: Modules.Contexts.Home.UI.Profile.Scripts