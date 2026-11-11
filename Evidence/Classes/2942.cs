public class ProfileNameStyleSelectionFrame : MonoBehaviour // TypeDefIndex: 2942
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private ProfileNameStyleView _nameStyleView; // 0x20
	[SerializeField]
	private SpriteRenderer _selectionFrameSpriteRenderer; // 0x28
	[SerializeField]
	private Transform _lock; // 0x30
	[SerializeField]
	private Transform _timer; // 0x38
	[CompilerGenerated]
	private ProfileNameStyleInfo <NameStyleInfo>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <IsLocked>k__BackingField; // 0x48
	public Action<ProfileNameStyleInfo> OnFrameSelected; // 0x50

	// Properties
	public ProfileNameStyleInfo NameStyleInfo { get; set; }
	public bool IsLocked { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x298B6FC Offset: 0x298B6FC VA: 0x298B6FC
	public ProfileNameStyleInfo get_NameStyleInfo() { }

	[CompilerGenerated]
	// RVA: 0x298B704 Offset: 0x298B704 VA: 0x298B704
	private void set_NameStyleInfo(ProfileNameStyleInfo value) { }

	[CompilerGenerated]
	// RVA: 0x298B70C Offset: 0x298B70C VA: 0x298B70C
	public bool get_IsLocked() { }

	[CompilerGenerated]
	// RVA: 0x298B714 Offset: 0x298B714 VA: 0x298B714
	private void set_IsLocked(bool value) { }

	// RVA: 0x298AEF8 Offset: 0x298AEF8 VA: 0x298AEF8
	public void Initialize(ProfileNameStyleInfo nameStyleInfo, bool isLocked, string playerName) { }

	// RVA: 0x298B720 Offset: 0x298B720 VA: 0x298B720
	private void Awake() { }

	// RVA: 0x298B7AC Offset: 0x298B7AC VA: 0x298B7AC
	private void OnDestroy() { }

	// RVA: 0x298B838 Offset: 0x298B838 VA: 0x298B838
	private void OnFrameClicked() { }

	// RVA: 0x298B6A0 Offset: 0x298B6A0 VA: 0x298B6A0
	public void SetFrameActive(bool isActive) { }

	// RVA: 0x298B858 Offset: 0x298B858 VA: 0x298B858
	public void .ctor() { }
}

// Namespace: 
[Serializable]