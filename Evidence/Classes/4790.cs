public class BroomStreakMainStepView : MonoBehaviour, IBroomStreakStepView, IDisposable // TypeDefIndex: 4790
{
	// Fields
	[SerializeField]
	private TextMeshPro _stepText; // 0x18
	[SerializeField]
	private ParticleSystem _unlockParticle; // 0x20
	[SerializeField]
	private SpriteRenderer _mainStepIcon; // 0x28
	[SerializeField]
	public ChestView _chestView; // 0x30
	[SerializeField]
	private BroomStreakAnimationsConfig _animationsConfig; // 0x38
	[SerializeField]
	private SpriteRenderer _platformRenderer; // 0x40
	[SerializeField]
	private Animator _checkPointAnimator; // 0x48
	[SerializeField]
	private GameObject _checkPointGameObject; // 0x50
	[SerializeField]
	private Transform _balconyLeftPivot; // 0x58
	private Sequence _unlockSequence; // 0x60
	private bool _isCheckPoint; // 0x68
	private bool _isRewardClaimedAlready; // 0x69
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x6A

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x3FC52FC Offset: 0x3FC52FC VA: 0x3FC52FC Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x3FC5304 Offset: 0x3FC5304 VA: 0x3FC5304 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x3FC5310 Offset: 0x3FC5310 VA: 0x3FC5310 Slot: 4
	public void Initialize(BroomStreakStepViewModel viewModel) { }

	// RVA: 0x3FC5620 Offset: 0x3FC5620 VA: 0x3FC5620 Slot: 10
	public void Unlock() { }

	// RVA: 0x3FC572C Offset: 0x3FC572C VA: 0x3FC572C
	public Tween UnlockWithAnimation() { }

	// RVA: 0x3FC5AC4 Offset: 0x3FC5AC4 VA: 0x3FC5AC4 Slot: 11
	public void Lock() { }

	// RVA: 0x3FC5B7C Offset: 0x3FC5B7C VA: 0x3FC5B7C Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x3FC5BC4 Offset: 0x3FC5BC4 VA: 0x3FC5BC4 Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x3FC5BE4 Offset: 0x3FC5BE4 VA: 0x3FC5BE4 Slot: 7
	public Vector3 GetWorldPosition() { }

	// RVA: 0x3FC5C04 Offset: 0x3FC5C04 VA: 0x3FC5C04
	public Sequence RevealRewards() { }

	// RVA: 0x3FC5CB4 Offset: 0x3FC5CB4 VA: 0x3FC5CB4
	public void PlayCheckPointUnlockAnimation() { }

	// RVA: 0x3FC557C Offset: 0x3FC557C VA: 0x3FC557C
	public void SetCheckPointUnlocked() { }

	// RVA: 0x3FC5D58 Offset: 0x3FC5D58 VA: 0x3FC5D58
	public void OpenToolbar() { }

	// RVA: 0x3FC5DDC Offset: 0x3FC5DDC VA: 0x3FC5DDC Slot: 12
	public void Dispose() { }

	// RVA: 0x3FC5E74 Offset: 0x3FC5E74 VA: 0x3FC5E74
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x3FC5E7C Offset: 0x3FC5E7C VA: 0x3FC5E7C
	private void <UnlockWithAnimation>b__18_0() { }

	[CompilerGenerated]
	// RVA: 0x3FC5EB8 Offset: 0x3FC5EB8 VA: 0x3FC5EB8
	private void <UnlockWithAnimation>b__18_1() { }
}

// Namespace: 
[CompilerGenerated]