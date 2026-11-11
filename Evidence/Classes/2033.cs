public class TowerMainStepView : MonoBehaviour, ITowerStepView, IDisposable // TypeDefIndex: 2033
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
	private TowerAnimationsConfig _animationsConfig; // 0x38
	private Sequence _unlockSequence; // 0x40
	[CompilerGenerated]
	private bool <IsUnlocked>k__BackingField; // 0x48

	// Properties
	public bool IsUnlocked { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x32E5C70 Offset: 0x32E5C70 VA: 0x32E5C70 Slot: 8
	public bool get_IsUnlocked() { }

	[CompilerGenerated]
	// RVA: 0x32E5C78 Offset: 0x32E5C78 VA: 0x32E5C78 Slot: 9
	public void set_IsUnlocked(bool value) { }

	// RVA: 0x32E5C84 Offset: 0x32E5C84 VA: 0x32E5C84 Slot: 4
	public void Initialize(TowerWinStreakStepViewModel viewModel) { }

	// RVA: 0x32E5D6C Offset: 0x32E5D6C VA: 0x32E5D6C Slot: 10
	public void Unlock() { }

	// RVA: 0x32E5E28 Offset: 0x32E5E28 VA: 0x32E5E28
	public Tween UnlockWithAnimation() { }

	// RVA: 0x32E6118 Offset: 0x32E6118 VA: 0x32E6118 Slot: 11
	public void Lock() { }

	// RVA: 0x32E61BC Offset: 0x32E61BC VA: 0x32E61BC Slot: 5
	public void SetLocalPosition(Vector3 position) { }

	// RVA: 0x32E6204 Offset: 0x32E6204 VA: 0x32E6204 Slot: 6
	public Vector3 GetLocalPosition() { }

	// RVA: 0x32E6224 Offset: 0x32E6224 VA: 0x32E6224 Slot: 7
	public Vector3 GetWorldPosition() { }

	// RVA: 0x32E6244 Offset: 0x32E6244 VA: 0x32E6244
	public Sequence RevealRewards() { }

	// RVA: 0x32E62F4 Offset: 0x32E62F4 VA: 0x32E62F4
	public void OpenToolbar() { }

	// RVA: 0x32E6378 Offset: 0x32E6378 VA: 0x32E6378 Slot: 12
	public void Dispose() { }

	// RVA: 0x32E6410 Offset: 0x32E6410 VA: 0x32E6410
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x32E6418 Offset: 0x32E6418 VA: 0x32E6418
	private void <UnlockWithAnimation>b__12_0() { }

	[CompilerGenerated]
	// RVA: 0x32E6454 Offset: 0x32E6454 VA: 0x32E6454
	private void <UnlockWithAnimation>b__12_1() { }

	[CompilerGenerated]
	// RVA: 0x32E6490 Offset: 0x32E6490 VA: 0x32E6490
	private void <UnlockWithAnimation>b__12_2() { }
}

// Namespace: Modules.Contexts.Home.TowerWinStreak.Scripts.UI