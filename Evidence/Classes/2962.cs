public class ProfileTokenSpriteSelectionFrame : MonoBehaviour // TypeDefIndex: 2962
{
	// Fields
	[SerializeField]
	private Button _button; // 0x18
	[SerializeField]
	private SpriteRenderer _spriteRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer _frameSpriteRenderer; // 0x28
	[SerializeField]
	private Transform _lock; // 0x30
	[SerializeField]
	private Color _lockColor; // 0x38
	[CompilerGenerated]
	private ProfileTokenSprite <TokenSprite>k__BackingField; // 0x48
	[CompilerGenerated]
	private string <Id>k__BackingField; // 0x50
	[CompilerGenerated]
	private bool <IsLocked>k__BackingField; // 0x58
	public Action<string> OnFrameSelected; // 0x60

	// Properties
	public ProfileTokenSprite TokenSprite { get; set; }
	public string Id { get; set; }
	public bool IsLocked { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2ADE550 Offset: 0x2ADE550 VA: 0x2ADE550
	public ProfileTokenSprite get_TokenSprite() { }

	[CompilerGenerated]
	// RVA: 0x2ADE558 Offset: 0x2ADE558 VA: 0x2ADE558
	private void set_TokenSprite(ProfileTokenSprite value) { }

	[CompilerGenerated]
	// RVA: 0x2ADE560 Offset: 0x2ADE560 VA: 0x2ADE560
	public string get_Id() { }

	[CompilerGenerated]
	// RVA: 0x2ADE568 Offset: 0x2ADE568 VA: 0x2ADE568
	private void set_Id(string value) { }

	[CompilerGenerated]
	// RVA: 0x2ADE570 Offset: 0x2ADE570 VA: 0x2ADE570
	public bool get_IsLocked() { }

	[CompilerGenerated]
	// RVA: 0x2ADE578 Offset: 0x2ADE578 VA: 0x2ADE578
	private void set_IsLocked(bool value) { }

	// RVA: 0x2ADE584 Offset: 0x2ADE584 VA: 0x2ADE584
	public void Initialize(ProfileTokenSprite profileTokenSprite, bool isLocked) { }

	// RVA: 0x2ADE6A8 Offset: 0x2ADE6A8 VA: 0x2ADE6A8
	private void Awake() { }

	// RVA: 0x2ADE734 Offset: 0x2ADE734 VA: 0x2ADE734
	private void OnDestroy() { }

	// RVA: 0x2ADE7C0 Offset: 0x2ADE7C0 VA: 0x2ADE7C0
	private void OnFrameClicked() { }

	// RVA: 0x2ADE678 Offset: 0x2ADE678 VA: 0x2ADE678
	public void SetFrameActive(bool isActive) { }

	// RVA: 0x2ADE7E0 Offset: 0x2ADE7E0 VA: 0x2ADE7E0
	public void .ctor() { }
}

// Namespace: 
[CompilerGenerated]