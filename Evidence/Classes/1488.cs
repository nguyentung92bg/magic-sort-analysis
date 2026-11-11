public class LockView : AItemView // TypeDefIndex: 1488
{
	// Fields
	[SerializeField]
	private LockAnimationView _4SoloLockAnimationView; // 0x20
	[SerializeField]
	private LockAnimationView _4DoubleLockAnimationView; // 0x28
	[SerializeField]
	private LockAnimationView _5SoloLockAnimationView; // 0x30
	[SerializeField]
	private LockAnimationView _5DoubleLockAnimationView; // 0x38
	[SerializeField]
	private LockViewConfig _lockViewConfig; // 0x40
	[SerializeField]
	private Transform _lockTargetTransformForKey; // 0x48
	[SerializeField]
	private Transform _5lockTargetTransformForKey; // 0x50
	[SerializeField]
	private ParticleSystem _unlockParticle; // 0x58
	[SerializeField]
	private SortingGroup _sortingGroup; // 0x60
	[CompilerGenerated]
	private LockAnimationView <LockAnimationView>k__BackingField; // 0x68
	private Sequence _mainSequence; // 0x70

	// Properties
	public LockAnimationView LockAnimationView { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x248EF70 Offset: 0x248EF70 VA: 0x248EF70
	public LockAnimationView get_LockAnimationView() { }

	[CompilerGenerated]
	// RVA: 0x248EF78 Offset: 0x248EF78 VA: 0x248EF78
	private void set_LockAnimationView(LockAnimationView value) { }

	// RVA: 0x248EF80 Offset: 0x248EF80 VA: 0x248EF80 Slot: 5
	public override void Initialize() { }

	// RVA: 0x248EF84 Offset: 0x248EF84 VA: 0x248EF84 Slot: 6
	public override void Spawn() { }

	// RVA: 0x248F020 Offset: 0x248F020 VA: 0x248F020 Slot: 7
	public override void Recycle() { }

	// RVA: 0x248E958 Offset: 0x248E958 VA: 0x248E958
	public void Prepare(KeyLockType keyLockType, bool isDouble, int bottleHeight, float localPositionX) { }

	// RVA: 0x248F038 Offset: 0x248F038 VA: 0x248F038
	private void SetType(KeyLockType keyLockType, bool isDouble, int bottleHeight) { }

	// RVA: 0x248EBF0 Offset: 0x248EBF0 VA: 0x248EBF0
	public void PlayUnlockAnimation(float delay) { }

	// RVA: 0x248F26C Offset: 0x248F26C VA: 0x248F26C
	private void SetSorting(Sorting sorting) { }

	// RVA: 0x248F2B0 Offset: 0x248F2B0 VA: 0x248F2B0
	private void Unlock() { }

	// RVA: 0x248F2C0 Offset: 0x248F2C0 VA: 0x248F2C0
	private void PlayUnlockParticle() { }

	// RVA: 0x248F2DC Offset: 0x248F2DC VA: 0x248F2DC Slot: 8
	public override void Show() { }

	// RVA: 0x248F300 Offset: 0x248F300 VA: 0x248F300 Slot: 9
	public override void Hide() { }

	// RVA: 0x248EE24 Offset: 0x248EE24 VA: 0x248EE24
	public Vector3 GetTargetPositionForKey(int height) { }

	// RVA: 0x248F1DC Offset: 0x248F1DC VA: 0x248F1DC
	private void DeactivateAllViews() { }

	// RVA: 0x248F338 Offset: 0x248F338 VA: 0x248F338
	public void .ctor() { }
}

// Namespace: Modules.Contexts.GamePlay.BoardItems.Scripts.KeyAndLock.Lock
[CreateAssetMenu(fileName = "LockViewConfig", menuName = "Configs/LockViewConfig")]