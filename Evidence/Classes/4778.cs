public class BroomStreakBannerMainStep : MonoBehaviour, IBroomStreakStepView, IDisposable // TypeDefIndex: 4778
{
	// Fields
	[SerializeField]
	private BroomStreakBannerConfig _config; // 0x18
	[SerializeField]
	private SpriteRenderer _mainStepRenderer; // 0x20
	[SerializeField]
	private SpriteRenderer _chestSpriteRenderer; // 0x28
	[SerializeField]
	private SpriteRenderer _tickSpriteRenderer; // 0x30
	[SerializeField]
	private TextMeshPro _text; // 0x38
	[SerializeField]
	private GameObject _checkPointNotReachedGameObject; // 0x40
	[SerializeField]
	private GameObject _checkPointReachedGameObject; // 0x48
	private Sequence _stepUnlockSequence; // 0x50
	private bool _isCheckPoint; // 0x58
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x59

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	// RVA: 0x3FC1578 Offset: 0x3FC1578 VA: 0x3FC1578 Slot: 4
	public void Initialize(BroomStreakStepViewModel viewModel) { }

	// RVA: 0x3FC1660 Offset: 0x3FC1660 VA: 0x3FC1660 Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x3FC16A8 Offset: 0x3FC16A8 VA: 0x3FC16A8
	public void SetChestSprite(Sprite sprite) { }

	// RVA: 0x3FC16C4 Offset: 0x3FC16C4 VA: 0x3FC16C4 Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x3FC16E4 Offset: 0x3FC16E4 VA: 0x3FC16E4 Slot: 7
	public Vector3 GetWorldPosition() { }

	// RVA: 0x3FC1704 Offset: 0x3FC1704 VA: 0x3FC1704
	public void SetText(string text) { }

	[CompilerGenerated]
	// RVA: 0x3FC1728 Offset: 0x3FC1728 VA: 0x3FC1728 Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x3FC1730 Offset: 0x3FC1730 VA: 0x3FC1730 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x3FC173C Offset: 0x3FC173C VA: 0x3FC173C Slot: 10
	public void Unlock() { }

	// RVA: 0x3FC17DC Offset: 0x3FC17DC VA: 0x3FC17DC
	public void UnlockWithAnimation(ParticleSystem particle) { }

	// RVA: 0x3FC1B30 Offset: 0x3FC1B30 VA: 0x3FC1B30 Slot: 11
	public void Lock() { }

	// RVA: 0x3FC1B84 Offset: 0x3FC1B84 VA: 0x3FC1B84 Slot: 12
	public void Dispose() { }

	// RVA: 0x3FC1C18 Offset: 0x3FC1C18 VA: 0x3FC1C18
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FC1C20 Offset: 0x3FC1C20 VA: 0x3FC1C20
	private void <UnlockWithAnimation>b__20_0() { }

	[CompilerGenerated]
	// RVA: 0x3FC1CAC Offset: 0x3FC1CAC VA: 0x3FC1CAC
	private void <UnlockWithAnimation>b__20_1() { }
}

// Namespace: 
[CompilerGenerated]
[Serializable]