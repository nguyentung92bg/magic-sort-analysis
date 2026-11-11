public class ProfileFrameSpriteSelectionFrame : MonoBehaviour // TypeDefIndex: 2937
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private ProfileFrameView _frameView; // 0x20
	[SerializeField]
	private SpriteRenderer _selectionFrameSpriteRenderer; // 0x28
	[SerializeField]
	private Transform _lock; // 0x30
	[SerializeField]
	private Transform _timer; // 0x38
	[CompilerGenerated]
	private ProfileFrameInfo <FrameInfo>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <IsLocked>k__BackingField; // 0x48
	public Action<ProfileFrameInfo> OnFrameSelected; // 0x50

	// Properties
	public ProfileFrameInfo FrameInfo { get; set; }
	public bool IsLocked { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x298A77C Offset: 0x298A77C VA: 0x298A77C
	public ProfileFrameInfo get_FrameInfo() { }

	[CompilerGenerated]
	// RVA: 0x298A784 Offset: 0x298A784 VA: 0x298A784
	private void set_FrameInfo(ProfileFrameInfo value) { }

	[CompilerGenerated]
	// RVA: 0x298A78C Offset: 0x298A78C VA: 0x298A78C
	public bool get_IsLocked() { }

	[CompilerGenerated]
	// RVA: 0x298A794 Offset: 0x298A794 VA: 0x298A794
	private void set_IsLocked(bool value) { }

	// RVA: 0x2989F80 Offset: 0x2989F80 VA: 0x2989F80
	public void Initialize(ProfileFrameInfo frameInfo, bool isLocked) { }

	// RVA: 0x298A7A0 Offset: 0x298A7A0 VA: 0x298A7A0
	private void Awake() { }

	// RVA: 0x298A82C Offset: 0x298A82C VA: 0x298A82C
	private void OnDestroy() { }

	// RVA: 0x298A8B8 Offset: 0x298A8B8 VA: 0x298A8B8
	private void OnFrameClicked() { }

	// RVA: 0x298A720 Offset: 0x298A720 VA: 0x298A720
	public void SetFrameActive(bool isActive) { }

	// RVA: 0x298A8D8 Offset: 0x298A8D8 VA: 0x298A8D8
	public void .ctor() { }
}

// Namespace: 
[Serializable]